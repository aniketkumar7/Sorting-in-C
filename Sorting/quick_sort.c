#include<stdio.h>

void Q(int a[], int b, int e)
{
    int k, l, r, t;
    l = b;
    r =e;
    k =b;
    if(l>= r)
    return;
    while (1)
    {
        while(a[k] <= a[r] && k != r)
        r = r - 1;
        if(k == r)
        break;
        if(a[k] > a[r])
        {
            t = a[k];
            a[k] = a[r];
            a[r] = t;
            k = r;
        }
        while(a[k] >= a[l] && k != l)
        l = l + 1;
        if(k == l)
        break;
        if(a[k] < a[l])
        {
            t = a [k];
            a[k] = a[l];
            a[l] = t;
            k = l;
        }
    }
    Q(a, b, k-1);
    Q(a, k+1, e);
    
}

int main()
{ 
   int n, a[50], i, b, e;
   printf("Enter the size of the array : \t");
   scanf("%d", &n);

   for( i=0; i<n; i++)
   {
    printf("Enter the elemets of the array : ");
    scanf("%d",&a[i]);
   }

   b = 0;
   e = n-1;
   Q(a, b, e);  
    
   for(i=0; i<n; i++)
   {
    printf("Array obtained after sorting is :\t ");
    printf("\t%d", a[i]);
   }
   return 0;
}