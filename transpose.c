#include<stdio.h>
int main()
{
	int a[10][10],t[10][10];
	int row,col,i,j;
	printf("Enter number of row and column :");
	scanf("%d %d",&row ,&col);
	printf("Enter element of the matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	//transpose logic
	printf("Transpose of the matrix: \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
}
