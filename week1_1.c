#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3};  // Declare array with capacity 10
    int size = 3;             // Current number of elements
    int newElement = 4;

    arr[size] = newElement;   // Insert at the end
    size++;                   // Update size

    // Print array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

