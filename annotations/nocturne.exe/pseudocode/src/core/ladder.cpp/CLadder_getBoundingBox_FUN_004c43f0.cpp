// Name: core_ladder.cpp_CLadder_getBoundingBox_FUN_004c43f0
// Address: 004c43f0
// Address Range: [[004c43f0, 004c44eb]]
// Convention: unknown
// Signature: float * core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(int param_1,float *param_2)

#include "nocturne.h"

float * core_ladder_cpp_CLadder_getBoundingBox_FUN_004c43f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  if (pCVar7->poly_count < 1) {
    fVar5 = (float)0.5;
    fVar1 = *(float *)(param_1 + 0x2d4);
    fVar2 = *(float *)(param_1 + 0x2cc);
    fVar3 = *(float *)(param_1 + 0x2d0);
    fVar6 = (float)0.10000000000000001;
    fVar4 = *(float *)(param_1 + 0x2d4);
    *param_2 = -*(float *)(param_1 + 0x2cc) * fVar5;
    param_2[1] = -0.1;
    param_2[2] = -fVar1 * fVar5;
    param_2[3] = fVar2 * fVar5;
    param_2[4] = fVar3 + fVar6;
    param_2[5] = fVar5 * fVar4;
    return param_2;
  }
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  *param_2 = (float)pCVar7->texture_list[7].textures[1].base.count;
  param_2[1] = *(float *)pCVar7->texture_list[7].textures[1].texture_name;
  param_2[2] = *(float *)(pCVar7->texture_list[7].textures[1].texture_name + 4);
  param_2[3] = *(float *)(pCVar7->texture_list[7].textures[1].texture_name + 8);
  param_2[4] = *(float *)(pCVar7->texture_list[7].textures[1].texture_name + 0xc);
  param_2[5] = (float)pCVar7->texture_list[7].textures[2].base.type;
  return param_2;
}
