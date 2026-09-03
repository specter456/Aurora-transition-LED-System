# Aurora - Reactive LED Transition System

## Project Overview
Aurora is an Arduino-based LED system designed to smoothly change colors to reduce eye strain in healthcare environments. The goal is to automate lighting in emergency rooms using motion detection, so medical staff don't have to manually turn on lights.

## Current Status
Working: NeoPixel LED ring with smooth color transitions.
In Progress: Connecting the HC-SR501 PIR motion sensor.
 Challenge: The sensor module failed during testing. I am currently debugging the circuit and replacing parts.

## Components Used
- Arduino Uno
- NeoPixel LED Ring (12 LEDs)
- HC-SR501 PIR Motion Sensor
- Breadboard, jumper wires
- 5v power supply (for the neopixels to avoid damage) 

## How It Works
- Programming: Written in Arduino IDE using the Adafruit NeoPixel library.
- Core Function: Smoothly fades between purple, blue, and white light to prevent visual discomfort.
- Goal: Automatically turn on and adjust lights when a doctor or patient enters the room.

## What I Learned
- Why voltage regulation and circuit protection are important.
- *Always test components with a multimeter BEFORE connecting them* to avoid short circuits that can damage expensive parts.
- How to troubleshoot hardware failures step-by-step.
- The importance of testing each part separately before connecting them all.

## Next Steps
- Replace the faulty PIR sensor.
- Make the lights turn on automatically when motion is detected.
- Improve power efficiency.

## Demo
https://drive.google.com/file/d/1ZFVmcUz5M9w1_XEE5t3uahsSVlLZHY__/view?usp=drive_link
