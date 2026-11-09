// Name: core_pendulum.cpp_FUN_0050f0d0
// Address: 0050f0d0
// Address Range: [[0050f0d0, 0050f10e]]
// Convention: unknown
// Signature: undefined4 core_pendulum_cpp_FUN_0050f0d0(int param_1,int param_2)

#include "nocturne.h"

uint core_pendulum_cpp_FUN_0050f0d0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if (*(int *)(param_1 + 0x440) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  if (*(int *)&pCVar1->field_0x358 != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x158;
  }
  return 1;
}
