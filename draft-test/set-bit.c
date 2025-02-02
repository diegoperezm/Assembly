#include <stdio.h>
#include <stdint.h>

uint8_t int_to_bin(uint8_t k);

int main(void) {
    uint8_t n = 1;

//    printf("ante de establecer el bit 3:   %u -> %u \n", n, int_to_bin(n));

    n = n | (1 << 3); 

    printf("Después de establecer el bit 3: %u -> %u \n", n, int_to_bin(n));

    return 0;
}

uint8_t int_to_bin(uint8_t k) {

    printf("k: %u  (k % 2) + 10 : %u  \n", k ,  k%2 + 10  );

    uint8_t tmp =  (k == 0 || k == 1 ? k :
		   ((k % 2) + 10 * int_to_bin(k / 2)));

    printf("tmp: %u \n",  tmp);
 
    return tmp;
}
