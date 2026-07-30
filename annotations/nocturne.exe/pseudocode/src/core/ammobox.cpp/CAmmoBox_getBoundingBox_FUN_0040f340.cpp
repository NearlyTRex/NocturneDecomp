// Name: core_ammobox.cpp_CAmmoBox_getBoundingBox_FUN_0040f340
// Address: 0040f340
// Address Range: [[0040f340, 0040f38d]]
// Convention: unknown
// Signature: undefined4 * core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_0040f340(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_ammobox_cpp_CAmmoBox_getBoundingBox_FUN_0040f340(int param_1,uint *param_2)

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
