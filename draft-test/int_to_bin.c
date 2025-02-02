#include <stdio.h>
#include <stdint.h>

uint8_t int_to_int(uint8_t  k); 

int main(void) {
    uint8_t n = 5; 

    printf("before setting the bit 3: %u  ->   %u \n", n, int_to_int(n));
    
    n = n | (1 << 3); // set bit 3 (from  0)
    
    printf("after setting the  bit 3: %u ->  %u \n", n, int_to_int(n));
    return 0;
}

uint8_t int_to_int(uint8_t  k) { 
  return ( k==0 || k == 1 ? k : ((k%2)+10*int_to_int(k/2)));
}
