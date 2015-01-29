

#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>

#define LED1 25
#define LED2 24
#define LED3 23
#define LED4 22
#define LED5 21
#define LED6 30
#define LED7 14
#define LED8 13
#define LED9 12

#define MS 25

void switchLed(int led);

int main(int argc, char *argv[]) {
	int i,count;

	if(argc <= 1) {
		count = 0;
	} else {
		sscanf(argv[1],"%d",&count);
	}


	wiringPiSetup();
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(LED3, OUTPUT);
	pinMode(LED4, OUTPUT);
	pinMode(LED5, OUTPUT);
	pinMode(LED6, OUTPUT);
	pinMode(LED7, OUTPUT);
	pinMode(LED8, OUTPUT);
	pinMode(LED9, OUTPUT);

	for(i = 0; i < count; i++) {
		switchLed(LED1);
		delay(MS);
		switchLed(LED2);
		delay(MS);
		switchLed(LED3);
		delay(MS);
		switchLed(LED4);
		delay(MS);
		switchLed(LED5);
		delay(MS);
		switchLed(LED6);
		delay(MS);
		switchLed(LED7);
		delay(MS);
		switchLed(LED8);
		delay(MS);
		switchLed(LED9);
		delay(MS);
	}

	return 0;
}

void switchLed(int led) {
	if(digitalRead(led) == 0) {
		digitalWrite(led, HIGH);
	} else {
		digitalWrite(led, LOW);
	}
}
