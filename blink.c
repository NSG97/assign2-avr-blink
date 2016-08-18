#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL
int main(void){
	DDRB=DDRB|100000;
	while(1){
			PORTB=PORTB^100000;
			_delay_ms(500);
	}
}
