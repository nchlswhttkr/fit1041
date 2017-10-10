// Authored By: Nicholas Whittaker
// FIT1041: Research Project 1
// Tangible Interfaces for the Vision Impaired

// WAVE SHIELD LIBRARY
// https://github.com/adafruit/WaveHC
// Code for reading and playing sound from the chip has been copied and adapted from the
// example files, as well as from the tutorials on Adafruit.com
// https://learn.adafruit.com/adafruit-wave-shield-audio-shield-for-arduino

// Uses a lot of RAM, so you should be using an Arduino with at least an ATmega328 chip
// This project was built using an Arduino Uno

#include <WaveHC.h>
#include <WaveUtil.h>

SdReader card;    // This object holds the information for the card
FatVolume vol;    // This holds the information for the partition on the card
FatReader root;   // This holds the information for the filesystem on the card
FatReader f;      // This holds the information for the file we're playing
WaveHC wave;      // This is the only wave (audio) object, since we will only play one at a time

uint8_t dirLevel; // indent level for file/dir names    (for prettyprinting)
dir_t dirBuf;     // buffer for directory reads


// CONFIG
int controlPIN[3] { 9, 8, 7 };      // S0, S1, S2
int readPIN = A0;
int connectedPoints = 2;
int setOnOff[2]{ LOW, HIGH };
int triggerThreshold = 450;
char *songs[2] { "TRACK001.WAV", "TRACK002.WAV" };

// function definitions
void error(String msg);
bool readMultiplexer(int calibrationPINS[3]);
void playcomplete(char *name);
void playfile(char *name);

void setup() {

  // GENERAL SETUP
  Serial.begin(9600);
  Serial.println("begin");

  // MULTIPLEXER SETUP
  // set control pins to ouput mode
  for (int pin = 0; pin < 3; pin++) {
    pinMode(controlPIN[pin], OUTPUT);
  }
  pinMode(readPIN, INPUT);

  // AUDIO SHIELD SETUP
  putstring_nl("\nWave test!");  // say we woke up!
  putstring("Free RAM: ");       // This can help with debugging, running out of RAM is bad
  Serial.println(FreeRam());
  //  if (!card.init(true)) { //play with 4 MHz spi if 8MHz isn't working for you
  if (!card.init()) {         //play with 8 MHz spi (default faster!)  
    error("Card init. failed!");  // Something went wrong, lets print out why
  }
  // enable optimize read - some cards may timeout. Disable if you're having problems
  card.partialBlockRead(true);
  // Now we will look for a FAT partition!
  uint8_t part;
  for (part = 0; part < 5; part++) {   // we have up to 5 slots to look in
    if (vol.init(card, part)) 
      break;                           // we found one, lets bail
  }
  if (part == 5) {                     // if we ended up not finding one  :(
    error("No valid FAT partition!");  // Something went wrong, lets print out why
  }
  // Lets tell the user about what we found
  putstring("Using partition ");
  Serial.print(part, DEC);
  putstring(", type is FAT");
  Serial.println(vol.fatType(), DEC);     // FAT16 or FAT32?
  // Try to open the root directory
  if (!root.openRoot(vol)) {
    error("Can't open root dir!");      // Something went wrong,
  }
  // Whew! We got past the tough parts.
  putstring_nl("Files found (* = fragmented):");
  // Print out all of the files in all the directories.
  root.ls(LS_R | LS_FLAG_FRAGMENTED);
}

void loop() {
  
  // calibrate the multiplexer pins and check the touchpoint
  int calibrationPINS[3] {};
  for (int point = 0; point < connectedPoints; point++) {
    int val = point;
    for (int i = 0; i < 3; i++) {
      calibrationPINS[i] = setOnOff[val % 2];
      val /= 2;
    }

    // read the touch point and trigger if needed
    bool trigger = readMultiplexer(calibrationPINS);
    if (trigger) {
      Serial.println("activated!");
    }
  }

  // wait and reread the touch points
  delay(1000);
  Serial.println();
}

void error(String msg) {
  // stop the Arduino if there is an error during file reading
  Serial.println(msg);
  while(1);
}

bool readMultiplexer(int calibrationPINS[3]) {

  // set the calibration pins
  Serial.print("Reading ");
  for (int i = 0; i < 3; i++) {
    Serial.print(calibrationPINS[i]);
    digitalWrite(calibrationPINS[i], calibrationPINS[i]);
  }

  // check whether the pressure at the chosen point surpasses the threshold
  int pressure = analogRead(readPIN);
  Serial.println(pressure);
  if (pressure > triggerThreshold) { return true; }
  else { return false; }
}


void playcomplete(char *name) {
  // plays a file from beginning to end
  // call our helper to find and play this name
  playfile(name);
  while (wave.isplaying) {
  // do nothing while its playing
  }
}

void playfile(char *name) {

  // check for a currently playing file and interrupt it
  if (wave.isplaying) {
    wave.stop();
  }
  
  // look in the root directory and open the file
  if (!f.open(root, name)) {
    putstring("Couldn't open file "); Serial.print(name); return;
  }
  // OK read the file and turn it into a wave object
  if (!wave.create(f)) {
    putstring_nl("Not a valid WAV"); return;
  }
  
  // begin playing
  wave.play();
}
