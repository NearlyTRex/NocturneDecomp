// Name: core_pendulum.cpp_FUN_004f3df0
// Address: 004f3df0
// Address Range: [[004f3df0, 004f3e2e]]
// Convention: unknown
// Signature: undefined4 core_pendulum_cpp_FUN_004f3df0(int param_1,int param_2)

#include "nocturne.h"

uint core_pendulum_cpp_FUN_004f3df0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if (*(int *)(param_1 + 0x438) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  if (*(int *)(pCVar1->texture_list[7].textures[2].texture_name + 4) != 0) {
    *(int *)(param_2 + 0x24) = param_1 + 0x150;
  }
  return 1;
}
