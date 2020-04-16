/*	Author: Ryan Valdeavilla
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #2
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
//	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
	counter = 0;
	if(PINA >= 0x0D){
		counter = 0x3F;
	}
	else if(PINA >= 0x0A){
		counter = 0x3E;
	}
	else if(PINA >= 0x07){
		counter = 0x3C;
	}
	else if(PINA >= 0x05){
		counter = 0x38;
	}
	else if(PINA >= 0x03){
		counter = 0x70;
	}
	else if(PINA >= 0x01){
		counter = 0x60;
	}
	else{
		counter = 0x40;
	}
	PORTC = counter;
	
    }
    return 1;
}

