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
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x150;
  return 1;
}
