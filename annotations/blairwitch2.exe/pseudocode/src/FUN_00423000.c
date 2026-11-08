// Name: FUN_00423000
// Address: 00423000
// Address Range: [[00423000, 0042384e]]
// Convention: unknown
// Signature: undefined4 FUN_00423000(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00423000(int param_1,float *param_2,int param_3,float *param_4,float param_5,float param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  byte bVar5;
  float afStackY_1170 [1008];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_17c;
  float local_178;
  float local_174;
  uint local_170;
  byte local_164 [4];
  float local_160;
  float local_158;
  float local_154 [5];
  float local_140;
  float local_13c;
  float local_138;
  uint local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  uint local_110;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  uint local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float local_c8;
  uint local_bc;
  float local_b8;
  uint local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_8c;
  float local_80 [3];
  float local_74;
  float local_6c;
  float local_68;
  float local_60;
  float local_50;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  local_18c = *(float *)(param_1 + 0x2594);
  local_1c = *(float *)(param_1 + 0x2598);
  local_194 = SQRT(*param_4 * *param_4 + param_4[2] * param_4[2]);
  FUN_005838f0(param_4);
  local_d4 = local_98;
  local_154[(uint)bVar5 * -2 + 0x21] = local_154[(uint)bVar5 * -2 + 0x30];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31];
  local_198 = local_d0;
  FUN_00408de0(param_1,param_2);
  local_e0 = local_154[2];
  local_154[(uint)bVar5 * -2 + 0x1e] = local_154[(uint)bVar5 * -2 + 3];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  local_190 = SQRT(local_e0 * local_e0 + local_d8 * local_d8);
  FUN_005838f0(local_154 + 0x1d);
  fVar4 = local_190 - local_194;
  local_bc = local_170;
  local_154[(uint)bVar5 * -2 + 0x27] = local_154[(uint)bVar5 * -2 + -6];
  local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28] =
       local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -5];
  local_3c = 0;
  local_1a0 = 0.0;
  local_19c = ABS(fVar4);
  if (0.0 < SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])) {
    local_18 = (float)FUN_0040d0c0(local_b8 - local_d0);
    local_1a0 = ABS(local_18);
  }
  if (((local_19c < param_5 + (float)_DAT_005ccc3e) && (local_1a0 < param_6 + (float)_DAT_005ccc3e))
     && (ABS(local_dc) < (float)_DAT_005ccc46)) {
    local_3c = 1;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  local_74 = local_194 * (float)_DAT_005ccc5e + (float)_DAT_005ccc66 +
             ABS(local_198) * (float)_DAT_005ccc4e * (float)_DAT_005ccc56;
  if ((*(int *)(param_1 + 0x2814) != 0) || ((local_190 < local_74 && (ABS(local_dc) <= 1.0)))) {
    if (local_18c * (float)_DAT_005ccc6e + local_194 <= local_190) {
      local_6c = -local_18c;
      local_38 = local_190 - local_194;
      local_50 = local_6c;
      if ((local_6c <= local_38) && (local_50 = local_38, local_18c < local_38)) {
        local_50 = local_18c;
      }
      *(float *)(param_1 + 0x2584) = *(float *)(param_1 + 0x2584) + local_50;
      FUN_00408d70(param_1,param_1 + 0x257c);
      local_11c = local_c8;
      local_154[(uint)bVar5 * -2 + 0xf] = local_154[(uint)bVar5 * -2 + 0x24];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
      FUN_00408cf0(param_1,param_4);
      local_158 = local_8c;
      local_154[(uint)bVar5 * -2] = local_154[(uint)bVar5 * -2 + 0x33];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34];
      local_f8 = *param_2 - local_158;
      local_f4 = param_2[1] - local_154[0];
      local_f0 = param_2[2] - local_154[1];
      local_104 = *param_2 - local_158;
      local_154[(uint)bVar5 * -2 + 0x15] = local_154[(uint)bVar5 * -2 + 0x18];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
      local_140 = local_104 - local_11c;
      local_13c = local_100 - local_118;
      local_138 = local_fc - local_114;
      local_80[0] = local_104 - local_11c;
      local_154[(uint)bVar5 * -2 + 0x36] = local_154[(uint)bVar5 * -2 + 6];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x37] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      FUN_005838f0(local_154 + 0x35);
      local_b0 = local_110;
      local_154[(uint)bVar5 * -2 + 0x2a] = local_154[(uint)bVar5 * -2 + 0x12];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      fVar2 = (float)FUN_0040d0c0(local_ac - *(float *)(param_1 + 0x34));
      fVar4 = -local_1c;
      if ((-local_1c <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
        fVar4 = local_1c;
      }
    }
    else {
      local_17c = local_e0 - *param_4;
      local_178 = local_dc - param_4[1];
      local_174 = local_d8 - param_4[2];
      local_a4 = local_e0 - *param_4;
      local_154[(uint)bVar5 * -2 + 0x2d] = *(float *)((int)&stack0xfffffe88 + (uint)bVar5 * -8);
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8];
      local_68 = SQRT(local_9c * local_9c + local_a4 * local_a4);
      local_a0 = 0.0;
      if (local_18c < local_68) {
        local_34 = local_18c / local_68;
        local_a4 = local_a4 * local_34;
        local_a0 = local_34 * 0.0;
        local_9c = local_9c * local_34;
      }
      pfVar1 = (float *)(param_1 + 0x257c);
      *pfVar1 = *pfVar1 + local_a4;
      *(float *)(param_1 + 0x2580) = *(float *)(param_1 + 0x2580) + local_a0;
      *(float *)(param_1 + 0x2584) = *(float *)(param_1 + 0x2584) + local_9c;
      local_128 = local_e0 - *pfVar1;
      local_124 = local_dc - *(float *)(param_1 + 0x2580);
      local_120 = local_d8 - *(float *)(param_1 + 0x2584);
      local_188 = local_e0 - *pfVar1;
      *(float *)((int)&stack0xfffffe7c + (uint)bVar5 * 0xfffffffe * 4) =
           local_154[(uint)bVar5 * -2 + 0xc];
      *(float *)(&stack0xfffffe80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      FUN_005838f0(&stack0xfffffe78);
      local_134 = local_ec;
      local_154[(uint)bVar5 * -2 + 9] = local_154[(uint)bVar5 * -2 + 0x1b];
      local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           local_154[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
      fVar2 = (float)FUN_0040d0c0(local_130 - local_198);
      fVar4 = -local_1c;
      if ((fVar4 <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
        fVar4 = local_1c;
      }
    }
    *(float *)(param_1 + 0x2578) = fVar4;
    if (*(int *)(param_1 + 0x2814) != 0) {
      fVar4 = -local_18c;
      local_dc = local_dc - param_4[1];
      if ((fVar4 <= local_dc) && (fVar4 = local_dc, local_18c < local_dc)) {
        fVar4 = local_18c;
      }
      *(float *)(param_1 + 0x2580) = fVar4;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = FUN_00513ea0(param_2);
    }
    iVar3 = FUN_00513650(param_3,param_1 + 0x20,local_164,*(uint *)(param_1 + 0x6c));
    if (iVar3 == 0) {
      if (local_3c == 0) {
        FUN_00436710(PTR_DAT_00609ed0,"CCharacter::walkToPoint - go somewhere failed\n");
        return 0xffffffff;
      }
      return 1;
    }
    local_60 = -local_18c;
    local_40 = local_190 - local_194;
    local_2c = local_60;
    if ((local_60 <= local_40) && (local_2c = local_40, local_18c < local_40)) {
      local_2c = local_18c;
    }
    *(float *)(param_1 + 0x2584) = *(float *)(param_1 + 0x2584) + local_2c;
    local_18 = local_160 - *(float *)(param_1 + 0x34);
    fVar2 = (float)FUN_0040d0c0(local_18);
    fVar4 = -local_1c;
    if ((fVar4 <= fVar2) && (fVar4 = fVar2, local_1c < fVar2)) {
      fVar4 = local_1c;
    }
    *(float *)(param_1 + 0x2578) = *(float *)(param_1 + 0x2578) + fVar4;
  }
  if (local_3c == 0) {
    return 0;
  }
  return 1;
}
