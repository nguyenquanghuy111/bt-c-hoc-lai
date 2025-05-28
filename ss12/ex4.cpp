#include <stdio.h>
long long tinhGiaiThua(int n) {
    if (n < 0) {
        return -1;
    }

    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }

    return giaiThua;
}

int main() {
    int so;
    long long ketQua;
    printf("Nhap mot so nguy�n: ");
    scanf("%d", &so);
    ketQua = tinhGiaiThua(so);
    if (ketQua == -1) {
        printf("Kh�ng the tinh !\n");
    } else {
        printf("Giai thua cua %d l�: %lld\n", so, ketQua);
    }

    return 0;
}

