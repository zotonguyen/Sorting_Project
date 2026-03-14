#include"counting_sort.h"
#include "counting_sort.h"

void counting_Sort(int a[], int n)
{
    if (n <= 1) return;

    int minVal = a[0];
    int maxVal = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < minVal) minVal = a[i];
        if (a[i] > maxVal) maxVal = a[i];
    }

    int range = maxVal - minVal + 1;
    int* count = new int[range];

    for (int i = 0; i < range; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[a[i] - minVal]++;

    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i] > 0)
        {
            a[index] = i + minVal;
            index++;
            count[i]--;
        }
    }

    delete[] count;
}

void counting_Sort(int a[], int n, long long& comparison)
{
    comparison = 0;

    if (n <= 1) return;

    int minVal = a[0];
    int maxVal = a[0];

    for (int i = 1; i < n; i++)
    {
        comparison++;
        if (a[i] < minVal) minVal = a[i];

        comparison++;
        if (a[i] > maxVal) maxVal = a[i];
    }

    int range = maxVal - minVal + 1;
    int* count = new int[range];

    for (int i = 0; i < range; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[a[i] - minVal]++;

    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i] > 0)
        {
            a[index] = i + minVal;
            index++;
            count[i]--;
        }
    }

    delete[] count;
}