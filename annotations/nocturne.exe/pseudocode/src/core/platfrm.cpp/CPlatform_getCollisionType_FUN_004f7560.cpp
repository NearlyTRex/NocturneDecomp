// Name: core_platfrm.cpp_CPlatform_getCollisionType_FUN_004f7560
// Address: 004f7560
// Address Range: [[004f7560, 004f757f] [004f7586, 004f759b]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(int param_1,int param_2)

#include "nocturne.h"

uint core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(int param_1,int param_2)

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
