// Name: FUN_0042bca0
// Address: 0042bca0
// Address Range: [[0042bca0, 0042c4bd]]
// Convention: unknown
// Signature: void FUN_0042bca0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bca0(int param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float local_f0;
  float local_ec;
  byte local_e8 [12];
  uint local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  byte local_ac [12];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  uint uStack_18;
  
  if (*(float *)(param_1 + 0x564) < _DAT_0057a58a) {
    uStack_18 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x38))(param_1,0x3dcccccd,0);
    *(uint *)(param_1 + 0x564) = uStack_18;
  }
  if (*(int *)(param_1 + 0x56c) != 0) {
    pfVar6 = (float *)(param_1 + 0x2a8);
    local_ec = 0.0;
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x150) + -1; iVar5 = iVar5 + 1) {
      local_7c = pfVar6[-9] - *pfVar6;
      local_78 = pfVar6[-8] - pfVar6[1];
      local_74 = pfVar6[-7] - pfVar6[2];
      pfVar6 = pfVar6 + 9;
      local_ec = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78) + local_ec;
    }
  }
  pfVar6 = (float *)(param_1 + 0x284 + (*(int *)(param_1 + 0x150) + -1) * 0x24);
  *(float *)(param_1 + 0x568) = 1.0 / param_2;
  local_64 = *pfVar6;
  local_60 = pfVar6[1];
  local_5c = pfVar6[2];
  puVar1 = (uint *)FUN_0042b890(param_1,local_ac);
  puVar2 = (uint *)((*(int *)(param_1 + 0x150) + -1) * 0x24 + param_1 + 0x284);
  if (puVar2 != puVar1) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
  }
  iVar5 = *(int *)(param_1 + 0x150) + -1;
  *(uint *)(param_1 + 0x298 + iVar5 * 0x24) = 0;
  *(uint *)(param_1 + 0x294 + iVar5 * 0x24) = *(uint *)(param_1 + 0x298 + iVar5 * 0x24);
  *(uint *)(param_1 + 0x290 + iVar5 * 0x24) = *(uint *)(param_1 + 0x294 + iVar5 * 0x24);
  if ((uint *)(param_1 + 0x284) != (uint *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0x284) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x288) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x298) = 0;
  *(uint *)(param_1 + 0x294) = *(uint *)(param_1 + 0x298);
  *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x294);
  local_58 = param_1 + 0x284;
  local_40 = (float *)(param_1 + 0x560);
  local_34 = param_1 + 0x2cc;
  pfVar6 = (float *)(param_1 + 0x2b4);
  local_38 = local_58;
  for (local_30 = 1; local_30 < *(int *)(param_1 + 0x150) + -1; local_30 = local_30 + 1) {
    *pfVar6 = *local_40 * *pfVar6;
    pfVar6[1] = *local_40 * pfVar6[1];
    pfVar6[2] = *local_40 * pfVar6[2];
    local_d4 = 0;
    local_dc = 0;
    local_44 = *(float *)(param_1 + 0x554) * (float)_DAT_0057a58e;
    local_b8 = (1.0 / local_44) * 0.0;
    local_d8 = 0.0 - *(float *)(param_1 + 0x554);
    local_b4 = local_d8 * (1.0 / local_44);
    pfVar4 = (float *)(local_30 * 0x24 + local_58);
    if (&local_d0 != &local_b8) {
      local_d0 = local_b8;
      local_cc = local_b4;
      local_c8 = local_b8;
    }
    local_88 = local_d0 * param_2;
    local_84 = local_cc * param_2;
    local_80 = local_c8 * param_2;
    local_94 = pfVar4[3] + local_88;
    pfVar4[3] = local_94;
    local_94 = local_94 * param_2;
    pfVar4[4] = pfVar4[4] + local_84;
    pfVar4[5] = pfVar4[5] + local_80;
    local_90 = pfVar4[4] * param_2;
    local_8c = param_2 * pfVar4[5];
    *pfVar4 = *pfVar4 + local_94;
    pfVar4[1] = pfVar4[1] + local_90;
    pfVar4[2] = pfVar4[2] + local_8c;
    local_b0 = local_b8;
    FUN_0042baa0(param_1,pfVar4,local_38);
    FUN_0042baa0(param_1,pfVar4,local_34);
    pfVar6 = pfVar6 + 9;
    local_34 = local_34 + 0x24;
    local_38 = local_38 + 0x24;
  }
  local_28 = (uint *)(param_1 + 0x290);
  local_24 = (uint *)(param_1 + 0x284);
  local_2c = (uint *)(param_1 + 0x20);
  local_4c = param_1 + 0x2cc;
  local_48 = param_1 + 0x2a8;
  local_3c = 0;
  do {
    puVar1 = (uint *)FUN_0042b890(param_1,local_70);
    puVar2 = local_24 + (*(int *)(param_1 + 0x150) + -1) * 9;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar5 = *(int *)(param_1 + 0x150) + -1;
    local_24[iVar5 * 9 + 5] = 0;
    local_24[iVar5 * 9 + 4] = local_24[iVar5 * 9 + 5];
    local_24[iVar5 * 9 + 3] = local_24[iVar5 * 9 + 4];
    if (local_24 != local_2c) {
      *local_24 = *local_2c;
      local_24[1] = local_2c[1];
      local_24[2] = local_2c[2];
    }
    local_28[2] = 0;
    local_1c = 1;
    local_28[1] = local_28[2];
    *local_28 = local_28[1];
    local_20 = local_24;
    iVar5 = local_48;
    iVar7 = local_4c;
    for (; local_1c < *(int *)(param_1 + 0x150) + -1; local_1c = local_1c + 1) {
      FUN_0042baa0(param_1,iVar5,local_20);
      FUN_0042baa0(param_1,iVar5,iVar7);
      iVar5 = iVar5 + 0x24;
      local_20 = local_20 + 9;
      iVar7 = iVar7 + 0x24;
    }
    puVar1 = (uint *)FUN_0042b890(param_1,local_e8);
    puVar2 = local_24 + (*(int *)(param_1 + 0x150) + -1) * 9;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar5 = *(int *)(param_1 + 0x150) + -1;
    local_24[iVar5 * 9 + 5] = 0;
    local_24[iVar5 * 9 + 4] = local_24[iVar5 * 9 + 5];
    local_24[iVar5 * 9 + 3] = local_24[iVar5 * 9 + 4];
    if (local_24 != local_2c) {
      *local_24 = *local_2c;
      local_24[1] = local_2c[1];
      local_24[2] = local_2c[2];
    }
    local_28[2] = 0;
    local_28[1] = local_28[2];
    *local_28 = local_28[1];
    local_3c = local_3c + 1;
  } while (local_3c < 3);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    puVar1 = (uint *)(param_1 + 0x29c);
    do {
      puVar2 = (uint *)(iVar5 * 0x24 + param_1 + 0x284);
      if (puVar1 != puVar2) {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
      }
      iVar5 = iVar5 + 1;
      puVar1 = puVar1 + 9;
    } while (iVar5 < *(int *)(param_1 + 0x150));
  }
  local_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x56c) != 0) {
    if (local_ec < *(float *)(param_1 + 0x154) * (float)_DAT_0057a596) {
      pfVar6 = (float *)(param_1 + 0x2a8);
      local_f0 = 0.0;
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x150) + -1; iVar5 = iVar5 + 1) {
        local_c4 = pfVar6[-9] - *pfVar6;
        local_c0 = pfVar6[-8] - pfVar6[1];
        local_bc = pfVar6[-7] - pfVar6[2];
        pfVar6 = pfVar6 + 9;
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (*(float *)(param_1 + 0x154) * (float)_DAT_0057a596 < local_f0) {
        local_50 = 1;
      }
    }
    iVar5 = *(int *)(param_1 + 0x150) + -1;
    local_a0 = local_64 - *(float *)(param_1 + 0x284 + iVar5 * 0x24);
    local_9c = local_60 - *(float *)(param_1 + 0x288 + iVar5 * 0x24);
    local_98 = local_5c - *(float *)(param_1 + 0x28c + iVar5 * 0x24);
    if (param_2 * (float)_DAT_0057a59e <
        SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c)) {
      local_54 = 1;
    }
  }
  if ((local_50 != 0) && (*(char *)(param_1 + 0x1ac) != '\0')) {
    FUN_00527230(*(uint *)(param_1 + 0x278));
    iVar5 = FUN_00526c50(*(uint *)(param_1 + 0x210));
    if (iVar5 == 0) {
      uVar3 = FUN_0052ea90(0x02DC9450,param_1,param_1 + 0x1ac,
                           (*(int *)(param_1 + 0x150) + -1) * 0x24 + param_1 + 0x284);
      *(uint *)(param_1 + 0x278) = uVar3;
    }
  }
  *(float *)(param_1 + 0x27c) = *(float *)(param_1 + 0x27c) - param_2;
  if (local_54 == 0) {
    if (0.0 <= *(float *)(param_1 + 0x27c)) {
      return;
    }
    *(uint *)(param_1 + 0x27c) = 0;
    FUN_00527230(*(uint *)(param_1 + 0x278));
    return;
  }
  iVar5 = FUN_00526c50(*(uint *)(param_1 + 0x210));
  if (iVar5 == 0) {
    iVar5 = FUN_00526c50(*(uint *)(param_1 + 0x278));
    if (iVar5 == 0) {
      uVar3 = FUN_0052ea90(0x02DC9450,param_1,param_1 + 0x214,
                           (*(int *)(param_1 + 0x150) + -1) * 0x24 + param_1 + 0x284);
      *(uint *)(param_1 + 0x278) = uVar3;
    }
  }
  *(uint *)(param_1 + 0x27c) = 0x3f000000;
  return;
}
