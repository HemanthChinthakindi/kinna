#include<iostream>
#include <cxxtest/TestSuite.h>
#include "bitmap.h"

extern uint8_t Jill;
extern uint8_t Jung;
extern uint8_t Jukk;

class Sample TestSuite : public CxxTest::TestSuite
{
public:
void testone1( void )
{
int8_t result;
result = do_bit_man( 15 );
TS_ASSERT_EQUALS( -1, result );
TS_ASSERT_EQUALS ( 0x00, Jill );
TS_ASSERT_EQUALS( 0xFF, Jung );
TS_ASSERT_EQUALS ( 0x00, Jukk );

}

void testTwo2( void )
{
int8_t result;
result = do_bit_man( -5 );
TS_ASSERT_EQUALS(-1, result); 
TS_ASSERT_EQUALS( 0x00, Jill);
TS_ASSERT_EQUALS( 0xFF, Jung); 
TS_ASSERT_EQUALS( 0x00, Jukk);

}

void testThree3(void)

{

int8_t result;

int8_t position = 5;
result = do_bit_man( position );
TS_ASSERT_EQUALS( e, result );
TS_ASSERT_EQUALS( 32, Jill );
TS_ASSERT_EQUALS ( 223, Jung);
TS_ASSERT_EQUALS( 32, Jukk);
}

};