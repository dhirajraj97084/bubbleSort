#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[7] = {2, 6, 4, 3, 9, 12, 0};

    cout << "your Original array is:" << endl;
    printArray(arr, 7);

    

    cout << "your Sorted array is:" << endl;
    bubbleSort(arr, 7);
    printArray(arr, 7);
}