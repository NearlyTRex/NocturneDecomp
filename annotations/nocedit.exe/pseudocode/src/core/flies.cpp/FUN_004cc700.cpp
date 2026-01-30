// Name: core_flies.cpp_FUN_004cc700
// Address: 004cc700
// Address Range: [[004cc700, 004cc74f]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_FUN_004cc700(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cc700(uint param_1, uint param_2)
    */

void __cdecl core_flies_cpp_FUN_004cc700(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  in_stack_00000008[1] = 0.0;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x15c);
  fVar1 = (float)-0.5;
  *in_stack_00000008 = *(float *)(in_stack_00000004 + 0x158) * fVar1;
  fVar2 = (float)0.5;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x158) * fVar2;
  in_stack_00000008[2] = *(float *)(in_stack_00000004 + 0x160) * fVar1;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x160);
  return;
}
