#ifndef SORTING_INCLUDED
#define SORTING_INCLUDED
#include <stdbool.h>
// swap funtion
// takes the adderesses of the variables as arguments
void swap(int *a, int*b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// array printing funtion
// takes array "size" and array pointer "arr" as arguments

void print_array(int size, int *arr)
{
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// sorting funtion that impliments cocktail shaker algorithm
// time complexity O(n^2)
void cocktail_shaker_sort(int size, int *arr)
{
    int i,iStart=0, iEnd = size-1;
    bool swapped = false;
    while(iStart<iEnd && !swapped)
    {
        swapped = true;
        for(i = iStart; i< iEnd; i++)
            if(arr[i] > arr[i+1])
            {
                swap(arr+i,arr+i+1);
                swapped = false;
            }
        if(swapped)
            break;
        iStart++;
        swapped = true;
        
        for(i = iEnd-1; i>= iStart; i--)
            if(arr[i] < arr[i-1])
            {
                swap(arr+i, arr+i-1);
                swapped = false;
            }
    }
}
#endif