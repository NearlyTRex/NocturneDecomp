// Name: core_weapon.cpp_FUN_00554590
// Address: 00554590
// Address Range: [[00554590, 005545fd]]
// Convention: unknown
// Signature: undefined4 * core_weapon_cpp_FUN_00554590(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_weapon_cpp_FUN_00554590(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  uVar1 = *(uint *)(pCVar3->texture_list[7].textures[1].texture_name + 0xc);
  iVar2 = pCVar3->texture_list[7].textures[2].base.type;
  *param_2 = 0;
  param_2[1] = uVar1;
  param_2[2] = iVar2;
  return param_2;
}
