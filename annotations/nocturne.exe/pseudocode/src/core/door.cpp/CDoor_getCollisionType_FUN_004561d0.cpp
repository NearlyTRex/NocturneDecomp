// Name: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
// Address: 004561d0
// Address Range: [[004561d0, 00456207]]
// Convention: unknown
// Signature: undefined4 core_door_cpp_CDoor_getCollisionType_FUN_004561d0(int param_1,int param_2)

#include "nocturne.h"

uint core_door_cpp_CDoor_getCollisionType_FUN_004561d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x150;
  return 1;
}
