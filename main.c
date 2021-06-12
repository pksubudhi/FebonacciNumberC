#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int GetFebonacciNumber(int, int, int);
int main(int argc, char *argv[]) {
	int n; 
	printf("Type position index: ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Febonacci Number is 0");
	}
	else
	{
		if(n==1)
		{
			printf("Febonacci Number is 1");
		}
		else
		{
		
			printf("The Febonacci Number is %d",GetFebonacciNumber(0,1, n-2));
		}
	}
	return 0;
}
int GetFebonacciNumber(int pp, int p, int x)
{
	if(x==0)
	{
		return p+pp;
	}
	else
	{
		GetFebonacciNumber(p, pp+p, x-1);
	}
}
