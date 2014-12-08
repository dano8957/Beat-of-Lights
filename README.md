Project Name: Beat-of-Lights
==============

This is the repository for our Music Visualizer project for CSCI 3308 Software Tools and Methods

##First Protoype:

![screenshot](http://i.imgur.com/sjF80ek.png?1)

We initially began with a goal to create an LED Visualizer using an Arduino board. Through our Processing and Arduino IDEs we were able to create a functioning visualizer for.mp3 files while connected via USB cord to the computer.
Intital Resources used: 
Arduino IDE
Processing 2 IDE

###How To:

To build the first intital test, [click on this link](https://github.com/dano8957/Fall-14-Final-Submission/blob/master/basic_arduino_code/basic_arduino_code.ino). This directs you to a code that is executable in the Arduino IDE. One integrated with a basic circuit, an LED was programmed to turn off and on with an added delay between. Then, load the Arduino file into the Arduino itself and click run. This will result in a blinking LED. 

To build the prototype environment, we integrated the Arduino board with a simple circuit that allowed us to display a music visualizer through our BeatWrite and BeatListener codes. For more instructions, [click here](http://www.instructables.com/id/How-to-Make-LEDs-Flash-to-Music-with-an-Arduino/all/?lang=de). Once downloading the Processing IDE and the libraries that are needed for audio encoding, we now have everything to run this test case. First, pick any .mp3 file online and write the song name into the [BeatWrite.pde](https://github.com/dano8957/Fall-14-Final-Submission/blob/master/BeatWrite/BeatWrite.pde) code. Then, also input the .mp3 file into the [data](https://github.com/dano8957/Fall-14-Final-Submission/tree/master/BeatWrite/data) folder so  Processing can encode the audio for visualization. To test this, click the Play button in Processing for the BeatWrite file and a visualization should come up. Along with this, the integrated LEDs will blink to the beat of the music. 

###Problems:

We collectively were trying to create a visualizer that took streamable music (i.e. Spotify, Pandora, etc.), but all possible methods were found to be very difficult since most of these music engines do not have web APIs that allow access to their data. This changed the direction our group was going to work. Another problem we ran into was the room to incorporate a certain amount of LEDs per audio call. Due to the size of the breadboard used there were hardware issues that resulted from crowding and many incorrect wirings of the visualization circuit.

##Second Protoype:

![screenshot](http://i.imgur.com/BStrqjU.png?1)

An HTML5 Visualizer was created to more directly parse data into frequencies and create something more appealing to watch. 

###How to:

To run this visualization, go into the [HTML5 Visualizer folder](https://github.com/dano8957/Fall-14-Final-Submission/tree/master/HTML5%20Visualizer) and click on [HTML5AudioVisualizer.html](https://github.com/dano8957/Fall-14-Final-Submission/blob/master/HTML5%20Visualizer/HTML5AudioVisualizer.html). Make sure that a .mp3 file is a subdirectory of this file in a seperate folder. Write the .mp3 file name into the Visualizer code and open the .html file with Chrome or any internet provider you would like. This will result in a music visualizer that runs through a localhost online. 

###Testing:

Testing was done through Geany to deal with minor errors in the code and find runtime errors. The rest of the errors in the code were found by running the .html file and identifying if the visualization was working correctly. As we had no prior experience we watched tutorials that explained, step-by-step, how to create visualizations in HTML5. 

###Problems:

Much like our first prototype, we found that there is no easy way to parse streaming audio data. Most APIs do not have a simple way of parsing audio data and encoding it for visualization. 


###Possible Improvements:

-We could implement a way to make full playlists readable on this visualizer to allow longer visualization time.
-Implementing a way for this code to access the built-in microphone and allow visualization that way.

##Third Protoype - LED Matrix Visualizer

In the last few weeks we decided to create a visualization method that used a microphone to create a visualization. Instead of parsing .mp3 files we implemented a code that would allow incoming sound to be parsed directly after the microphone detected sound. This would be integrated with an 8 x 8 LED Matrix to create a number of programmable visualizations like in previous prototypes.

###Problems:

Time constraints did not give us enough time to finish this. An initial test was done and recorded in a video within our PowerPoint presentation. We also did not purchase the correct microphone because the microphone had difficulty reading the data and parsing it into the LED Matrix.

