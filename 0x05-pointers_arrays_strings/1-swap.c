#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values
 *@a : pointer
 *@b : pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
