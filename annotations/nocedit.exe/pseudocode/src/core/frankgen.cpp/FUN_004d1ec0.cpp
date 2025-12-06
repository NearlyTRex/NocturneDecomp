// Name: core_frankgen.cpp_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1ec0()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1ec0(uint param_1, uint
   param_2, uint param_3) */

void core_frankgen_cpp_FUN_004d1ec0(void)

{
  uint extraout_EAX;
  uint extraout_EDX;
  float10 in_ST0;
  float10 fVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  *(float *)(in_stack_00000004 + 0x48c) =
       in_stack_00000008 * in_stack_0000000c + *(float *)(in_stack_00000004 + 0x48c);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  *(float *)(in_stack_00000004 + 0x48c) =
       *(float *)(in_stack_00000004 + 0x48c) - (float)(int)ROUND(fVar1);
  return;
}
