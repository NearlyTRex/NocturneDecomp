// Name: core_weapon.cpp_FUN_005ad730
// Address: 005ad730
// Address Range: [[005ad730, 005ad76c]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_005ad730(int param_1)

#include "nocturne.h"

void core_weapon_cpp_FUN_005ad730(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar3 = *(uint **)&pCVar1->field_0x350;
  puVar4 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
