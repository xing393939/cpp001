#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int main(void)
{
    int count[] = { 3, 2, }, i;

    for (i = 0; i < 4; i++)
        printf("count[%d]=%d\n", i, count[i]);
    return 0;
}