#include<stdio.h>
int main(int argc, char **argv)
{
	int n, i,fact=1;
	printf("Enter a number for which you want to find the factorial:: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("Factorial of %d is :: %d\n", n,fact);
	return 0;
}
