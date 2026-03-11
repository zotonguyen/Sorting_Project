#ifndef radixsort_h
#define radixsort_h

int Max(int a[], int n);
void countingSort(int a[], int n, int d);
void radixsort(int a[], int n);

int Max(int a[], int n, long long &comparison);
void countingSort(int a[], int n, int d, long long &comparison);
void radixsort(int a[], int n, long long &comparison);




#endif

