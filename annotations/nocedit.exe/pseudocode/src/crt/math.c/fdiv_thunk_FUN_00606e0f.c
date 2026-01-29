// Name: crt_math.c_fdiv_thunk_FUN_00606e0f
// Address: 00606e0f
// Address Range: [[00606e0f, 00606e2e]]
// Convention: __fpu_thunk
// Signature: float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606e0f(void)

#include "nocturne.h"

float10 __fpu_thunk fdiv_thunk(void)

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
  return (float10)CONCAT64(uStack00000020,in_stack_0000001c);
}
