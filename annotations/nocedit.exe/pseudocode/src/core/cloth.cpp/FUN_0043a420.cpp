// Name: core_cloth.cpp_FUN_0043a420
// Address: 0043a420
// Address Range: [[0043a420, 0043ab73]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043a420(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043a420(uint param_1, uint param_2) */

void __cdecl core_cloth_cpp_FUN_0043a420(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  int iVar5;
  float *pfVar6;
  CVector3f *pCVar7;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
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
  CVector3f local_a0;
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
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  if (in_stack_00000008->y < *(float *)(in_stack_00000004 + 0x3fe44)) {
    in_stack_00000008[3].y = 0.0;
    in_stack_00000008->y = *(float *)(in_stack_00000004 + 0x3fe44);
    in_stack_00000008[0xf].z = 1.4013e-45;
  }
  iVar5 = 0;
  if (0 < (int)in_stack_00000008[4].x) {
    local_34 = (float *)(in_stack_00000004 + 0x3ce64);
    pCVar4 = in_stack_00000008 + 3;
    pfVar6 = (float *)(in_stack_00000004 + 0x3fe40);
    local_3c = in_stack_00000004 + 0x56d8;
    pCVar7 = in_stack_00000008;
    do {
      pfVar3 = (float *)(local_3c + (int)pCVar7[4].y * 0x11c);
      local_130 = in_stack_00000008->x - *pfVar3;
      local_12c = in_stack_00000008->y - pfVar3[1];
      local_128 = in_stack_00000008->z - pfVar3[2];
      if (&local_7c != &local_130) {
        local_7c = local_130;
        local_78 = local_12c;
        local_74 = local_128;
      }
      local_5c = local_74 * local_74 + local_7c * local_7c + local_78 * local_78;
      local_24 = (float)(((int)local_5c >> 1) + INT_02d7a7b8);
      local_1c = pCVar7[10].x;
      if (local_1c < local_24) {
        local_2c = local_24 - local_1c;
        local_e8 = local_7c * local_2c;
        local_e4 = local_78 * local_2c;
        local_e0 = local_74 * local_2c;
        local_d4 = 1.0 / local_24;
        local_dc = local_e8 * local_d4;
        local_d8 = local_e4 * local_d4;
        local_d4 = local_e0 * local_d4;
        in_stack_00000008->x = in_stack_00000008->x - local_dc;
        in_stack_00000008->y = in_stack_00000008->y - local_d8;
        in_stack_00000008->z = in_stack_00000008->z - local_d4;
        local_100 = local_dc * *pfVar6;
        local_fc = local_d8 * *pfVar6;
        local_f8 = local_d4 * *pfVar6;
        pCVar4->x = pCVar4->x - local_100;
        in_stack_00000008[3].y = in_stack_00000008[3].y - local_fc;
        in_stack_00000008[3].z = in_stack_00000008[3].z - local_f8;
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
        in_stack_00000008->x = in_stack_00000008->x + local_f4;
        in_stack_00000008->y = in_stack_00000008->y + local_f0;
        in_stack_00000008->z = in_stack_00000008->z + local_ec;
        local_c4 = local_f4 * *pfVar6;
        local_c0 = local_f0 * *pfVar6;
        local_bc = local_ec * *pfVar6;
        pCVar4->x = pCVar4->x + local_c4;
        in_stack_00000008[3].y = in_stack_00000008[3].y + local_c0;
        in_stack_00000008[3].z = in_stack_00000008[3].z + local_bc;
      }
      iVar5 = iVar5 + 1;
      pCVar7 = (CVector3f *)&pCVar7->y;
      local_40 = (byte *)&local_130;
      local_18 = local_24;
    } while (iVar5 < (int)in_stack_00000008[4].x);
  }
  local_20 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    local_30 = (float *)(in_stack_00000004 + 0x3fe40);
    local_38 = in_stack_00000004 + 0x3ce90;
    local_14 = (float *)(in_stack_00000004 + 0x3cf30);
    do {
      local_70 = in_stack_00000008->x - *local_14;
      iVar5 = local_20 * 0xac + local_38;
      local_6c = in_stack_00000008->y - local_14[1];
      local_68 = in_stack_00000008->z - local_14[2];
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
        local_54 = (float)(((int)local_58 >> 1) + INT_02d7a7b8);
        if (local_54 < 1.0) {
          local_48 = local_ac * local_ac + local_a8 * local_a8;
          local_44 = (float)(g_LightAttenuationMax - ((int)local_48 >> 1));
          local_88.x = *(float *)(iVar5 + 0x14) * (float)1.05 * local_ac * local_44;
          local_88.y = (float)1.05 * *(float *)(iVar5 + 0x18) * local_a8 * local_44;
          local_88.z = local_a4;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)(iVar5 + 0x78),&local_10c,&local_88);
          local_a0.x = *(float *)(iVar5 + 0xa0) + pCVar4->x;
          local_a0.y = *(float *)(iVar5 + 0xa4) + pCVar4->y;
          local_a0.z = *(float *)(iVar5 + 0xa8) + pCVar4->z;
          if (&local_88 != &local_a0) {
            local_88.x = local_a0.x;
            local_88.y = local_a0.y;
            local_88.z = local_a0.z;
          }
          local_d0 = local_88.x - in_stack_00000008->x;
          local_cc = local_88.y - in_stack_00000008->y;
          local_c8 = local_88.z - in_stack_00000008->z;
          if (in_stack_00000008 != &local_88) {
            in_stack_00000008->x = local_88.x;
            in_stack_00000008->y = local_88.y;
            in_stack_00000008->z = local_88.z;
          }
          local_124 = local_d0 * *local_30;
          local_120 = local_cc * *local_30;
          local_11c = local_c8 * *local_30;
          in_stack_00000008[3].x = in_stack_00000008[3].x + local_124;
          in_stack_00000008[3].y = in_stack_00000008[3].y + local_120;
          in_stack_00000008[3].z = in_stack_00000008[3].z + local_11c;
          in_stack_00000008[0xf].y = 1.4013e-45;
        }
      }
      local_14 = local_14 + 0x2b;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  return;
}
