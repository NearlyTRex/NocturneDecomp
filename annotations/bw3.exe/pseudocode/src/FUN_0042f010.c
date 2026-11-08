// Name: FUN_0042f010
// Address: 0042f010
// Address Range: [[0042f010, 0042f27a]]
// Convention: unknown
// Signature: void FUN_0042f010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f010(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  byte *pbVar7;
  int extraout_ECX_00;
  int iVar8;
  int iVar9;
  int extraout_EDX;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  float10 fVar13;
  float local_30;
  int local_1c;
  
  if (*(int *)(param_1 + 0x33a0) == 0) {
    return;
  }
  FUN_0046e5e0(DAT_005f2afc,&DAT_005f0f5c);
  iVar12 = param_1 + 0x158;
  if (*(int *)(param_1 + 0xbc68) != 0) {
    FUN_0054e3a0(iVar12,0xffffffff,0xc9,0,1);
    return;
  }
  iVar3 = FUN_0054eac0(iVar12);
  iVar4 = FUN_0054ea40(iVar12);
  iVar12 = *(int *)(param_1 + 0x2478);
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0x1de78)) {
    iVar8 = 0;
    do {
      *(uint *)((int)&DAT_007e2cf4 + iVar8) = 0;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar5 < *(int *)(iVar3 + 0x1de78));
  }
  fVar2 = 0x40400000;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x33a0)) {
    fVar1 = (float)_DAT_005b836e;
    iVar8 = param_1;
    do {
      (&DAT_007e2cf4)[*(int *)(iVar8 + 0x33b0)] =
           (float)(&DAT_007e2cf4)[*(int *)(iVar8 + 0x33b0)] +
           (*(float *)(iVar8 + 0x33c0) * fVar1) / fVar2;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x33a0));
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar5 = iVar4;
  if (0 < *(int *)(iVar3 + 0x1de78)) {
    do {
      if ((float)_DAT_005b836e <= (float)(&DAT_007e2cf4)[iVar8]) {
        iVar9 = iVar9 + 1;
      }
      if (*(int *)(iVar5 + 0x33cc) == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar8 < *(int *)(iVar3 + 0x1de78));
  }
  if ((iVar9 == *(int *)(iVar3 + 0x1de78)) && (*(int *)(param_1 + 0x2538) < 0x40a00000)) {
    *(uint *)(param_1 + 0xbc6c) = 0x3f800000;
    *(uint *)(param_1 + 0xbc68) = 1;
  }
  local_1c = 0;
  for (iVar3 = 0; iVar5 = iVar4 + iVar12 * 4, iVar3 < *(int *)(iVar5 + 0x2c); iVar3 = iVar3 + 1) {
    pbVar11 = (byte *)(*(int *)(iVar5 + 0x40) + local_1c);
    local_30 = 0.0;
    iVar5 = 0;
    pbVar7 = pbVar11;
    pbVar10 = pbVar11;
    while (iVar5 < (int)(uint)*pbVar11) {
      fVar13 = (float10)*(float *)(pbVar7 + 4) * (float10)(float)(&DAT_007e2cf4)[pbVar10[1]];
      FUN_005a3120();
      pbVar7 = (byte *)(extraout_ECX + 4);
      pbVar10 = pbVar10 + 1;
      local_30 = (float)(int)ROUND(fVar13) + local_30;
      iVar5 = extraout_EDX + 1;
    }
    if ((float)_DAT_005b836e < local_30) {
      local_30 = 65535.0;
    }
    fVar13 = (float10)local_30;
    piVar6 = (int *)FUN_005a3120();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar6 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x163,0,1);
  return;
}
