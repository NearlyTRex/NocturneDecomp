// Name: core_spike.cpp_CSpike_getBoundingBox_FUN_005335a0
// Address: 005335a0
// Address Range: [[005335a0, 005335ed]]
// Convention: unknown
// Signature: float * core_spike_cpp_CSpike_getBoundingBox_FUN_005335a0(int param_1,float *param_2)

#include "nocturne.h"

float * core_spike_cpp_CSpike_getBoundingBox_FUN_005335a0(int param_1,float *param_2)

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
