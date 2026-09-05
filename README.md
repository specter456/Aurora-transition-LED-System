

###### Aurora - Reactive LED Transition System
## Project Overview
 Aurora is an Arduino-based LED system designed to smoothly change colors to reduce eye strain in healthcare environments. The goal is to automate lighting in emergency rooms so medical staff don't have to manually turn on lights.
# Design Evolution: I initially planned to use a sound/snap sensor. However, I realized doctors and nurses in emergency rooms are too busy to snap their fingers to turn on lights. I switched to a PIR motion sensor to make the system completely hands-free and practical for a high-stress environment.
# Current Status
### Working: NeoPixel LED ring with smooth color transitions.
### Working: PIR motion sensor successfully triggers the lights.
### In Progress: Refining the physical casing and power management.
## Components Used
# Arduino Uno
# NeoPixel LED Ring (12 LEDs)
# HC-SR501 PIR Motion Sensor
# Breadboard, jumper wires, and 5V power supply
## How It Works
# Programming: Written in Arduino IDE using the Adafruit NeoPixel library.
# Core Function: Smoothly fades between magenta, blue, and white light to prevent visual discomfort.
# Goal: Automatically turn on and adjust lights when a doctor or patient enters the room.
## What I Learned
# Designing for the user: Technology must fit the user's reality. Switching from a snap sensor to a motion sensor taught me to design for the actual needs of busy medical staff.
# Finding hidden hardware problems: When my boards stopped working, they didn't show obvious symptoms. I learned to look for the tiny "L" LED on the board, which stays lit during a short circuit even when it shouldn't.
# Using a multimeter properly: I learned how to use a multimeter to check for continuity and voltage drops, which helped me identify the short circuits that were damaging my components.
# Testing before connecting: Always test individual components with a multimeter before connecting them to avoid short circuits and damaging expensive parts.
## Next Steps
# Build a proper 3D-printed or cardboard casing for the components.
# Optimize power efficiency for longer hospital use.
## Demo
[Paste your Google Drive lin
