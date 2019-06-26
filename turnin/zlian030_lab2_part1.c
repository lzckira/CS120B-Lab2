/*	Author: zlian030
 *  Partner(s) Name: Zhangcheng Liang
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #1
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
    DDRA = 0x00;
    DDRB = 0xFF;
    PORTA = 0xFF;
    PORTB = 0x00;
    unsigned char tmpA = 0x00;
    while (1) {
	tmpA = PINA;
	if(tmpA == 0x01) {
	    PORTB = 0x01;
	}
	else {
	    PORTB = 0x00;
	}
    }
    return 1;
}
