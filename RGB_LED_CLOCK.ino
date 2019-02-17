#include "FastLED.h"
#include <SimpleTimer.h>

SimpleTimer timer;

char second = 0, minute = 0, hour = 0;

#define ANIMATION_SPEED  10

#define DATA_PIN 2

#define LED_NUM  99//7*4*3 + 4*2 + 7
CRGB led_buffer[LED_NUM];

unsigned char LED_color_config[LED_NUM][3];

void LED_clear_buffer (char b)
{
  if (b > 1)
    for (int i = (4 - b) * 28; i < (4 - b + 1) * 28; i++)
      led_buffer[i] = CRGB(0, 0, 0);
  else if (b == 1)
    for (int i = (4 - b) * 28; i < (4 - b) * 28 + 8; i++)
      led_buffer[i] = CRGB(0, 0, 0);
}

void LED_diplay_bit_off (char b)
{
  LED_clear_buffer(b);
  FastLED.show();
}

void LED_display_num_0 (char b, unsigned char LED_color_config[LED_NUM][3])
{
  char temp = 0;

  for (int i = 0; i < 12; i++)
  {
    temp = i + 12;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 12; i++)
  {
    temp = i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_1 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 8; i++)
  {
    temp = 7 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_2 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 16 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 20 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_3 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_4 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_5 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_6 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 8; i < 24; i++)
  {
    temp = i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_7 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 11 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 7 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_8 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 4 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 8 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 12 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 27 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 3 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 19 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
}

void LED_display_num_9 (char b, unsigned char LED_color_config[28][3])
{
  char temp = 0;


  for (int i = 0; i < 4; i++)
  {
    temp = 24 + i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 16; i++)
  {
    temp = 15 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
    FastLED.show();
    delay(ANIMATION_SPEED);
  }
  for (int i = 0; i < 4; i++)
  {
    temp = 23 - i;
    led_buffer[temp + (4 - b) * 28] = CRGB(LED_color_config[temp + (4 - b) * 28][0], LED_color_config[temp + (4 - b) * 28][1], LED_color_config[temp + (4 - b) * 28][2]);
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

void LED_display_dot ()
{
  led_buffer[92] = CRGB(LED_color_config[92][0] * (second % 2), LED_color_config[92][1] * (second % 2), LED_color_config[92][2] * (second % 2));
  led_buffer[93] = CRGB(LED_color_config[92][0], LED_color_config[92][1], LED_color_config[92][2]);
  led_buffer[94] = CRGB(LED_color_config[92][0] * !(second % 2), LED_color_config[92][1] * !(second % 2), LED_color_config[92][2] * !(second % 2));

  led_buffer[95] = CRGB(0, 0, 0);

  led_buffer[96] = CRGB(LED_color_config[96][0] * !(second % 2), LED_color_config[96][1] * !(second % 2), LED_color_config[96][2] * !(second % 2));
  led_buffer[97] = CRGB(LED_color_config[97][0], LED_color_config[97][1], LED_color_config[97][2]);
  led_buffer[98] = CRGB(LED_color_config[98][0] * (second % 2), LED_color_config[98][1] * (second % 2), LED_color_config[98][2] * (second % 2));
  FastLED.show();
}

void LED_display_refresh (char b, char d)
{
  static char last_data[4] = {0, 0, 0, 0};
  if (last_data[b - 1] != d)
  {
    last_data[b - 1] = d;
    LED_clear_buffer(b);
    LED_display_num(b, d);
  }
  else
  {
    LED_display_num(b, last_data[b - 1]);
  }
}

void time_display_refresh()
{
  (minute / 10) ?
  LED_display_refresh(1, minute / 10) :
  LED_diplay_bit_off(1);

  LED_display_refresh(2, minute % 10);
  LED_display_refresh(3, second / 10);
  LED_display_refresh(4, second % 10);
  //  LED_display_refresh(1, hour / 10);
  //  LED_display_refresh(2, hour % 10);
  //  LED_display_refresh(3, minute / 10);
  //  LED_display_refresh(4, minute % 10);
}

void LED_color_refresh()
{
  for (char i = 0; i < LED_NUM; i ++)
  {
    LED_color_config[i][0] = 50 * (second % 5 + 1);
    LED_color_config[i][1] = 60 * (second % 4 + 1);
    LED_color_config[i][2] = 80 * (second % 3 + 1);
  }
}

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN,  GRB>(led_buffer, LED_NUM);
  timer.setInterval(1000, repeatMe);
}

void loop() {
  timer.run();

  LED_color_refresh();

  time_display_refresh();
  LED_display_dot();
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
      if (hour > 12)
      {
        hour = 0;
      }
    }
  }
}
