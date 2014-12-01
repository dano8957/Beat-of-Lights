Beat-of-Lights
==============

This is the repository for our Music Visualizer project for CSCI 3308.

###First Protoype:

We initially began with a goal to create an LED Visualizer using an Arduino board. Through our Processing and Arduino IDEs we were able to create a functioning visualizer for.mp3 files. 
Resources used: 
Arduino IDE
Processing 2 IDE
HTML5 Visualizer

Problems that came up:
We collectively were trying to create a visualizer that took streamable music (i.e. Spotify, Pandora, etc.), but all possible methods were found to be very difficult since most of these music engines do not have web APIs that allow access to their data.

###Second Protoype:

As another option, we created a simple  HTML5 Visualizer that uses dynamic bars to visualize the range of frequencies in a .mp3 song. 

Possible Improvements:
We could implement a way to make full playlists readable on this visualizer to allow longer visualization time.
Implementing a way for this code to access the built-in microphone and allow visualization that way.

Prototype 3 - Under Development

With this prototype we will use all we have learned thus far and attempt to create a visualizer that takes data from an audio API or the microphone directly.
Once successful, we will implement visualizations for the given audio data.
Then, a database that houses certain frequencies of a song will be implemented through coding (preferably D3, not sure yet).
This should ll come together to create a working first "Beat of Lights" product.
