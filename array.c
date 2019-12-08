#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int* rotLeft(int a_count, int* a, int d, int* result_count) 
{
    int * temp;
    int i;
    temp = (int*)malloc(sizeof(int)*a_count );
    printf("a_count %d d %d\n", a_count, d );

    for ( i = 0 ; i < a_count - d; i++)
    {
        temp[i] = a[d+i];
        printf("temp[%d] %d a[%d] %d\t",i, temp[i], d+i, a[d+i]);
    }
    printf("\n");
    for ( i = 0;i < d; i++)
    {
        temp[a_count-d+i] = a[i];
        printf("temp[%d] %d a[%d] %d\t",a_count-d+i, temp[a_count-d+i], i, a[i]);
    } 
    printf("\n");
    for ( i = 0 ; i < a_count; i++)
    {
        printf("%d\t",temp[i]);
    }
    printf("\n");
}

int main( int argc, char *argv[])
{
    int a[5] = {1,2,3,4,5};
    int result;
    rotLeft( 5, a, 4, &result );
}



