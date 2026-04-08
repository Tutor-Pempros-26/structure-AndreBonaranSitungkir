// 12S25026 - Andre Bonaran Situngkir

#include <stdio.h>

int main() {
    char operator_pilihan;
    
    // Menerima input operator dan langsung mencetaknya ulang
    scanf(" %c", &operator_pilihan);
    printf("%c\n", operator_pilihan);
    
    int hasil = 0;
    if (operator_pilihan == '*') {
        hasil = 1; 
    }
    
    for (int i = 0; i < 4; i++) {
        int angka_masukan;
        // Menerima angka dan langsung mencetaknya ulang
        scanf("%d", &angka_masukan);
        printf("%d\n", angka_masukan);
        
        if (angka_masukan == -1) {
            printf("0\n");
            break;
        }
        
        if (operator_pilihan == '+') {
            hasil = hasil + angka_masukan;
        } else if (operator_pilihan == '-') {
            hasil = hasil - angka_masukan;
        } else if (operator_pilihan == '*') {
            hasil = hasil * angka_masukan;
        }
        
        // Menampilkan hasil
        printf("%d\n", hasil);
    }
    
    return 0;
}