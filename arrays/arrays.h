/**
 * @file	arrays.h
 * @brief	Funkcije za upravljanje serijskim portom
 * @author	Aleksandra
 * @date	16-05-2021
 */

#include <stdlib.h>
#include <stdint.h>

/**
 * Opis: Funkcija Element izračunava vrednost n-tog člana geometrijskog niza
 * opisanog pomoću početne vrednosti niza i odnosa susednih elemenata.
 *
 * Povratna vrednost: vrednost n-tog člana geometrijskog niza
 */
int16_t Element(int16_t first_element, int16_t ratio, int16_t n);

/**
 * Opis: Funkcija Sum izračunava sumu prvih n članova geometrijskog niza
 * opisanog pomoću početne vrednosti niza i odnosa, na osnovu parametra mode.
 * Ukoliko mode ima vrednost ITERATIVE, vrednost sume je potrebno odrediti
 * iteratitvno (sumom svih elemenata do n-tog), dok u slučaju vrednosti
 * FORMULA, potrebno je odrediti sumu po odgovarajućoj formuli. ITERATIVE
 * i FORMULA su vrednosti definisane pomoću makro konstante.
 *
 * Povratna vrednost: vrednost sume prvih n članova geometrijskog niza
 */
void Sum(int16_t first_element, int16_t ratio, int16_t n, int8_t mode);
