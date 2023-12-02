int red = 4;
int yellow = 3;
int green = 2;

void setup(){
	pinMode(red, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(green,  OUTPUT);
}

void loop(){
	digitalWrite(red, HIGH);
	delay(25000);
	digitalWrite(red,  LOW);

	digitalWrite(green, HIGH);
	delay(15000);
	digitalWrite(green,  LOW);

	digitalWrite(yellow, HIGH);
	delay(4000);
	digitalWrite(yellow,  LOW);
}
