// Name: core_weapon.cpp_FUN_0057b820
// Address: 0057b820
// Address Range: [[0057b820, 0057b870]]
// Convention: unknown
// Signature: void core_weapon_cpp_FUN_0057b820(int param_1)

#include "nocturne.h"

void core_weapon_cpp_FUN_0057b820(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_ffc [1011];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar3 = (uint *)&pCVar1->field_0x338;
  puVar4 = (uint *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_10 = local_1c;
  local_14 = 0;
  local_c = local_18;
  *unaff_ESI = 0;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
