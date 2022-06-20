#define MotorDigitalPin 8
#define MotorAnalogPin 9

#define MotorSpeedSlow 150
#define MotorSpeedFast 255

void setup()
{
	pinMode(MotorDigitalPin, OUTPUT);
	pinMode(MotorAnalogPin, OUTPUT);
}

void loop()
{
	digitalWrite(MotorDigitalPin, LOW);
	
	analogWrite(MotorAnalogPin, MotorSpeedSlow);
	delay(1000);
	
	analogWrite(MotorAnalogPin, MotorSpeedFast);
	delay(1000);
}
