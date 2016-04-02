/*
 * dynarray.c
 *
 *  Created on: 25 mar 2016
 *      Author: mauro
 */

#include <stdio.h>
#include "dynarray.h"

void doublingtest(float *a, int *n, int *d)
{
	if (*n == *d)
	{
		float doubledarray[2*(*d)];
		for (int i = 0; i < *n; i++)
			doubledarray[i] = a[i];
		a = doubledarray;
		*d = 2 * (*d);
		printf("\nho raddoppiato il vettore\n");
	}
}

void halvingtest(float *a, int *n, int *d)
{
	if (((*d) > 1) && ((*n) == (*d)/4))
	{
		float halvedarray[(*d)/2];
		for (int i = 0; i < *n; i++)
			halvedarray[i] = a[i];
		a = halvedarray;
		*d = (*d) / 2;
	}
}
