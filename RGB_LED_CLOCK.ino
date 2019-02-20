#include "FastLED.h"
#include <SimpleTimer.h>
#include <DS3231.h>
// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);
Time ds3231;

unsigned char hh = 0, mm = 0, ss = 0;

SimpleTimer timer;

char half_sec_flag = 0;

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
  led_buffer[92] = CRGB(LED_color_config[92][0] * half_sec_flag, LED_color_config[92][1] * half_sec_flag, LED_color_config[92][2] * half_sec_flag);
  led_buffer[93] = CRGB(LED_color_config[92][0], LED_color_config[92][1], LED_color_config[92][2]);
  led_buffer[94] = CRGB(LED_color_config[92][0] * !half_sec_flag, LED_color_config[92][1] * !half_sec_flag, LED_color_config[92][2] * !half_sec_flag);

  led_buffer[95] = CRGB(0, 0, 0);

  led_buffer[96] = CRGB(LED_color_config[96][0] * !half_sec_flag, LED_color_config[96][1] * !half_sec_flag, LED_color_config[96][2] * !half_sec_flag);
  led_buffer[97] = CRGB(LED_color_config[97][0], LED_color_config[97][1], LED_color_config[97][2]);
  led_buffer[98] = CRGB(LED_color_config[98][0] * half_sec_flag, LED_color_config[98][1] * half_sec_flag, LED_color_config[98][2] * half_sec_flag);
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
  (hh / 10) ?
  LED_display_refresh(1, hh / 10) :
  LED_diplay_bit_off(1);

  LED_display_refresh(2, hh % 10);
  LED_display_refresh(3, mm / 10);
  LED_display_refresh(4, mm % 10);
  LED_display_dot();
}

void LED_color_refresh()
{
  for (char i = 0; i < LED_NUM; i ++)
  {
    LED_color_config[i][0] = 50 * (ss % 5 + 1);
    LED_color_config[i][1] = 60 * (ss % 4 + 1);
    LED_color_config[i][2] = 80 * (ss % 3 + 1);
  }
}

void time_set()
{
  if (Serial.available() > 0)
  {
    String cmd = Serial.readString();
    int data = 0;
    switch (cmd[0])
    {
      case 'h':
        data = (cmd[1] - '0') * 10 + (cmd[2] - '0');
        rtc.setTime(data, mm, ss);
        Serial.print("Hour set to ");
        Serial.println(data);
        break;

      case 'm':
        data = (cmd[1] - '0') * 10 + (cmd[2] - '0');
        rtc.setTime(hh, data, ss);
        Serial.print("Minute set to ");
        Serial.println(data);
        break;

      case 's':
        data = (cmd[1] - '0') * 10 + (cmd[2] - '0');
        rtc.setTime(hh, mm, data);
        Serial.print("Second set to ");
        Serial.println(data);
        break;
    }
  }
}

void get_rtc_time ()
{
  (ds3231.hour > 12) ?
  hh = ds3231.hour - 12 :
       hh = ds3231.hour;
  mm = ds3231.min;
  ss = ds3231.sec;
}

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN,  GRB>(led_buffer, LED_NUM);
  timer.setInterval(250, repeatMe);
  // Initialize the rtc object
  rtc.begin();
  Serial.begin(9600);
}

void loop() {
  timer.run();
  ds3231 = rtc.getTime();
  get_rtc_time();
  LED_color_refresh();
  time_display_refresh();
  time_set();
}

void repeatMe() {
  static char cnt = 0;
  half_sec_flag = !half_sec_flag;
  if (cnt++ == 4)
  {
    cnt = 0;
    Serial.println("Please enter 'h ,m or s + xx' to set Hour/Min/Sec");
  }
}
