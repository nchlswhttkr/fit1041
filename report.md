# Tangible Interfaces For The Vision Impaired

### Nicholas Whittaker
### FIT1041: Research Project
### Tangible Interfaces for the Vision Impaired
### Undertaken in partnership with Monash SensiLab and Monash University



## Context

<!-- IMAGE OF A MAP PRINTED WITH SWELL PAPER -->
<!-- IMAGE OF SCULPTURE / LARGE CHURCH  -->

## Aims / Goals

Seeing as the final aim of this project should be to produce a functioning prototype, the design process should be well documented so that it can be replicated in future. In particular, any code for the Arduino should feature clear, understandable documentation.

Aside from producing a prototype, there should also be justification for why certain approaches were taken. With components, it should be clear to understand why those certain parts were chosen.

The prototype itself should provide additional context through having the user perform a simple interaction while handling a model or object, and gain additional context about the object through feedback, whether haptic* or auditory.

*Ultimately, only auditory feedback was investigated.



## Research / Approach

The following timeline was roughly followed for this project

#### Investigate / Experimenting
Experiment with the Arduino and investigate the different ways than an Arduino can detect and respond to input.

#### Design / Building

#### Build

#### Demonstrate / Evaluate



## Design Choices

In current practice, there are a number of ways to makes objects more accessible via touch.

This can include purely physical approaches, such as

##### Braille Stickers
Fairly easy to print and affix to objects, braille stickers act as labels. While they are cheap and widely available, they undermine the surface of an object by adding small bumps. Given their need to be small, their accompanying text must also be short, no longer than two short words. This is quite a severe limitation, and does not provide the possibility of communicating more than a basic title or very short description.

<!-- IMAGE OF BRAILLE STICKERS -->

##### Textiles/Patterns
Using a high-quality printer, different patterns can be printed onto a map. For example, thin criss-crosses, thick diagonal lines or polka dot patterns can signify different buildings on a flat map, or rooms in a house. This is useful because it does not interrupt the overal shape of an object, and makes it easy to divide a terrain or a 3D spaces into separate areas. However, it also requires that each of these sections have a distinct pattern so they can be discerned by touch, as well needing to be printed with a high-quality printer that can accurately reproduce these designs while still keeping the surface 'flat', which tend to be expensive and harder to access by the general community.

<!-- IMAGE OF VISION AUSTRALIA CENTRE, LASER CUT -->

##### Materials
With a wider array of plastics for 3D printing, more interactive objects can be made. The prime example of this is a model of a human heart. While with a harder plastic, a person with low vision might only be able to discern a basic shape, using a softer plastic would allow them to 'feel' it beat, and squeeze it like a muscle.

<!-- IMAGE OF HEART -->

Seeing as the primary focus of this prototype was to produce something that outputs audio, there were several methods to consider investigating, such as

##### Capacitive Touch Points

By using large conductive points, actions can be triggered through human contact interrupting a circuit. In models, the can be put into use by placing copper plates on the top of key points and threading wiring through buildings or objects. However, the functionality is hampered by the fact even a light touch can activate it. Momentary contact with any point will interrupt the circuit and trigger a response.

This can be circumvented by requring a user to 'double-tap' in quick succession or hold their finger on a point for several seconds, but while this avoids the shortcomings of capacitive touch, it introduces further unecessary complexity to user interactions and places greater dependency on them. These models may be more accessible, but at the cost of user's experiences.

While these touch points can be incorporated smoothly into objects, the way in which they can be triggered by idle brushes of a user's hand prevents them from being of benefit to those with low vision, who rely on touch and hearing alone to gain an understanding of an object. Although this limitation can be overcome, it only steepens the difficulty slope for those low vision users by adding another level of complexity for them to deal with.

<!-- IMAGE OF OLDER PROTOTYPE OF CAULFIELD CAMPUS -->

##### Buttons

Buttons were another consideration, particularly because they have two clear binary states (pressed/unpressed). This makes it easy to set off actions, such as audio, when a button is pressed. It is also useful as it avoids the general uncertainty of when a button is pressed, as long as it has sufficient resistance to require a force press to activate.

However, they are also rather oversized and would just out of an object they were applied to. Without significant consideration during the design stage to allow them to be built in. Even then, the buttons need to be connected to a breadboard or similar board to run wires through, making the creation of suitable models a time-consuming operation, needing to be addressed on a case-by-case basis.

<!-- IMAGE OF BUTTON FROM ARDUINO STARTER KIT -->

##### RFID Tags

With a special Arduino components, RFID tags can be read by an Arduino. While useful, its disadvantages outweigh its benefits. To operate, a unit to scan the tags would need to carried around. It would have to contain the Arduino to handle logic, the RFID reader itself, a shield to handle audio output and a component to play emit audio, though headphones could suffice. Even then, the unit itself would be bulky and inconvenient to carry around, acting as a detriment. Since different tags, each with different sound files, would need to be used, the Arduino would need to be reprogrammed with each success tag and audio file addition, as it cannot rely on an external entity, such as a server, to handle this data.

<!-- IMAGE OF RFID CARDS AND READER -->

##### Photoresistors

A temporary consideration. They can be used to accurately detects changes in light levels, like a light tripwire. They are far too easy to activate unintentionally though, and also require a breadboard to run through the Arduino.

<!-- IMAGE OF PHOTORESISTOR -->

##### Force Sensitive Resistors

As greater pressure is applied, the resistance through these components increases, which can be used to trigger sounds in a similar manner to capacitive touch points. Given their size and cost, they cannot greatly discern differences in the force applied to them, but can differentiate between, a heavy, medium or light press, which is sufficient for acting as a trigger. Their small, thin size means they can be placed on a flat surface with a small amount of adhesive.

<!-- IMAGE OF FSR -->



## Prototype Creation

The creation of the prototype follows 4 main stages

#### Ordering Components (FSRs)

A copy of the prototype specifications passed onto SensiLab for ordering can be found [here](https://drive.google.com/file/d/0B-P4-RA44wmtZ0tCeFZkeHNoNFE/view)

#### Soldering Components

This was a slow and careful process. While building the multiplexer required only header pins (long pins designed to plug into an Arduino/breadboard) be connected, soldering the Wave shield required the steps outlined in [Adafruit's guide](https://drive.google.com/file/d/0B-P4-RA44wmtZ0tCeFZkeHNoNFE/view) be followed precisely.

I did admittedly make errors while soldering, but fortunately the staff of SensiLab were able to correct a major error (soldering the operational amplifier backwards), and once all the solders were corrected, the audio shield was up and running.

#### Program Logic

A full copy of the code used for the Arduino can be found [here](https://github.com/NickelOz/fit1041/blob/master/touch_map/touch_map.ino)

The key thing about designing this code was raising config variables up to a global state, to make quick adjustments easy to apply. (Sleep interval, filename, pins used for I/O)

#### Construction

Given the need to present the functioning prototype, I constructed a base to mount a map and Arduino on.

I cut small slits through the bottom of a sample map to fit the FSRs through. Once held town with some plain tape, the FSRs were able to lie smooth with the floor of the map, leaving only a slightly raised area.

For clarity and visual appeal, I performed some rewiring and taped the wires down the base.



## Evaluation

### POSITIVE

 - Compared to all other methods investigated, the FSRs were the most successful, being able to incorporate smoothly into an object and only be triggered when intended.
 - In terms of build requirements, the prototype can be easily replicated with several FSRs, an Arduino, an audio shield and sufficient wiring. All of these components are steadily becoming more widely available and affordable, meaning that in future building a functioning map similar to the one created over the course of this project will be much more viable to achieve.
 <!-- DISCUSS HOW FURTHER PROTOTYPES COULD BE DEVELOP / PATHS FOR FUTURE ITERATION -->

### NEGATIVE

It should be noted that there were issues with the following areas, however none posed too major an issue to impact the functionality of the interactive map.
 - Short legs on the FSRs made it hard to keep the continually wired into the Arduino.
 - The wave shield occupies a lot of a pins, and only leaves 4 pins for IO, hence the need to a multiplexer to poll each touch point
 - Because some wires for the shield needed to continually readjusted and changed around, they could not be soldered in. This meant that it was incredibly easy to knock them out of place, which even happened during a live demonstration.
 - Audio files recorded at different sound levels can be very loud or very soft. Additionally, they need to be formated into 16bit WAV files with a frequency response set to 22050Hz



## Reflection // Difficulties

Unforseen problems with building the audio shield, resulting in the need to resolder, caused quite a significant time impact to the project timeline. Overall, it would have been beneficial to have ordered components roughly a week earlier, to allow for these setbacks and to prevent them from cutting into the prototype build time.

Future avenues to investigate could include combining the FSRs with a flexible printing plastic, to create 'subdermal' touch points, which could hypothetically provide the functionality of audio triggers without disturbing the surface of an object at all.



## Credits / Acknowledgements / Thanks

Thanks to Elliot Wilson of SensiLab, for his help in soldering and correcting my mistakes when building the Wave Shield.

Finally, many thanks to Matt Butler, whose help as a mentor and project supervisor proved invaluable in design and building the prototype, as well as helping to direct me over the course of this project.