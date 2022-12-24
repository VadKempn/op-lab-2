#include <stdio.h>
#include <math.h>

float calculateZ1(float a) {
    return powf(2*sin(3*M_PI-2*a), 2)*powf(cos(5*M_PI+2*a), 2);
}

float calculateZ2(float a) {
    return 0.25 - ((0.25) * sin(2.5 * M_PI - (8 * a)));
}

int main() {
    float a;
    scanf("%f", &a);
    float z1 = calculateZ1(a);
    printf("%f", z1);
    scanf("%f", &a);
    float z2 = calculateZ2(a);
    printf("%f", z2);

    return 0;
}
