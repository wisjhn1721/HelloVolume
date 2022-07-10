This project is a simple volume control plugin with some extra features. I followed the youtube videos created by Will Pirkle for this project ( links below).
The bulk of the work will be found in two files in the Plugin Kernel/Plugin Core directory
- plugincore.h
- plugincore.cpp

In plugincore.cpp you will find the signal processing algorithm for this pluging in the method processAudioFrame().

The GUI is built from resources in the Plugin Kernal/Plugin GUI directory.
The beauty of RackAFX is that it allows you to focus on the signal processing algorithm and not so much on the GUI design. Because of this, RackAFX comes with a built-in
GUI designer. The GUI designer edits the Plugin GUI files for you. 
