#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    int mid = start + (end -start)/2;

    while (start<=end)
    {
        if (arr[mid]== key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
    
}

int main(){
    int even[7] = {2,4,6,8,10,12,14};
    int odd[6] = {3,8,11,14,16};
    int index = binarySearch(even,7,8);
    cout<<"Index of 8 is"<< index << "\n";
}