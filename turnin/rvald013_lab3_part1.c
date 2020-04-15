/*	Author: Ryan Valdeavilla
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
unsigned char counter;
int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
	counter = 0;
	for(unsigned i = 0; i < 8; ++i){
		if(((PINA >> i) & 0x01) == 0x01){//redundant
			counter++;
		}
		if(((PINB >> i) & 0x01) == 0x01){
			counter++;
		}
	}
//	counter = 15;
	PORTC = counter;
    }
    return 1;
}
