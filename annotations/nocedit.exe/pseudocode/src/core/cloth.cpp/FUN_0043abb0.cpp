// Name: core_cloth.cpp_FUN_0043abb0
// Address: 0043abb0
// Address Range: [[0043abb0, 0043b789]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043abb0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043abb0(void)

{
  CVector3f *pCVar1;
  float fVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int in_stack_00000004;
  float *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  int in_stack_00000018;
  float local_1e0;
  CMatrix3x3f local_1d8;
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
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  CVector3f local_138;
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
  CVector3f local_d8;
  CVector3f local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  CVector3f local_a8;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_6c;
  float local_68;
  int local_64;
  float *local_5c;
  int local_58;
  float *local_54;
  int local_50;
  uint *local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  int local_38;
  int local_34;
  float *local_30;
  int local_2c;
  CVector3f *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  if ((float)9999 <= in_stack_00000014) {
    in_stack_00000014 = -9999.0;
  }
  if (in_stack_00000010 < (float)0.01) {
    in_stack_00000010 = 0.01;
  }
  *(float *)(in_stack_00000004 + 0x3fe40) = 1.0 / in_stack_00000010;
  *(float *)(in_stack_00000004 + 0x3fe44) = in_stack_00000014 - in_stack_00000008[1];
  if (in_stack_00000018 != 0) {
    local_40 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
      local_38 = in_stack_00000018 + 0xe80;
      local_1c = in_stack_00000004 + 0x56d8;
      local_48 = in_stack_00000004;
      do {
        pfVar4 = (float *)(*(int *)(local_48 + 0x3f02c) * 0x11c + local_1c);
        pfVar4[2] = 0.0;
        local_2c = 0;
        pfVar4[1] = pfVar4[2];
        *pfVar4 = pfVar4[1];
        if (0 < (int)pfVar4[0x37]) {
          pfVar10 = pfVar4 + 0x44;
          local_28 = (CVector3f *)(pfVar4 + 0x3b);
          local_30 = pfVar4;
          do {
            pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               (&local_9c,local_28,
                                (CMatrix3x4f *)((int)local_30[0x38] * 0x30 + local_38));
            local_174 = pCVar1->x * *pfVar10;
            local_170 = pCVar1->y * *pfVar10;
            local_16c = pCVar1->z * *pfVar10;
            pfVar10 = pfVar10 + 1;
            local_28 = local_28 + 1;
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            *pfVar4 = *pfVar4 + local_174;
            pfVar4[1] = pfVar4[1] + local_170;
            pfVar4[2] = pfVar4[2] + local_16c;
          } while (local_2c < (int)pfVar4[0x37]);
        }
        local_48 = local_48 + 4;
        local_40 = local_40 + 1;
      } while (local_40 < *(int *)(in_stack_00000004 + 0x3f028));
    }
    iVar5 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
      do {
        core_cloth_cpp_FUN_0043a2b0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(in_stack_00000004 + 0x3ce8c));
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    local_24 = in_stack_00000004 + 0x3ce90;
    local_20 = in_stack_00000004 + 0x56d8;
    local_84 = in_stack_00000004;
    do {
      local_64 = iVar5 * 0x11c;
      if (*(int *)(local_84 + 0x57b0) != -1) {
        iVar6 = local_24 + *(int *)(local_84 + 0x57b0) * 0xac;
        local_168.z = *(float *)(iVar6 + 0x44);
        local_168.x = 0.0;
        local_168.y = 0.0;
        local_80 = local_168.z;
        pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)(iVar6 + 0x78),&local_cc,&local_168);
        local_18c = *(float *)(iVar6 + 0xa0) + pCVar1->x;
        local_188 = *(float *)(iVar6 + 0xa4) + pCVar1->y;
        local_184 = *(float *)(iVar6 + 0xa8) + pCVar1->z;
        pfVar4 = (float *)(local_20 + local_64);
        if (pfVar4 != &local_18c) {
          *pfVar4 = local_18c;
          pfVar4[1] = local_188;
          pfVar4[2] = local_184;
        }
      }
      iVar5 = iVar5 + 1;
      local_84 = local_84 + 0x11c;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0x104));
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1d8,in_stack_0000000c);
  local_114 = local_1d8.m[0].z;
  local_110 = local_1d8.m[1].z;
  local_10c = local_1d8.m[2].z;
  local_90 = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc0);
  local_8c = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc4);
  local_88 = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc8);
  fVar2 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  if (fVar2 <= 0.0) {
    local_8c = 0.0;
    local_90 = 0.0;
    local_88 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_90 = local_90 * fVar2;
    local_8c = local_8c * fVar2;
    local_88 = local_88 * fVar2;
  }
  local_18 = local_88 * local_1d8.m[2].z + local_90 * local_1d8.m[0].z + local_8c * local_1d8.m[1].z
  ;
  local_1e0 = local_18;
  if (0.0 < local_18) {
    local_1e0 = 0.0;
  }
  local_d8.z = local_1e0 * (float)-1;
  local_d8.x = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc0) * local_d8.z;
  local_d8.y = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc4) * local_d8.z;
  local_d8.z = *(float *)(g_CDemonSetPtr->unk4 + 0xbbc8) * local_d8.z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (&local_1d8,&local_a8,&local_d8);
  local_198 = pCVar1->x + *(float *)(in_stack_00000004 + 0x3fe64);
  local_194 = pCVar1->y + *(float *)(in_stack_00000004 + 0x3fe68);
  local_190 = pCVar1->z + *(float *)(in_stack_00000004 + 0x3fe6c);
  *(uint *)(in_stack_00000004 + 0x3fe6c) = 0;
  pfVar4 = (float *)(in_stack_00000004 + 0x3fe48);
  *(uint *)(in_stack_00000004 + 0x3fe68) = *(uint *)(in_stack_00000004 + 0x3fe6c);
  *(float *)(in_stack_00000004 + 0x3fe64) = *(float *)(in_stack_00000004 + 0x3fe68);
  local_150.x = *in_stack_00000008 - *pfVar4;
  local_150.y = in_stack_00000008[1] - *(float *)(in_stack_00000004 + 0x3fe4c);
  local_150.z = in_stack_00000008[2] - *(float *)(in_stack_00000004 + 0x3fe50);
  if (pfVar4 != in_stack_00000008) {
    *pfVar4 = *in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x3fe4c) = in_stack_00000008[1];
    *(float *)(in_stack_00000004 + 0x3fe50) = in_stack_00000008[2];
  }
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_15c,&local_150);
  local_100 = 1.0 / in_stack_00000010;
  local_b4 = local_15c.x * local_100;
  local_b0 = local_15c.y * local_100;
  local_180 = local_b4 - local_198;
  local_ac = local_15c.z * local_100;
  local_108 = local_180 * local_100;
  local_17c = local_b0 - local_194;
  local_178 = local_ac - local_190;
  local_104 = local_17c * local_100;
  local_100 = local_178 * local_100;
  pCVar1 = (CVector3f *)(in_stack_00000004 + 0x3fe54);
  local_e4 = in_stack_0000000c->x - pCVar1->x;
  local_e0 = in_stack_0000000c->y - *(float *)(in_stack_00000004 + 0x3fe58);
  local_dc = in_stack_0000000c->z - *(float *)(in_stack_00000004 + 0x3fe5c);
  if (pCVar1 != in_stack_0000000c) {
    pCVar1->x = in_stack_0000000c->x;
    *(float *)(in_stack_00000004 + 0x3fe58) = in_stack_0000000c->y;
    *(float *)(in_stack_00000004 + 0x3fe5c) = in_stack_0000000c->z;
  }
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_e0);
  local_78 = fVar2 * (1.0 / in_stack_00000010) * (1.0 / in_stack_00000010);
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    local_6c = in_stack_00000004 + 0x56d8;
    local_4c = (uint *)(in_stack_00000004 + 0x57a4);
    puVar3 = (uint *)(in_stack_00000004 + 0x56e4);
    iVar6 = in_stack_00000004;
    do {
      puVar3[2] = 0;
      puVar3[1] = puVar3[2];
      *puVar3 = puVar3[2];
      *(uint *)(iVar6 + 0x5790) = 0;
      puVar7 = (uint *)(iVar5 * 0x11c + local_6c);
      *(uint *)(iVar6 + 0x5794) = 0;
      if (puVar7 != local_4c) {
        puVar3[0x30] = *puVar7;
        puVar3[0x31] = puVar7[1];
        puVar3[0x32] = puVar7[2];
      }
      iVar6 = iVar6 + 0x11c;
      puVar3 = puVar3 + 0x47;
      iVar5 = iVar5 + 1;
      local_4c = local_4c + 0x47;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0x104));
  }
  local_138.y = -*(float *)(in_stack_00000004 + 0x3ce58);
  local_138.x = 0.0;
  local_138.z = 0.0;
  local_14 = local_138.y;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&local_1d8,&local_144,&local_138);
  local_3c = *(float *)(in_stack_00000004 + 0x3ce58) / *(float *)(in_stack_00000004 + 0x3ce5c);
  local_44 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    local_5c = (float *)(in_stack_00000004 + 0x3ce60);
    local_68 = local_78 * local_3c;
    local_54 = (float *)(in_stack_00000004 + 0x3ce70);
    local_58 = 0;
    local_74 = in_stack_00000004 + 0x56d8;
    do {
      pfVar4 = (float *)(*(int *)(*(int *)(in_stack_00000004 + 0x3fe3c) + local_58) * 0x11c +
                        local_74);
      fVar2 = pfVar4[0x1d];
      if (fVar2 == 0.0) {
        pfVar4[9] = *local_5c * pfVar4[9];
        pfVar4[10] = *local_5c * pfVar4[10];
        pfVar4[0xb] = *local_5c * pfVar4[0xb];
        local_c0 = local_108 * local_3c;
        local_bc = local_104 * local_3c;
        local_b8 = local_100 * local_3c;
        local_1b0 = local_c0 * *local_54;
        local_1ac = local_bc * *local_54;
        local_1a8 = local_b8 * *local_54;
        pfVar10 = pfVar4 + 3;
        *pfVar10 = *pfVar10 - local_1b0;
        pfVar4[4] = pfVar4[4] - local_1ac;
        pfVar4[5] = pfVar4[5] - local_1a8;
        *pfVar10 = *pfVar10 + local_144.x;
        pfVar4[4] = pfVar4[4] + local_144.y;
        pfVar4[5] = pfVar4[5] + local_144.z;
        local_1a0 = local_68 * *(float *)(in_stack_00000004 + 0x3ce74);
        local_124 = 1.0 / local_3c;
        local_f0 = pfVar4[1] * 0.0 - pfVar4[2] * local_1a0;
        local_ec = pfVar4[2] * 0.0 - *pfVar4 * 0.0;
        local_e8 = *pfVar4 * local_1a0 - pfVar4[1] * 0.0;
        *pfVar10 = *pfVar10 + local_f0;
        pfVar4[4] = pfVar4[4] + local_ec;
        local_12c = *pfVar10 * local_124;
        pfVar4[5] = pfVar4[5] + local_e8;
        local_128 = pfVar4[4] * local_124;
        local_124 = local_124 * pfVar4[5];
        if (pfVar4 + 6 != &local_12c) {
          pfVar4[6] = local_12c;
          pfVar4[7] = local_128;
          pfVar4[8] = local_124;
        }
        local_fc = pfVar4[6] * in_stack_00000010;
        local_f8 = pfVar4[7] * in_stack_00000010;
        local_f4 = pfVar4[8] * in_stack_00000010;
        pfVar10 = pfVar4 + 9;
        *pfVar10 = *pfVar10 + local_fc;
        pfVar4[10] = pfVar4[10] + local_f8;
        local_120 = *pfVar10 * in_stack_00000010;
        pfVar4[0xb] = pfVar4[0xb] + local_f4;
        local_11c = pfVar4[10] * in_stack_00000010;
        local_118 = in_stack_00000010 * pfVar4[0xb];
        *pfVar4 = *pfVar4 + local_120;
        pfVar4[1] = pfVar4[1] + local_11c;
        pfVar4[2] = pfVar4[2] + local_118;
        local_1a4 = fVar2;
        local_19c = fVar2;
        local_7c = local_1a0;
        core_cloth_cpp_FUN_0043a420();
      }
      local_58 = local_58 + 4;
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)(in_stack_00000004 + 0x104));
  }
  local_34 = in_stack_00000004 + 0x56d8;
  local_50 = 0;
  do {
    iVar5 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x104)) {
      iVar6 = 0;
      do {
        if (*(int *)(*(int *)(iVar6 + *(int *)(in_stack_00000004 + 0x3fe3c)) * 0x11c + local_34 +
                    0x74) == 0) {
          core_cloth_cpp_FUN_0043a420();
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(in_stack_00000004 + 0x104));
    }
    local_50 = local_50 + 1;
  } while (local_50 < 5);
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    pfVar4 = (float *)(in_stack_00000004 + 0x3ce6c);
    pfVar10 = (float *)(in_stack_00000004 + 0x3ce68);
    iVar6 = 0;
    do {
      iVar8 = in_stack_00000004 + 0x56d8 +
              *(int *)(iVar6 + *(int *)(in_stack_00000004 + 0x3fe3c)) * 0x11c;
      if (*(int *)(iVar8 + 0xb8) != 0) {
        *(float *)(iVar8 + 0x24) = *pfVar10 * *(float *)(iVar8 + 0x24);
        *(float *)(iVar8 + 0x28) = *pfVar10 * *(float *)(iVar8 + 0x28);
        *(float *)(iVar8 + 0x2c) = *pfVar10 * *(float *)(iVar8 + 0x2c);
      }
      if (*(int *)(iVar8 + 0xbc) != 0) {
        *(float *)(iVar8 + 0x24) = *pfVar4 * *(float *)(iVar8 + 0x24);
        *(float *)(iVar8 + 0x28) = *pfVar4 * *(float *)(iVar8 + 0x28);
        *(float *)(iVar8 + 0x2c) = *pfVar4 * *(float *)(iVar8 + 0x2c);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0x104));
  }
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x104)) {
    pfVar4 = (float *)(in_stack_00000004 + 0x56d8);
    iVar6 = 0;
    do {
      piVar9 = (int *)(*(int *)(in_stack_00000004 + 0x10c) + iVar6);
      iVar5 = iVar5 + 1;
      *piVar9 = (int)ROUND(*pfVar4 * 256.0f);
      piVar9[1] = (int)ROUND(pfVar4[1] * 256.0f);
      piVar9[2] = (int)ROUND(pfVar4[2] * 256.0f);
      pfVar4 = pfVar4 + 0x47;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0x104));
  }
  return;
}
