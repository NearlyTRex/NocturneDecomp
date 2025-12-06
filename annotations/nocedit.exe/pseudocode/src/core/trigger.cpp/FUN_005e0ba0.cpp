// Name: core_trigger.cpp_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0ba0()

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_FUN_005e0ba0(uint param_1) */

void core_trigger_cpp_FUN_005e0ba0(void)

{
  float *pfVar1;
  uint extraout_EAX;
  uint extraout_EDX;
  int in_stack_00000004;
  
  switch(*(uint *)(in_stack_00000004 + 0x174)) {
  case 0:
  case 1:
    pfVar1 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    crt_math_c_ceil_FUN_006001b2
              ((double)(SQRT((pfVar1[5] - pfVar1[2]) * (pfVar1[5] - pfVar1[2]) +
                             (pfVar1[3] - *pfVar1) * (pfVar1[3] - *pfVar1) +
                             (pfVar1[4] - pfVar1[1]) * (pfVar1[4] - pfVar1[1])) +
                       (float)10));
    *(float *)(in_stack_00000004 + 0x158) = (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  }
  return;
}
