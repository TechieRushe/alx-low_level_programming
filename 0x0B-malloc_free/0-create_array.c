#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: the value
 *Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(s + i) = c;
			i++;
		}
		return (s);
	}

	free(s);
}
