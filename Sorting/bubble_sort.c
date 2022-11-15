#include<stdio.h>
int main()
{
    int i, j, k, t, n, arr[100];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i<n-1 ;i++)
    {
        for(j=0; j<n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    printf("\n");
    printf("Bubble sorted array is : ");
    for(i=0 ;i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
}