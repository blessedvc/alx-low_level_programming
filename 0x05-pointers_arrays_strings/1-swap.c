#include "main.h"

/**
* swap_int - swaps the values of the two integers.
* @a: frist integer.
* @b: second integerr.
* Return: no return.
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
