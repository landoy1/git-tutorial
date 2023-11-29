#include "FastLED.h"      //add FastLED library

#define NUM_LEDS 512      //set of LEDS
#define DATA_PIN 3        //set Arduino pin number
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  //configure LEDs
  FastLED.setBrightness(5);                                 //set brightness (0-255)
  FastLED.clear();
  delay(1000);
        for (int k = 485; k <= 495; k ++){                         //row 2
      leds[k].setHue(0);}
    for (int k = 224; k <= 233; k ++){
      leds[k].setHue(0);}


    FastLED.show();
}

void loop() {
  
}