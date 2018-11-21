#include<stdio.h>
#include<omp.h>
int main(int argc, char ** argv)
{
  #pragma omp parallel
  {
      int thread_id = omp_get_thread_num();
      int thread_count = omp_get_num_threads();
      printf("Hello from thread number: %d out of: %d\n",
        thread_id, thread_count);
  }
    return 0;
}
program main

use omp_lib
implicit none

integer thread_id, thread_count

!$omp parallel private(thread_id,thread_count)
thread_id = omp_get_thread_num()
thread_count = omp_get_num_threads()
write (*,*) "Hello from thread number:",thread_id, "out of:
",thread_count
!$omp end parallel
end program main
