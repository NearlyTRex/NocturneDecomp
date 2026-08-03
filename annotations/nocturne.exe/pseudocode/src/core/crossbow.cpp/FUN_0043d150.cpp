// Name: core_crossbow.cpp_FUN_0043d150
// Address: 0043d150
// Address Range: [[0043d150, 0043d1bd]]
// Convention: unknown
// Signature: undefined4 * core_crossbow_cpp_FUN_0043d150(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_crossbow_cpp_FUN_0043d150(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  fVar1 = (pCVar3->bounds).max.y;
  fVar2 = (pCVar3->bounds).max.z;
  *param_2 = 0;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  return param_2;
}
