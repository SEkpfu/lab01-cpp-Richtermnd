#include <cstdio>
#include <cmath>

double triangleSize(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));

}

int main() {
    double a, b, c, d, o;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &o);
    printf("%lf\n", triangleSize(a, b, o) + triangleSize(c, d, o));
    return 0;
}
