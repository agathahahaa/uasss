#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            high = mid - 1;


        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int n, key;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Masukkan data terurut:\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Nilai tidak ditemukan dalam data.\n");
    else
        printf("Nilai %d ditemukan pada posisi %d.\n", key, result + 1);

    return 0;
}
