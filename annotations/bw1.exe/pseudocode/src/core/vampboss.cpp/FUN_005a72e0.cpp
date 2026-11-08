// Name: FUN_005a72e0
// Address: 005a72e0
// Address Range: [[005a72e0, 005a73bc]]
// Convention: unknown
// Signature: void FUN_005a72e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a72e0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float local_20;
  
  *(uint *)(param_1 + 0xbf3e4) = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  iVar10 = param_1;
  do {
    if (*(int *)(iVar10 + 0xbf3e8) == 0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0x428;
      FUN_005030e0("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar2 = *(int *)(iVar10 + 0xbf3e8);
    fVar3 = *(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20);
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(iVar2 + 0x24) - *(float *)(iVar1 + 0x24);
    fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
    fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
    fVar7 = *(float *)(iVar2 + 0x28) - *(float *)(iVar1 + 0x28);
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar3) {
      *(int *)(param_1 + 0xbf3e4) = iVar9;
      local_20 = fVar3;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 4);
  return;
}
