/*	Author: zlian030
 *  Partner(s) Name: Zhangcheng Liang
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; // Configure port B's 8 pins as outputs
    PORTA = 0x00; // Initialize PORTB output to 0’s
	PORTC = 0x00; // Initialize PORTB output to 0’s
	while(1){
		PORTC = ~PINA; 
    }
	return 1;
}
