#include <stdio.h>
int main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the element:");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	int ele;
	printf("Adding element:");
	scanf("%d",&ele);
	if(pos > n)
		printf("Invalid Input");
	else
	{
		for (i = n - 1; i >= pos - 1; i--)
			arr[i+1] = arr[i];
			
			arr[pos-1] = ele;
			
			printf("Array after insertion is:\n");
		
		for (i = 0; i <= n; i++)
		printf("%d\n", arr[i]);
	}
return 0;
}