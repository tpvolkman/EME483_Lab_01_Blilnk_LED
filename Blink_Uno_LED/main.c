/*
 *	Blink_Uno_LED.c
 * 
 *	Author: Professor Volkman
 *  Description: This application blinks the LED on the UNO Development Board
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0x20;				// (1 << DDB5)

	while (1)
	{
		PORTB ^= 0x20;			// (1<<PORTB5);
		_delay_ms(1000);
	}
}

