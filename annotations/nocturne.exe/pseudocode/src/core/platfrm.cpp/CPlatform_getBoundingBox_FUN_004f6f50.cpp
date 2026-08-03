// Name: core_platfrm.cpp_CPlatform_getBoundingBox_FUN_004f6f50
// Address: 004f6f50
// Address Range: [[004f6f50, 004f6f9d]]
// Convention: unknown
// Signature: float * core_platfrm_cpp_CPlatform_getBoundingBox_FUN_004f6f50(int param_1,float *param_2)

#include "nocturne.h"

float * core_platfrm_cpp_CPlatform_getBoundingBox_FUN_004f6f50(int param_1,float *param_2)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  pCVar1 = pCVar2->frame_bounds;
  *param_2 = (pCVar1->min).x;
  param_2[1] = (pCVar1->min).y;
  param_2[2] = (pCVar1->min).z;
  param_2[3] = (pCVar1->max).x;
  param_2[4] = (pCVar1->max).y;
  param_2[5] = (pCVar1->max).z;
  return param_2;
}
