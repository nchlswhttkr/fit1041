# Week 9

This week was spent working on soldering and trying to run basic programs off of the audio shield.

Being new to soldering, I was fairly slow at first, but managed to have all the components connected after the first couple of sessions. Unfortunately, I set myself back a few hours when I soldered the op-amp (operational amplifier) backwards. Thanks to the help of the lab staff I was able to correct this and by Friday the board was ready.

Next came the audio data, which would be provided using a microSD card.

This was done by formatting the card to a FAT16 partition, using the official formatter, located [here](https://www.sdcard.org/downloads/formatter_4/).

After this, audio can be played by using Audacity to create a WAV file, and lowering the quality to a 16 bitrate, located [here](http://www.audacityteam.org/download/).

Using an microSD-SD adapter, I was then able to connect the Arduino board to the shield and begin run the sample code provided for testing. Unfortunately the SD card could not be read by the board, so this will need further work in the coming weeks.
