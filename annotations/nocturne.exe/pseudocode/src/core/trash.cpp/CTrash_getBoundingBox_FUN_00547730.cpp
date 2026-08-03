// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
// Address: 00547730
// Address Range: [[00547730, 005477ee]]
// Convention: unknown
// Signature: float * core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CDemonActor *param_1,float *param_2)

#include "nocturne.h"

float * core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CDemonActor *param_1,float *param_2)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  CVector3f local_20;
  CVector3f local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar1 = pCVar2->frame_bounds;
  *param_2 = (pCVar1->min).x;
  param_2[1] = (pCVar1->min).y;
  param_2[2] = (pCVar1->min).z;
  param_2[3] = (pCVar1->max).x;
  param_2[4] = (pCVar1->max).y;
  param_2[5] = (pCVar1->max).z;
  local_14.y = (float)param_1[2].validation_magic;
  local_14.x = 0.0;
  local_14.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(param_1,&local_20,&local_14);
  *param_2 = *param_2 + local_20.x;
  param_2[1] = param_2[1] + local_20.y;
  param_2[2] = param_2[2] + local_20.z;
  param_2[3] = param_2[3] + local_20.x;
  param_2[4] = param_2[4] + local_20.y;
  param_2[5] = param_2[5] + local_20.z;
  return param_2;
}
