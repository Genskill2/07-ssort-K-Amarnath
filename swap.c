#include <stdio.h>

void swap_max(int a[], int x, int y) 
{
    int d = a[y], e = 0;
    for (int i = y; i < x; i++) 
    {
        if (a[i] > d) 
        {
            d = a[i];
            e = i;
        }
    }
    if (d != a[y]) 
    {
        a[e] = a[y];
        a[y] = d;
    }
}

void ssort(int p[], int z) 
{
    for (int i = 0; i < z; i++) 
    {
        swap_max(p, z, i);
    }
}
