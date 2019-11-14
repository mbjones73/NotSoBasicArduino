int WLED = 9;
int brightness = 0;
int fadeAmount = 5;

void  setup()
{
	Serial.begin(9600);
	pinMode(WLED, OUTPUT); 
}


void loop()
{   
	Serial.println(brightness);
	analogWrite(WLED, brightness);
	brightness = brightness + fadeAmount;
	if (brightness <= 0 || brightness >= 255)
    fadeAmount = -fadeAmount;
	delay(50);
	}