// Name: core_ladder.cpp_CLadder_getCollisionType_FUN_004c4570
// Address: 004c4570
// Address Range: [[004c4570, 004c4595]]
// Convention: unknown
// Signature: undefined4 core_ladder_cpp_CLadder_getCollisionType_FUN_004c4570(int param_1)

#include "nocturne.h"

uint core_ladder_cpp_CLadder_getCollisionType_FUN_004c4570(int param_1)

{
  int iVar1;
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  return 1;
}
