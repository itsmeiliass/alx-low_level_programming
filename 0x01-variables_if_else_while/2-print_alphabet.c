#include <stdio.h>
/**
 * main-print the alphabet
 * Return: 0 exit with code 0 if no errors
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
