#include <Arduino.h>
#include <MD_TCS230.h>

#define R_OUT 6
#define G_OUT 7
#define B_OUT 8

void setup()
{
    pinMode(R_OUT, OUTPUT);
    pinMode(G_OUT, OUTPUT);
    pinMode(B_OUT, OUTPUT);
}

void loop() 
{
    for (int i = 0; i <= 5; i++)
    {
        set_rgb_led(255, 0, 0); //красный
        delay(4900);
        set_rgb_led(255, 255, 255);
        delay(100);
    }
    for (int i = 0; i <= 5; i++)
    {
        set_rgb_led(0, 0, 255); //синий
        delay(4900);
        set_rgb_led(255, 255, 255);
        delay(100);
    }
}

void set_rgb_led(int r, int g, int b)
{
    analogWrite(R_OUT, 255 - r);
    analogWrite(G_OUT, 255 - g);
    analogWrite(B_OUT, 255 - b);
}
