#include <stdlib.h>
#include <time.h>
/**
 * main-return the signe of a random number .
 * Return:0 exit with 0 if no errors.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("the number %d is positive\n", n);
else if (n < 0)
	printf("the number %d is negative\n", n);
else
	printf("the number is \n", n);

	return (0);
}
