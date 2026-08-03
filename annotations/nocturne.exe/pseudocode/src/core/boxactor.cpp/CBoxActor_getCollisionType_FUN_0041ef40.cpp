// Name: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041ef40
// Address: 0041ef40
// Address Range: [[0041ef40, 0041ef89]]
// Convention: unknown
// Signature: undefined4 core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(int param_1,int param_2)

#include "nocturne.h"

uint core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(int param_1,int param_2)

{
  CKeyFramedModel *pCVar1;
  
  if ((*(int *)(param_1 + 0x5f0) != 0) && (*(int *)(param_1 + 0x310) == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                       ((CKeyFramedModelInstance *)(param_1 + 0x150));
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x150;
    }
    return 1;
  }
  return 0;
}
