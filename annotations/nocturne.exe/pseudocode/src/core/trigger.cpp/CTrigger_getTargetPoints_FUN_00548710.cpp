// Name: core_trigger.cpp_CTrigger_getTargetPoints_FUN_00548710
// Address: 00548710
// Address Range: [[00548710, 005487a6]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_CTrigger_getTargetPoints_FUN_00548710(int param_1,float *param_2)

#include "nocturne.h"

uint core_trigger_cpp_CTrigger_getTargetPoints_FUN_00548710(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte auStack_34 [24];
  float afStack_1c [6];
  
  if (*(int *)(param_1 + 0x16c) != 4) {
    return 0;
  }
  pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_34);
  fVar1 = (pfVar3[1] + pfVar3[4]) * 0.5f;
  fVar2 = (pfVar3[2] + pfVar3[5]) * 0.5f;
  if (param_2 != afStack_1c) {
    *param_2 = (*pfVar3 + pfVar3[3]) * 0.5f;
    param_2[1] = fVar1;
    param_2[2] = fVar2;
  }
  return 1;
}
