#include "main.h"

/**
 * _isalpha - checks for alpha
 * @c: the char to be checked
 * Return: 1 if char is lower or upper otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
