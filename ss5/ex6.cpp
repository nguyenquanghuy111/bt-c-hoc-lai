#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        // Nh?p 2 s?
        printf("Nhap so thu nhat: ");
        scanf("%f", &a);
        printf("Nhap so thu hai: ");
        scanf("%f", &b);

        // Hi?n th? menu
        printf("\n----- CALCULATOR -----\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // X? l? l?a ch?n
        switch (choice) {
            case 1:
                printf("Tong: %.2f\n\n", a + b);
                break;
            case 2:
                printf("Hieu: %.2f\n\n", a - b);
                break;
            case 3:
                printf("Tich: %.2f\n\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Thuong: %.2f\n\n", a / b);
                else
                    printf("Khong the chia cho 0!\n\n");
                break;
            case 5:
                printf("bye!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n\n");
        }
    } while (choice != 5);

    return 0;
}

