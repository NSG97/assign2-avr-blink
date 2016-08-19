#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL
int main(void){
	DDRB=DDRB|0x20;
	PORTB=0x20;
	while(1){
			PORTB=PORTB^0x20;
			_delay_ms(500);
	}
}
