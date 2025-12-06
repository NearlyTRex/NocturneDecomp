// Name: core_platfrm.cpp_FUN_0054d690
// Address: 0054d690
// Address Range: [[0054d690, 0054d71f]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d690()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054d690(uint param_1, uint
   param_2, uint param_3) */

void core_platfrm_cpp_FUN_0054d690(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  uint in_stack_0000000c;
  
  *(float *)(in_stack_00000004 + 0x2e0) = in_stack_00000008;
  if (*(float *)(in_stack_00000004 + 0x2e0) < 0.0) {
    *(uint *)(in_stack_00000004 + 0x2e0) = 0;
  }
  if (1.0 < *(float *)(in_stack_00000004 + 0x2e0)) {
    *(uint *)(in_stack_00000004 + 0x2e0) = 0x3f800000;
  }
  *(uint *)(in_stack_00000004 + 0x2e4) = in_stack_0000000c;
  if (*(float *)(in_stack_00000004 + 0x2dc) < in_stack_00000008) {
    *(uint *)(in_stack_00000004 + 0x2d4) = 3;
  }
  if (in_stack_00000008 < *(float *)(in_stack_00000004 + 0x2dc)) {
    *(uint *)(in_stack_00000004 + 0x2d4) = 4;
  }
  if (*(char *)(in_stack_00000004 + 0x480) == '\0') {
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x28))();
  return;
}
