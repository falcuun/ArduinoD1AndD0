const int LED_PIN0 = 0;
const int LED_PIN1 = 1;

void setup() {
  pinMode(LED_PIN0, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
}

int ledState = LOW;
int longer_led_state = LOW;

unsigned long previousMillis = 0;
unsigned long longer_previousMillis = 0;

const long interval = 1000;
const long longer_interval = 5000;

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - longer_previousMillis >= longer_interval)
  {
    longer_previousMillis = currentMillis;

    if (longer_led_state == LOW) {
      longer_led_state = HIGH;
    } else {
      longer_led_state = LOW;
    }
    digitalWrite(LED_PIN1, longer_led_state);
  }

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(LED_PIN0, ledState);
  }



}
