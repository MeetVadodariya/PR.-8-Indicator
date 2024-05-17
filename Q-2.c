//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include <stdio.h>

int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);
    
    int array[size][size];

    printf("\nEnter array elements:\n");
    for(int i = 0; i < size; i++) 
	{
        for(int j = 0; j < size; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int (*ptr)[size] = array;

    printf("\nCubes of all elements:\n");
    for(int i = 0; i < size; i++) 
	{
        for(int j = 0; j < size; j++) 
		{
            printf("%d ", cube(*(*(ptr + i) + j)));
        }
        printf("\n");
    }

}
