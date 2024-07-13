#include <stdio.h>

int myfunc(int n)
{
    return n * n * n + 2 * n;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b, c, d, e, f, g, h;

    c = a[1] + a[3];

    b = c + a[2];

    d = myfunc(b);

    e = d/3;

    f = d%3;

    g = e +1;


    printf("e=%d\n", e);
    printf("f=%d\n", f);

    return 0;
}

