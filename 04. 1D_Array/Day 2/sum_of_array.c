// sum of array elements.
#include <stdio.h>

int main(void)
{   int col, size_of_array, sum = 0;

    printf("Please enter array size: ");
    scanf("%d", &size_of_array);

    int my_array [size_of_array];

    printf("Please enter array element: ");
    for ( col = 0; col < size_of_array; col++)
    {
        scanf("%d", &my_array[col]);
    }

    for ( col = 0; col < size_of_array; col++)
    {
        sum += my_array[col];
    }
    printf("sum of array elements is: %d\n", sum); 

    return 0;
}