
#include <avr/io.h>       // Importing the avr/io library (as stdio.h in the normal C)
#define F_CPU 20000000      //telling the frequency, here the 20Mhz of the Resonator
#include <util/delay.h>       // Importing library for  delay (For blinking LEDs we need delay)

int main(void)
{
	DDRA = 0b00000100;       //Set Pin PA2 on PORT A as output

    while(1)
    {
		PORTA = PORTA | (0b00000100); //PA2 is 3 from left

		_delay_ms(1000);          // delay of 1 second

		PORTA=(0x00);            // Make all pins in port A low

		_delay_ms(1000);         // delay of 1 second
	}
}
