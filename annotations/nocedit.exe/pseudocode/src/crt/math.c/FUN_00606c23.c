// Name: crt_math.c_FUN_00606c23
// Address: 00606c23
// Address Range: [[00606c23, 00606c42]]
// Convention: unknown
// Signature: undefined crt_math.c_FUN_00606c23()

#include "nocturne.h"

unkbyte10 crt_math_c_FUN_00606c23(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  uint in_stack_0000001c;
  undefined6 uStack00000020;
  uint uStack00000026;
  
  uStack00000020 = (undefined6)in_ST0;
  uStack00000026 = (uint)((unkuint10)in_ST0 >> 0x30);
  crt_math_c_fdiv_FUN_00606960(in_ST2,in_ST1);
  return CONCAT64(uStack00000020,in_stack_0000001c);
}
