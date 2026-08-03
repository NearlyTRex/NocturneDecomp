// Name: core_drip.cpp_CDrip_getBoundingBox_FUN_004627a0
// Address: 004627a0
// Address Range: [[004627a0, 0046287b]]
// Convention: unknown
// Signature: float * core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(int param_1,float *param_2)

#include "nocturne.h"

float * core_drip_cpp_CDrip_getBoundingBox_FUN_004627a0(int param_1,float *param_2)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  if (*(int *)(param_1 + 0x2cc) != 2) {
    *param_2 = -0.5;
    param_2[1] = 0.0;
    param_2[2] = -0.5;
    param_2[3] = 0.5;
    param_2[4] = 1.0;
    param_2[5] = 1.0;
    return param_2;
  }
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
