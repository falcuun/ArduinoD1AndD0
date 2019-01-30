const int LED_PIN0 = 0;
const int LED_PIN1 = 1;
const int LED_PIN2 = 2;

int ledState = LOW;
int middle_led_state = LOW;
int longer_led_state = LOW;

unsigned long previousMillis = 0;
unsigned long middle_previousMillis = 0;
unsigned long longer_previousMillis = 0;

const long interval = 1000;
const long middle_interval = 3000;
const long longer_interval = 5000;

void setup() {
  pinMode(LED_PIN0, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(LED_PIN0, ledState);
  }


  if (currentMillis - middle_previousMillis >= middle_interval)
  {
    middle_previousMillis = currentMillis;

    if (middle_led_state == LOW) {
      middle_led_state = HIGH;
    } else {
      middle_led_state = LOW;
    }
    digitalWrite(LED_PIN1, middle_led_state);
  }


  if (currentMillis - longer_previousMillis >= longer_interval)
  {
    longer_previousMillis = currentMillis;

    if (longer_led_state == LOW) {
      longer_led_state = HIGH;
    } else {
      longer_led_state = LOW;
    }
    digitalWrite(LED_PIN2, longer_led_state);
  }
}
