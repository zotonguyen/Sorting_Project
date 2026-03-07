# include <iostream>
using namespace std;
#include "quick_sort.h"

int Partition( int a[], int first, int last) {
    int pivot = a[first];
    int lastS1 = first;
    int firstUnknow = first + 1;
    while (firstUnknow <= last) {
        if (a[firstUnknow] <= pivot) {
            lastS1++;
            swap (a[lastS1], a[firstUnknow]);

        }
        
            firstUnknow++;
        
    }

    swap (a[first], a[lastS1]);
    return lastS1;

}

void quick_sort (int a[], int first, int last) {
    if (first >= last) return;
    int pivotIndex = Partition (a, first, last);
    quick_sort (a, first, pivotIndex - 1);
    quick_sort (a, pivotIndex + 1, last);
}

int Partition( int a[], int first, int last, long long& comparison) {
    int pivot = a[first];
    int lastS1 = first;
    int firstUnknow = first + 1;
    while (++comparison && firstUnknow <= last) {
        if (a[firstUnknow] <= pivot) {
            lastS1++;
            swap (a[lastS1], a[firstUnknow]);

        }
        
            firstUnknow++;
        
    }

    swap (a[first], a[lastS1]);
    return lastS1;

}

void quick_sort (int a[], int first, int last, long long&& comparison) {
    if (first >= last) return;
    int pivotIndex = Partition (a, first, last, comparison);
    quick_sort (a, first, pivotIndex - 1);
    quick_sort (a, pivotIndex + 1, last);
}

int main (){
    int n = 5;
    int a[n] = {0,2,1,4,3}; 
    for (int i = 0; i < 5; i++) {
        quick_sort (a, 0, 4);
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
