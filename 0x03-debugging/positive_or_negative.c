#include "main.h"
/**
 * positive_or_negative - checks if the integer is positive or negative
 * @i: is the integer beign checked
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);

}
