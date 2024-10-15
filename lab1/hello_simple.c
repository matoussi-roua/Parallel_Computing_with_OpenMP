 // hello_world_basic.c
#include <stdio.h>
#include <omp.h>

int main() {
    printf("Hello from the master thread.\n");
    int cores = omp_get_num_procs();
    printf("Number of available processors: %d\n", cores);

    printf("Inside parallel region : \n");
    #pragma omp parallel    
    {
        int thread_id = omp_get_thread_num();
        printf("Thread %d, thread_id = %d\n", omp_get_thread_num(), thread_id);
    }
        return 0;
}
