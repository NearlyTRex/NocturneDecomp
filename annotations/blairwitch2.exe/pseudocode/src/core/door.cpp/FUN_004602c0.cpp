// Name: core_door.cpp_FUN_004602c0
// Address: 004602c0
// Address Range: [[004602c0, 004602f7]]
// Convention: unknown
// Signature: undefined4 core_door_cpp_FUN_004602c0(int param_1,int param_2)

#include "nocturne.h"

uint core_door_cpp_FUN_004602c0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  if (*(int *)&pCVar1->field_0x358 == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  return 1;
}
