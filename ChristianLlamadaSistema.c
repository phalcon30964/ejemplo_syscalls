#include <stdio.h>
#include <time.h>
 
int main(void)
{
      uint64_t segundos;
 
      segundos = time(NULL);
      write(stdout, "Segundos desde 1970: %d", segundos);1
}