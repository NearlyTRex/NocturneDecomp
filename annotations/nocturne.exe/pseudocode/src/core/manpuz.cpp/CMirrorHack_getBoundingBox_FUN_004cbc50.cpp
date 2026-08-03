// Name: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
// Address Range: [[004cbc50, 004cbc9c]]
// Convention: unknown
// Signature: float * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,float *param_2)

#include "nocturne.h"

float * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,float *param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  *param_2 = (pCVar1->bounds).min.x;
  param_2[1] = (pCVar1->bounds).min.y;
  param_2[2] = (pCVar1->bounds).min.z;
  param_2[3] = (pCVar1->bounds).max.x;
  param_2[4] = (pCVar1->bounds).max.y;
  param_2[5] = (pCVar1->bounds).max.z;
  return param_2;
}
