// Name: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
// Address Range: [[004cbc50, 004cbc9c]]
// Convention: unknown
// Signature: int * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,int *param_2)

#include "nocturne.h"

int * core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_004cbc50(int param_1,int *param_2)

{
  CKeyFramedModel *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  *param_2 = pCVar1->texture_list[7].textures[1].base.count;
  param_2[1] = *(int *)pCVar1->texture_list[7].textures[1].texture_name;
  param_2[2] = *(int *)(pCVar1->texture_list[7].textures[1].texture_name + 4);
  param_2[3] = *(int *)(pCVar1->texture_list[7].textures[1].texture_name + 8);
  param_2[4] = *(int *)(pCVar1->texture_list[7].textures[1].texture_name + 0xc);
  param_2[5] = pCVar1->texture_list[7].textures[2].base.type;
  return param_2;
}
