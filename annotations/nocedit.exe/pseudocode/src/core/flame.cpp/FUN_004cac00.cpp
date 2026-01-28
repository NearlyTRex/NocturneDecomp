// Name: core_flame.cpp_FUN_004cac00
// Address: 004cac00
// Address Range: [[004cac00, 004cac53]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_004cac00(void)

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cac00(uint param_1, uint param_2)
    */

void core_flame_cpp_FUN_004cac00(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x158);
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x160) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}
