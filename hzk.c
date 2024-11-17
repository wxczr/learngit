#include <stdio.h>

double calculate_pi(int precision) {
    double pi = 0.0;
    for (int n = 0; n < precision; n++) {
        pi += (n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1.0);
    }
    return pi * 4.0;
}

int main() {
    int precision;
    printf("请输入精度值（例如1000000）：\n");
    scanf("%d", &precision);
    double pi = calculate_pi(precision);
    printf("π 的近似值为：%.15f\n", pi);
    return 0;
}
