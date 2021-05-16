#include <stdint.h>
#include <stdlib.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "../timer0/timer0.h"
#include "../usart/usart.h"
#include "pin.h"
#include "../arrays/arrays.h"

int main()
{
	usartInit(9600);
	timer0InteruptInit();
	int8_t str[10];
	int8_t broj;

	while(1)
	{
		usartPutString("Unesite broj na cijoj poziciji racunate:\r\n");
		usartPutString(str);

		while(!usartAvailable())
			;
		timer0DelayMs(100);

		broj = usartParseInt();
		sprintf(str, "Uneli ste broj: %d\r\n", broj);
		usartPutString(str);

	}
	return 0;
}
