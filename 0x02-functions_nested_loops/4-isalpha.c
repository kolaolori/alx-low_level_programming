#include "main.h"

/**
 * _isalpha - checks for alpha
 * @c: the char to be checked
 * Return: 1 if char is lower or upper otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'));
}
