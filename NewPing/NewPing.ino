#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	int cm = myHCSR04.ping_cm();
	Serial.println(cm);
	if (cm < 10)
	{
		digitalWrite(LED_BUILTIN, HIGH);
		delay(100);
		digitalWrite(LED_BUILTIN, LOW);
		delay(100);
	}
	else
	{
		digitalWrite(LED_BUILTIN, HIGH);
		delay(10);
		digitalWrite(LED_BUILTIN, LOW);
		delay(10);
	}
}
