#include <stdio.h>

/**
 * main - compute size of various data
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char acharacter;
	int ainterger;
	long along;
	long long doublelong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(ainterger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(doublelong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
