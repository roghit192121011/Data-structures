#include<stdio.h>
int main()
{
	int a,i,b;
	printf("How many numbers you wish to enter : ");
	scanf("%d",&a);
	printf("\nEnter the numbers accordingly :\n");
	for (i=0;i<a;i++)
	{
		scanf("%d",&b);
		if (b%2==0)
		{
			printf("EVEN NUMBER\n");
		}
		else
		{
			printf("ODD NUMBER\n");
		}
	}
}
