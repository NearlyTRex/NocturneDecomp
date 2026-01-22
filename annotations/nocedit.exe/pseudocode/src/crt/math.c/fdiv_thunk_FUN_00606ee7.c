// Name: crt_math.c_fdiv_thunk_FUN_00606ee7
// Address: 00606ee7
// Address Range: [[00606ee7, 00606efe]]
// Convention: __fpu_thunk
// Signature: float10 crt_math.c_fdiv_thunk_FUN_00606ee7(void)

#include "nocturne.h"

float10 __fpu_thunk crt_math_c_fdiv_thunk_FUN_00606ee7(void)

{
  unkbyte10 in_ST0;
  float10 in_ST2;
  float10 in_ST3;
  unkbyte10 in_ST7;
  ulonglong local_res0;
  ushort uStack00000008;
  ushort in_stack_0000000a;
  undefined6 uStack0000000c;
  uint uStack00000012;
  
  uStack0000000c = (undefined6)in_ST0;
  uStack00000012 = (uint)((unkuint10)in_ST0 >> 0x30);
  local_res0 = (ulonglong)in_ST7;
  uStack00000008 = (ushort)((unkuint10)in_ST7 >> 0x40);
  crt_math_c_fdiv_FUN_00606960(in_ST2,in_ST3);
  return (float10)CONCAT64(uStack0000000c,CONCAT22(in_stack_0000000a,uStack00000008));
}
