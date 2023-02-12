// Define the pin connected to the potentiometer
#define POTENTIOMETER_PIN A0

// Initialize the variables to store the potentiometer reading and voltage
int potentiometerReading = 0;
float potentiometerVoltage = 0;

void setup()
{
    // Start serial communication at 9600 baud rate
    Serial.begin(9600);
}

void loop()
{
    // Read the analog input from the potentiometer
    potentiometerReading = analogRead(POTENTIOMETER_PIN);

    // Convert the potentiometer reading to voltage
    potentiometerVoltage = potentiometerReading * (5.0 / 1023);

    // Print the calculated voltage to the serial monitor
    Serial.println("Potentiometer voltage (V):");
    Serial.println(potentiometerVoltage);

    // Print the raw potentiometer reading to the serial monitor
    Serial.println("Potentiometer reading (bit):");
    Serial.println(potentiometerReading);

    delay(500);
}