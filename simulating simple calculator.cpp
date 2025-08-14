#include<stdio.h>
#include<conio.h>
int main()
{
	float num1,num2,result;
	char op;
	printf("Type your expression(num1 op num2):");
	scanf("%f%c%f",&num1,&op,&num2);
	switch(op)
	{
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
		case '*':
			result=num1*num2;
			break;
		case'/':
			if(num2==0)
			{
				printf("\ndivision by zero error");
			}
			else
			{
				result=num1/num2;
		    }
		break;
		default:
			printf("invalid operator");
	}
	printf("\n%2f%c%.2f=%.2f",num1,op,num2,result);
}
