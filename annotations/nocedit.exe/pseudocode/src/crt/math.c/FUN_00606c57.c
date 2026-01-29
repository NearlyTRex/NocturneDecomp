// Name: crt_math.c_FUN_00606c57
// Address: 00606c57
// Address Range: [[00606c57, 00606c6e]]
// Convention: unknown
// Signature: unkbyte10 crt_math_c_FUN_00606c57(void)

#include "nocturne.h"

unkbyte10 crt_math_c_FUN_00606c57(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  unkbyte10 in_ST3;
  ushort uStack00000008;
  ushort uStack0000000a;
  undefined6 uStack0000000c;
  uint uStack00000012;
  
  uStack0000000c = (undefined6)in_ST0;
  uStack00000012 = (uint)((unkuint10)in_ST0 >> 0x30);
  uStack00000008 = (ushort)((unkuint10)in_ST3 >> 0x40);
  fdiv(in_ST2,in_ST1);
  return CONCAT64(uStack0000000c,CONCAT22(uStack0000000a,uStack00000008));
}
