// Name: core_health.cpp_FUN_004b42f0
// Address: 004b42f0
// Address Range: [[004b42f0, 004b433d]]
// Convention: unknown
// Signature: undefined4 * core_health_cpp_FUN_004b42f0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_health_cpp_FUN_004b42f0(int param_1,uint *param_2)

{
  uint *puVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  puVar1 = (uint *)pCVar2->texture_list[7].textures[2].base.count;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  param_2[4] = puVar1[4];
  param_2[5] = puVar1[5];
  return param_2;
}
