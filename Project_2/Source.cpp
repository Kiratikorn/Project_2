#include<stdio.h>
int main()
{
	int GCD = 1;
	int a, b;
	int i = 2;
	printf("Enter 2 Numbers:");
	scanf_s("%d %d", &a, &b);
	printf("GCD of %d and %d is ", a, b);
	while (1)
	{
		while (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			GCD *= i;
		}
		if (i > a || i > b)
		{
			break;
		}
		i++;
	}
	printf("%d", GCD);
	return 0;
}