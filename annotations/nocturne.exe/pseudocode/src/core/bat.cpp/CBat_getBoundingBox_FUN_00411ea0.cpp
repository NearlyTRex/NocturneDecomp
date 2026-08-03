// Name: core_bat.cpp_CBat_getBoundingBox_FUN_00411ea0
// Address: 00411ea0
// Address Range: [[00411ea0, 00411f15]]
// Convention: unknown
// Signature: float * core_bat_cpp_CBat_getBoundingBox_FUN_00411ea0(int param_1,float *param_2)

#include "nocturne.h"

float * core_bat_cpp_CBat_getBoundingBox_FUN_00411ea0(int param_1,float *param_2)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  double dVar3;
  
  dVar3 = round((double)*(float *)(param_1 + 0x17c));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x180));
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3);
  *param_2 = (pCVar2->min).x;
  param_2[1] = (pCVar2->min).y;
  param_2[2] = (pCVar2->min).z;
  param_2[3] = (pCVar2->max).x;
  param_2[4] = (pCVar2->max).y;
  param_2[5] = (pCVar2->max).z;
  return param_2;
}
