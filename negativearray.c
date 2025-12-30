#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("Enter the number of element:");
	scanf("%d",&n);
	printf("Enter %d element in the array are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative array :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		printf("%d",a[i]);
		}
	}
}
