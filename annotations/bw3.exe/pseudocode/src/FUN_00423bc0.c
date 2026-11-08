// Name: FUN_00423bc0
// Address: 00423bc0
// Address Range: [[00423bc0, 00423cc1]]
// Convention: unknown
// Signature: undefined4 * FUN_00423bc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00423bc0(int param_1)

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
  
  puVar7 = (uint *)(param_1 + 0x1be68);
  puVar1 = (uint *)(param_1 + 0xd064);
  if (puVar7 != puVar1) {
    *puVar7 = *puVar1;
    *(uint *)(param_1 + 0x1be6c) = *(uint *)(param_1 + 0xd068);
    *(uint *)(param_1 + 0x1be70) = *(uint *)(param_1 + 0xd06c);
  }
  if ((uint *)(param_1 + 0x1be74) != puVar1) {
    *(uint *)(param_1 + 0x1be74) = *puVar1;
    *(uint *)(param_1 + 0x1be78) = *(uint *)(param_1 + 0xd068);
    puVar7 = *(uint **)(param_1 + 0xd06c);
    *(uint **)(param_1 + 0x1be7c) = puVar7;
  }
  iVar9 = 1;
  if (1 < *(int *)(param_1 + 0xd058)) {
    iVar8 = param_1 + 0xd0a4;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (uint *)FUN_0041d840(param_1 + 0x1be68,iVar8);
      iVar8 = iVar8 + 0x40;
    } while (iVar9 < *(int *)(param_1 + 0xd058));
  }
  fVar2 = *(float *)(param_1 + 0x1be68) + _DAT_005b78a9;
  fVar3 = *(float *)(param_1 + 0x1be70) + _DAT_005b78a9;
  fVar4 = *(float *)(param_1 + 0x1be74) + _DAT_005b78ad;
  fVar5 = *(float *)(param_1 + 0x1be78) + _DAT_005b78ad;
  fVar6 = *(float *)(param_1 + 0x1be7c) + _DAT_005b78ad;
  *(float *)(param_1 + 0x1be6c) = *(float *)(param_1 + 0x1be6c) + _DAT_005b78a9;
  *(float *)(param_1 + 0x1be70) = fVar3;
  *(float *)(param_1 + 0x1be74) = fVar4;
  *(float *)(param_1 + 0x1be78) = fVar5;
  *(float *)(param_1 + 0x1be7c) = fVar6;
  *(float *)(param_1 + 0x1be68) = fVar2;
  return puVar7;
}
