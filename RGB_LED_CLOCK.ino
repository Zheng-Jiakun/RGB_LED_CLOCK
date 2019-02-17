#include "FastLED.h"
#include <SimpleTimer.h>

SimpleTimer timer;

char second = 0, minute = 0, hour = 0;

#define ANIMATION_SPEED  30

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

unsigned char LED_color_config[28][3];

void LED_set_bit (char b)
{
  switch (b)
  {
    case 0:
      FastLED.addLeds<WS2812B, DOT_PIN,  GRB>(led_dot, 2);
      break;
    case 1:
      FastLED.addLeds<WS2812B, BIT1_PIN, GRB>(led_bit1, 8);
      break;
    case 2:
      FastLED.addLeds<WS2812B, BIT2_PIN, GRB>(led_bit2, 28);
      break;
    case 3:
      FastLED.addLeds<WS2812B, BIT3_PIN, GRB>(led_bit3, 28);
      break;
    case 4:
      FastLED.addLeds<WS2812B, BIT4_PIN, GRB>(led_bit4, 28);
      break;
  }
}

void LED_display_off (char b)
{
  switch (b)
  {
    case 1:
      for (int i = 0; i < 8; i++)
        led_bit1[i] = CRGB(0, 0, 0);
      break;

    case 2:
      for (int i = 0; i < 28; i++)
        led_bit2[i] = CRGB(0, 0, 0);
      break;

    case 3:
      for (int i = 0; i < 28; i++)
        led_bit3[i] = CRGB(0, 0, 0);
      break;

    case 4:
      for (int i = 0; i < 28; i++)
        led_bit4[i] = CRGB(0, 0, 0);
      break;
  }
}

void LED_display_num_0 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);
  for (int i = 0; i < 12; i++)
  {
    temp = i + 12;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[i][temp], LED_color_config[temp][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 12; i++)
  {
    temp = i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[i][temp], LED_color_config[temp][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_1 (char b, unsigned char LED_color_config[28][3])
{
  LED_set_bit (b);

  for (int i = 0; i < 8; i++)
  {
    led_bit4[7 - i] = CRGB(LED_color_config[i][0], LED_color_config[i][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_2 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 16 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 20 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_3 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_4 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_5 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_6 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 8; i < 24; i++)
  {
    temp = i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_7 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_8 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 4 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 8 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 19 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_9 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;
  LED_set_bit (b);

  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 16; i++)
  {
    temp = 15 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_bit4[temp] = CRGB(LED_color_config[temp][0], LED_color_config[temp][1], LED_color_config[i][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num (char b, char d)
{
  switch (d)
  {
    case 0:
      LED_display_num_0(b, LED_color_config);
      break;

    case 1:
      LED_display_num_1(b, LED_color_config);
      break;

    case 2:
      LED_display_num_2(b, LED_color_config);
      break;

    case 3:
      LED_display_num_3(b, LED_color_config);
      break;

    case 4:
      LED_display_num_4(b, LED_color_config);
      break;

    case 5:
      LED_display_num_5(b, LED_color_config);
      break;

    case 6:
      LED_display_num_6(b, LED_color_config);
      break;

    case 7:
      LED_display_num_7(b, LED_color_config);
      break;

    case 8:
      LED_display_num_8(b, LED_color_config);
      break;

    case 9:
      LED_display_num_9(b, LED_color_config);
      break;
  }
}

void LED_display_refresh (char b, char d)
{
  static char last_data[4] = {0, 0, 0, 0};
  if (last_data[b - 1] != d)
  {
    last_data[b - 1] = d;
    LED_display_off (b);
    LED_display_num(b, d);
  }
  else
  {
    LED_display_num(b, last_data[b - 1]);
  }
}

void repeatMe() {
  second++;
  if (second > 59)
  {
    second = 0;
    minute++;
    if (minute > 59)
    {
      minute = 0;
      hour++;
      if (hour > 23)
      {
        hour = 0;
      }
    }
  }
}

void time_display_refresh()
{
  //  LED_display_refresh(1, minute / 10);
  //  LED_display_refresh(2, minute % 10);
  //  LED_display_refresh(3, second / 10);
  //  LED_display_refresh(4, second % 10);
  LED_display_refresh(1, hour / 10);
  LED_display_refresh(2, hour % 10);
  LED_display_refresh(3, minute / 10);
  LED_display_refresh(4, minute % 10);
}

void LED_color_refresh()
{
  for (char i = 0; i < 28; i ++)
  {
    LED_color_config[i][0] = 50 * (second % 5 + 1);
    LED_color_config[i][1] = 60 * (second % 4 + 1);
    LED_color_config[i][2] = 80 * (second % 3 + 1);
  }
}

void setup() {
  timer.setInterval(1000, repeatMe);
}

void loop() {
  timer.run();

  LED_color_refresh();

  time_display_refresh();
}
