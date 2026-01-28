// Name: core_stairs.cpp_FUN_005ba490
// Address: 005ba490
// Address Range: [[005ba490, 005ba4e3]]
// Convention: unknown
// Signature: void core_stairs_cpp_FUN_005ba490(void)

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba490(uint param_1, uint
   param_2) */

void core_stairs_cpp_FUN_005ba490(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar2 = (float)0.5;
  *in_stack_00000008 = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  fVar1 = *(float *)(in_stack_00000004 + 0x160);
  in_stack_00000008[1] = 0.0;
  in_stack_00000008[2] = 0.0;
  in_stack_00000008[3] = fVar1 * fVar2;
  in_stack_00000008[4] =
       (float)*(int *)(in_stack_00000004 + 0x16c) * *(float *)(in_stack_00000004 + 0x158);
  in_stack_00000008[5] =
       (float)*(int *)(in_stack_00000004 + 0x16c) * *(float *)(in_stack_00000004 + 0x15c);
  return;
}
