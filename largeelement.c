#include<stdio.h>
int main()
{
	int a[10][10],row,column,i,j;
	int large;
	printf("Enter the number of row and column :");
	scanf("%d %d",&row ,&column);
	printf("Enter element of 2D array :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	large=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(a[i][j]>large)
			{
				large=a[i][j];
			}
		}
	}
	printf("Large number in 2D array=%d",large);
}
