#include <stdio.h>
#include <math.h>

int lab2 () {
    float z1, z2, a;
    scanf("%f", &a);
    z1 = powf(2*sin(3*M_PI-2*a), 2)*powf(cos(5*M_PI+2*a), 2);
    printf("%f", z1);
    scanf("%f", &a);
    z2 = 0.25 - ((0.25) * sin(2.5 * M_PI - (8 * a)));
    printf("%f", z2);

    return 0;

}