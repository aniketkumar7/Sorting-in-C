#include <stdio.h>
int main()
{
    int n, a[20], t, i, j;
    printf("Enter the size of the array :\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of array :\t");
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        t = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > t)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = t;
    }
    for (i = 0; i < n; i++)
    {
        printf("Array obtained after Insertion Sort is : %d \t", a[i]);
        printf("\n");
    }
}