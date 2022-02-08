#include "bitmap.h"

uint8_t Jill = 0x00;

uint8_t Jung= 0xFF;

uint8_t Jukk = 0x00;

int8_t do_bit_man(int8_t position)

{

if( ( position < 0 ) || ( position > 7 ) ) {

return -1;

}

Jill |= ( 1 << position);

Jung & ~( 1 << position);

Jukk ^= ( 1 << position);

return 0;

}