# Week 6

This week was spent deciding on a trigger mechanism, between the RFID tags, pressure resistor and photoresistors.

RFID tags were effective to use, as the reader provided would automatically detect any nearby signals and read out a stream of bytes representing the card's details. However, while triggering it was simple to do, the different, unique IDs of each card made it hard to perform conditional actions, such as printing a different string if a particular card was used. Because each ID would need to be written and individually compiled for each Arduino, it was very hostile to a potential future users, who would need to spend time learning the codebase and modifying it to suit their needs.

Photoresistors were next on the chopping block. They were a lot of fun to use and much easier to set up with different conditions for each trigger. They were far too easy to accidentally trigger though, as an idle swipe of the hand could set them off. While they could be used for something like a tripwire, my prototype needs to be accessible so that triggers are only set off intentionally, and accidental triggers would be quite disruptive and annoying for general users.

Finally I used a FSR resistor as a trigger mechanism. While they were limited by fairly poor accuracy, choosing a decent trigger point made it easy to ensure that setting off an action could only be done intentionally. Because of this, I decided these would be the ones to use in my prototype. As more pressure was applied, the resistance of the circuit would increase, which could set off an action.

Arduinos can read in an analogue value from a circuit, varying between 0 and 1023. In the case of the FSR, this value was around 700, needing a firm press.
