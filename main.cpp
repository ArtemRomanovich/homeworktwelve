#include <iostream>

int main() {
    float n;
    printf("Введите количество чисел:\n");
    scanf("%f", &n);
    printf("Введите числа:\n");
    float number, sum, sr, max, min = 0;
    for (int i = 0; i < n; i++) {
        scanf("%f", &number);
        if (number > max || max == 0) {
            max = number;
        }
        if (number < min || min == 0) {
            min = number;
        }
        sum+=number;
    }
    sr = sum / n;
    printf("Sr=%f, Sum=%f, Max=%f, Min=%f", sr, sum, max, min);
    return 0;
}
