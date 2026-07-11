// Name: FUN_00449720
// Address: 00449720
// Address Range: [[00449720, 00449bb5]]
// Convention: unknown
// Signature: uint FUN_00449720(int *param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00449720(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  bool bVar12;
  float local_84 [6];
  float local_6c [3];
  float local_60 [3];
  int local_54;
  float local_50;
  float local_44;
  float local_38;
  float *local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  int local_1c;
  
  if ((float)param_1[5] * (float)param_2[7] + (float)param_1[3] * (float)param_2[6] <= 0.0) {
    return 0;
  }
  pfVar11 = (float *)*param_1;
  pfVar10 = (float *)param_1[1];
  local_34 = (float *)param_1[2];
  fVar4 = *pfVar11 * (float)param_2[6] + pfVar11[2] * (float)param_2[7];
  local_20 = *pfVar10 * (float)param_2[6] + pfVar10[2] * (float)param_2[7];
  fVar5 = *local_34 * (float)param_2[6] + local_34[2] * (float)param_2[7];
  pfVar9 = pfVar11;
  local_30 = fVar4;
  if (local_20 < fVar4) {
    pfVar9 = pfVar10;
    pfVar10 = pfVar11;
    local_50 = fVar4;
    local_30 = local_20;
    local_20 = fVar4;
  }
  pfVar11 = pfVar10;
  local_38 = fVar5;
  if (fVar5 < local_20) {
    local_44 = local_20;
    local_38 = local_20;
    pfVar11 = local_34;
    local_34 = pfVar10;
    local_20 = fVar5;
  }
  pfVar10 = pfVar9;
  if (local_20 < local_30) {
    local_30 = local_20;
    pfVar10 = pfVar11;
    pfVar11 = pfVar9;
  }
  if (local_38 < (float)param_2[0xb]) {
    return 0;
  }
  if ((float)param_2[0xc] < local_30) {
    return 0;
  }
  bVar1 = (float)param_2[9] <= *(float *)(*param_1 + 4);
  if (*(float *)(*param_1 + 4) <= (float)param_2[10]) {
    bVar1 = bVar1 | 2;
  }
  local_2c = (uint)bVar1;
  bVar2 = (float)param_2[9] <= *(float *)(param_1[1] + 4);
  if (*(float *)(param_1[1] + 4) <= (float)param_2[10]) {
    bVar2 = bVar2 | 2;
  }
  local_28 = (uint)bVar2;
  bVar3 = (float)param_2[9] <= *(float *)(param_1[2] + 4);
  if (*(float *)(param_1[2] + 4) <= (float)param_2[10]) {
    bVar3 = bVar3 | 2;
  }
  local_24 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return 0;
  }
  if (0.0 <= (float)param_1[4]) {
    bVar12 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar12) {
      pfVar9 = (float *)*param_1;
      fVar4 = ((float)param_2[9] - pfVar9[1]) / (((float *)param_1[1])[1] - pfVar9[1]);
      local_6c[0] = (*(float *)param_1[1] - *pfVar9) * fVar4 + *pfVar9;
      local_84[3] = (*(float *)(param_1[1] + 8) - *(float *)(*param_1 + 8)) * fVar4 +
                    *(float *)(*param_1 + 8);
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      pfVar9 = (float *)param_1[1];
      fVar4 = ((float)param_2[9] - pfVar9[1]) / (((float *)param_1[2])[1] - pfVar9[1]);
      local_84[uVar7 + 6] = (*(float *)param_1[2] - *pfVar9) * fVar4 + *pfVar9;
      local_1c = param_1[2];
      local_54 = param_1[1];
      uVar6 = uVar7 + 1;
      local_84[uVar7 + 3] =
           (*(float *)(local_1c + 8) - *(float *)(local_54 + 8)) * fVar4 + *(float *)(local_54 + 8);
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      pfVar9 = (float *)param_1[2];
      fVar4 = ((float)param_2[9] - pfVar9[1]) / (((float *)*param_1)[1] - pfVar9[1]);
      local_1c = uVar6 * 4;
      local_84[uVar6 + 6] = (*(float *)*param_1 - *pfVar9) * fVar4 + *pfVar9;
      uVar7 = uVar6 + 1;
      local_84[uVar6 + 3] =
           (*(float *)(*param_1 + 8) - *(float *)(param_1[2] + 8)) * fVar4 +
           *(float *)(param_1[2] + 8);
    }
    if (1 < uVar7) {
      param_2[0xf] = local_6c[0];
      param_2[0x10] = local_84[3];
      param_2[0x11] = local_6c[1];
      param_2[0x12] = local_84[4];
      iVar8 = FUN_004493a0(param_2);
      if (iVar8 != 0) goto LAB_00449ae4;
    }
  }
  if ((float)param_1[4] <= 0.0) {
    bVar12 = ((local_2c ^ local_28) & 2) != 0;
    if (bVar12) {
      pfVar9 = (float *)*param_1;
      fVar4 = ((float)param_2[10] - pfVar9[1]) / (((float *)param_1[1])[1] - pfVar9[1]);
      local_60[0] = (*(float *)param_1[1] - *pfVar9) * fVar4 + *pfVar9;
      local_84[0] = (*(float *)(param_1[1] + 8) - *(float *)(*param_1 + 8)) * fVar4 +
                    *(float *)(*param_1 + 8);
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((local_28 ^ local_24) & 2) != 0) {
      pfVar9 = (float *)param_1[1];
      fVar4 = ((float)param_2[10] - pfVar9[1]) / (((float *)param_1[2])[1] - pfVar9[1]);
      local_1c = uVar7 * 4;
      local_84[uVar7 + 9] = (*(float *)param_1[2] - *pfVar9) * fVar4 + *pfVar9;
      uVar6 = uVar7 + 1;
      local_84[uVar7] =
           (*(float *)(param_1[2] + 8) - *(float *)(param_1[1] + 8)) * fVar4 +
           *(float *)(param_1[1] + 8);
    }
    uVar7 = uVar6;
    if (((local_24 ^ local_2c) & 2) != 0) {
      pfVar9 = (float *)param_1[2];
      fVar4 = ((float)param_2[10] - pfVar9[1]) / (((float *)*param_1)[1] - pfVar9[1]);
      local_1c = uVar6 * 4;
      local_84[uVar6 + 9] = (*(float *)*param_1 - *pfVar9) * fVar4 + *pfVar9;
      uVar7 = uVar6 + 1;
      local_84[uVar6] =
           (*(float *)(*param_1 + 8) - *(float *)(param_1[2] + 8)) * fVar4 +
           *(float *)(param_1[2] + 8);
    }
    if (1 < uVar7) {
      param_2[0xf] = local_60[0];
      param_2[0x10] = local_84[0];
      param_2[0x11] = local_60[1];
      param_2[0x12] = local_84[1];
      iVar8 = FUN_004493a0(param_2);
      if (iVar8 != 0) {
LAB_00449ae4:
        param_2[2] = 0;
        *param_2 = param_2[0x13];
        param_2[3] = ((float)param_2[7] * (float)param_2[0x13] + (float)param_2[5]) -
                     (float)param_2[0x16];
        param_2[1] = ((float)param_2[6] * (float)param_2[0x13] + (float)param_2[4]) -
                     (float)param_2[0x15];
        return 1;
      }
    }
  }
  uVar6 = FUN_00449680(param_2,pfVar10,pfVar11);
  uVar7 = FUN_00449680(param_2,pfVar10,local_34);
  return uVar7 | uVar6;
}
