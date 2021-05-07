#include <iostream>

void inserstionSort(int *arr, int size)
{
    int i;
    for (int j = 1; j < size; j++)         //traversing over each element
    {
        int key = arr[j];                         
        i = j - 1;
        while (i >= 0 && arr[i] > key)      //shifting elements to right
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

int main()
{
    int arr[10] = {14, 3, 20, 10, 0, 99, 66, 53, 1, 7}; //array with size
    inserstionSort(arr, 10);                            //calling insertionSort()
    for (int i = 0; i < 10; i++)                        //displaying sorted elements
    {                                                   //
        std::cout << arr[i] << "\t";                    //
    }                                                   //
    std::cout << std::endl;

    return 0;
}