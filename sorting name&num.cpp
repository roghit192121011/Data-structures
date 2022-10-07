#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int myCompare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}
void sort(const char* arr[], int n)
{
    qsort(arr, n, sizeof(const char*), myCompare);
}
int main()
{
    const char* arr[]= { "dony", "clanguage" ,"roghti", "surim", "abi abi", "babu" };
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Given array is\n");
    for (i = 0; i < n; i++)
        printf(" %s \n", arr[i]);
        sort(arr, n);
 
    printf("\nSorted array is\n");
    for (i = 0; i < n; i++)
        printf(" %s \n", arr[i]);
 
    return 0;
}