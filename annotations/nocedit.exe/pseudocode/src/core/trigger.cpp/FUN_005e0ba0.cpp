// Name: core_trigger.cpp_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0ba0()

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_FUN_005e0ba0(uint param_1) */

void core_trigger_cpp_FUN_005e0ba0(void)

{
  int iVar1;
  float10 extraout_ST0;
  int in_stack_00000004;
  
  switch(*(uint *)(in_stack_00000004 + 0x174)) {
  case 0:
  case 1:
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    crt_math_c_ceil_FUN_006001b2((double)extraout_ST0);
    *(float *)(in_stack_00000004 + 0x158) = (float)(double)CONCAT44 /* combine 2-byte values */(iVar1 + 0xc,iVar1);
  }
  return;
}
