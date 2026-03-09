/*
Hint for students

The program has duplicate logic in two functions.
Refactor the code to avoid repetition.
*/
#include <stdio.h>

int findMax(int arr[], int n)
{
    int i;
    int max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMin(int arr[], int n)
{
    int i;
    int min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[5] = {60, 70, 80, 90, 50};

    printf("Max: %d\n", findMax(arr, 5));
    printf("Min: %d\n", findMin(arr, 5));

    return 0;
}
