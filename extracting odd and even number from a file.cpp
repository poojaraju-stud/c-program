#include<stdio.h>
int main()
{
FILE*a1,*a2,*a3;
int number,i;
printf("enter the contents of file\n\nType-1 for end of file");
a1=fopen("one","w");
for(i=1;i<=30;i+1)
   {
	scanf("%d",&number);
	if(number==-1)break;
	putw(number,a1);
   }	
fclose(a1);
a1=fopen("one","r");
a2=fopen("two","w");
a3=fopen("three","w");
while((number=getw(a1))!=EOF)
   {
	if(number%2==0)
	putw(number,a3);
	else
	putw(number,a2);
	}	
	fclose(a1);
	fclose(a2);
	fclose(a3);
a2=fopen("two","r");
a3=fopen("three","r");
printf("\n contents of ODD numbers file \n");
while((number=getw(a2))!=EOF)
printf("%d",number);
printf("\n contents of EVEN numbers file \n");
while((number=getw(a3))!=EOF)
printf("%d",number);
fclose(a2);
fclose(a3);	
}

