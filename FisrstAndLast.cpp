#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;

int firstOcc(int arr[],int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
            // return rightMost;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;    

}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int arr[8] = {0,0,1,1,2,2,2,2};
    int arr2[5] = {1,2,3,3,5};
    cout << "Fist occurrence of 3 is  " << firstOcc(arr, 8, 2) << "\n";

    cout << "Last occurrence of 3 is at index " << lastOcc(arr, 8, 2) << "\n";
}