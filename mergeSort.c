#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void mergeSort( int *arr1, int size1, int *arr2, int size2 )
{
    printf("Test");
}

int main( int argc, char * argv[] )
{
    int arr1[] = { 1, 5, 9, 10, 15, 20 };
    int arr2[] = { 2, 3, 8, 13 };

    mergeSort( arr1, 6, arr2, 4 );

    for( i = 0 ; i < 6; i++ )
    {
        printf( "%d\t", arr1[i] );
    }
    for( i = 0; i < 4; i++ )
    {
        printf( "%d\t", arr1[i] );
    }
    printf("\n"):
}
