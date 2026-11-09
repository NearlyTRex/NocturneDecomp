// Name: core_backgnd.cpp_FUN_0040f0e0
// Address: 0040f0e0
// Address Range: [[0040f0e0, 0040f11e]]
// Convention: unknown
// Signature: undefined4 core_backgnd_cpp_FUN_0040f0e0(int param_1,int param_2)

#include "nocturne.h"

uint core_backgnd_cpp_FUN_0040f0e0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if (*(int *)(param_1 + 0x2d8) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x15c));
  if (*(int *)&pCVar1->field_0x358 != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x15c;
  }
  return 1;
}
