#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

__thread int num = 0;

void* worker(void* arg) {
    while (1) {
        printf("thread:%d %p\n", num, &num);
        sleep(1);
    }
}

int main(void) {
    pthread_t tid;
    int ret;
    if (ret = pthread_create(&tid, NULL, worker, NULL) != 0) {
        return 1;
    }
    while (1) {
        num = 4;
        printf("main:%d %p\n", num, &num);
        sleep(1);
    }
    return 0;
}
