#include "main.h"

/**
 * _isdigit - check if c is digit
 *
 * @c: input for alphabet
 *
 * Return: 1 if its digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c < 58)
	return (1);
else
	return (0);
}
