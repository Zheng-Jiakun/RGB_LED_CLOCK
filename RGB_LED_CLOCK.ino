#include "FastLED.h"

#define BIT1_PIN 2
#define BIT2_PIN 3
#define BIT3_PIN 4
#define BIT4_PIN 5
#define DOT_PIN  6

CRGB led_bit1[8];
CRGB led_bit2[28];
CRGB led_bit3[28];
CRGB led_bit4[28];
CRGB led_dot[2];

void LED_disp_num_0 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 12; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    led_bit4[i + 12] = CRGB(LED_config[i + 12][0], LED_config[i][i + 12], LED_config[i + 12][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_1 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_2 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_3 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_4 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_5 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_6 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_7 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_8 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num_9 (unsigned char LED_config[28][3])
{
  for (int i = 0; i < 8; i++)
  {
    led_bit4[i] = CRGB(LED_config[i][0], LED_config[i][1], LED_config[i][2]);
    FastLED.show();
    delay(10);
  }
}

void LED_disp_num (char b, char d)
{
  unsigned char LED_config_1[28][3];
  for (char i = 0; i < 28; i ++)
  {
    for (char j = 0; j < 3; i++)
      LED_config_1[i][j] = 255;
  }
  switch (b)
  {
    case 1:
      LED_disp_num_0(LED_config_1);
      break;
  }
}

void setup() {
  FastLED.addLeds<WS2812B, BIT1_PIN, GRB>(led_bit1, 8);
  FastLED.addLeds<WS2812B, BIT2_PIN, GRB>(led_bit2, 28);
  FastLED.addLeds<WS2812B, BIT3_PIN, GRB>(led_bit3, 28);
  FastLED.addLeds<WS2812B, BIT4_PIN, GRB>(led_bit4, 28);
  FastLED.addLeds<WS2812B, DOT_PIN,  GRB>(led_dot, 2);
}

void loop() {
  unsigned char LED_config_1[28][3];
  for (char i = 0; i < 28; i ++)
  {
    for (char j = 0; j < 3; i++)
      LED_config_1[i][j] = 255;
  }

  LED_disp_num_1(LED_config_1);

}
