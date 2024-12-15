#include <stdio.h>

int main()
{
    printf("Hello, World!");
    return 0;
}
int signum(int x)
{
    if (x > 0)
        return 1;
    else if (x < 0)
        return -1;
    else
        return 0;
}

int main()
{
    printf("Hello, World!\n");
    printf("Signum(10) = %d\n", signum(10));
    printf("Signum(0) = %d\n", signum(0));
    printf("Signum(-5) = %d\n", signum(-5));

    return 0;
}
#include <math.h>

double oblicz_pierwiastek(double x) {
    return sqrt(x);
}
