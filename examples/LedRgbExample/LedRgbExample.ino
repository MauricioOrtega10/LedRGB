#include <Arduino.h>
#include <LedRGB.h>

void setup() 
{
}

void loop() 
{
  led_rgb.setColor("white");
  delay(2000);
  led_rgb.setColor("red");
  delay(2000);
  led_rgb.setColor("green");
  delay(2000);
  led_rgb.setColor("blue");
  delay(2000);
  led_rgb.setColor("yellow");
  delay(2000);
  led_rgb.setColor("orange");
  delay(2000);
  led_rgb.setColor("violet");
  delay(2000);
  led_rgb.setColor("turquoise");
  delay(2000);
  led_rgb.setColor("grey");
  delay(2000);
  led_rgb.setColor("maroon");
  delay(2000);
  led_rgb.setColor("fuchsia");
  delay(2000);

  for (int r = 0; r <= 255; r++) 
  {
    for (int g = 0; g <= 255; g++) 
    {
      for (int b = 0; b <= 255; b++) 
      {
        led_rgb.setColor(r,g,b);
        delay(10);
      }
    }
  }
}