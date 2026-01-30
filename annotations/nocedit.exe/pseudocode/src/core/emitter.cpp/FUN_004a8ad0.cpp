// Name: core_emitter.cpp_FUN_004a8ad0
// Address: 004a8ad0
// Address Range: [[004a8ad0, 004a8b23]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_FUN_004a8ad0(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8ad0(uint param_1, uint
   param_2) */

void __cdecl core_emitter_cpp_FUN_004a8ad0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x15c);
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x164) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x15c) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x160) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x164);
  return;
}
