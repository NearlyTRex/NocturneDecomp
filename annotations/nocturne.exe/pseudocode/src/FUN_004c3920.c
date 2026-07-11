// Name: FUN_004c3920
// Address: 004c3920
// Address Range: [[004c3920, 004c3a94]]
// Convention: unknown
// Signature: void FUN_004c3920(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3920(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_20;
  
  piVar1 = (int *)(*(int *)(param_2 + 0x24) * 0xc + param_1);
  iVar3 = *(int *)(param_2 + 0x18);
  fVar9 = (float)(*piVar1 - *(int *)(param_1 + iVar3 * 0xc));
  fVar11 = (float)(piVar1[1] - *(int *)(param_1 + 4 + iVar3 * 0xc));
  fVar5 = (float)(piVar1[2] - *(int *)(param_1 + 8 + iVar3 * 0xc));
  iVar3 = *(int *)(param_2 + 0x30);
  fVar7 = (float)(*(int *)(param_1 + 8 + iVar3 * 0xc) - piVar1[2]);
  fVar8 = (float)(*(int *)(param_1 + 4 + iVar3 * 0xc) - piVar1[1]);
  fVar6 = fVar11 * fVar7 - fVar8 * fVar5;
  fVar10 = (float)(*(int *)(param_1 + iVar3 * 0xc) - *piVar1);
  fVar5 = fVar10 * fVar5 - fVar9 * fVar7;
  fVar7 = fVar9 * fVar8 - fVar10 * fVar11;
  local_20 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (ABS(local_20) == 0.0) {
    local_20 = 65535.0;
  }
  local_20 = 1.0 / local_20;
  fVar8 = (float)_DAT_005875d4;
  fVar6 = fVar6 * local_20 * fVar8;
  fVar5 = fVar5 * local_20 * fVar8;
  fVar8 = fVar8 * fVar7 * local_20;
  iVar4 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 4 + iVar4 * 0xc);
  iVar2 = *(int *)(param_1 + iVar4 * 0xc);
  iVar4 = *(int *)(param_1 + 8 + iVar4 * 0xc);
  *(int *)(param_2 + 8) = (int)ROUND(fVar6);
  *(int *)(param_2 + 0xc) = (int)ROUND(fVar5);
  *(int *)(param_2 + 0x10) = (int)ROUND(fVar8);
  *(int *)(param_2 + 0x14) =
       (int)ROUND((float)iVar4 * fVar8 + (float)iVar2 * fVar6 + (float)iVar3 * fVar5);
  return;
}
