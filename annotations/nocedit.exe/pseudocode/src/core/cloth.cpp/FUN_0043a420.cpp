// Name: core_cloth.cpp_FUN_0043a420
// Address: 0043a420
// Address Range: [[0043a420, 0043ab73]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043a420()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043a420(uint param_1, uint param_2) */

void core_cloth_cpp_FUN_0043a420(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int iVar6;
  float *pfVar7;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  CVector3f local_10c;
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
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  float *local_34;
  int local_30;
  float *local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  if (in_stack_00000008[1] < *(float *)(in_stack_00000004 + 0x3fe44)) {
    in_stack_00000008[10] = 0.0;
    in_stack_00000008[1] = *(float *)(in_stack_00000004 + 0x3fe44);
    in_stack_00000008[0x2f] = 1.4013e-45;
  }
  iVar6 = 0;
  if (0 < (int)in_stack_00000008[0xc]) {
    local_34 = (float *)(in_stack_00000004 + 0x3ce64);
    pfVar1 = in_stack_00000008 + 9;
    pfVar7 = (float *)(in_stack_00000004 + 0x3fe40);
    local_3c = in_stack_00000004 + 0x56d8;
    pfVar8 = in_stack_00000008;
    do {
      pfVar4 = (float *)(local_3c + (int)pfVar8[0xd] * 0x11c);
      local_130 = *in_stack_00000008 - *pfVar4;
      local_12c = in_stack_00000008[1] - pfVar4[1];
      local_128 = in_stack_00000008[2] - pfVar4[2];
      if (&local_7c != &local_130) {
        local_7c = local_130;
        local_78 = local_12c;
        local_74 = local_128;
      }
      local_5c = local_74 * local_74 + local_7c * local_7c + local_78 * local_78;
      local_24 = (float)(((int)local_5c >> 1) + DAT_02d7a7b8);
      local_1c = pfVar8[0x1e];
      if (local_1c < local_24) {
        local_2c = (float *)(local_24 - local_1c);
        local_e8 = local_7c * (float)local_2c;
        local_e4 = local_78 * (float)local_2c;
        local_e0 = local_74 * (float)local_2c;
        local_d4 = 1.0 / local_24;
        local_dc = local_e8 * local_d4;
        local_d8 = local_e4 * local_d4;
        local_d4 = local_e0 * local_d4;
        *in_stack_00000008 = *in_stack_00000008 - local_dc;
        in_stack_00000008[1] = in_stack_00000008[1] - local_d8;
        in_stack_00000008[2] = in_stack_00000008[2] - local_d4;
        local_100 = local_dc * *pfVar7;
        local_fc = local_d8 * *pfVar7;
        local_f8 = local_d4 * *pfVar7;
        *pfVar1 = *pfVar1 - local_100;
        in_stack_00000008[10] = in_stack_00000008[10] - local_fc;
        in_stack_00000008[0xb] = in_stack_00000008[0xb] - local_f8;
      }
      if (local_24 < local_1c) {
        local_28 = local_1c - local_24;
        local_118 = local_7c * local_28;
        local_114 = local_78 * local_28;
        local_110 = local_74 * local_28;
        local_8c = 1.0 / local_24;
        local_94 = local_118 * local_8c;
        local_90 = local_114 * local_8c;
        local_8c = local_110 * local_8c;
        local_f4 = local_94 * *local_34;
        local_f0 = local_90 * *local_34;
        local_ec = local_8c * *local_34;
        *in_stack_00000008 = *in_stack_00000008 + local_f4;
        in_stack_00000008[1] = in_stack_00000008[1] + local_f0;
        in_stack_00000008[2] = in_stack_00000008[2] + local_ec;
        local_c4 = local_f4 * *pfVar7;
        local_c0 = local_f0 * *pfVar7;
        local_bc = local_ec * *pfVar7;
        *pfVar1 = *pfVar1 + local_c4;
        in_stack_00000008[10] = in_stack_00000008[10] + local_c0;
        in_stack_00000008[0xb] = in_stack_00000008[0xb] + local_bc;
      }
      iVar6 = iVar6 + 1;
      pfVar8 = pfVar8 + 1;
      local_40 = (byte *)&local_130;
      local_18 = local_24;
    } while (iVar6 < (int)in_stack_00000008[0xc]);
  }
  local_20 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    local_30 = in_stack_00000004 + 0x3fe40;
    local_38 = in_stack_00000004 + 0x3ce90;
    local_14 = (float *)(in_stack_00000004 + 0x3cf30);
    do {
      local_70 = *in_stack_00000008 - *local_14;
      iVar6 = local_20 * 0xac + local_38;
      local_6c = in_stack_00000008[1] - local_14[1];
      local_68 = in_stack_00000008[2] - local_14[2];
      if (&local_b8 != &local_70) {
        local_b8 = local_70;
        local_b4 = local_6c;
        local_b0 = local_68;
      }
      local_a4 = local_b0 * *(float *)(iVar6 + 0x98) +
                 local_b8 * *(float *)(iVar6 + 0x80) + local_b4 * *(float *)(iVar6 + 0x8c);
      if ((0.0 <= local_a4) && (local_a4 <= *(float *)(iVar6 + 0x44))) {
        local_ac = local_b0 * *(float *)(iVar6 + 0x90) +
                   local_b8 * *(float *)(iVar6 + 0x78) + local_b4 * *(float *)(iVar6 + 0x84);
        local_a8 = local_b0 * *(float *)(iVar6 + 0x94) +
                   local_b8 * *(float *)(iVar6 + 0x7c) + local_b4 * *(float *)(iVar6 + 0x88);
        fVar2 = local_ac * *(float *)(iVar6 + 0x38);
        fVar3 = local_a8 * *(float *)(iVar6 + 0x3c);
        local_58 = fVar3 * fVar3 + fVar2 * fVar2;
        local_54 = (float)(((int)local_58 >> 1) + DAT_02d7a7b8);
        if (local_54 < 1.0) {
          local_48 = local_ac * local_ac + local_a8 * local_a8;
          local_44 = (float)(g_LightAttenuationMax - ((int)local_48 >> 1));
          local_88.x = *(float *)(iVar6 + 0x14) * (float)1.05 * local_ac * local_44;
          local_88.y = (float)1.05 * *(float *)(iVar6 + 0x18) * local_a8 * local_44;
          local_88.z = local_a4;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)(iVar6 + 0x78),&local_10c,&local_88);
          local_9c = *(float *)(iVar6 + 0xa0) + pCVar5->x;
          local_98 = *(float *)(iVar6 + 0xa4) + pCVar5->y;
          local_94 = *(float *)(iVar6 + 0xa8) + pCVar5->z;
          if (&local_88.y != &local_9c) {
            local_88.y = local_9c;
            local_88.z = local_98;
            local_7c = local_94;
          }
          local_cc = local_88.y - *in_stack_00000008;
          local_c8 = local_88.z - in_stack_00000008[1];
          local_c4 = local_7c - in_stack_00000008[2];
          if (in_stack_00000008 != &local_88.y) {
            *in_stack_00000008 = local_88.y;
            in_stack_00000008[1] = local_88.z;
            in_stack_00000008[2] = local_7c;
          }
          local_120 = local_cc * *local_2c;
          local_11c = local_c8 * *local_2c;
          local_118 = local_c4 * *local_2c;
          in_stack_00000008[9] = in_stack_00000008[9] + local_120;
          in_stack_00000008[10] = in_stack_00000008[10] + local_11c;
          in_stack_00000008[0xb] = in_stack_00000008[0xb] + local_118;
          in_stack_00000008[0x2e] = 1.4013e-45;
        }
      }
      local_14 = local_14 + 0x2b;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  return;
}
