// Name: FUN_00426e80
// Address: 00426e80
// Address Range: [[00426e80, 004270da]]
// Convention: unknown
// Signature: void FUN_00426e80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426e80(int param_1)

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
  
  if (*(int *)(param_1 + 0x2f08) == 0) {
    return;
  }
  FUN_00461eb0(DAT_005ae704,&DAT_005ad1fc);
  iVar12 = param_1 + 0x150;
  if (*(int *)(param_1 + 0xb640) != 0) {
    FUN_0051d9d0(iVar12,0xffffffff,0xc9,0,1);
    return;
  }
  iVar3 = FUN_0051e0a0(iVar12);
  iVar4 = FUN_0051e020(iVar12);
  iVar12 = *(int *)(param_1 + 0x2380);
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0x28558)) {
    iVar8 = 0;
    do {
      *(uint *)((int)&DAT_00765aa0 + iVar8) = 0;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar5 < *(int *)(iVar3 + 0x28558));
  }
  fVar2 = 0x40400000;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2f08)) {
    fVar1 = (float)_DAT_0057a002;
    iVar8 = param_1;
    do {
      (&DAT_00765aa0)[*(int *)(iVar8 + 0x2f18)] =
           (float)(&DAT_00765aa0)[*(int *)(iVar8 + 0x2f18)] +
           (*(float *)(iVar8 + 0x2f28) * fVar1) / fVar2;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x2f08));
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar5 = iVar4;
  if (0 < *(int *)(iVar3 + 0x28558)) {
    do {
      if ((float)_DAT_0057a002 <= (float)(&DAT_00765aa0)[iVar8]) {
        iVar9 = iVar9 + 1;
      }
      if (*(int *)(iVar5 + 0x288c) == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar8 < *(int *)(iVar3 + 0x28558));
  }
  if (iVar9 == *(int *)(iVar3 + 0x28558)) {
    *(uint *)(param_1 + 0xb644) = 0x3f800000;
    *(uint *)(param_1 + 0xb640) = 1;
  }
  local_1c = 0;
  for (iVar3 = 0; iVar5 = iVar4 + iVar12 * 4, iVar3 < *(int *)(iVar5 + 0x2c); iVar3 = iVar3 + 1) {
    pbVar11 = (byte *)(*(int *)(iVar5 + 0x40) + local_1c);
    local_30 = 0.0;
    iVar5 = 0;
    pbVar7 = pbVar11;
    pbVar10 = pbVar11;
    while (iVar5 < (int)(uint)*pbVar11) {
      fVar13 = (float10)*(float *)(pbVar7 + 4) * (float10)(float)(&DAT_00765aa0)[pbVar10[1]];
      FUN_00563a30();
      pbVar7 = (byte *)(extraout_ECX + 4);
      pbVar10 = pbVar10 + 1;
      local_30 = (float)(int)ROUND(fVar13) + local_30;
      iVar5 = extraout_EDX + 1;
    }
    if ((float)_DAT_0057a002 < local_30) {
      local_30 = 65535.0;
    }
    fVar13 = (float10)local_30;
    piVar6 = (int *)FUN_00563a30();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar6 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  FUN_0051d9d0(param_1 + 0x150,0xffffffff,0x163,0,1);
  return;
}
