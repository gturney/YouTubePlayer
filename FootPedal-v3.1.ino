#include "ClickButton.h"

const int ledPin = 13;        // the LED
const int buttonPin1 = 2;      // the Button

ClickButton button1(buttonPin1, LOW, CLICKBTN_PULLUP);



void setup(){
  Serial.begin(9600);
  // Setup button timers (all in milliseconds / ms)
  // (These are default if not set, but changeable for convenience)
  button1.debounceTime   = 20;   // Debounce timer in ms
  button1.multiclickTime = 250;  // Time limit for multi clicks
  button1.longClickTime  = 1000; // time until "held-down clicks" register
  button1.Update();
}

void loop(){
  button1.Update();
  if (button1.clicks == 1) {
    Serial.println("rewind");
  }
    if (button1.clicks == 2) {
    Serial.println("playpause");
  }
  if (button1.clicks == 3) {
    Serial.println("forward");
  }
    if (button1.clicks == -1) {
    Serial.println("reset");
  }
  if (button1.clicks == 5) {
    Serial.println("play re43_gf4");
  }
}
