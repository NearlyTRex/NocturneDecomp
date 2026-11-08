// Name: FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042c011]]
// Convention: unknown
// Signature: undefined4 FUN_0042b9e0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042b9e0(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  float afStackY_1118 [1010];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  float local_12c;
  uint local_124;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  byte local_f4 [4];
  float local_f0;
  float local_e8;
  float local_e4 [5];
  uint local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_b8;
  float local_b4;
  float local_ac;
  uint local_a0;
  float local_9c;
  float local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  float local_64;
  float local_60;
  float local_5c;
  int local_50;
  float local_44;
  float local_3c;
  float local_38;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  
  bVar6 = 0;
  local_1c = *(float *)(param_1 + 0x2524);
  local_20 = *(float *)(param_1 + 0x2528);
  local_134 = SQRT(*param_4 * *param_4 + param_4[2] * param_4[2]);
  FUN_00576250(param_4);
  local_b8 = local_d0;
  local_e4[(uint)bVar6 * -2 + 0xc] = local_e4[(uint)bVar6 * -2 + 6];
  local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  local_140 = local_b4;
  FUN_00408bf0(param_1,param_2);
  local_118 = local_94;
  (&stack0xfffffeec)[(uint)bVar6 * 0xfffffffe] = local_e4[(uint)bVar6 * -2 + 0x15];
  *(float *)((int)&stack0xfffffef0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
  local_24 = SQRT(local_118 * local_118 + local_110 * local_110);
  FUN_00576250(&stack0xfffffee8);
  fVar5 = local_24 - local_134;
  local_130 = local_70;
  *(float *)((int)&stack0xfffffed4 + (uint)bVar6 * -8) = local_e4[(uint)bVar6 * -2 + 0x1e];
  *(float *)(&stack0xfffffed8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
  local_50 = 0;
  local_138 = 0.0;
  local_13c = ABS(fVar5);
  if (0.0 < SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])) {
    local_14 = (float)FUN_0040cfa0(local_12c - local_b4);
    local_138 = ABS(local_14);
  }
  if (((local_13c < param_5 + (float)_DAT_005b81f6) && (local_138 < param_6 + (float)_DAT_005b81f6))
     && (ABS(local_114) < (float)_DAT_005b81fe)) {
    local_50 = 1;
  }
  fVar2 = (float)_DAT_005b8206;
  fVar1 = (float)_DAT_005b820e;
  *(uint *)(param_1 + 0x24a4) = 0;
  fVar3 = (float)_DAT_005b8216;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  fVar5 = (float)_DAT_005b821e;
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  local_64 = local_134 * fVar3 + fVar5 + ABS(local_140) * fVar2 * fVar1;
  if ((*(int *)(param_1 + 0x27a8) != 0) || ((local_24 < local_64 && (ABS(local_114) <= 1.0)))) {
    local_5c = -local_1c;
    local_30 = local_24 - local_134;
    local_3c = local_5c;
    if ((local_5c <= local_30) && (local_3c = local_30, local_1c < local_30)) {
      local_3c = local_1c;
    }
    *(float *)(param_1 + 0x2514) = *(float *)(param_1 + 0x2514) + local_3c;
    FUN_00408b80(param_1,param_1 + 0x250c);
    local_100 = local_10c;
    local_e4[(uint)bVar6 * -2 + -6] = *(float *)(&stack0xfffffef8 + (uint)bVar6 * -8);
    *(float *)(local_f4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -4) =
         local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
    FUN_00408b00(param_1,param_4);
    local_e8 = local_ac;
    local_e4[(uint)bVar6 * -2] = local_e4[(uint)bVar6 * -2 + 0xf];
    local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    local_7c = *param_2 - local_e8;
    local_78 = param_2[1] - local_e4[0];
    local_74 = param_2[2] - local_e4[1];
    local_88 = *param_2 - local_e8;
    local_e4[(uint)bVar6 * -2 + 0x18] = local_e4[(uint)bVar6 * -2 + 0x1b];
    local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
    local_c4 = local_88 - local_100;
    local_c0 = local_84 - local_fc;
    local_bc = local_80 - local_f8;
    local_e4[2] = local_88 - local_100;
    local_e4[(uint)bVar6 * -2 + 3] = local_e4[(uint)bVar6 * -2 + 9];
    local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    FUN_00576250(local_e4 + 2);
    local_a0 = local_124;
    local_e4[(uint)bVar6 * -2 + 0x12] = *(float *)(&stack0xfffffee0 + (uint)bVar6 * -8);
    local_e4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         *(float *)(&stack0xfffffee4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fVar3 = (float)FUN_0040cfa0(local_9c - *(float *)(param_1 + 0x34));
    fVar5 = -local_20;
    if ((fVar5 <= fVar3) && (fVar5 = fVar3, local_20 < fVar3)) {
      fVar5 = local_20;
    }
    *(float *)(param_1 + 0x2508) = fVar5;
    if (*(int *)(param_1 + 0x27a8) != 0) {
      fVar5 = -local_1c;
      local_114 = local_114 - param_4[1];
      if ((fVar5 <= local_114) && (fVar5 = local_114, local_1c < local_114)) {
        fVar5 = local_1c;
      }
      *(float *)(param_1 + 0x2510) = fVar5;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = FUN_0050ced0(param_2);
    }
    iVar4 = FUN_0050c680(param_3,param_1 + 0x20,local_f4,*(uint *)(param_1 + 0x6c));
    if (iVar4 == 0) {
      if (local_50 == 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"CCharacter::walkToPoint - go somewhere failed\n");
        return 0xffffffff;
      }
      return 1;
    }
    local_60 = -local_1c;
    local_38 = local_24 - local_134;
    local_44 = local_60;
    if ((local_60 <= local_38) && (local_44 = local_38, local_1c < local_38)) {
      local_44 = local_1c;
    }
    *(float *)(param_1 + 0x2514) = *(float *)(param_1 + 0x2514) + local_44;
    local_14 = local_f0 - *(float *)(param_1 + 0x34);
    fVar3 = (float)FUN_0040cfa0(local_14);
    fVar5 = -local_20;
    if ((fVar5 <= fVar3) && (fVar5 = fVar3, local_20 < fVar3)) {
      fVar5 = local_20;
    }
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2508) + fVar5;
  }
  if (local_50 == 0) {
    return 0;
  }
  return 1;
}
