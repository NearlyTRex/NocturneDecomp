// Name: FUN_004c9580
// Address: 004c9580
// Address Range: [[004c9580, 004c9bdc]]
// Convention: unknown
// Signature: void FUN_004c9580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9580(int param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  float *pfVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uint local_1dc [12];
  byte local_1ac [48];
  byte local_17c [48];
  uint local_14c [3];
  byte local_140 [12];
  byte local_134 [12];
  byte local_128 [12];
  uint local_11c [12];
  byte local_ec [40];
  uint local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  byte local_7c [12];
  uint local_70;
  uint local_6c;
  uint local_68;
  byte local_64 [12];
  byte local_58 [12];
  byte local_4c [20];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  int local_14;
  
  bVar11 = 0;
  FUN_00409fc0(param_1);
  FUN_00454510(param_1 + 0x150);
  FUN_00454510(param_1 + 0x2cc);
  FUN_00454510(param_1 + 0x448);
  FUN_00461eb0(DAT_005ae704,param_1 + 0x14b8);
  iVar4 = FUN_00454530(param_1 + 0x150);
  local_c4 = *(uint *)(iVar4 + 0x338);
  local_c0 = *(float *)(iVar4 + 0x33c);
  local_bc = *(uint *)(iVar4 + 0x340);
  local_b8 = *(uint *)(iVar4 + 0x344);
  local_b4 = *(float *)(iVar4 + 0x348);
  local_b0 = *(float *)(iVar4 + 0x34c);
  *(uint *)(param_1 + 0x1504) = 0x414239c1;
  fVar12 = (float10)fcos((float10)_DAT_005a003c * (float10)_DAT_00587f2a);
  *(float *)(param_1 + 0x1500) =
       (float)(((float10)*(float *)(param_1 + 0x1504) + (float10)local_b0) / fVar12);
  *(float *)(param_1 + 0x1508) = local_b4 - local_c0;
  if (SQRT(*(float *)(param_1 + 0x5e4) * *(float *)(param_1 + 0x5e4) +
           *(float *)(param_1 + 0x5dc) * *(float *)(param_1 + 0x5dc) +
           *(float *)(param_1 + 0x5e0) * *(float *)(param_1 + 0x5e0)) == 0.0) {
    *(uint *)(param_1 + 0x5dc) = 0;
    fVar1 = (float)_DAT_00587f32;
    *(uint *)(param_1 + 0x5e4) = 0xbf8ccccd;
    *(float *)(param_1 + 0x5e0) = *(float *)(param_1 + 0x1508) + fVar1;
  }
  if (SQRT(*(float *)(param_1 + 0x5cc) * *(float *)(param_1 + 0x5cc) +
           *(float *)(param_1 + 0x5c4) * *(float *)(param_1 + 0x5c4) +
           *(float *)(param_1 + 0x5c8) * *(float *)(param_1 + 0x5c8)) == 0.0) {
    *(uint *)(param_1 + 0x5c8) = 0x40400000;
    *(uint *)(param_1 + 0x5cc) = 0xbdcccccd;
    *(uint *)(param_1 + 0x5c4) = 0;
  }
  local_18 = local_b0;
  FUN_0055afb0(local_17c,param_1 + 0x5c4,param_1 + 0x5d0);
  iVar4 = FUN_00454530(param_1 + 0x2cc);
  local_ac = *(uint *)(iVar4 + 0x338);
  local_a8 = *(uint *)(iVar4 + 0x33c);
  local_a4 = *(uint *)(iVar4 + 0x340);
  local_a0 = *(uint *)(iVar4 + 0x344);
  local_9c = *(uint *)(iVar4 + 0x348);
  local_98 = *(uint *)(iVar4 + 0x34c);
  local_34 = param_1 + 0xa98;
  local_28 = (uint *)(param_1 + 0xabc);
  local_2c = param_1 + 0xa9c;
  local_30 = param_1 + 0xaa0;
  local_38 = 0;
  do {
    iVar4 = local_38;
    FUN_004ca640(param_1,local_38);
    iVar8 = local_34 + iVar4 * 0xb8;
    local_24 = iVar8;
    FUN_004cae20(param_1,iVar4,iVar8,local_2c,local_30);
    *(uint *)(iVar8 + 0x14) = 0;
    *(uint *)(iVar8 + 0x10) = *(uint *)(iVar8 + 0x14);
    *(uint *)(iVar8 + 0x20) = 0;
    *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0x10);
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x20);
    local_14 = iVar4;
    local_90 = (float)iVar4 * _DAT_005a003c;
    *(uint *)(iVar8 + 0xac) = 0;
    *(uint *)(iVar8 + 0xb0) = 0;
    *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x1c);
    *(uint *)(iVar8 + 0xb4) = 0;
    local_94 = 0;
    local_8c = 0;
    FUN_0044d7a0(local_ec,&local_94);
    local_80 = *(uint *)(param_1 + 0x1504);
    local_88 = 0;
    local_84 = 0;
    uVar5 = FUN_0044da40(local_ec,local_7c,&local_88,&local_94);
    FUN_0055afb0(local_1ac,uVar5);
    FUN_0055aa00(local_17c,local_1ac);
    puVar6 = local_1dc;
    puVar9 = local_11c;
    for (iVar4 = 0xc; puVar3 = local_28, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar6 = (uint *)FUN_0055bc00(local_11c,local_4c);
    iVar4 = local_24;
    if (puVar6 != puVar3) {
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
    }
    puVar9 = (uint *)(local_24 + 0x30);
    puVar6 = (uint *)FUN_0055b180(local_11c,local_64);
    if (puVar9 != puVar6) {
      *puVar9 = *puVar6;
      *(uint *)(iVar4 + 0x34) = puVar6[1];
      *(uint *)(iVar4 + 0x38) = puVar6[2];
    }
    puVar6 = local_14c;
    uVar10 = 0;
    FUN_005644a7(local_14c,4,&DAT_005993b0);
    do {
      local_6c = 0;
      local_70 = local_ac;
      if ((uVar10 & 1) != 0) {
        local_70 = local_a0;
      }
      local_68 = local_a4;
      if ((uVar10 & 2) != 0) {
        local_68 = local_98;
      }
      local_20 = local_70;
      local_1c = local_68;
      puVar9 = (uint *)FUN_0055a8b0(local_58,&local_70,local_11c);
      if (puVar6 != puVar9) {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
      }
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 3;
    } while ((int)uVar10 < 4);
    FUN_0046c5b0(local_24 + 0x3c,local_134,local_140,local_14c);
    local_30 = local_30 + 0xb8;
    iVar4 = local_38 + 1;
    local_38 = iVar4;
    FUN_0046c5b0(local_24 + 0x74,local_134,local_128,local_140);
    local_28 = local_28 + 0x2e;
    local_2c = local_2c + 0xb8;
  } while (iVar4 < 0xc);
  fVar12 = (float10)fcos((float10)_DAT_005a003c);
  fVar13 = (float10)fsin((float10)_DAT_005a003c);
  fVar2 = (float)_DAT_00587f3a;
  fVar14 = (float10)_DAT_00587f2a;
  pfVar7 = (float *)(param_1 + 0x1344);
  fVar1 = (float)_DAT_00587f42;
  *(float *)(param_1 + 0x134c) = (float)(fVar12 * (float10)*(float *)(param_1 + 0x1504) * fVar14);
  *pfVar7 = (float)((float10)*(float *)(param_1 + 0x1504) * fVar13 * fVar14);
  *(float *)(param_1 + 0x1348) =
       *(float *)(param_1 + 0x5e0) * fVar1 + *(float *)(param_1 + 0x5c8) * fVar2;
  if ((float *)(param_1 + 0x1338) != pfVar7) {
    *(float *)(param_1 + 0x1338) = *pfVar7;
    *(uint *)(param_1 + 0x133c) = *(uint *)(param_1 + 0x1348);
    *(uint *)(param_1 + 0x1340) = *(uint *)(param_1 + 0x134c);
  }
  *(uint *)(param_1 + 0x1360) = 0xbda4de71;
  *(uint *)(param_1 + 0x1368) = 0;
  *(uint *)(param_1 + 0x1364) = 0xbfc529dc;
  *(float *)(param_1 + 0x133c) = *(float *)(param_1 + 0x133c) + _DAT_00587f4a;
  FUN_0044d7a0(param_1 + 0x136c,(uint *)(param_1 + 0x1360));
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x133c);
  *(uint *)(param_1 + 0x13a0) = *(uint *)(param_1 + 0x1340);
  *(uint *)(param_1 + 0x13a8) = *(uint *)(param_1 + 0x1348);
  *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x134c);
  *(uint *)(param_1 + 0x13c0) = *(uint *)(param_1 + 0x1360);
  *(uint *)(param_1 + 0x13c8) = *(uint *)(param_1 + 0x1368);
  *(float *)(param_1 + 0x1398) = -*(float *)(param_1 + 0x1338);
  *(float *)(param_1 + 0x13a4) = -*(float *)(param_1 + 0x1344);
  *(float *)(param_1 + 0x13c4) = -*(float *)(param_1 + 0x1364);
  iVar4 = 0;
  FUN_0044d7a0(param_1 + 0x13cc,(uint *)(param_1 + 0x13c0));
  do {
    FUN_004cb980(param_1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}
