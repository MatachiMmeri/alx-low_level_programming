#include <stdio.h>
/**
 * main -to print size of data type
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu", sizeof(a));
	printf("Size of an int: %lu", sizeof(b));
	printf("Size of a long int: %lu", sizeof(c));
	printf("Size of a long long int: %lu", sizeof(d));
	printf("Size of a float: %lu", sizeof(e));
	return (0);
}
