#include <stdio.h>

int myfunc(int x, int y)
{
    int z;
    z = 2 * x - y;
    return z;
}

void myfunc_2(int *a)
{
    int i;
    for (i = 0; i < 5; i++)
        myfunc(a[i], a[i + 1]);
}

void myfunc_3(int *a)
{
    int i;
    for (i = 0; i < 5; i++)
        myfunc(a[i], a[i + 1]);
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 100; i++)
        myfunc_2(a);
    for (i = 0; i < 300; i++)
        myfunc_3(a);

    return 0;
}
