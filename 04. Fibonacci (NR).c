#include<stdio.h>
int main()
{
	int a,i,d=0;
	printf("Enter a limit to find the fibonacci :");
	scanf("%d",&a);
	int b=0;
	int c=1;
	for (i=0;i<a;i++)
	{
		printf("\n%d",d);
		b=c;
		c=d;
		d=b+c;
	}
}
