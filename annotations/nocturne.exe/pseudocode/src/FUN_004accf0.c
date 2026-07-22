// Name: FUN_004accf0
// Address: 004accf0
// Address Range: [[004accf0, 004ada12]]
// Convention: unknown
// Signature: void FUN_004accf0(int param_1,float *param_2,int *param_3,int *param_4,int param_5)

#include "nocturne.h"

void FUN_004accf0(int param_1,float *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
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
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  __arrinit(&local_1e4,4,&DAT_005993b0);
  local_14 = (uint)(param_5 < 4);
  if (((param_5 < 3) || (iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000), iVar1 == 0))
     && (local_14 != 0)) {
    if (&local_1e4 != param_2) {
      local_1e4 = *param_2;
      local_1e0 = param_2[1];
      local_1dc = param_2[2];
    }
    local_80 = *param_2 + param_2[3];
    local_170 = local_80 / 2.0f;
    local_7c = param_2[1] + param_2[4];
    local_78 = param_2[2] + param_2[5];
    local_16c = local_7c * 0.5f;
    local_168 = local_78 * 0.5f;
    if (&local_1d8 != &local_170) {
      local_1d8 = local_170;
      local_1d4 = local_16c;
      local_1d0 = local_168;
    }
    local_128 = *param_2 + param_2[3];
    local_124 = param_2[1] + param_2[4];
    local_120 = param_2[2] + param_2[5];
    local_110 = local_128 + param_2[6];
    local_10c = local_124 + param_2[7];
    local_108 = local_120 + param_2[8];
    local_ec = local_110 + param_2[9];
    local_98 = local_ec / 4.0f;
    local_e8 = local_10c + param_2[10];
    local_e4 = local_108 + param_2[0xb];
    local_94 = local_e8 * 0.25f;
    local_90 = local_e4 * 0.25f;
    if (&local_1cc != &local_98) {
      local_1cc = local_98;
      local_1c8 = local_94;
      local_1c4 = local_90;
    }
    local_50 = *param_2 + param_2[9];
    local_5c = local_50 / 2.0f;
    local_4c = param_2[1] + param_2[10];
    local_48 = param_2[2] + param_2[0xb];
    local_58 = local_4c * 0.5f;
    local_54 = local_48 * 0.5f;
    if (&local_1c0 != &local_5c) {
      local_1c0 = local_5c;
      local_1bc = local_58;
      local_1b8 = local_54;
    }
    local_1b4 = *param_3;
    local_1b0 = (local_1b4 + param_3[1]) / 2;
    iVar1 = param_3[3] + *param_3 + param_3[1] + param_3[2];
    iVar2 = iVar1 >> 0x1f;
    local_1ac = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1a8 = (*param_3 + param_3[3]) / 2;
    local_1a4 = *param_4;
    local_1a0 = (local_1a4 + param_4[1]) / 2;
    iVar1 = param_4[3] + *param_4 + param_4[1] + param_4[2];
    iVar2 = iVar1 >> 0x1f;
    local_19c = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_198 = (*param_4 + param_4[3]) / 2;
    FUN_004accf0(param_1,&local_1e4,&local_1b4,&local_1a4,param_5 + 1);
    local_44 = *param_2 + param_2[3];
    local_14c = local_44 / 2.0f;
    local_40 = param_2[1] + param_2[4];
    local_3c = param_2[2] + param_2[5];
    local_148 = local_40 * 0.5f;
    local_144 = local_3c * 0.5f;
    if (&local_1e4 != &local_14c) {
      local_1e4 = local_14c;
      local_1e0 = local_148;
      local_1dc = local_144;
    }
    if (&local_1d8 != param_2 + 3) {
      local_1d8 = param_2[3];
      local_1d4 = param_2[4];
      local_1d0 = param_2[5];
    }
    local_20 = param_2[3] + param_2[6];
    local_104 = local_20 / 2.0f;
    local_1c = param_2[4] + param_2[7];
    local_18 = param_2[5] + param_2[8];
    local_100 = local_1c * 0.5f;
    local_fc = local_18 * 0.5f;
    if (&local_1cc != &local_104) {
      local_1cc = local_104;
      local_1c8 = local_100;
      local_1c4 = local_fc;
    }
    local_c8 = *param_2 + param_2[3];
    local_c4 = param_2[1] + param_2[4];
    local_c0 = param_2[2] + param_2[5];
    local_e0 = local_c8 + param_2[6];
    local_dc = local_c4 + param_2[7];
    local_d8 = local_c0 + param_2[8];
    local_2c = local_e0 + param_2[9];
    local_17c = local_2c / 4.0f;
    local_28 = local_dc + param_2[10];
    local_24 = local_d8 + param_2[0xb];
    local_178 = local_28 * 0.25f;
    local_174 = local_24 * 0.25f;
    if (&local_1c0 != &local_17c) {
      local_1c0 = local_17c;
      local_1bc = local_178;
      local_1b8 = local_174;
    }
    local_1b4 = (*param_3 + param_3[1]) / 2;
    local_1b0 = param_3[1];
    local_1ac = (local_1b0 + param_3[2]) / 2;
    iVar1 = param_3[2] + *param_3 + param_3[1] + param_3[3];
    iVar2 = iVar1 >> 0x1f;
    local_1a8 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1a4 = (*param_4 + param_4[1]) / 2;
    local_1a0 = param_4[1];
    local_19c = (local_1a0 + param_4[2]) / 2;
    iVar1 = param_4[3] + *param_4 + param_4[1] + param_4[2];
    iVar2 = iVar1 >> 0x1f;
    local_198 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    FUN_004accf0(param_1,&local_1e4,&local_1b4,&local_1a4,param_5 + 1);
    local_188 = *param_2 + param_2[3];
    local_184 = param_2[1] + param_2[4];
    local_180 = param_2[2] + param_2[5];
    local_a4 = local_188 + param_2[6];
    local_a0 = local_184 + param_2[7];
    local_9c = local_180 + param_2[8];
    local_38 = local_a4 + param_2[9];
    local_f8 = local_38 / 4.0f;
    local_34 = local_a0 + param_2[10];
    local_30 = local_9c + param_2[0xb];
    local_f4 = local_34 * 0.25f;
    local_f0 = local_30 * 0.25f;
    if (&local_1e4 != &local_f8) {
      local_1e4 = local_f8;
      local_1e0 = local_f4;
      local_1dc = local_f0;
    }
    local_164 = param_2[3] + param_2[6];
    local_74 = local_164 / 2.0f;
    local_160 = param_2[4] + param_2[7];
    local_15c = param_2[5] + param_2[8];
    local_70 = local_160 * 0.5f;
    local_6c = local_15c * 0.5f;
    if (&local_1d8 != &local_74) {
      local_1d8 = local_74;
      local_1d4 = local_70;
      local_1d0 = local_6c;
    }
    if (&local_1cc != param_2 + 6) {
      local_1cc = param_2[6];
      local_1c8 = param_2[7];
      local_1c4 = param_2[8];
    }
    local_158 = param_2[6] + param_2[9];
    local_194 = local_158 / 2.0f;
    local_154 = param_2[7] + param_2[10];
    local_150 = param_2[8] + param_2[0xb];
    local_190 = local_154 * 0.5f;
    local_18c = local_150 * 0.5f;
    if (&local_1c0 != &local_194) {
      local_1c0 = local_194;
      local_1bc = local_190;
      local_1b8 = local_18c;
    }
    iVar1 = param_3[2] + *param_3 + param_3[1] + param_3[3];
    iVar2 = iVar1 >> 0x1f;
    local_1b4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1b0 = (param_3[1] + param_3[2]) / 2;
    local_1ac = param_3[2];
    local_1a8 = (local_1ac + param_3[3]) / 2;
    iVar1 = param_4[3] + *param_4 + param_4[1] + param_4[2];
    iVar2 = iVar1 >> 0x1f;
    local_1a4 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1a0 = (param_4[1] + param_4[2]) / 2;
    local_19c = param_4[2];
    local_198 = (local_19c + param_4[3]) / 2;
    FUN_004accf0(param_1,&local_1e4,&local_1b4,&local_1a4,param_5 + 1);
    local_11c = *param_2 + param_2[9];
    local_134 = local_11c / 2.0f;
    local_118 = param_2[1] + param_2[10];
    local_114 = param_2[2] + param_2[0xb];
    local_130 = local_118 * 0.5f;
    local_12c = local_114 * 0.5f;
    if (&local_1e4 != &local_134) {
      local_1e4 = local_134;
      local_1e0 = local_130;
      local_1dc = local_12c;
    }
    local_68 = *param_2 + param_2[3];
    local_64 = param_2[1] + param_2[4];
    local_60 = param_2[2] + param_2[5];
    local_d4 = local_68 + param_2[6];
    local_d0 = local_64 + param_2[7];
    local_cc = local_60 + param_2[8];
    local_bc = local_d4 + param_2[9];
    local_8c = local_bc / 4.0f;
    local_b8 = local_d0 + param_2[10];
    local_b4 = local_cc + param_2[0xb];
    local_88 = local_b8 * 0.25f;
    local_84 = local_b4 * 0.25f;
    if (&local_1d8 != &local_8c) {
      local_1d8 = local_8c;
      local_1d4 = local_88;
      local_1d0 = local_84;
    }
    local_b0 = param_2[6] + param_2[9];
    local_140 = local_b0 / 2.0f;
    local_ac = param_2[7] + param_2[10];
    local_a8 = param_2[8] + param_2[0xb];
    local_13c = local_ac * 0.5f;
    local_138 = local_a8 * 0.5f;
    if (&local_1cc != &local_140) {
      local_1cc = local_140;
      local_1c8 = local_13c;
      local_1c4 = local_138;
    }
    if (&local_1c0 != param_2 + 9) {
      local_1c0 = param_2[9];
      local_1bc = param_2[10];
      local_1b8 = param_2[0xb];
    }
    local_1b4 = (*param_3 + param_3[3]) / 2;
    iVar1 = param_3[2] + *param_3 + param_3[1] + param_3[3];
    iVar2 = iVar1 >> 0x1f;
    local_1b0 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1ac = (param_3[2] + param_3[3]) / 2;
    local_1a8 = param_3[3];
    local_1a4 = (*param_4 + param_4[3]) / 2;
    iVar1 = param_4[2] + *param_4 + param_4[1] + param_4[3];
    iVar2 = iVar1 >> 0x1f;
    local_1a0 = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_19c = (param_4[2] + param_4[3]) / 2;
    local_198 = param_4[3];
    FUN_004accf0(param_1,&local_1e4,&local_1b4,&local_1a4,param_5 + 1);
    return;
  }
  if (&local_1e4 != param_2) {
    local_1e4 = *param_2;
    local_1e0 = param_2[1];
    local_1dc = param_2[2];
  }
  if (&local_1d8 != param_2 + 3) {
    local_1d8 = param_2[3];
    local_1d4 = param_2[4];
    local_1d0 = param_2[5];
  }
  if (&local_1cc != param_2 + 6) {
    local_1cc = param_2[6];
    local_1c8 = param_2[7];
    local_1c4 = param_2[8];
  }
  local_1b4 = *param_3;
  local_1b0 = param_3[1];
  local_1ac = param_3[2];
  local_1a4 = *param_4;
  local_1a0 = param_4[1];
  local_19c = param_4[2];
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
            (0x01C08D04,&local_1e4,&local_1b4,&local_1a4,param_1 + 0x15c,
             *(uint *)(param_1 + 0x174));
  if (&local_1d8 != param_2 + 6) {
    local_1d8 = param_2[6];
    local_1d4 = param_2[7];
    local_1d0 = param_2[8];
  }
  if (&local_1cc != param_2 + 9) {
    local_1cc = param_2[9];
    local_1c8 = param_2[10];
    local_1c4 = param_2[0xb];
  }
  local_1b0 = param_3[2];
  local_1ac = param_3[3];
  local_1a0 = param_4[2];
  local_19c = param_4[3];
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
            (0x01C08D04,&local_1e4,&local_1b4,&local_1a4,param_1 + 0x15c,
             *(uint *)(param_1 + 0x174));
  return;
}
