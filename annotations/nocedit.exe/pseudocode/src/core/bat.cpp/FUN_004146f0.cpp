// Name: core_bat.cpp_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 00414780]]
// Convention: unknown
// Signature: undefined core_bat.cpp_FUN_004146f0()

#include "nocturne.h"

float core_bat_cpp_FUN_004146f0(void)

{
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 in_ST0;
  float in_stack_00000004;
  float in_stack_00000008;
  uint uStack_1c;
  uint local_18;
  
  local_18 = SUB84 /* extract 2-byte value */((double)in_stack_00000004,0);
  if ((double)in_stack_00000004 < 0.0) {
    uStack_1c = (uint)((ulonglong)(double)(-in_stack_00000004 / in_stack_00000008) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    in_stack_00000004 =
         (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) * in_stack_00000008 +
         (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c);
    if (in_stack_00000004 < 0.0) {
      in_stack_00000004 = in_stack_00000004 + in_stack_00000008;
    }
    return in_stack_00000004;
  }
  uStack_1c = (uint)((ulonglong)(double)(in_stack_00000004 / in_stack_00000008) >> 0x20);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  return (float)(double)CONCAT44 /* combine 2-byte values */(local_18,uStack_1c) -
         (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) * in_stack_00000008;
}
