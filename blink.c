#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL
int main(void){
	DDRB=DDRB|0b100000;
	PORTB=0b100000;
	while(1){
			PORTB=PORTB^0b100000;
			_delay_ms(1000);
	}
}
