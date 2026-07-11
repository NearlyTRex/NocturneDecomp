// Name: FUN_004247f0
// Address: 004247f0
// Address Range: [[004247f0, 00424e8c]]
// Convention: unknown
// Signature: undefined4 FUN_004247f0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004247f0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float local_fc;
  byte local_f8 [12];
  byte local_ec [12];
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4 [12];
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  float local_a4;
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
  byte local_74 [4];
  float local_70;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar4 = *(float *)(param_1 + 0x242c);
  local_1c = *(float *)(param_1 + 0x2430);
  fVar1 = SQRT(*param_4 * *param_4 + param_4[2] * param_4[2]);
  iVar3 = FUN_0054e4a0(local_b0,param_4);
  fVar5 = *(float *)(iVar3 + 4);
  FUN_0040a290(param_1,&local_bc,param_2);
  fVar2 = SQRT(local_bc * local_bc + local_b4 * local_b4);
  iVar3 = FUN_0054e4a0(local_d4,&local_bc);
  local_20 = *(float *)(iVar3 + 4);
  local_4c = 0;
  local_fc = 0.0;
  if (0.0 < SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])) {
    local_18 = (float)FUN_0040df00(local_20 - fVar5);
    local_fc = ABS(local_18);
  }
  if (((ABS(fVar2 - fVar1) < param_5 + (float)_DAT_00579f0a) &&
      (local_fc < param_6 + (float)_DAT_00579f0a)) && (ABS(local_b8) < (float)_DAT_00579f12)) {
    local_4c = 1;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  if ((fVar1 * (float)_DAT_00579f2a + (float)_DAT_00579f32 +
       ABS(fVar5) * (float)_DAT_00579f1a * (float)_DAT_00579f22 <= fVar2) || (1.0 < ABS(local_b8)))
  {
    if (param_3 == 0) {
      param_3 = FUN_004f1e00(param_2);
    }
    iVar3 = FUN_004f1600(param_3,param_1 + 0x20,local_74,*(uint *)(param_1 + 0x6c));
    if (iVar3 == 0) {
      if (local_4c != 0) {
        return 1;
      }
      FUN_0043ac60(PTR_DAT_005ad350,"CCharacter::walkToPoint - go somewhere failed\n");
      return 0xffffffff;
    }
    local_54 = -fVar4;
    local_50 = fVar2 - fVar1;
    local_44 = local_54;
    if ((local_54 <= local_50) && (local_44 = local_50, fVar4 < local_50)) {
      local_44 = fVar4;
    }
    *(float *)(param_1 + 0x241c) = *(float *)(param_1 + 0x241c) + local_44;
    local_18 = local_70 - *(float *)(param_1 + 0x34);
    fVar5 = (float)FUN_0040df00(local_18);
    fVar4 = -local_1c;
    if ((fVar4 <= fVar5) && (fVar4 = fVar5, local_1c < fVar5)) {
      fVar4 = local_1c;
    }
    *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0x2410) + fVar4;
  }
  else {
    if (fVar4 * (float)_DAT_00579f3a + fVar1 <= fVar2) {
      local_64 = -fVar4;
      local_3c = fVar2 - fVar1;
      local_30 = local_64;
      if ((local_64 <= local_3c) && (local_30 = local_3c, fVar4 < local_3c)) {
        local_30 = fVar4;
      }
      *(float *)(param_1 + 0x241c) = *(float *)(param_1 + 0x241c) + local_30;
      FUN_0040a240(param_1,&local_8c,param_1 + 0x2414);
      pfVar6 = (float *)FUN_0040a200(param_1,local_f8,param_4);
      local_a4 = *param_2 - *pfVar6;
      local_a0 = param_2[1] - pfVar6[1];
      local_98 = local_a4 - local_8c;
      local_9c = param_2[2] - pfVar6[2];
      local_94 = local_a0 - local_88;
      local_90 = local_9c - local_84;
      iVar3 = FUN_0054e4a0(local_ec,&local_98);
      fVar5 = (float)FUN_0040df00(*(float *)(iVar3 + 4) - *(float *)(param_1 + 0x34));
      fVar4 = -local_1c;
      if ((-local_1c <= fVar5) && (fVar4 = fVar5, local_1c < fVar5)) {
        fVar4 = local_1c;
      }
    }
    else {
      local_e0 = local_bc - *param_4;
      local_d8 = local_b4 - param_4[2];
      local_60 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
      local_dc = 0.0;
      if (fVar4 < local_60) {
        local_48 = fVar4 / local_60;
        local_e0 = local_e0 * local_48;
        local_dc = local_48 * 0.0;
        local_d8 = local_d8 * local_48;
      }
      pfVar6 = (float *)(param_1 + 0x2414);
      *pfVar6 = *pfVar6 + local_e0;
      *(float *)(param_1 + 0x2418) = *(float *)(param_1 + 0x2418) + local_dc;
      *(float *)(param_1 + 0x241c) = *(float *)(param_1 + 0x241c) + local_d8;
      local_80 = local_bc - *pfVar6;
      local_7c = local_b8 - *(float *)(param_1 + 0x2418);
      local_78 = local_b4 - *(float *)(param_1 + 0x241c);
      iVar3 = FUN_0054e4a0(local_c8,&local_80);
      fVar5 = (float)FUN_0040df00(*(float *)(iVar3 + 4) - fVar5);
      fVar4 = -local_1c;
      if ((fVar4 <= fVar5) && (fVar4 = fVar5, local_1c < fVar5)) {
        fVar4 = local_1c;
      }
    }
    *(float *)(param_1 + 0x2410) = fVar4;
  }
  if (local_4c == 0) {
    return 0;
  }
  return 1;
}
