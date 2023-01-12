#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024
 * Return: 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((1 % 3) == 0 || (1 % 5) == 0)
			sum += i;
	}

	printf("&d\n", sum);

	return (0);
}
