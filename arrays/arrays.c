/**
 * @file	arrays.c
 * @brief	Funkcije za upravljanje serijskim portom
 * @author	Aleksandra
 * @date	16-05-2021
 */

#include <stdlib.h>
#include <avr/io.h>
#include <math.h>

int16_t Element(int16_t first_element, int16_t ratio, int16_t n)
{
	int16_t a = first_element;
	int16_t q = ratio;
	int16_t b = n;

	while(b != 0)
	{
		b = a * q^(b - 1);
	}
	return b;
}

void Sum(int16_t first_element, int16_t ratio, int16_t n, int8_t mode)
{
	int16_t suma = 0;

	int16_t a = first_element;
	int16_t q = ratio;
	int16_t b = n;

	suma = a * (q^(b - 1) / (q - 1));
}
