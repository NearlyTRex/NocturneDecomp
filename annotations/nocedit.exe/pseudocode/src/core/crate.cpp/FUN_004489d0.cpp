// Name: core_crate.cpp_FUN_004489d0
// Address: 004489d0
// Address Range: [[004489d0, 00448a60]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_004489d0()

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_004489d0(uint param_1, uint param_2)
    */

uint core_crate_cpp_FUN_004489d0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int in_stack_00000004;
  float *in_stack_00000008;
  float afStack_10 [3];
  
  pfVar3 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  fVar1 = (pfVar3[1] + pfVar3[4]) * 0.5f;
  fVar2 = (pfVar3[2] + pfVar3[5]) * 0.5f;
  if (in_stack_00000008 == afStack_10) {
    return 1;
  }
  *in_stack_00000008 = (*pfVar3 + pfVar3[3]) * 0.5f;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}
