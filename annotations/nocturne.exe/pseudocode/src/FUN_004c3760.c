// Name: FUN_004c3760
// Address: 004c3760
// Address Range: [[004c3760, 004c391b]]
// Convention: unknown
// Signature: void FUN_004c3760(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3760(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_30;
  
  iVar2 = *(int *)(param_2 + 0x18);
  piVar1 = (int *)(*(int *)(param_2 + 0x1c) * 0xc + param_1);
  iVar3 = *(int *)(param_2 + 0x20);
  fVar9 = (float)(piVar1[2] - *(int *)(param_1 + 8 + iVar2 * 0xc));
  fVar4 = (float)(*(int *)(param_1 + iVar3 * 0xc) - *piVar1);
  fVar8 = (float)(*piVar1 - *(int *)(param_1 + iVar2 * 0xc));
  fVar10 = (float)(*(int *)(param_1 + 4 + iVar3 * 0xc) - piVar1[1]);
  fVar6 = (float)(piVar1[1] - *(int *)(param_1 + 4 + iVar2 * 0xc));
  fVar5 = (float)(*(int *)(param_1 + 8 + iVar3 * 0xc) - piVar1[2]);
  fVar7 = fVar6 * fVar5 - fVar10 * fVar9;
  fVar5 = fVar4 * fVar9 - fVar8 * fVar5;
  fVar4 = fVar8 * fVar10 - fVar4 * fVar6;
  local_30 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7);
  if (ABS(local_30) == 0.0) {
    local_30 = 65535.0;
  }
  local_30 = 1.0 / local_30;
  iVar2 = *(int *)(param_2 + 0x18);
  fVar8 = (float)_DAT_005875cc;
  fVar6 = fVar7 * local_30 * fVar8;
  fVar5 = fVar5 * local_30 * fVar8;
  fVar8 = fVar4 * local_30 * fVar8;
  fVar15 = (float10)*(int *)(param_1 + iVar2 * 0xc) * (float10)fVar6 +
           (float10)*(int *)(param_1 + 4 + iVar2 * 0xc) * (float10)fVar5;
  fVar11 = (float10)*(int *)(param_1 + 8 + iVar2 * 0xc) * (float10)fVar8;
  fVar12 = (float10)fVar6;
  fVar13 = (float10)fVar5;
  fVar14 = (float10)fVar8;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  *(int *)(extraout_EDX + 8) = (int)ROUND(fVar12);
  *(int *)(extraout_EDX + 0xc) = (int)ROUND(fVar13);
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar14);
  fVar11 = fVar11 + fVar15;
  FUN_00563a30();
  *(int *)(extraout_EDX_00 + 0x14) = (int)ROUND(fVar11);
  return;
}
