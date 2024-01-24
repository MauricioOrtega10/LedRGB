#include <LedRGB.h>

LedRGB::LedRGB(int pinR, int pinG, int pinB, int mode)
{
	_pinR = pinR;
	_pinG = pinG;
	_pinB = pinB;
	pinMode(_pinR, OUTPUT);
	pinMode(_pinG, OUTPUT);
	pinMode(_pinB, OUTPUT);
	_mode = mode;
}

LedRGB::~LedRGB()
{

}

void LedRGB::setColor(int CR, int CG, int CB){
	if(_mode == 0)
  {
		setColorCC(CR, CG, CB);
	}else if(_mode == 1)
  {
		setColorCA(CR, CG, CB);
  }
}

void LedRGB::setColor(String color)
{
  if(color == "white")
  {
		setColor(255, 255, 255);
	}
  else if(color == "red")
  {
		setColor(255, 0, 0);
	}
  else if(color == "green")
  {
		setColor(0, 255, 0);
	}
  else if(color == "blue")
  {
		setColor(0, 0, 255);
	}
  else if(color == "yellow")
  {
		setColor(255, 255, 0);
	}
  else if(color == "orange")
  {
		setColor(255, 150, 0);
	}
  else if(color == "violet")
  {
		setColor(150, 0, 255);
	}
  else if(color == "turquoise")
  {
		setColor(0, 255, 220);
	}
  else if(color == "grey")
  {
		setColor(70, 70, 70);
	}
  else if(color == "maroon")
  {
		setColor(176, 54, 72);
	}
  else if(color == "fuchsia")
  {
		setColor(255, 0, 255);
	}
  else
  {
		setColor(0, 0, 0);
	}
}

void LedRGB::setColorCA(int crA, int cgA, int cbA){

	analogWrite(_pinR, 255-crA);
	analogWrite(_pinG, 255-cgA);
	analogWrite(_pinB, 255-cbA);
}

void LedRGB::setColorCC(int crC, int cgC, int cbC){
	analogWrite(_pinR, crC);
	analogWrite(_pinG, cgC);
	analogWrite(_pinB, cbC);
}

LedRGB led_rgb(R_PIN, G_PIN, B_PIN, CA);