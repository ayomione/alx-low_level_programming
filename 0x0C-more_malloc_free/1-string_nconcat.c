#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int Is1, Is2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (Is1 = 0; s1[Is1] != '\0'; Is1++)
		;
	for (Is2 = 0; s2[Is2] != '\0'; Is2++)
		;
	if (n > Is2)
		n = Is2;

	lsout = Is1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < Is1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - Is1];
	sout[i] = '\0';

	return (sout);
}

