// Name: FUN_004f0dc0
// Address: 004f0dc0
// Address Range: [[004f0dc0, 004f0f14]]
// Convention: unknown
// Signature: void FUN_004f0dc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0dc0(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  short sVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  fVar1 = ((float)param_2[6] - (float)param_1[6]) * ((float)param_3[5] - (float)param_2[5]);
  fVar2 = ((float)param_2[5] - (float)param_1[5]) * ((float)param_3[6] - (float)param_2[6]);
  if (_DAT_01d76cf8 == 0) {
    if (fVar2 <= fVar1) {
      return;
    }
  }
  else if (fVar1 <= fVar2) {
    return;
  }
  if ((9999 < _DAT_01d7a6c8 + _DAT_01d7a6cc + 3) || (9999 < _DAT_01d7a6d0 + 3)) {
    FUN_004f0f20();
  }
  puVar5 = (uint *)(_DAT_01d76f60 + (_DAT_01d7a6c8 + _DAT_01d7a6cc) * 0x40);
  puVar8 = puVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  puVar8 = puVar5 + 0x10;
  for (iVar6 = 0x10; iVar4 = _DAT_01d7a6d0, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  sVar3 = _DAT_01d7a6cc;
  puVar8 = puVar5 + 0x20;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  *(short *)(iVar4 * 2 + 0x1d7a6d4) = sVar3;
  _DAT_01d7a6d0 = _DAT_01d7a6d0 + 3;
  sVar7 = _DAT_01d7a6cc + 2;
  *(short *)(&DAT_01d7a6d0 + _DAT_01d7a6d0 * 2) = sVar3 + 1;
  _DAT_01d7a6cc = _DAT_01d7a6cc + 3;
  *(short *)(_DAT_01d7a6d0 * 2 + 0x1d7a6d2) = sVar7;
  return;
}
