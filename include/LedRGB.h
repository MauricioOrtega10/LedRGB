#ifndef _LedRGB_h
#define _LedRGB_h

#include "LedRGBConfig.h"
#include "Arduino.h"

#define CC 0
#define CA 1

class LedRGB 
{
  public:
   LedRGB(int pinR, int pinG, int pinB, int modo);
   ~LedRGB();
   void setColor(int CR, int CG, int CB);
   void setColor(String color);
   
  private:  
   void setColorCA(int crA, int cgA, int cbA);
   void setColorCC(int crC, int cgC, int cbC);
   int _pinR;
   int _pinG;
   int _pinB;
   int _mode;

};

extern LedRGB led_rgb;

#endif