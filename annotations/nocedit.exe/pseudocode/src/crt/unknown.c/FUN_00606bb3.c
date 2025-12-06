// Name: crt_unknown.c_FUN_00606bb3
// Address: 00606bb3
// Address Range: [[00606bb3, 00606bca]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606bb3()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606bb3(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST3;
  uint uStack0000000c;
  undefined6 uStack00000010;
  uint uStack00000016;
  
  uStack0000000c = (uint)in_ST0;
  uStack00000010 = (undefined6)((unkuint10)in_ST0 >> 0x20);
  crt_math_c_ieee754_divide_FUN_00606960(in_ST1,in_ST3);
  return CONCAT46 /* combine 2-byte values */(uStack00000016,uStack00000010);
}
