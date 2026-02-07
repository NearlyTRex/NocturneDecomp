// Name: crt_math.c_FUN_00606eb3
// Address: 00606eb3
// Address Range: [[00606eb3, 00606ed2]]
// Convention: unknown
// Signature: unkbyte10 crt_math_c_FUN_00606eb3(void)

#include "nocturne.h"

unkbyte10 FUN_00606eb3(void)

{
  unkbyte10 in_ST0;
  float10 in_ST2;
  float10 in_ST3;
  uint in_stack_0000001c;
  undefined6 uStack00000020;
  uint uStack00000026;
  
  uStack00000020 = (undefined6)in_ST0;
  uStack00000026 = (uint)((unkuint10)in_ST0 >> 0x30);
  fdiv(in_ST2,in_ST3);
  return CONCAT64(uStack00000020,in_stack_0000001c);
}
