// Name: FUN_004880d0
// Address: 004880d0
// Address Range: [[004880d0, 00488218]]
// Convention: unknown
// Signature: void FUN_004880d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004880d0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte local_40 [28];
  float *local_24;
  int local_20;
  
  iVar5 = 0;
  if (0 < _DAT_01c09e08) {
    local_20 = 0;
    do {
      iVar6 = *(int *)(&DAT_01c09e0c + local_20);
      if (((*(int *)(param_1 + 0x20) == 2) || (*(int *)(iVar6 + 0x261c) != 0)) &&
         (fVar2 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 4),
         fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 8),
         fVar3 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0xc),
         fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_0058138c)) {
        FUN_0051e020(iVar6 + 0x150);
        FUN_0040a290(iVar6,local_40,(float *)(param_1 + 4));
        FUN_00427730(iVar6,local_40,0,0,0x3f800000,*(int *)(param_1 + 0x20) == 2);
      }
      local_20 = local_20 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < _DAT_01c09e08);
  }
  iVar5 = 0;
  if (0 < _DAT_01c09ed4) {
    local_24 = (float *)(param_1 + 4);
    iVar6 = 0;
    do {
      iVar1 = *(int *)(&DAT_01c09ed8 + iVar6);
      fVar2 = *(float *)(iVar1 + 0x20) - *local_24;
      fVar4 = *(float *)(iVar1 + 0x24) - local_24[1];
      fVar3 = *(float *)(iVar1 + 0x28) - local_24[2];
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= (float)_DAT_00581394) {
        FUN_0048e550(iVar1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < _DAT_01c09ed4);
  }
  return;
}
