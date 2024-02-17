#include <stdio.h>

int main() {
  int n;
  float data[100];
  float total = 0;

  printf("Masukkan jumlah data: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Masukkan data ke-%d: ", i + 1);
    scanf("%f", &data[i]);
    total += data[i];
  }

  float rata = total / n;

  float median;
  if (n % 2 == 0) {
  
    median = (data[n / 2 - 1] + data[n / 2]) / 2;
  } else {
    
    median = data[n / 2];
  }

  
  printf("Jumlah data: %d\n", n);
  printf("Rata-rata: %.2f\n", rata);
  printf("Nilai tengah: %.2f\n", median);

  return 0;
}