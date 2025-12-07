// Name: crt_math.c_fdiv_thunk_FUN_00606b7f
// Address: 00606b7f
// Address Range: [[00606b7f, 00606b9e]]
// Convention: __fpu_thunk
// Signature: float10 crt_math.c_fdiv_thunk_FUN_00606b7f(void)

#include "nocturne.h"

float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606b7f(void)

{
  unkbyte10 in_ST0;
  float10 in_ST1;
  float10 in_ST3;
  uint in_stack_0000001c;
  undefined6 uStack00000020;
  uint uStack00000026;
  
  uStack00000020 = (undefined6)in_ST0;
  uStack00000026 = (uint)((unkuint10)in_ST0 >> 0x30);
  crt_math_c_fdiv_FUN_00606960(in_ST1,in_ST3);
  return (float10)CONCAT64 /* combine 2-byte values */(uStack00000020,in_stack_0000001c);
}
