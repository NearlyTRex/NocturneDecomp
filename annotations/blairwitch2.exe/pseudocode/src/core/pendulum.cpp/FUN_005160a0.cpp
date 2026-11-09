// Name: core_pendulum.cpp_FUN_005160a0
// Address: 005160a0
// Address Range: [[005160a0, 005160de]]
// Convention: unknown
// Signature: undefined4 core_pendulum_cpp_FUN_005160a0(int param_1,int param_2)

#include "nocturne.h"

uint core_pendulum_cpp_FUN_005160a0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if (*(int *)(param_1 + 0x59c) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  if (*(int *)&pCVar1->field_0x358 != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  }
  return 1;
}
