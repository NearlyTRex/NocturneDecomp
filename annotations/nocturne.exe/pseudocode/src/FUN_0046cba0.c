// Name: FUN_0046cba0
// Address: 0046cba0
// Address Range: [[0046cba0, 0046cf9c]]
// Convention: unknown
// Signature: void FUN_0046cba0(float *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0046cba0(float *param_1,uint *param_2)

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
  float local_7c [6];
  float local_64 [3];
  float local_58 [5];
  float local_44;
  float *local_40;
  float local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if (param_1[0xb] * (float)param_2[7] + param_1[9] * (float)param_2[6] <= 0.0) {
    return;
  }
  pfVar10 = param_1 + 3;
  local_40 = param_1 + 6;
  fVar4 = *param_1 * (float)param_2[6] + param_1[2] * (float)param_2[7];
  local_2c = *pfVar10 * (float)param_2[6] + param_1[5] * (float)param_2[7];
  fVar5 = param_1[8] * (float)param_2[7] + *local_40 * (float)param_2[6];
  pfVar9 = param_1;
  local_3c = fVar4;
  if (local_2c < fVar4) {
    pfVar9 = pfVar10;
    pfVar10 = param_1;
    local_3c = local_2c;
    local_2c = fVar4;
    local_28 = fVar4;
  }
  pfVar11 = pfVar10;
  local_44 = fVar5;
  if (fVar5 < local_2c) {
    local_24 = local_2c;
    local_44 = local_2c;
    pfVar11 = local_40;
    local_40 = pfVar10;
    local_2c = fVar5;
  }
  pfVar10 = pfVar9;
  if (local_2c < local_3c) {
    local_3c = local_2c;
    pfVar10 = pfVar11;
    pfVar11 = pfVar9;
  }
  if (local_44 < (float)param_2[0xb]) {
    return;
  }
  if ((float)param_2[0xc] < local_3c) {
    return;
  }
  bVar1 = (float)param_2[9] <= param_1[1];
  if (param_1[1] <= (float)param_2[10]) {
    bVar1 = bVar1 | 2;
  }
  local_38 = (uint)bVar1;
  bVar2 = (float)param_2[9] <= param_1[4];
  if (param_1[4] <= (float)param_2[10]) {
    bVar2 = bVar2 | 2;
  }
  local_30 = (uint)bVar2;
  bVar3 = (float)param_2[9] <= param_1[7];
  if (param_1[7] <= (float)param_2[10]) {
    bVar3 = bVar3 | 2;
  }
  local_34 = (uint)bVar3;
  if ((bVar1 & bVar2 & bVar3) != 0) {
    return;
  }
  if (0.0 <= param_1[10]) {
    bVar12 = ((bVar1 ^ bVar2) & 1) != 0;
    if (bVar12) {
      fVar4 = ((float)param_2[9] - param_1[1]) / (param_1[4] - param_1[1]);
      local_7c[0] = (param_1[3] - *param_1) * fVar4 + *param_1;
      local_58[0] = (param_1[5] - param_1[2]) * fVar4 + param_1[2];
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((bVar2 ^ bVar3) & 1) != 0) {
      fVar4 = ((float)param_2[9] - param_1[4]) / (param_1[7] - param_1[4]);
      local_7c[uVar7] = (param_1[6] - param_1[3]) * fVar4 + param_1[3];
      uVar6 = uVar7 + 1;
      local_7c[uVar7 + 9] = (param_1[8] - param_1[5]) * fVar4 + param_1[5];
    }
    uVar7 = uVar6;
    if (((bVar3 ^ bVar1) & 1) != 0) {
      fVar4 = ((float)param_2[9] - param_1[7]) / (param_1[1] - param_1[7]);
      local_7c[uVar6] = (*param_1 - param_1[6]) * fVar4 + param_1[6];
      uVar7 = uVar6 + 1;
      local_7c[uVar6 + 9] = (param_1[2] - param_1[8]) * fVar4 + param_1[8];
    }
    if (1 < uVar7) {
      param_2[0xf] = local_7c[0];
      param_2[0x10] = local_58[0];
      param_2[0x11] = local_7c[1];
      param_2[0x12] = local_58[1];
      iVar8 = FUN_0046c820(param_2);
      if (iVar8 != 0) goto LAB_0046cee8;
    }
  }
  if (param_1[10] <= 0.0) {
    bVar12 = ((local_38 ^ local_30) & 2) != 0;
    if (bVar12) {
      fVar4 = ((float)param_2[10] - param_1[1]) / (param_1[4] - param_1[1]);
      local_7c[3] = (param_1[3] - *param_1) * fVar4 + *param_1;
      local_64[0] = (param_1[5] - param_1[2]) * fVar4 + param_1[2];
    }
    uVar7 = (uint)bVar12;
    uVar6 = uVar7;
    if (((local_30 ^ local_34) & 2) != 0) {
      fVar4 = ((float)param_2[10] - param_1[4]) / (param_1[7] - param_1[4]);
      local_7c[uVar7 + 3] = (param_1[6] - param_1[3]) * fVar4 + param_1[3];
      uVar6 = uVar7 + 1;
      local_7c[uVar7 + 6] = (param_1[8] - param_1[5]) * fVar4 + param_1[5];
    }
    uVar7 = uVar6;
    if (((local_34 ^ local_38) & 2) != 0) {
      fVar4 = ((float)param_2[10] - param_1[7]) / (param_1[1] - param_1[7]);
      local_7c[uVar6 + 3] = (*param_1 - param_1[6]) * fVar4 + param_1[6];
      uVar7 = uVar6 + 1;
      local_7c[uVar6 + 6] = (param_1[2] - param_1[8]) * fVar4 + param_1[8];
    }
    if (1 < uVar7) {
      param_2[0xf] = local_7c[3];
      param_2[0x10] = local_64[0];
      param_2[0x11] = local_7c[4];
      param_2[0x12] = local_64[1];
      iVar8 = FUN_0046c820(param_2);
      if (iVar8 != 0) {
LAB_0046cee8:
        param_2[2] = 0;
        *param_2 = param_2[0x13];
        param_2[3] = ((float)param_2[7] * (float)param_2[0x13] + (float)param_2[5]) -
                     (float)param_2[0x16];
        param_2[1] = ((float)param_2[6] * (float)param_2[0x13] + (float)param_2[4]) -
                     (float)param_2[0x15];
        return;
      }
    }
  }
  FUN_0046cb00(param_2,pfVar10,pfVar11);
  FUN_0046cb00(param_2,pfVar10,local_40);
  return;
}
