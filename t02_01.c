// 12S25026 - Andre Bonaran Situngkir

#include <stdio.h>

int main() {
    int jumlah_buku;
    float harga_buku;

    scanf("%d", &jumlah_buku);
    scanf("%f", &harga_buku);

    float total_belanja = jumlah_buku * harga_buku;
    float diskon = 0.0;

    if (total_belanja > 500000) {
        diskon = total_belanja * 0.15;
    } else if (total_belanja >= 100000) {
        diskon = total_belanja * 0.10;
    } else if (total_belanja > 50000) {
        diskon = total_belanja * 0.05;
    }

    float total_bayar = total_belanja - diskon;

    if (diskon == 0.0) {
        printf("---\n");
    } else {
        printf("%.2f\n", diskon);
    }
    
    printf("%.2f\n", total_bayar);
    
    return 0;
}
