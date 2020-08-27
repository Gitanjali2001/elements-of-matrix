#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[20][20];
	int i,j,row,col;
	int sum=0;
	printf("Enter the number of rows and columns \n");
	scanf("%d%d",&row,&col);
	printf("Enter the elements of the matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The matrix \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				sum=sum+mat[i][j];
			}
		}
	}
	printf("The sum of diagonal elements of square matrix=%d \n",sum);
	return 0;
}
