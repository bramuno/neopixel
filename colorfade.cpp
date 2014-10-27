//colorfade.cpp written by Brian Ramuno
//this code controls a strip of neopixels and simply fades between colors of the rainbow. 
// you can change the speed of fade by adjusting the values below
#include <Adafruit_NeoPixel.h>

#define PIN 1   // output pin
#define NUM_PIXELS  19    // number of pixels in your strip
int wait = 100;  // speed at which it moves to the next color
int pause = 1000;  // time spent when arriving at this color before moving to the next

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin();   // initialize strip
 // go from off to blue (starting color)
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(0,0,a));
	}  strip.show();delay(10);}
}

void loop() {
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(0,a,255));} //   0,255,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(a,255,255));} //   255,255,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,a,255));} //  255,0,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,0,a));} //  255,0,0
	strip.show();delay(wait);
	}delay(pause);
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,a,0));}  //  255,255,0
	strip.show();delay(wait);
	}delay(pause);
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,255,a));} //  255,255,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(a,255,255));} //  0,255,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(0,255,a));} //  0,255,0
	strip.show();delay(wait);
	}delay(pause);
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(a,255,0));} //   255,255,0
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,a,0));} //  0,255,255
	strip.show();delay(wait);
	}delay(pause);
for(int a=0;a<255;a++){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(255,0,a));} //   255,255,0
	strip.show();delay(wait);
	}delay(pause);
for(int a=255;a>-1;a--){
	for(byte f=0;f<NUM_PIXELS;f++){
	strip.setPixelColor(f, strip.Color(a,0,255));} //  0,255,255  //ends at blue then starts over
	strip.show();delay(wait);
	}delay(pause);

	} // end void 

void clearStrip() {
  for( int i = 0; i<NUM_PIXELS; i++){
    strip.setPixelColor(i, 0x000000); strip.show();
  }
 }
