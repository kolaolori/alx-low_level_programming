#include <stdio.h>

/**
 * main - print alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'x'; x--)
		putchar (x);

	putchar('\n');

	return (0);
}
