#include <stdio.h>
int main()
{
    int i, j, arr[100], n, t, p, min;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        p = i;
        min = arr[i];
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                p = j;
            }
        }
        t = arr[i];
        arr[i] = arr[p];
        arr[p] = t;
    }
    printf("\n");
    printf("Array obtained by selection sort is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }
}