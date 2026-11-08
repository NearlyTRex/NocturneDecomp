// Name: FUN_0042fe00
// Address: 0042fe00
// Address Range: [[0042fe00, 0043005a]]
// Convention: unknown
// Signature: void FUN_0042fe00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fe00(int param_1)

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
  
  if (*(int *)(param_1 + 0x3120) == 0) {
    return;
  }
  FUN_00484f00(DAT_00612560,&DAT_00610cdc);
  iVar12 = param_1 + 0x158;
  if (*(int *)(param_1 + 0xb9e8) != 0) {
    FUN_00569810(iVar12,0xffffffff,0xc9,0,1);
    return;
  }
  iVar3 = FUN_00569f30(iVar12);
  iVar4 = FUN_00569eb0(iVar12);
  iVar12 = *(int *)(param_1 + 0x2478);
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0x1de78)) {
    iVar8 = 0;
    do {
      *(uint *)((int)&DAT_007c6384 + iVar8) = 0;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar5 < *(int *)(iVar3 + 0x1de78));
  }
  fVar2 = 0x40400000;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x3120)) {
    fVar1 = (float)_DAT_005d5a27;
    iVar8 = param_1;
    do {
      (&DAT_007c6384)[*(int *)(iVar8 + 0x3130)] =
           (float)(&DAT_007c6384)[*(int *)(iVar8 + 0x3130)] +
           (*(float *)(iVar8 + 0x3140) * fVar1) / fVar2;
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x3120));
  }
  iVar8 = 0;
  iVar9 = 0;
  iVar5 = iVar4;
  if (0 < *(int *)(iVar3 + 0x1de78)) {
    do {
      if ((float)_DAT_005d5a27 <= (float)(&DAT_007c6384)[iVar8]) {
        iVar9 = iVar9 + 1;
      }
      if (*(int *)(iVar5 + 0x33cc) == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar8 < *(int *)(iVar3 + 0x1de78));
  }
  if (iVar9 == *(int *)(iVar3 + 0x1de78)) {
    *(uint *)(param_1 + 0xb9ec) = 0x3f800000;
    *(uint *)(param_1 + 0xb9e8) = 1;
  }
  local_1c = 0;
  for (iVar3 = 0; iVar5 = iVar4 + iVar12 * 4, iVar3 < *(int *)(iVar5 + 0x2c); iVar3 = iVar3 + 1) {
    pbVar11 = (byte *)(*(int *)(iVar5 + 0x40) + local_1c);
    local_30 = 0.0;
    iVar5 = 0;
    pbVar7 = pbVar11;
    pbVar10 = pbVar11;
    while (iVar5 < (int)(uint)*pbVar11) {
      fVar13 = (float10)*(float *)(pbVar7 + 4) * (float10)(float)(&DAT_007c6384)[pbVar10[1]];
      FUN_005c03a0();
      pbVar7 = (byte *)(extraout_ECX + 4);
      pbVar10 = pbVar10 + 1;
      local_30 = (float)(int)ROUND(fVar13) + local_30;
      iVar5 = extraout_EDX + 1;
    }
    if ((float)_DAT_005d5a27 < local_30) {
      local_30 = 65535.0;
    }
    fVar13 = (float10)local_30;
    piVar6 = (int *)FUN_005c03a0();
    local_1c = local_1c + 0x34;
    *(int *)(*piVar6 + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  FUN_00569810(param_1 + 0x158,0xffffffff,0x163,0,1);
  return;
}
