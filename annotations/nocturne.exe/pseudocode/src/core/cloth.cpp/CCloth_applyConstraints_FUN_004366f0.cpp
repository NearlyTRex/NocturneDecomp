// Name: core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0
// Address: 004366f0
// Address Range: [[004366f0, 00436e43]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0(int param_1,float *param_2)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  byte local_10c [12];
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
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  float *local_34;
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  if (param_2[1] < *(float *)(param_1 + 0x3ab04)) {
    param_2[10] = 0.0;
    param_2[1] = *(float *)(param_1 + 0x3ab04);
    param_2[0x2f] = 1.4013e-45;
  }
  iVar5 = 0;
  if (0 < (int)param_2[0xc]) {
    local_34 = (float *)(param_1 + 0x37b24);
    pfVar4 = param_2 + 9;
    pfVar6 = (float *)(param_1 + 0x3ab00);
    local_3c = param_1 + 0x398;
    pfVar7 = param_2;
    do {
      pfVar3 = (float *)(local_3c + (int)pfVar7[0xd] * 0x11c);
      local_130 = *param_2 - *pfVar3;
      local_12c = param_2[1] - pfVar3[1];
      local_128 = param_2[2] - pfVar3[2];
      if (&local_7c != &local_130) {
        local_7c = local_130;
        local_78 = local_12c;
        local_74 = local_128;
      }
      local_5c = local_74 * local_74 + local_7c * local_7c + local_78 * local_78;
      local_24 = (float)(((int)local_5c >> 1) + (int)CVector3f_01c70708.y);
      local_1c = pfVar7[0x1e];
      if (local_1c < local_24) {
        local_2c = local_24 - local_1c;
        local_e8 = local_7c * local_2c;
        local_e4 = local_78 * local_2c;
        local_e0 = local_74 * local_2c;
        local_d4 = 1.0 / local_24;
        local_dc = local_e8 * local_d4;
        local_d8 = local_e4 * local_d4;
        local_d4 = local_e0 * local_d4;
        *param_2 = *param_2 - local_dc;
        param_2[1] = param_2[1] - local_d8;
        param_2[2] = param_2[2] - local_d4;
        local_100 = local_dc * *pfVar6;
        local_fc = local_d8 * *pfVar6;
        local_f8 = local_d4 * *pfVar6;
        *pfVar4 = *pfVar4 - local_100;
        param_2[10] = param_2[10] - local_fc;
        param_2[0xb] = param_2[0xb] - local_f8;
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
        *param_2 = *param_2 + local_f4;
        param_2[1] = param_2[1] + local_f0;
        param_2[2] = param_2[2] + local_ec;
        local_c4 = local_f4 * *pfVar6;
        local_c0 = local_f0 * *pfVar6;
        local_bc = local_ec * *pfVar6;
        *pfVar4 = *pfVar4 + local_c4;
        param_2[10] = param_2[10] + local_c0;
        param_2[0xb] = param_2[0xb] + local_bc;
      }
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 1;
      local_40 = (byte *)&local_130;
      local_18 = local_24;
    } while (iVar5 < (int)param_2[0xc]);
  }
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    local_30 = (float *)(param_1 + 0x3ab00);
    local_38 = param_1 + 0x37b50;
    local_14 = (float *)(param_1 + 0x37bf0);
    do {
      local_70 = *param_2 - *local_14;
      iVar5 = local_20 * 0xac + local_38;
      local_6c = param_2[1] - local_14[1];
      local_68 = param_2[2] - local_14[2];
      if (&local_b8 != &local_70) {
        local_b8 = local_70;
        local_b4 = local_6c;
        local_b0 = local_68;
      }
      local_a4 = local_b0 * *(float *)(iVar5 + 0x98) +
                 local_b8 * *(float *)(iVar5 + 0x80) + local_b4 * *(float *)(iVar5 + 0x8c);
      if ((0.0 <= local_a4) && (local_a4 <= *(float *)(iVar5 + 0x44))) {
        local_ac = local_b0 * *(float *)(iVar5 + 0x90) +
                   local_b8 * *(float *)(iVar5 + 0x78) + local_b4 * *(float *)(iVar5 + 0x84);
        local_a8 = local_b0 * *(float *)(iVar5 + 0x94) +
                   local_b8 * *(float *)(iVar5 + 0x7c) + local_b4 * *(float *)(iVar5 + 0x88);
        fVar1 = local_ac * *(float *)(iVar5 + 0x38);
        fVar2 = local_a8 * *(float *)(iVar5 + 0x3c);
        local_58 = fVar2 * fVar2 + fVar1 * fVar1;
        local_54 = (float)(((int)local_58 >> 1) + (int)CVector3f_01c70708.y);
        if (local_54 < 1.0) {
          local_48 = local_ac * local_ac + local_a8 * local_a8;
          local_44 = (float)((int)CVector3f_01c70708.z - ((int)local_48 >> 1));
          local_88 = *(float *)(iVar5 + 0x14) * (float)1.05 * local_ac * local_44;
          local_84 = (float)1.05 * *(float *)(iVar5 + 0x18) * local_a8 * local_44;
          local_80 = local_a4;
          pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (iVar5 + 0x78,local_10c,&local_88);
          local_a0 = *(float *)(iVar5 + 0xa0) + *pfVar4;
          local_9c = *(float *)(iVar5 + 0xa4) + pfVar4[1];
          local_98 = *(float *)(iVar5 + 0xa8) + pfVar4[2];
          if (&local_88 != &local_a0) {
            local_88 = local_a0;
            local_84 = local_9c;
            local_80 = local_98;
          }
          local_d0 = local_88 - *param_2;
          local_cc = local_84 - param_2[1];
          local_c8 = local_80 - param_2[2];
          if (param_2 != &local_88) {
            *param_2 = local_88;
            param_2[1] = local_84;
            param_2[2] = local_80;
          }
          local_124 = local_d0 * *local_30;
          local_120 = local_cc * *local_30;
          local_11c = local_c8 * *local_30;
          param_2[9] = param_2[9] + local_124;
          param_2[10] = param_2[10] + local_120;
          param_2[0xb] = param_2[0xb] + local_11c;
          param_2[0x2e] = 1.4013e-45;
        }
      }
      local_14 = local_14 + 0x2b;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
