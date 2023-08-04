/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "sorting.h"

int main()
{
    int arr[] = {55,87, 65, 25, 69, 14, 3, 101, 56, 5, 42, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //print The array 
    printf("The array is: \n");
    print_array(size, arr);
    //sort the array 
    cocktail_shaker_sort(size, arr);
    //print the sorted array
    printf("The sorted array is: \n");
    print_array(size, arr);
    
    return 0;
}
