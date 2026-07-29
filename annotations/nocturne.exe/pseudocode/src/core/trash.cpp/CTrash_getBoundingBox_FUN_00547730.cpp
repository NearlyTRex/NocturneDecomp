// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
// Address: 00547730
// Address Range: [[00547730, 005477ee]]
// Convention: unknown
// Signature: float * core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CDemonActor *param_1,float *param_2)

#include "nocturne.h"

float * core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(CDemonActor *param_1,float *param_2)

{
  float *pfVar1;
  CKeyFramedModel *pCVar2;
  CVector3f local_20;
  CVector3f local_14;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  pfVar1 = (float *)pCVar2->texture_list[7].textures[2].base.count;
  *param_2 = *pfVar1;
  param_2[1] = pfVar1[1];
  param_2[2] = pfVar1[2];
  param_2[3] = pfVar1[3];
  param_2[4] = pfVar1[4];
  param_2[5] = pfVar1[5];
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
