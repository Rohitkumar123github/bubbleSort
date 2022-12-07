/*BUBBLE SORTING
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
 if they are in the wrong order. This algorithm is not suitable for large data sets
 as its average and worst case time complexity is quite high.

 definition in simple terms-har i(th)round main i(th) lArgest element ko uske right place pr paucha dete hai..

 important points
 1.condition for i=size-1 and j=size-i-1



 #time complexity-O(n^2)
 #space complexity-O(1)



 */

// C++ program for implementation of Bubble sort

#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) // round ko bta raha hai ki konsa round ka pass hai ...

    // n-1 Last i elements are already in place
    //
    {
        for (j = 0; j < n - i - 1; j++) // har round ke liye sare adjacent elements ko compare kr
        {
            if (arr[j] > arr[j + 1]) // n-i-1 qki har rounf ke bad end mai maximum element a jayega
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

    // Function to print an array
    void printArray(int arr[], int size)
    {
        int i;
        for (i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Driver code
    int main()
    {
        int arr[] = {5, 1, 4, 2, 8};
        int N = sizeof(arr) / sizeof(arr[0]);
        printArray(arr, N);
        // for getting size of the array(eg if array 5*4=20/4=5(N))
        bubbleSort(arr, N);
        cout << "Sorted array: \n";
        printArray(arr, N);
        return 0;
    }