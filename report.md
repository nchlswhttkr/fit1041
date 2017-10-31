# Tangible Interfaces For The Vision Impaired

### Nicholas Whittaker
### FIT1041: Research Project
### Tangible Interfaces for the Vision Impaired
### Undertaken in partnership with Monash SensiLab and Monash University

## Contents
<!-- TODO: CONTENTS -->
 - [Context](https://github.com/NickelOz/fit1041/blob/master/report.md#context)
 - [Aims / Goals](https://github.com/NickelOz/fit1041/blob/master/report.md#aims--goals)
 - [Timeline / Approach](https://github.com/NickelOz/fit1041/blob/master/report.md#timeline--approach)
 - [Design Choices](https://github.com/NickelOz/fit1041/blob/master/report.md#design-choices)
 - [Prototype Creation](https://github.com/NickelOz/fit1041/blob/master/report.md#prototype-creation)
 - [Evaluation](https://github.com/NickelOz/fit1041/blob/master/report.md#evaluation)
 - [Reflection / Difficulties](https://github.com/NickelOz/fit1041/blob/master/report.md#reflection--difficulties)
 - [Credits / Acknowledgement / Thanks](https://github.com/NickelOz/fit1041/blob/master/report.md#credits--acknowledgements--thanks)


## Context

In the 21st Century, newer technologies and the internet have spurred to the spread of information, as well as continuing goal of making it more accessible to a global audience. For members of the low-vision community, the wide availability of smart-phones has provided greater access to digital information and easy to use methods of communication. However, an area still needing greater development is related more to graphical and physical information.
<!-- TODO: PHONES FROM VISION AUSTRALIA -->

Objects like the map of a public space, the layout of a building or the shape and appearance of a landmark are often best described by a tangible representation, a model that someone with a vision impairment or blindness can grasp, touch and interpret with their hands. Technologies such as 3D printers, which can generate models in a matter of hours by layering together cross sections of a digital object using plastic resin, and swell paper, which uses a combination of special ink and paper that expands under heat to create pages with raised sections for a user to guide their hand across.

While these approaches to succeed in communicating this graphical details, they lack the ability to communicate all relevant information about a model. While it is beneficial to the low vision community to be able to create these objects to help them understand a map or 3D object, it is detrimental to sacrifice this greater context in producing a representation.

Thus, working to develop a solution that overcomes this weakness and provides this often necessary context will help in the continuing development of accessible objects for those with vision impairments.

![A map of a train station, printed on swell paper](https://i.imgur.com/U0qqtyd.jpg)
##### A map of a train station, printed on swell paper

![A print of the Sydney Opera house](https://i.imgur.com/8w20COG.jpg)
##### A print of the Sydney Opera House, those with vision impairments often struggle to interpret the 'sails' that make up the roof
###### Original image taken by Andrew Kallasmae



## Aims / Goals

The most suitable approach for this project is to follow the Design Science methodology, given its focus on investigating, developing and evaluating a product. While this project is limited by time, keeping a detailed log of how the prototype was developed will help to facilitate further development and iteration.

Aside from simply producing a prototype, there should also be justification for the choices made during the design stage. With any components used for building, it should be made clear why those particular parts were chosen.

The prototype itself should provide additional context through having the user perform a simple interaction when iteracting with it, and gain additional context about the object through feedback, whether haptic* or auditory.

*Ultimately, only auditory feedback was investigated.



## Timeline / Approach

In line with the outlined methodology, this project can be summarised into three main stages.
<!-- TODO: SPEAK FURTHER ABOUT DESIGN SCIENCE -->

#### Investigate / Experiment
Experiment with the Arduino and investigate the different ways than an Arduino can detect and respond to input. Other possible sources for components include Australian retailers, and distributors such as [Adafruit]() and [Sparkfun](). Pre-prepared sets like the [Arduino Starter Kit](https://store.arduino.cc/usa/arduino-starter-kit) also contain a myriad of useful components and an opportunity to get 'hands-on' investigation done before settling on a rough design for the end product.
<!-- TODO: ADAFRUIT AND SPARKFUN CATALOGUE LINKS -->
<!-- COPY PASTE SAMPLE IMAGES OF PAST PROTOTYPES -->

#### Build / Design
<!-- INCLUDE DESIGN PHOTOS -->


#### Demonstrate / Evaluate
<!-- PROVIDE LIST OF EVALUATION CRITERIA, THINK EASE OF USE, STABILITY, PERFORMANCE OVERALL AND ANY IMPACTED. -->



## Design Choices

In current practice, there are a number of ways to makes objects more accessible via touch.

This can include purely physical approaches, such as

#### Braille Stickers

These are fairly easy to print and affix to objects, braille stickers can be printed using special label makers. However, while they can be produced in a quick, affordable manner, they compromise the surface of an object by adding small bumps. Given their need to be small enough to be affixed to an object, their accompanying text must also be short, no longer than two short words. This is quite a severe limitation, and does not provide the possibility of communicating more than a basic title or very short description.

<!-- TODO: IMAGE OF BRAILLE STICKERS -->

#### Textiles/Patterns

Using a high-quality printer, different patterns can be printed onto a map. For example, thin criss-crosses, thick diagonal lines or polka dot patterns can signify different buildings on a flat map, or rooms in a house. This is useful because it does not interrupt the overall shape of an object, and makes it easy to divide a terrain or a 3D space into separate areas. However, it also requires that each of these sections have a distinct pattern so they can be discerned by touch, as well needing to be printed with a high-quality printer so that these patterns can be reproduced accurately while still keeping the surface 'flat', which tends to be expensive and beyond the access of the general community.

<!-- TODO: IMAGE OF VISION AUSTRALIA CENTRE, LASER CUT -->

#### Materials

With a wider array of plastics for 3D printing, more interactive objects can be made. The prime example of this is a model of a human heart. While with a harder plastic, a person with low vision might only be able to discern the basic shape of the muscle and the outlines of a major blood vessel, using a softer plastic would allow them to 'feel' how it would beat, and squeeze it like a muscle.

![A 3D printed model of a human heart, made using a flexible plastic that be bent and squeezed](https://i.imgur.com/BOPVYhV.jpg)
##### A 3D printed model of a human heart, made using a flexible plastic that be bent and squeezed

Seeing as the primary focus of this prototype was to produce something that outputs audio, there were several methods to consider investigating, such as

#### Capacitive Touch Points

By using large conductive points, actions can be triggered through human contact interrupting a circuit. In models, the can be put into use by placing copper plates on the top of key points and threading wiring through buildings or objects. However, the functionality is hampered by the fact even a light touch can activate it. Momentary contact with any point will interrupt the circuit and trigger a response.

This can be circumvented by requring a user to 'double-tap' in quick succession or hold their finger on a point for several seconds, but while this avoids the shortcomings of capacitive touch, it introduces further unecessary complexity to user interactions and places greater dependency on them. These models may be more accessible, but at the cost of user's experiences.

While these touch points can be incorporated smoothly into objects, the way in which they can be triggered by idle brushes of a user's hand prevents them from being of benefit to those with low vision, who rely on touch and hearing alone to gain an understanding of an object. Although this limitation can be overcome, it only steepens the difficulty slope for those low vision users by adding another level of complexity for them to deal with.

<!-- TODO: IMAGE OF OLDER PROTOTYPE OF CAULFIELD CAMPUS -->

#### Buttons

Buttons were another consideration, particularly because they have two clear binary states (pressed/unpressed). This makes it easy to set off actions, such as audio, when a button is pressed. It is also useful as it avoids the general uncertainty of when a button is pressed, as long as it has sufficient resistance to require a force press to activate.

However, they are also rather oversized and would just out of an object they were applied to. Without significant consideration during the design stage to allow them to be built in. Even then, the buttons need to be connected to a breadboard or similar board to run wires through, making the creation of suitable models a time-consuming operation, needing to be addressed on a case-by-case basis.

<!-- TODO: IMAGE OF BUTTON FROM ARDUINO STARTER KIT -->

#### RFID Tags

With a special Arduino components, RFID tags can be read by an Arduino. While useful, its disadvantages outweigh its benefits. To operate, a unit to scan the tags would need to carried around. It would have to contain the Arduino to handle logic, the RFID reader itself, a shield to handle audio output and a component to play emit audio, though headphones could suffice. Even then, the unit itself would be bulky and inconvenient to carry around, acting as a detriment. Since different tags, each with different sound files, would need to be used, the Arduino would need to be reprogrammed with each success tag and audio file addition, as it cannot rely on an external entity, such as a server, to handle this data.

![An RFID Reader, with its accompanying cards, connected to an Arduino](https://i.imgur.com/13PGcwX.jpg)
##### An RFID Reader, with its accompanying cards, connected to an Arduino

#### Photoresistors

A temporary consideration. They can be used to accurately detects changes in light levels, like a light tripwire. They are far too easy to activate unintentionally though, and also require a breadboard to run through the Arduino.

![An Arduino that can be played like a theremin by raising and lowering a hand over the photoresistor](https://i.imgur.com/yYSiGNL.jpg)
##### An Arduino that can be played like a theremin by raising and lowering a hand over the photoresistor

#### Force Sensitive Resistors (FSRs)

As greater pressure is applied, the resistance through these components increases, which can be used to trigger sounds in a similar manner to capacitive touch points. Given their size and cost, they cannot greatly discern differences in the force applied to them, but can differentiate between, a heavy, medium or light press, which is sufficient for acting as a trigger. Their small, thin size means they can be placed on a flat surface with a small amount of adhesive.

![An FSR set up with an Arduino to produce a tone that raises in pitch as more pressure is applied](https://i.imgur.com/ZrjiVyo.jpg)
##### An FSR set up with an Arduino to produce a tone that raises in pitch as more pressure is applied



## Prototype Creation

The creation of the prototype followed 4 main stages

#### Formalising Components for Build

Once a variety of possible methods were investigated, it was necessary to list all necessary items for the build to be ordered.

A copy of the prototype specifications passed onto SensiLab for ordering can be found [here](https://drive.google.com/file/d/0B-P4-RA44wmtZ0tCeFZkeHNoNFE/view). Alternatively, it can be viewed in markdown [here]().
<!-- TODO: MARKDOWN OF PROTOTYPE SPECIFICATION -->

#### Soldering Components

This was a slow and careful process. While building the multiplexer required only header pins (long pins designed to plug into an Arduino/breadboard) be connected, soldering the Wave shield required the steps outlined in [Adafruit's guide](https://drive.google.com/file/d/0B-P4-RA44wmtZ0tCeFZkeHNoNFE/view) be followed precisely.

It should be noted that careful soldering is needed with particular components, such as the operational amplifier, as mistakes during this stage are hard to correct and can compromise the shield's ability to operate effectively, and possibly prevent it from functioning altogether.

#### Program Logic

A full copy of the code used for the Arduino can be found [here](https://github.com/NickelOz/fit1041/blob/master/touch_map/touch_map.ino)

To read and respond to stimuli, each of the FSRs was polled through the multiplexer, with a pressure threshold being used to trigger sound bites.

![A pair of coin-sized FSRs connected to their Arduino](https://i.imgur.com/plwto7T.jpg)
##### A pair of coin-sized FSRs connected to their Arduino, polled using a multiplexer

While this code was largely adapted from the available tutorials online, the key aim was to raise the majority of the configuration variables (polling interval, audio filenames, Arduino pins used for I/O) up to a global state, so that adjustments could easily be made to cater to an evolving design. This would allow more touch points to configured in future and to tune to the sensitivity of the map for different environments.

#### Construction

To build a functioning prototype, a map would need to be mounted on a sturdy board for portability and organisation. For this, a large rectangle of cardboard was used, so that the map and wires could be taped down and lie flat on the surface.

To build the map, small slits were cut through a donated 3D print of a large building, similar to one that might be used as a guide in a public space. Using a small handheld saw, 1cm incisions were made into the map, through which FSRs could be inserted through to run underneath the model.

![An FSR connected the Arduino, and inserted into the map](https://i.imgur.com/yuUyfVv.jpg)
##### An FSR connected the Arduino, and inserted into the map by cutting a small slit to pass wiring through

For clarity and visual appeal, the wiring of the Arduino was recut and taped down to run flat across the map.

After connecting up a sound output device, in this case a small battery powered speaker, and loading the audio files onto the microSD card, the prototype was ready to present.

![The finished map, with each FSR being through the multiplexer to trigger audio from the Wave shield](https://i.imgur.com/QfopIVd.jpg)
##### The finished map, with each FSR being through the multiplexer to trigger audio from the Wave shield



## Evaluation

### POSITIVE

 - Compared to all other methods investigated, the FSRs were the most successful, being able to incorporate smoothly into an object and only be triggered when intended.
 - In terms of build requirements, the prototype can be easily replicated with several FSRs, an Arduino, an audio shield and sufficient wiring. All of these components are steadily becoming more widely available and affordable, meaning that in future building a functioning map similar to the one created over the course of this project will be much more viable to achieve.
 <!-- DISCUSS HOW FURTHER PROTOTYPES COULD BE DEVELOP / PATHS FOR FUTURE ITERATION
 WHAT ABOUT SOMETHING THAT COULD BE DETACHABLE/MODIFIABLE? THINK PLUG AND PLAY -->

### NEGATIVE

This could be better presented as considerations for future development.

It should be noted that there were issues with the following areas, however none posed too major an issue to impact the functionality of the interactive map.
 - Short legs on the FSRs made it hard to keep the continually wired into the Arduino.
 - The wave shield occupies a lot of a pins, and only leaves 4 pins for IO, hence the need to a multiplexer to poll each touch point
 - Because some wires for the shield needed to continually readjusted and changed around, they could not be soldered in. This meant that it was incredibly easy to knock them out of place, which even happened during a live demonstration.
 - Audio files recorded at different sound levels can be very loud or very soft. Additionally, they need to be formated into 16bit WAV files with a frequency response set to 22050Hz



## Reflection / Difficulties

Unforseen problems with building the audio shield, resulting in the need to resolder, caused quite a significant time impact to the project timeline. Overall, it would have been beneficial to have ordered components roughly a week earlier, to allow for these setbacks and to prevent them from cutting into the prototype build time.

Future avenues to investigate could include combining the FSRs with a flexible printing plastic, to create 'subdermal' touch points, which could hypothetically provide the functionality of audio triggers without disturbing the surface of an object at all.



## Credits / Acknowledgements / Thanks

Thanks to Elliot Wilson of SensiLab, for his help in soldering and correcting my mistakes when building the Wave Shield.

Finally, many thanks to Matt Butler, whose help as a mentor and project supervisor proved invaluable in design and building the prototype, as well as helping to direct me over the course of this project.