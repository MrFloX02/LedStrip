#include <FastLED.h>

#define NUM_LEDS 60

#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() { 
Serial.begin(9600);
FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
pinMode(3, OUTPUT);
}

void loop() { 
//RGB inversion de la couleur entre le rouge et le vert : GRB
 if(Serial.available()>0)
 {    
  char data = Serial.read(); // reading the data received from the bluetooth module
  
    if (data == 'a')
      {
        for (int i=0; i <= 19; i++)
          { 
            leds[i] = CRGB(0, 0, 100);
            FastLED.show();
            delay(10);
          }
 
        for (int i=20; i <= 39; i++)
          { 
            leds[i] = CRGB(100, 100, 100);
            FastLED.show();
            delay(10);
          }
          
        for (int i=40; i <= 61; i++)
          { 
            leds[i] = CRGB(0, 100, 0);
            FastLED.show();
            delay(10);
          }
 
        for (int i=0; i <= 61; i++)
          { 
            leds[i] = CRGB(0, 0, 0);
            FastLED.show();
            delay(10);
          }

      }
 }
 if(Serial.available()>0)
 {    
  char data = Serial.read(); // reading the data received from the bluetooth module
          else(data == 'b');
         {   
            for (int i=0; i <= 61; i++)
              { 
                leds[i] = CRGB(0, 0, 0);
                FastLED.show();
                delay(10);

 }

 }

   }
  }

