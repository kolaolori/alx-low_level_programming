#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10x
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char x10;

	while (count++ <= 9)
	{
		for  (x10 = 'a'; x10 <= 'z'; x10++)
		_putchar(x10);
		_putchar('\n');
	}
}
