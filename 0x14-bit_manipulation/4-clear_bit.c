#include "main.h"

/**
 *clear_bit - sets the value of a given bit to 0
 *@n: pointer to the number to change
 *@index: The index to set the value at - indices start at 0.
 *Return: If an error occurs - -1.
 *Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

		return (1);
}
