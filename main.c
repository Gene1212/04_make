#include "euler.h"
#include <stdio.h>

int main()
{
	printf("It may take a while for the second function to load \n");

	int res = multiple_of(3,5);
	printf("The sum of multiples of 3 and 5 is %d \n", res);

	int result = smallest_positive(20);
	printf("The smallest positive number that is divisible by all numbers from 1 to 20 is %d \n", result); 
	
	int result2 = sumsquare_diff(100);
	printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d \n", result2);

	return 0;
}