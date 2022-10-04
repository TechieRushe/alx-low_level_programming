#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;
	int len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2);
	s = malloc((sizeof(char) * (len)) + 1);
	if (s == NULL)
		return (NULL);


	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (i < len)
	{
		s[i] = s2[j];
		i++, j++;
	}
	return (s);
}
