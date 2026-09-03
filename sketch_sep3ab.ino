#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 12

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  // 50 out of 255. Safe for USB power, but visible in a lit room.
  pixels.setBrightness(50); 
  pixels.clear();
  pixels.show();
}

void loop() {
  // 1. Purple
  smoothFade(128, 0, 128);
  
  // 2. Blue
  smoothFade(0, 0, 255);
  
  // 3. White
  smoothFade(255, 255, 255);
}

void smoothFade(int r, int g, int b) {
  // Fade In
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    for (int i = 0; i < NUMPIXELS; i++) {
      int pixel_r = map(brightness, 0, 255, 0, r);
      int pixel_g = map(brightness, 0, 255, 0, g);
      int pixel_b = map(brightness, 0, 255, 0, b);
      pixels.setPixelColor(i, pixels.Color(pixel_r, pixel_g, pixel_b));
    }
    pixels.show();
    delay(30); // 30ms delay makes it very smooth
  }
  
  delay(1000); // Hold the color for 1 second
  
  // Fade Out
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    for (int i = 0; i < NUMPIXELS; i++) {
      int pixel_r = map(brightness, 0, 255, 0, r);
      int pixel_g = map(brightness, 0, 255, 0, g);
      int pixel_b = map(brightness, 0, 255, 0, b);
      pixels.setPixelColor(i, pixels.Color(pixel_r, pixel_g, pixel_b));
    }
    pixels.show();
    delay(30);
  }
  
  delay(500); // Pause before the next color
}
