#include <cstdio>

int main() {
    int a, b, c;
    int s, p, mx;
    scanf("%d %d %d", &a, &b, &c);
    s = a + b + c;
    p = a * b * c;
    // Давать тернарный оператор и забирать if было правильным решением.
    s % 2 ? printf("%d\n", b > c ? b : c) : printf("%d %d\n", s, p);
    return 0;
}
