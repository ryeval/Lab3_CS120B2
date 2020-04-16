/*	Author: Ryan Valdeavilla
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
unsigned char tmpA1;
unsigned char tmpA2;
//unsigned char counter;
int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
//	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
//	counter = 0;
	tmpA1 = 0;
	tmpA2 = 0;
	tmpA1 = PINA >> 4;
	tmpA2 = PINA << 4;
	PORTB = tmpA1 | tmpA2;
    }
    return 1;
}

