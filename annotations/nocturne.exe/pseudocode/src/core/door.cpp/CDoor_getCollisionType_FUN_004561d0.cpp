// Name: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
// Address: 004561d0
// Address Range: [[004561d0, 00456207]]
// Convention: unknown
// Signature: undefined4 core_door_cpp_CDoor_getCollisionType_FUN_004561d0(int param_1,int param_2)

#include "nocturne.h"

uint core_door_cpp_CDoor_getCollisionType_FUN_004561d0(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  if (*(int *)(pCVar1->texture_list[7].textures[2].texture_name + 4) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x150;
  return 1;
}
