// Name: core_conveyor.cpp_FUN_004420d0
// Address: 004420d0
// Address Range: [[004420d0, 00442123]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004420d0()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_004420d0(uint param_1, uint
   param_2) */

void core_conveyor_cpp_FUN_004420d0(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x72c);
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(in_stack_00000004 + 0x734) * fVar2;
  in_stack_00000008[3] = *(float *)(in_stack_00000004 + 0x72c) * fVar2;
  in_stack_00000008[4] = *(float *)(in_stack_00000004 + 0x730) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(in_stack_00000004 + 0x734);
  return;
}
