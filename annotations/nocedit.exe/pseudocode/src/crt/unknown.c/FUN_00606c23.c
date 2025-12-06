// Name: crt_unknown.c_FUN_00606c23
// Address: 00606c23
// Address Range: [[00606c23, 00606c42]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606c23()

#include "nocturne.h"

unkbyte10 crt_unknown_c_FUN_00606c23(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  uint uStack00000020;
  undefined6 uStack00000024;
  uint uStack0000002a;
  
  uStack00000020 = (uint)in_ST0;
  uStack00000024 = (undefined6)((unkuint10)in_ST0 >> 0x20);
  crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST1);
  return CONCAT46 /* combine 2-byte values */(uStack0000002a,uStack00000024);
}
