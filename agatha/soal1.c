#include <stdio.h>

void findThreeLargest(int arr[], int n) {
    int first, second, third;
    first = second = third = -2147483647; // Set ke nilai terkecil yang mungkin

    // Iterasi array untuk mencari tiga nilai terbesar
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    // Cetak tiga nilai terbesar
    printf("Three largest elements are %d, %d, and %d\n", first, second, third);
}

int main() {
    int arr[] = {10, 4, 8, 20, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findThreeLargest(arr, n);

    return 0;
}
