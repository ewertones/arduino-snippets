// Define the pins for the red, yellow and green lights
#define RED_PIN 10
#define YELLOW_PIN 12
#define GREEN_PIN 8

// Define the duration of each light in milliseconds
#define RED_DELAY 6000
#define GREEN_DELAY 3000
#define YELLOW_DELAY 1000

// Initialize the pin modes for the lights
void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

// Function to turn on a light for a specified duration
void turn_on_light(int pin, int duration)
{
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
}

// Main loop to turn on the lights in sequence
void loop()
{
  turn_on_light(RED_PIN, RED_DELAY);
  turn_on_light(GREEN_PIN, GREEN_DELAY);
  turn_on_light(YELLOW_PIN, YELLOW_DELAY);
}
