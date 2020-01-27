#include <stdio.h>

int BinarySearch(int a[], int x, int l, int n)
{
    while (l <= n)
    {
        if (n >= l)
        {
            int mid = l + (n - l) / 2;

            if (a[mid] == x)
            {
                return 1;
            }

            else if (a[mid] > x)
            {
                n=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    }

    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int l = 0;
    int x = 2;
    int n = sizeof(a) / sizeof(a[0]);
    if (BinarySearch(a, x, l, n) == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}