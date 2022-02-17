#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

long long GCD(long long x, long long y)
{
	while (x % y)
	{
		long long tmp = y;
		y = x % y;
		x = tmp;
	}

	return y;
}

int main()
{
	system("title GCD Calculator - Euclidean algorithm");

	long long num1, num2;

	while (1) {
		printf("Enter Two Nums: ");
		scanf("%lld %lld", &num1, &num2);

		system("cls");

		long long result;

		num1 >= num2 ? (result = GCD(num1, num2)) : (result = GCD(num2, num1));

		printf("\nGCD: %lld\n\n\n\n", result);
	}
}