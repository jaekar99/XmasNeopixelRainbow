// I updated the WS2812 library and found a more
// detailed more effects 
// Thank you kitesurfer1404 for he libray and base code
// This is all his work ouside of some small details

#include <WS2812FX.h>

#define LED_COUNT 30
#define LED_PIN 6

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ws2812fx.init();
  ws2812fx.setBrightness(200);
  ws2812fx.setSpeed(200);
  ws2812fx.setMode(FX_MODE_RAINBOW_CYCLE);
  ws2812fx.start();
}

void loop() {
  ws2812fx.service();
}
