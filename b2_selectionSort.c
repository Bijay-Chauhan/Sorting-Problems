//WAP to sort the array by using bubble sort....

// .........input...........
// Original array: 64 34 25 12 22 11 90 

// .........output...........
// Sorted array:   11 12 22 25 34 64 90 

#include <stdio.h>
// Function of bubble sort
void bubbleSortRecursive(int arr[], int n) {
    // Base case
    if (n == 1)
        return;
    //swaping the largest element....
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    // Recursive call.....
    bubbleSortRecursive(arr, n - 1);
}
//function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    bubbleSortRecursive(arr, n);
    printf("Sorted array:   ");
    printArray(arr, n);
    return 0;
}
