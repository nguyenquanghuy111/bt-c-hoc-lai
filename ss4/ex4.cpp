n#include <stdio.h>

int main() {
    int thang;

    printf("Nhap vao so thang (1-12): ");
    scanf("%d", &thang);

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d co 31 ngay.\n", thang);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d co 30 ngay.\n", thang);
            break;
        case 2:
            printf("Thang 2 co 28 hoac 29 ngay.\n");
            break;
        default:
            printf("So thang khong hop le.\n");
    }

    return 0;
}

