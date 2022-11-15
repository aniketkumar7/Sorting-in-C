#include <stdio.h>

void merge(int a[], int begin, int end, int mid)
{
    int i, j, k, c[50];
    i = begin;
    k = begin;
    j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = a[i++];
    }
    while (j <= end)
    {
        c[k++] = a[j++];
    }
    for (i = begin; i < k; i++)
    {
        a[i] = c[i];
    }
}

 void mergesort(int a[], int begin, int end)
{
    int mid;
    if (begin < end)
    {
        mid = (begin + end) / 2;
        mergesort(a, begin, mid);
        mergesort(a, mid + 1, end);
        merge(a, begin, end, mid);
    }
}


int main()
{
    int n, a[50], i, begin, end;
    printf("Enter the size of the array : \t");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the elemets of the array : ");
        scanf("%d", &a[i]);
    }

    begin = 0;
    end = n - 1;
    mergesort(a, begin, end);

    for (i = 0; i < n; i++)
    {
        printf("Array obtained after sorting is : ");
        printf("  %d", a[i]);
        printf("\n");
    }
    return 0;
}