#include <stdio.h>

int main() {
    int number[5];
    int sum = 0;
    
    printf("Ban hay nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (number[i] % 2 != 0) {
            sum += number[i];
        }
    }
    printf("Tong cua cac so le trong do la : %d\n", sum);
    return 0;
}
