// 12S25026 - Andre Bonaran Situngkir

#include <stdio.h>

int main() {
    double jumlah_buku;
    double harga_buku;
    
    // Pakai %lf untuk tipe data double
    scanf("%lf", &jumlah_buku);
    scanf("%lf", &harga_buku);
    
    double total_belanja = jumlah_buku * harga_buku;
    double diskon = 0.0;
    
    if (total_belanja > 500000.0) {
        diskon = total_belanja * 0.15;
    } else if (total_belanja >= 100000.0) {
        diskon = total_belanja * 0.10;
    } else if (total_belanja > 50000.0) {
        diskon = total_belanja * 0.05;
    }
    
    double total_bayar = total_belanja - diskon;
    
    if (diskon <= 0.0) {
        printf("---\n");
    } else {
        printf("%.2f\n", diskon);
    }
    
    printf("%.2f\n", total_bayar);
    
    return 0;
}
