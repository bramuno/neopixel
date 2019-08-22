// NeoBracelet code written by Brian Ramuno
// code available via general public license for non-profit use only
// twitter: @brianramuno etsy.com/shop/BrainWorkshop
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#define NUM_LEDS    35
#define COLOR_ORDER GRB
int bright = 35;
int count = 0;  
int minVal = 45;
int maxVal = 250;
int secondHand=8; int hit1 = 0; int hit2 = 0;
int hit3 = 0; int hit4 = 0;
int OUTPixels = NUM_LEDS;
int target = random(4); 
int b = 0;int g = 0;int h = 0; int q=0; int a=0;
int bb=8;int gg=0;int hh=0;  int qq=0; int aa=-7;
int bbb=18; int ggg=0;int hhh=0; int qqq=0; int aaa=-14;
int bbbb=28;int gggg=0;int hhhh=0;int qqqq=0; int aaaa=-21;int aaaaa=-28;
int rand1=random(minVal,maxVal); 
int rand2=random(minVal,maxVal); 
int rand3=random(minVal,maxVal);
int rand4=random(minVal,maxVal); 
int rand5=random(minVal,maxVal); 
int rand6=random(minVal,maxVal);
int rand7=random(minVal,maxVal); 
int rand8=random(minVal,maxVal); 
int rand9=random(minVal,maxVal); 
int rand10=random(minVal,maxVal);
int rand11=random(minVal,maxVal);
int rand12=random(minVal,maxVal);
int rand13=random(minVal,maxVal);
int rand14=random(minVal,maxVal);
int rand15=random(minVal,maxVal);
int rand16=random(minVal,maxVal);
		
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(NUM_LEDS, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(NUM_LEDS, 4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(NUM_LEDS, 6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(NUM_LEDS, 8, NEO_GRB + NEO_KHZ800);

void setup() {
if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
	Serial.begin(9600);
	randomSeed(1265421);
    delay( 500 ); // power-up safety delay
	strip1.begin(); 
	strip2.begin(); 
	strip3.begin(); 
	strip4.begin(); 
	for(int f=0; f<NUM_LEDS; f++){
	  strip1.setPixelColor(f, strip1.Color(0,0,0));  
	  strip2.setPixelColor(f, strip2.Color(0,0,0));  
	  strip3.setPixelColor(f, strip3.Color(0,0,0));  
	  strip4.setPixelColor(f, strip4.Color(0,0,0));  }
    strip1.show(); // Initialize all pixels to 'off'
    strip2.show(); // Initialize all pixels to 'off'
    strip3.show(); // Initialize all pixels to 'off'
    strip4.show(); // Initialize all pixels to 'off'
	//
	strip1.setBrightness(bright);
	strip2.setBrightness(bright);
	strip3.setBrightness(bright);
	strip4.setBrightness(bright);

}

void loop()
{

count++; 
	if(count >= maxVal){
		count = 0;	
	}	    
		if(count==0){ a=0; }
		if(count==0){ aa=-7; }
		if(count==0){ aaa=-14; }
		if(count==0){ aaaa=-21; }
		if(count==0){ aaaa=-28; }
		if(count==rand1){ b=0;rand1=random(minVal,maxVal); }
		if(count==rand2){ bb=0;rand2=random(minVal,maxVal); }
		if(count==rand3){ bbb=0; rand3=random(minVal,maxVal);}
		if(count==rand4){ bbbb=0;rand4=random(minVal,maxVal); }
		if(count==rand5){ h=0;rand5=random(minVal,maxVal); }
		if(count==rand6){ hh=0; rand6=random(minVal,maxVal);}
		if(count==rand7){ hhh=0;rand7=random(minVal,maxVal); }
		if(count==rand8){ hhhh=0;rand8=random(minVal,maxVal); }
		if(count==rand9){ g=0;rand9=random(minVal,maxVal); }
		if(count==rand10){ gg=0; rand10=random(minVal,maxVal);}
		if(count==rand11){ ggg=0;rand11=random(minVal,maxVal); }
		if(count==rand12){ gggg=0;rand12=random(minVal,maxVal); }
		if(count==rand13){ q=0;rand13=random(minVal,maxVal); }
		if(count==rand14){ qq=0;rand14=random(minVal,maxVal); }
		if(count==rand15){ qqq=0;rand15=random(minVal,maxVal); }
		if(count==rand16){ qqqq=0;rand16=random(minVal,maxVal); }
		
		b++;g++;h++;q++;a++;
		bb++;gg++;hh++;qq++;aa++;
		bbb++;ggg++;hhh++;qqq++;aaa++;
		bbbb++;gggg++;hhhh++;qqqq++;aaaa++;
		aaaaa++;
		strip1.setPixelColor(a,   strip1.Color(0,0,255)); 
		strip1.setPixelColor(a-1, strip1.Color(0,0,60)); 
		strip1.setPixelColor(a-2, strip1.Color(0,0,50)); 
		strip1.setPixelColor(a-3, strip1.Color(0,0,40));  //
		strip1.setPixelColor(a-4, strip1.Color(0,0,30));  //
		strip1.setPixelColor(a-5, strip1.Color(0,0,20));  //
		strip1.setPixelColor(a-6, strip1.Color(0,0,10));  //
		strip1.setPixelColor(a-7, strip1.Color(0,0,0));  //

		strip2.setPixelColor(aa,   strip2.Color(0,0,255)); 
		strip2.setPixelColor(aa-1, strip2.Color(0,0,60)); 
		strip2.setPixelColor(aa-2, strip2.Color(0,0,50)); 
		strip2.setPixelColor(aa-3, strip2.Color(0,0,40));  //
		strip2.setPixelColor(aa-4, strip2.Color(0,0,30));  //
		strip2.setPixelColor(aa-5, strip2.Color(0,0,20));  //
		strip2.setPixelColor(aa-6, strip2.Color(0,0,10));  //
		strip2.setPixelColor(aa-7, strip2.Color(0,0,0));  //

		strip3.setPixelColor(aaa,   strip3.Color(0,0,255)); 
		strip3.setPixelColor(aaa-1, strip3.Color(0,0,60)); 
		strip3.setPixelColor(aaa-2, strip3.Color(0,0,50)); 
		strip3.setPixelColor(aaa-3, strip3.Color(0,0,40));  //
		strip3.setPixelColor(aaa-4, strip3.Color(0,0,30));  //
		strip3.setPixelColor(aaa-5, strip3.Color(0,0,20));  //
		strip3.setPixelColor(aaa-6, strip3.Color(0,0,10));  //
		strip3.setPixelColor(aaa-7, strip3.Color(0,0,0));  //

		strip4.setPixelColor(aaaa,   strip4.Color(0,0,255)); 
		strip4.setPixelColor(aaaa-1, strip4.Color(0,0,60)); 
		strip4.setPixelColor(aaaa-2, strip4.Color(0,0,50)); 
		strip4.setPixelColor(aaaa-3, strip4.Color(0,0,40));  //
		strip4.setPixelColor(aaaa-4, strip4.Color(0,0,30));  //
		strip4.setPixelColor(aaaa-5, strip4.Color(0,0,20));  //
		strip4.setPixelColor(aaaa-6, strip4.Color(0,0,10));  //
		strip4.setPixelColor(aaaa-7, strip4.Color(0,0,0));  //

		strip1.setPixelColor(aaaaa,   strip1.Color(0,0,255)); 
		strip1.setPixelColor(aaaaa-1, strip1.Color(0,0,60)); 
		strip1.setPixelColor(aaaaa-2, strip1.Color(0,0,50)); 
		strip1.setPixelColor(aaaaa-3, strip1.Color(0,0,40));  //
		strip1.setPixelColor(aaaaa-4, strip1.Color(0,0,30));  //
		strip1.setPixelColor(aaaaa-5, strip1.Color(0,0,20));  //
		strip1.setPixelColor(aaaaa-6, strip1.Color(0,0,10));  //
		strip1.setPixelColor(aaaaa-7, strip1.Color(0,0,0));  //

		
		strip1.setPixelColor(b,   strip1.Color(0,0,255)); 
		strip1.setPixelColor(b-1, strip1.Color(0,0,60)); 
		strip1.setPixelColor(b-2, strip1.Color(0,0,50)); 
		strip1.setPixelColor(b-3, strip1.Color(0,0,40));  //
		strip1.setPixelColor(b-4, strip1.Color(0,0,30));  //
		strip1.setPixelColor(b-5, strip1.Color(0,0,20));  //
		strip1.setPixelColor(b-6, strip1.Color(0,0,10));  //
		strip1.setPixelColor(b-7, strip1.Color(0,0,0));  //

		strip2.setPixelColor(bb,   strip2.Color(0,0,255)); 
		strip2.setPixelColor(bb-1, strip2.Color(0,0,60)); 
		strip2.setPixelColor(bb-2, strip2.Color(0,0,50)); 
		strip2.setPixelColor(bb-3, strip2.Color(0,0,40));  //
		strip2.setPixelColor(bb-4, strip2.Color(0,0,30));  //
		strip2.setPixelColor(bb-5, strip2.Color(0,0,20));  //
		strip2.setPixelColor(bb-6, strip2.Color(0,0,10));  //
		strip2.setPixelColor(bb-7, strip2.Color(0,0,0));  //

		strip3.setPixelColor(bbb,   strip3.Color(0,0,255)); 
		strip3.setPixelColor(bbb-1, strip3.Color(0,0,60)); 
		strip3.setPixelColor(bbb-2, strip3.Color(0,0,50)); 
		strip3.setPixelColor(bbb-3, strip3.Color(0,0,40));  //
		strip3.setPixelColor(bbb-4, strip3.Color(0,0,30));  //
		strip3.setPixelColor(bbb-5, strip3.Color(0,0,20));  //
		strip3.setPixelColor(bbb-6, strip3.Color(0,0,10));  //
		strip3.setPixelColor(bbb-7, strip3.Color(0,0,0));  //

		strip4.setPixelColor(bbbb,   strip4.Color(0,0,255)); 
		strip4.setPixelColor(bbbb-1, strip4.Color(0,0,60)); 
		strip4.setPixelColor(bbbb-2, strip4.Color(0,0,50)); 
		strip4.setPixelColor(bbbb-3, strip4.Color(0,0,40));  //
		strip4.setPixelColor(bbbb-4, strip4.Color(0,0,30));  //
		strip4.setPixelColor(bbbb-5, strip4.Color(0,0,20));  //
		strip4.setPixelColor(bbbb-6, strip4.Color(0,0,10));  //
		strip4.setPixelColor(bbbb-7, strip4.Color(0,0,0));  //

		strip1.setPixelColor(g,   strip1.Color(255,0,0)); 
		strip1.setPixelColor(g-1, strip1.Color(60,0,0)); 
		strip1.setPixelColor(g-2, strip1.Color(50,0,0)); 
		strip1.setPixelColor(g-3, strip1.Color(40,0,0));  //
		strip1.setPixelColor(g-4, strip1.Color(30,0,0));  //
		strip1.setPixelColor(g-5, strip1.Color(20,0,0));  //
		strip1.setPixelColor(g-6, strip1.Color(10,0,0));  //
		strip1.setPixelColor(g-7, strip1.Color(0,0,0));  //

		strip2.setPixelColor(gg,   strip2.Color(255,0,0)); 
		strip2.setPixelColor(gg-1, strip2.Color(60,0,0)); 
		strip2.setPixelColor(gg-2, strip2.Color(50,0,0)); 
		strip2.setPixelColor(gg-3, strip2.Color(40,0,0));  //
		strip2.setPixelColor(gg-4, strip2.Color(30,0,0));  //
		strip2.setPixelColor(gg-5, strip2.Color(20,0,0));  //
		strip2.setPixelColor(gg-6, strip2.Color(10,0,0));  //
		strip2.setPixelColor(gg-7, strip2.Color(0,0,0));  //

		strip3.setPixelColor(ggg,   strip3.Color(255,0,0)); 
		strip3.setPixelColor(ggg-1, strip3.Color(60,0,0)); 
		strip3.setPixelColor(ggg-2, strip3.Color(50,0,0)); 
		strip3.setPixelColor(ggg-3, strip3.Color(40,0,0));  //
		strip3.setPixelColor(ggg-4, strip3.Color(30,0,0));  //
		strip3.setPixelColor(ggg-5, strip3.Color(20,0,0));  //
		strip3.setPixelColor(ggg-6, strip3.Color(10,0,0));  //
		strip3.setPixelColor(ggg-7, strip3.Color(0,0,0));  //

		strip4.setPixelColor(gggg,   strip4.Color(255,0,0)); 
		strip4.setPixelColor(gggg-1, strip4.Color(60,0,0)); 
		strip4.setPixelColor(gggg-2, strip4.Color(50,0,0)); 
		strip4.setPixelColor(gggg-3, strip4.Color(40,0,0));  //
		strip4.setPixelColor(gggg-4, strip4.Color(30,0,0));  //
		strip4.setPixelColor(gggg-5, strip4.Color(20,0,0));  //
		strip4.setPixelColor(gggg-6, strip4.Color(10,0,0));  //
		strip4.setPixelColor(gggg-7, strip4.Color(0,0,0));  //
	
		strip1.setPixelColor(h,   strip1.Color(0,255,0)); 
		strip1.setPixelColor(h-1, strip1.Color(0,60,0)); 
		strip1.setPixelColor(h-2, strip1.Color(0,50,0)); 
		strip1.setPixelColor(h-3, strip1.Color(0,40,0));  //
		strip1.setPixelColor(h-4, strip1.Color(0,30,0));  //
		strip1.setPixelColor(h-5, strip1.Color(0,20,0));  //
		strip1.setPixelColor(h-6, strip1.Color(0,10,0));  //
		strip1.setPixelColor(h-7, strip1.Color(0,0,0));  //

		strip2.setPixelColor(hh,   strip2.Color(153,0,153)); 
		strip2.setPixelColor(hh-1, strip2.Color(60,0,60)); 
		strip2.setPixelColor(hh-2, strip2.Color(50,0,50)); 
		strip2.setPixelColor(hh-3, strip2.Color(40,0,40));  //
		strip2.setPixelColor(hh-4, strip2.Color(30,0,30));  //
		strip2.setPixelColor(hh-5, strip2.Color(20,0,20));  //
		strip2.setPixelColor(hh-6, strip2.Color(20,0,10));  //
		strip2.setPixelColor(hh-7, strip2.Color(0,0,0));  //

		strip3.setPixelColor(hhh,   strip3.Color(153,0,153)); 
		strip3.setPixelColor(hhh-1, strip3.Color(60,0,60)); 
		strip3.setPixelColor(hhh-2, strip3.Color(50,0,50)); 
		strip3.setPixelColor(hhh-3, strip3.Color(40,0,40));  //
		strip3.setPixelColor(hhh-4, strip3.Color(30,0,30));  //
		strip3.setPixelColor(hhh-5, strip3.Color(20,0,20));  //
		strip3.setPixelColor(hhh-6, strip3.Color(10,0,10));  //
		strip3.setPixelColor(hhh-7, strip3.Color(0,0,0));  //

		strip4.setPixelColor(hhhh,   strip4.Color(153,0,153)); 
		strip4.setPixelColor(hhhh-1, strip4.Color(60,0,60)); 
		strip4.setPixelColor(hhhh-2, strip4.Color(50,0,50)); 
		strip4.setPixelColor(hhhh-3, strip4.Color(40,0,40));  //
		strip4.setPixelColor(hhhh-4, strip4.Color(30,0,30));  //
		strip4.setPixelColor(hhhh-5, strip4.Color(20,0,20));  //
		strip4.setPixelColor(hhhh-6, strip4.Color(10,0,10));  //
		strip4.setPixelColor(hhhh-7, strip4.Color(0,0,0));  //
	
		strip1.setPixelColor(q,   strip1.Color(150,150,150)); 
		strip1.setPixelColor(q-1, strip1.Color(0,60,0)); 
		strip1.setPixelColor(q-2, strip1.Color(0,50,0)); 
		strip1.setPixelColor(q-3, strip1.Color(0,40,0));  //
		strip1.setPixelColor(q-4, strip1.Color(0,30,0));  //
		strip1.setPixelColor(q-5, strip1.Color(0,20,0));  //
		strip1.setPixelColor(q-6, strip1.Color(0,10,0));  //
		strip1.setPixelColor(q-7, strip1.Color(0,0,0));  //

		strip2.setPixelColor(qq,   strip2.Color(150,150,150)); 
		strip2.setPixelColor(qq-1, strip2.Color(60,60,60)); 
		strip2.setPixelColor(qq-2, strip2.Color(50,50,50)); 
		strip2.setPixelColor(qq-3, strip2.Color(40,40,40));  //
		strip2.setPixelColor(qq-4, strip2.Color(30,30,30));  //
		strip2.setPixelColor(qq-5, strip2.Color(20,20,20));  //
		strip2.setPixelColor(qq-6, strip2.Color(20,10,10));  //
		strip2.setPixelColor(qq-7, strip2.Color(0,0,0));  //

		strip3.setPixelColor(qqq,   strip3.Color(150,150,150)); 
		strip3.setPixelColor(qqq-1, strip3.Color(60,60,60)); 
		strip3.setPixelColor(qqq-2, strip3.Color(50,50,50)); 
		strip3.setPixelColor(qqq-3, strip3.Color(40,40,40));  //
		strip3.setPixelColor(qqq-4, strip3.Color(30,30,30));  //
		strip3.setPixelColor(qqq-5, strip3.Color(20,20,20));  //
		strip3.setPixelColor(qqq-6, strip3.Color(10,10,10));  //
		strip3.setPixelColor(qqq-7, strip3.Color(0,0,0));  //

		strip4.setPixelColor(qqqq,   strip4.Color(150,150,150)); 
		strip4.setPixelColor(qqqq-1, strip4.Color(60,60,60)); 
		strip4.setPixelColor(qqqq-2, strip4.Color(50,50,50)); 
		strip4.setPixelColor(qqqq-3, strip4.Color(40,40,40));  //
		strip4.setPixelColor(qqqq-4, strip4.Color(30,30,30));  //
		strip4.setPixelColor(qqqq-5, strip4.Color(20,20,20));  //
		strip4.setPixelColor(qqqq-6, strip4.Color(10,10,10));  //
		strip4.setPixelColor(qqqq-7, strip4.Color(0,0,0));  //
	
	strip1.show();
	strip2.show();
	strip3.show();
	strip4.show();
	
}  // end void loop
