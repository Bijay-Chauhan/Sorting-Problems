//code of bubbleSort, selection sort and insertion sort.....
// Sorting problem

// ..........input...................
// Enter a number you want to create a list: 7
// Enter 1 list: 2
// Enter 2 list: 4
// Enter 3 list: 1
// Enter 4 list: 15
// Enter 5 list: 9
// Enter 6 list: 18
// Enter 7 list: 3
// The array list is : 2	 4	 1	 15	 9	 18	 3	 
// 1. for bubble sort.
// 2. for selection sort.
// 3. for insertion sort.
// Enter your choice: 3
// .................output..........................
// The array list is : 1	 2	 3	 4	 9	 15	 18	 


#include <stdio.h>

int printList(int a[], int n);
int printList(int a[], int n);
int bubbleSort(int [], int n);
int selectionSort(int a[], int n);
int insertionSort(int a[], int n);

int main() {
    printf("Sorting problem");
    int n;
    printf("\nEnter a number you want to create a list: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("\nEnter %d list: ", i+1);
        scanf("%d", &a[i]);
    }
    
    printList(a, n);
    printf("\n1. for bubble sort.");
    printf("\n2. for selection sort.");
    printf("\n3. for insertion sort.");
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            bubbleSort(a, n);
            break;
        case 2: 
            selectionSort(a, n);
            break;
        case 3: 
            insertionSort(a, n);
            break;
    }

    return 0;
}

//print list function....
int printList(int a[], int n){
    printf("\nThe array list is : ");
    for(int i=0; i<n; i++){
        printf("%d\t ", a[i]);
    }
}

//bubble sort function...
int bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int temp;
        for(int j=0; j<n-1-i; j++){
            if(a[j] >= a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printList(a, n);
}

//for selection sort....
int selectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int min, temp;
        min = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(i != min){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printList(a, n);
}
//for insertion sort...
int insertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int temp = a[i];
        int j = i - 1;
        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printList(a, n);
}
