// Name: FUN_00427a30
// Address: 00427a30
// Address Range: [[00427a30, 00427b31]]
// Convention: unknown
// Signature: undefined4 * FUN_00427a30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00427a30(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = (uint *)(param_1 + 0x19d78);
  puVar1 = (uint *)(param_1 + 0xc278);
  if (puVar7 != puVar1) {
    *puVar7 = *puVar1;
    *(uint *)(param_1 + 0x19d7c) = *(uint *)(param_1 + 0xc27c);
    *(uint *)(param_1 + 0x19d80) = *(uint *)(param_1 + 0xc280);
  }
  if ((uint *)(param_1 + 0x19d84) != puVar1) {
    *(uint *)(param_1 + 0x19d84) = *puVar1;
    *(uint *)(param_1 + 0x19d88) = *(uint *)(param_1 + 0xc27c);
    puVar7 = *(uint **)(param_1 + 0xc280);
    *(uint **)(param_1 + 0x19d8c) = puVar7;
  }
  iVar9 = 1;
  if (1 < *(int *)(param_1 + 0xc26c)) {
    iVar8 = param_1 + 0xc2b8;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (uint *)FUN_00420500(param_1 + 0x19d78,iVar8);
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < *(int *)(param_1 + 0xc26c));
  }
  fVar2 = *(float *)(param_1 + 0x19d78) + _DAT_005d5170;
  fVar3 = *(float *)(param_1 + 0x19d80) + _DAT_005d5170;
  fVar4 = *(float *)(param_1 + 0x19d84) + _DAT_005d5174;
  fVar5 = *(float *)(param_1 + 0x19d88) + _DAT_005d5174;
  fVar6 = *(float *)(param_1 + 0x19d8c) + _DAT_005d5174;
  *(float *)(param_1 + 0x19d7c) = *(float *)(param_1 + 0x19d7c) + _DAT_005d5170;
  *(float *)(param_1 + 0x19d80) = fVar3;
  *(float *)(param_1 + 0x19d84) = fVar4;
  *(float *)(param_1 + 0x19d88) = fVar5;
  *(float *)(param_1 + 0x19d8c) = fVar6;
  *(float *)(param_1 + 0x19d78) = fVar2;
  return puVar7;
}
