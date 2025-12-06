// Name: core_flamecan.cpp_FUN_004cb580
// Address: 004cb580
// Address Range: [[004cb580, 004cb610]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb580()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb580(uint param_1, uint param_2)
    */

uint core_flamecan_cpp_FUN_004cb580(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
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
