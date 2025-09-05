#include <stdio.h>
void fib(int n);
int main()
{
	int n;
	void fin(int);
	printf("\n enter the value of n");
	scanf("%d",&n);
	fib(n);
}
void fib(int n)
{
	int i,f1=0,f2=1,f3;
	for(i=0;i<=n;i++)
	{
		f3=f1+f2;
		printf("%d",f1);
		f1=f2;
		f2=f3;
	}
}
