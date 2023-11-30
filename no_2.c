#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("피라미드의 높이를 입력하세요 (0 이하면 프로그램 종료): ");
        scanf_s("%d", &n);

        if (n <= 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        for (int i = 1; i <= n; i++) {

            for (int space = 0; space < n - i; space++) {
                printf(" ");
            }


            for (int star = 0; star < 2 * i - 1; star++) {
                printf("*");
            }


            printf("\n");
        }
    }

    return 0;
}
