#include<stdio.h>
const int r=4;
const int c=4;

void printDiagonalsum(int matrix[r][c]) 
{
	int R = 0, L = 0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
				R +=matrix[i][j];
			if((i+j)==(c-1))
				L +=matrix[i][j];	
		}
	}
printf("Right Diagonal matrix:%d",R);
printf("\nLeft Daigonal matrix:%d",L);
}
int main()
{
	int a[][4] = {{1, 2, 3, 5},
				{5, 6, 8, 8},
				{1, 2, 3, 4},
				{5, 6, 7, 8}};
	printDiagonalsum(a);
	return 0;
}