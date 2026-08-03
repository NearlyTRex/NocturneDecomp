// Name: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_0054c040
// Address: 0054c040
// Address Range: [[0054c040, 0054c0b5]]
// Convention: unknown
// Signature: float * core_tvbat_cpp_CTVBat_getBoundingBox_FUN_0054c040(int param_1,float *param_2)

#include "nocturne.h"

float * core_tvbat_cpp_CTVBat_getBoundingBox_FUN_0054c040(int param_1,float *param_2)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  double dVar3;
  
  dVar3 = round((double)*(float *)(param_1 + 0xbd24));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0xbd28));
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3);
  *param_2 = (pCVar2->min).x;
  param_2[1] = (pCVar2->min).y;
  param_2[2] = (pCVar2->min).z;
  param_2[3] = (pCVar2->max).x;
  param_2[4] = (pCVar2->max).y;
  param_2[5] = (pCVar2->max).z;
  return param_2;
}
