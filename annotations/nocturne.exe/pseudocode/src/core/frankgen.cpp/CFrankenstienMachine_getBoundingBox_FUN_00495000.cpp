// Name: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_00495000
// Address: 00495000
// Address Range: [[00495000, 00495075]]
// Convention: unknown
// Signature: float * core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_00495000(int param_1,float *param_2)

#include "nocturne.h"

float * core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_00495000(int param_1,float *param_2)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *pCVar2;
  double dVar3;
  
  dVar3 = round((double)*(float *)(param_1 + 0x178));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x17c));
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3);
  *param_2 = (pCVar2->min).x;
  param_2[1] = (pCVar2->min).y;
  param_2[2] = (pCVar2->min).z;
  param_2[3] = (pCVar2->max).x;
  param_2[4] = (pCVar2->max).y;
  param_2[5] = (pCVar2->max).z;
  return param_2;
}
