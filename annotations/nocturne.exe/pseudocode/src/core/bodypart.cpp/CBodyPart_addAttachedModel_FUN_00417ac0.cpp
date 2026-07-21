// Name: core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_00417ac0
// Address: 00417ac0
// Address Range: [[00417ac0, 00417b3b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417ac0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417ac0(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x284);
  if (iVar1 < 3) {
    puVar2 = (uint *)(param_1 + 0x288 + iVar1 * 0x194);
    *(int *)(param_1 + 0x284) = iVar1 + 1;
    if (puVar2 != param_3) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2[2] = param_3[2];
    }
    if (puVar2 + 3 != param_4) {
      puVar2[3] = *param_4;
      puVar2[4] = param_4[1];
      puVar2[5] = param_4[2];
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(puVar2 + 6,param_2);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(puVar2 + 6);
  }
  return;
}
