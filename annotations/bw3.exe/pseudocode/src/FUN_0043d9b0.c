// Name: FUN_0043d9b0
// Address: 0043d9b0
// Address Range: [[0043d9b0, 0043e261]]
// Convention: unknown
// Signature: void FUN_0043d9b0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d9b0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1174 [995];
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
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
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
  float local_70;
  float local_68;
  float local_64;
  float *local_58;
  float *local_54;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float *local_28;
  float *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  if (param_2[1] < *(float *)(param_1 + 0x3ab04)) {
    param_2[10] = 0.0;
    param_2[1] = *(float *)(param_1 + 0x3ab04);
    param_2[0x2f] = 1.4013e-45;
  }
  local_3c = 0;
  if (0 < (int)param_2[0xc]) {
    local_58 = (float *)(param_1 + 0x37b28);
    pfVar1 = param_2 + 9;
    pfVar5 = (float *)(param_1 + 0x3ab00);
    local_34 = param_2;
    local_44 = param_1 + 0x398;
    do {
      pfVar4 = (float *)((int)local_34[0xd] * 0x11c + param_1 + 0x398);
      local_a8 = *param_2 - *pfVar4;
      local_a4 = param_2[1] - pfVar4[1];
      local_a0 = param_2[2] - pfVar4[2];
      local_180 = local_a8;
      local_17c = local_a4;
      local_178 = local_a0;
      if (&stack0xfffffe68 != &stack0xfffffe80) {
        local_198 = local_a8;
        local_194 = local_a4;
        local_190 = local_a0;
      }
      local_48 = local_190 * local_190 + local_198 * local_198 + local_194 * local_194;
      local_30 = (float)(((int)local_48 >> 1) + _DAT_01d1a0a4);
      local_4c = local_30;
      local_2c = local_34[0x1e];
      if (local_2c < local_30) {
        local_1c = local_30 - local_2c;
        local_138 = local_198 * local_1c;
        local_134 = local_194 * local_1c;
        local_130 = local_190 * local_1c;
        local_fc = local_138;
        local_f8 = local_134;
        local_f4 = local_130;
        local_10c = 1.0 / local_30;
        local_114 = local_138 * local_10c;
        local_110 = local_134 * local_10c;
        local_10c = local_130 * local_10c;
        local_90 = local_114;
        local_8c = local_110;
        local_88 = local_10c;
        *param_2 = *param_2 - local_114;
        param_2[1] = param_2[1] - local_110;
        param_2[2] = param_2[2] - local_10c;
        local_1d4 = local_114 * *pfVar5;
        local_1d0 = local_110 * *pfVar5;
        local_1cc = local_10c * *pfVar5;
        local_1c8 = local_1d4;
        local_1c4 = local_1d0;
        local_1c0 = local_1cc;
        *pfVar1 = *pfVar1 - local_1d4;
        param_2[10] = param_2[10] - local_1d0;
        param_2[0xb] = param_2[0xb] - local_1cc;
      }
      if (local_30 < local_2c) {
        local_14 = local_2c - local_30;
        local_1bc = local_198 * local_14;
        local_1b8 = local_194 * local_14;
        local_1b4 = local_190 * local_14;
        local_144 = local_1bc;
        local_140 = local_1b8;
        local_13c = local_1b4;
        local_dc = 1.0 / local_30;
        local_e4 = local_1bc * local_dc;
        local_e0 = local_1b8 * local_dc;
        local_dc = local_1b4 * local_dc;
        local_1a4 = local_e4;
        local_1a0 = local_e0;
        local_19c = local_dc;
        local_15c = local_e4 * *local_58;
        local_158 = local_e0 * *local_58;
        local_154 = local_dc * *local_58;
        local_9c = local_15c;
        local_98 = local_158;
        local_94 = local_154;
        *param_2 = *param_2 + local_15c;
        param_2[1] = param_2[1] + local_158;
        param_2[2] = param_2[2] + local_154;
        local_cc = local_15c * *pfVar5;
        local_c8 = local_158 * *pfVar5;
        local_c4 = local_154 * *pfVar5;
        local_108 = local_cc;
        local_104 = local_c8;
        local_100 = local_c4;
        *pfVar1 = *pfVar1 + local_cc;
        param_2[10] = param_2[10] + local_c8;
        param_2[0xb] = param_2[0xb] + local_c4;
      }
      local_3c = local_3c + 1;
      local_34 = local_34 + 1;
    } while (local_3c < (int)param_2[0xc]);
  }
  local_38 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    local_54 = (float *)(param_1 + 0x3ab00);
    local_24 = param_2 + 9;
    local_40 = param_1 + 0x37b50;
    local_28 = (float *)(param_1 + 0x37bf0);
    do {
      local_20 = local_40 + local_38 * 0xac;
      local_120 = *param_2 - *local_28;
      local_11c = param_2[1] - local_28[1];
      local_118 = param_2[2] - local_28[2];
      local_f0 = *param_2 - *local_28;
      (&stack0xffffff14)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffee4 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xfffffee8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xffffff4c != &stack0xffffff10) {
        local_b4 = local_f0;
        local_b0 = local_ec;
        local_ac = local_e8;
      }
      local_1a8 = local_ac * *(float *)(local_20 + 0x98) +
                  local_b4 * *(float *)(local_20 + 0x80) + local_b0 * *(float *)(local_20 + 0x8c);
      local_1d8 = local_1a8;
      if ((0.0 <= local_1a8) && (local_1a8 <= *(float *)(local_20 + 0x44))) {
        local_1e0 = local_ac * *(float *)(local_20 + 0x90) +
                    local_b4 * *(float *)(local_20 + 0x78) + local_b0 * *(float *)(local_20 + 0x84);
        fVar2 = local_1e0 * *(float *)(local_20 + 0x38);
        local_1dc = local_ac * *(float *)(local_20 + 0x94) +
                    local_b4 * *(float *)(local_20 + 0x7c) + local_b0 * *(float *)(local_20 + 0x88);
        fVar3 = local_1dc * *(float *)(local_20 + 0x3c);
        local_70 = fVar3 * fVar3 + fVar2 * fVar2;
        local_18 = (float)(((int)local_70 >> 1) + _DAT_01d1a0a4);
        if (local_18 < 1.0) {
          local_68 = local_1e0 * local_1e0 + local_1dc * local_1dc;
          local_64 = (float)(_DAT_01d1a0a8 - ((int)local_68 >> 1));
          local_1b0 = *(float *)(local_20 + 0x14) * (float)_DAT_005b9120 * local_1e0 * local_64;
          local_1ac = (float)_DAT_005b9120 * *(float *)(local_20 + 0x18) * local_1dc * local_64;
          FUN_0045b800(local_20 + 0x78,&stack0xfffffe50);
          local_84 = local_c0;
          (&stack0xffffff80)[(uint)bVar6 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff44 + (uint)bVar6 * 0xfffffffe * 4);
          *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          local_174 = *(float *)(local_20 + 0xa0) + local_84;
          local_170 = *(float *)(local_20 + 0xa4) + local_80;
          local_16c = *(float *)(local_20 + 0xa8) + local_7c;
          local_18c = local_174;
          (&stack0xfffffe78)[(uint)bVar6 * 0xfffffffe] =
               (&stack0xfffffe90)[(uint)bVar6 * 0xfffffffe];
          *(uint *)((int)&stack0xfffffe7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffe94 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (&stack0xfffffe50 != &stack0xfffffe74) {
            local_1b0 = local_18c;
            local_1ac = local_188;
            local_1a8 = local_184;
          }
          local_128 = local_1ac - param_2[1];
          local_124 = local_1a8 - param_2[2];
          local_12c = local_1b0 - *param_2;
          local_d8 = local_1b0 - *param_2;
          (&stack0xffffff2c)[(uint)bVar6 * 0xfffffffe] =
               (&stack0xfffffed8)[(uint)bVar6 * 0xfffffffe];
          pfVar1 = local_24;
          *(uint *)((int)&stack0xffffff30 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffedc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          if (param_2 != &stack0xfffffe50) {
            *param_2 = local_1b0;
            param_2[1] = local_1ac;
            param_2[2] = local_1a8;
          }
          local_150 = local_d8 * *local_54;
          local_14c = local_d4 * *local_54;
          local_148 = local_d0 * *local_54;
          local_168 = local_d8 * *local_54;
          *(float *)((int)&stack0xfffffe9c + (uint)bVar6 * -8) =
               (&stack0xfffffeb4)[(uint)bVar6 * 0xfffffffe];
          *(uint *)((int)&stack0xfffffea0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffeb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *pfVar1 = *pfVar1 + local_168;
          pfVar1[1] = pfVar1[1] + local_164;
          pfVar1[2] = pfVar1[2] + local_160;
          param_2[0x2e] = 1.4013e-45;
        }
      }
      local_38 = local_38 + 1;
      local_28 = local_28 + 0x2b;
    } while (local_38 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
