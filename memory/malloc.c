#include <emscripten.h>
#include <stdlib.h>

int main()
{
    return 0;
}

EMSCRIPTEN_KEEPALIVE
int acumulate(int *arr, int n)
{
    int sum = 0;
    while (n)
    {
        sum += arr[--n];
    }
    return sum;
}

EMSCRIPTEN_KEEPALIVE
const char *getString()
{
    return "Hello World Semuanyaaa!!!";
}

EMSCRIPTEN_KEEPALIVE
void *wasmmalloc(size_t n)
{
    return malloc(n);
}

EMSCRIPTEN_KEEPALIVE
void wasmfree(void *ptr)
{
    free(ptr);
}