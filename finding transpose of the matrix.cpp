#include<stdio.h>
#include<conio.h>
int main()
{
	int a[25][25],row,col,i,j,T[25][25];
	printf("\n enter the umber of rows and columns of matrix");
	scanf("%d%d",&row,&col);
	printf("\n enter the elements of matrix");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	    scanf("%d",&a[i][j]);
	printf("the given matrix is");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%4d",a[i][j]);
			printf("\n");
		}
		}    
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
		{
		T[i][j]=a[j][i];	
				
		}
		}
		printf("\n the transpose of the given matrix");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%4d",T[i][j]);
				printf("\n");
			}
		}
		getch();
}
