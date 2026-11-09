// Name: core_weapon.cpp_FUN_005add80
// Address: 005add80
// Address Range: [[005add80, 005addd0]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_005add80(int param_1)

#include "nocturne.h"

void core_weapon_cpp_FUN_005add80(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_ffc [1011];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar3 = (uint *)&pCVar1->field_0x338;
  puVar4 = (uint *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_10 = uStack_1c;
  uStack_14 = 0;
  uStack_c = uStack_18;
  *unaff_ESI = 0;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
