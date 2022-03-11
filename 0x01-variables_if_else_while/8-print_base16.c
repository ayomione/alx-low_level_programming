#include <stdio.h>

/**
 * main - print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	while (i < 48)
	{
		if (i < 10)
			putchar(1 + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		I++;
	}
	putchar(10);
	return (0);

}
