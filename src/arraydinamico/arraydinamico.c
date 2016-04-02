/*
 * arraydinamico.c
 *
 *  Created on: 25 mar 2016
 *      Author: mauro
 */

#include <stdio.h>
#include <stdlib.h>
#include "dynarray.h"

#define INITIAL_DIM 5

int main(void)
{
	printf("test array dinamico");

	float array[INITIAL_DIM] = {0}, *temparray;
	int dim = INITIAL_DIM, num = 0; // d è la taglia del vettore, n il numero di elementi contenuti

	printf("\n\nsaranno letti degli elementi da tastiera ");
	printf("ed inseriti in un array di 5 elementi");

	int final_dim = 0;

	// stampa vettore
	printf("\n\nstampa vettore inizializzato a 0:\n");
	for (int i = 0; i < dim; i++)
			if (i == 0)
				printf("{%.2f, ", array[i]);
			else if (i == (dim-1))
				printf("%.2f}\n", array[i]);
			else
				printf("%.2f, ", array[i]);

	printf("\n\ninserire il numero di elementi da leggere: ");
	scanf("%d", &final_dim);

	// lettura vettore
	float input = 0.;
	do
	{
		temparray = array;
		doublingtest(temparray, &num, &dim);
		// array = temparray;
		printf("\ninserire l'elemento #%d: ", num+1);
		scanf("%f", &input);
		printf("il valore letto e' %.2f\n", input);
		temparray[num] = input;
		num++;
	} while (num < final_dim);

	// stampa vettore
	printf("\n\nil vettore e' stato letto e adesso sara' stampato\n");
	for (int i = 0; i < dim; i++)
		if (i == 0)
			printf("{%.2f, ", temparray[i]);
		else if (i == (dim-1))
			printf("%.2f}\n", temparray[i]);
		else
			printf("%.2f, ", temparray[i]);

	printf("\n\nfine programma\n");

	exit(EXIT_SUCCESS);
}
