#include "main.h"
/**
 * _islower - check if c is lowercase or no
 * @c: is the char that will be checked
 * Return: 1 if it is , 0 otherwise
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);

}
