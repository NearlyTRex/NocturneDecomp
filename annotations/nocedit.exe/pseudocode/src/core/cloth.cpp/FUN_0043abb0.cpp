// Name: core_cloth.cpp_FUN_0043abb0
// Address: 0043abb0
// Address Range: [[0043abb0, 0043b789]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043abb0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_FUN_0043abb0(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6) */

void core_cloth_cpp_FUN_0043abb0(void)

{
  int iVar1;
  float fVar2;
  CVector3f *pCVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  BADSPACEBASE *in_ESP;
  float *pfVar10;
  float *in_stack_00000004;
  float *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  int in_stack_00000018;
  byte local_1d0 [16];
  float fStack_1c0;
  float fStack_1b4;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_174;
  float local_170;
  float local_16c;
  CVector3f local_168;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_134;
  CVector3f local_128;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
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
  byte local_d4 [40];
  float local_ac;
  float local_a8;
  byte auStack_a4 [24];
  float local_8c;
  float local_88;
  float *local_84;
  float local_80;
  float local_68;
  float local_64;
  float *local_60;
  float *local_5c;
  float local_54;
  float *local_48;
  int local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  float *local_30;
  int local_2c;
  CVector3f *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float local_14;
  
  if ((float)9999 <= in_stack_00000014) {
    in_stack_00000014 = -9999.0;
  }
  if (in_stack_00000010 < (float)0.01) {
    in_stack_00000010 = 0.01;
  }
  in_stack_00000004[0xff90] = 1.0 / in_stack_00000010;
  in_stack_00000004[0xff91] = in_stack_00000014 - in_stack_00000008[1];
  if (in_stack_00000018 != 0) {
    local_40 = (float *)0x0;
    if (0 < (int)in_stack_00000004[0xfc0a]) {
      local_38 = in_stack_00000018 + 0xe80;
      local_1c = in_stack_00000004 + 0x15b6;
      local_48 = in_stack_00000004;
      do {
        pfVar6 = local_1c + (int)local_48[0xfc0b] * 0x47;
        pfVar6[2] = 0.0;
        local_2c = 0;
        pfVar6[1] = pfVar6[2];
        *pfVar6 = pfVar6[1];
        if (0 < (int)pfVar6[0x37]) {
          pfVar10 = pfVar6 + 0x44;
          local_28 = (CVector3f *)(pfVar6 + 0x3b);
          local_30 = pfVar6;
          do {
            pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                               ((CVector3f *)(auStack_a4 + 8),local_28,
                                (CMatrix3x4f *)((int)local_30[0x38] * 0x30 + local_38));
            local_174 = pCVar3->x * *pfVar10;
            local_170 = pCVar3->y * *pfVar10;
            local_16c = pCVar3->z * *pfVar10;
            pfVar10 = pfVar10 + 1;
            local_28 = local_28 + 1;
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            *pfVar6 = *pfVar6 + local_174;
            pfVar6[1] = pfVar6[1] + local_170;
            pfVar6[2] = pfVar6[2] + local_16c;
          } while (local_2c < (int)pfVar6[0x37]);
        }
        local_48 = local_48 + 1;
        local_40 = (float *)((int)local_40 + 1);
      } while ((int)local_40 < (int)in_stack_00000004[0xfc0a]);
    }
    iVar5 = 0;
    if (0 < (int)in_stack_00000004[0xf3a3]) {
      do {
        core_cloth_cpp_FUN_0043a2b0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)in_stack_00000004[0xf3a3]);
    }
  }
  iVar5 = 0;
  if (0 < (int)in_stack_00000004[0x41]) {
    local_24 = in_stack_00000004 + 0xf3a4;
    local_20 = in_stack_00000004 + 0x15b6;
    local_84 = in_stack_00000004;
    do {
      pfVar6 = local_24;
      local_64 = (float)(iVar5 * 0x11c);
      fVar4 = local_84[0x15ec];
      if (fVar4 != -NAN) {
        local_168.z = local_24[(int)fVar4 * 0x2b + 0x11];
        local_168.x = 0.0;
        local_168.y = 0.0;
        local_80 = local_168.z;
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)(local_24 + (int)fVar4 * 0x2b + 0x1e),
                            (CVector3f *)(local_d4 + 8),&local_168);
        local_18c = pfVar6[(int)fVar4 * 0x2b + 0x28] + pCVar3->x;
        local_188 = pfVar6[(int)fVar4 * 0x2b + 0x29] + pCVar3->y;
        local_184 = pfVar6[(int)fVar4 * 0x2b + 0x2a] + pCVar3->z;
        pfVar6 = (float *)((int)local_20 + (int)local_64);
        if (pfVar6 != &local_18c) {
          *pfVar6 = local_18c;
          pfVar6[1] = local_188;
          pfVar6[2] = local_184;
        }
      }
      iVar5 = iVar5 + 1;
      local_84 = local_84 + 0x47;
    } while (iVar5 < (int)in_stack_00000004[0x41]);
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xfffffe28,in_stack_0000000c);
  local_110 = (float)local_1d0._4_4_;
  local_10c = fStack_1c0;
  local_108 = fStack_1b4;
  local_8c = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0);
  local_88 = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4);
  fVar4 = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8);
  fVar2 = SQRT(fVar4 * fVar4 + local_8c * local_8c + local_88 * local_88);
  if (fVar2 <= 0.0) {
    local_88 = 0.0;
    local_8c = 0.0;
    local_84 = (float *)0x0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    local_8c = local_8c * fVar2;
    local_88 = local_88 * fVar2;
    local_84 = (float *)(fVar4 * fVar2);
  }
  local_14 = (float)local_84 * fStack_1b4 +
             local_8c * (float)local_1d0._4_4_ + local_88 * fStack_1c0;
  local_d4._8_4_ = local_14;
  if (0.0 < local_14) {
    local_d4._8_4_ = 0.0;
  }
  local_d4._8_4_ = (float)local_d4._8_4_ * (float)-1;
  local_d4._0_4_ = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc0) * (float)local_d4._8_4_;
  local_d4._4_4_ = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc4) * (float)local_d4._8_4_;
  local_d4._8_4_ = *(float *)(g_CDemonSetPtr->field19_0x14f0a0 + 0xbbc8) * (float)local_d4._8_4_;
  pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     ((CMatrix3x3f *)&stack0xfffffe2c,(CVector3f *)auStack_a4,(CVector3f *)local_d4)
  ;
  local_190 = pCVar3->x + in_stack_00000004[0xff99];
  local_18c = pCVar3->y + in_stack_00000004[0xff9a];
  local_188 = pCVar3->z + in_stack_00000004[0xff9b];
  in_stack_00000004[0xff9b] = 0.0;
  pfVar6 = in_stack_00000004 + 0xff92;
  in_stack_00000004[0xff9a] = in_stack_00000004[0xff9b];
  in_stack_00000004[0xff99] = in_stack_00000004[0xff9a];
  local_148.x = *in_stack_00000008 - *pfVar6;
  local_148.y = in_stack_00000008[1] - in_stack_00000004[0xff93];
  local_148.z = in_stack_00000008[2] - in_stack_00000004[0xff94];
  if (pfVar6 != in_stack_00000008) {
    *pfVar6 = *in_stack_00000008;
    in_stack_00000004[0xff93] = in_stack_00000008[1];
    in_stack_00000004[0xff94] = in_stack_00000008[2];
  }
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            ((CMatrix3x3f *)local_1d0,&local_154,&local_148);
  local_f4 = 1.0 / in_stack_00000010;
  local_a8 = local_154.y * local_f4;
  auStack_a4._0_4_ = local_154.z * local_f4;
  local_174 = local_a8 - local_18c;
  auStack_a4._4_4_ = local_148.x * local_f4;
  local_fc = local_174 * local_f4;
  local_170 = (float)auStack_a4._0_4_ - local_188;
  local_16c = (float)auStack_a4._4_4_ - local_184;
  local_f8 = local_170 * local_f4;
  local_f4 = local_16c * local_f4;
  pCVar3 = (CVector3f *)(in_stack_00000004 + 0xff95);
  local_d8 = in_stack_0000000c->x - pCVar3->x;
  local_d4._0_4_ = in_stack_0000000c->y - in_stack_00000004[0xff96];
  local_d4._4_4_ = in_stack_0000000c->z - in_stack_00000004[0xff97];
  if (pCVar3 != in_stack_0000000c) {
    pCVar3->x = in_stack_0000000c->x;
    in_stack_00000004[0xff96] = in_stack_0000000c->y;
    in_stack_00000004[0xff97] = in_stack_0000000c->z;
  }
  fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_d4._0_4_);
  local_68 = fVar4 * (1.0 / in_stack_00000010) * (1.0 / in_stack_00000010);
  iVar5 = 0;
  if (0 < (int)in_stack_00000004[0x41]) {
    local_5c = in_stack_00000004 + 0x15b6;
    local_3c = in_stack_00000004 + 0x15e9;
    pfVar6 = in_stack_00000004 + 0x15b9;
    pfVar10 = in_stack_00000004;
    do {
      pfVar6[2] = 0.0;
      pfVar6[1] = pfVar6[2];
      *pfVar6 = pfVar6[2];
      pfVar10[0x15e4] = 0.0;
      pfVar7 = local_5c + iVar5 * 0x47;
      pfVar10[0x15e5] = 0.0;
      if (pfVar7 != local_3c) {
        pfVar6[0x30] = *pfVar7;
        pfVar6[0x31] = pfVar7[1];
        pfVar6[0x32] = pfVar7[2];
      }
      pfVar10 = pfVar10 + 0x47;
      pfVar6 = pfVar6 + 0x47;
      iVar5 = iVar5 + 1;
      local_3c = local_3c + 0x47;
    } while (iVar5 < (int)in_stack_00000004[0x41]);
  }
  local_128.y = -in_stack_00000004[0xf396];
  local_128.x = 0.0;
  local_128.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            ((CMatrix3x3f *)(local_1d0 + 8),&local_134,&local_128);
  local_28 = (CVector3f *)(in_stack_00000004[0xf396] / in_stack_00000004[0xf397]);
  local_30 = (float *)0x0;
  if (0 < (int)in_stack_00000004[0x41]) {
    local_48 = in_stack_00000004 + 0xf398;
    local_54 = local_64 * (float)local_28;
    local_40 = in_stack_00000004 + 0xf39c;
    local_44 = 0;
    local_60 = in_stack_00000004 + 0x15b6;
    do {
      local_1d0._0_4_ = local_60 + *(int *)((int)in_stack_00000004[0xff8f] + local_44) * 0x47;
      fVar4 = *(float *)(local_1d0._0_4_ + 0x74);
      if (fVar4 == 0.0) {
        *(float *)(local_1d0._0_4_ + 0x24) = *local_48 * *(float *)(local_1d0._0_4_ + 0x24);
        *(float *)(local_1d0._0_4_ + 0x28) = *local_48 * *(float *)(local_1d0._0_4_ + 0x28);
        *(float *)(local_1d0._0_4_ + 0x2c) = *local_48 * *(float *)(local_1d0._0_4_ + 0x2c);
        local_ac = local_f4 * (float)local_28;
        local_a8 = local_f0 * (float)local_28;
        auStack_a4._0_4_ = local_ec * (float)local_28;
        local_19c = local_ac * *local_40;
        local_198 = local_a8 * *local_40;
        local_194 = (float)auStack_a4._0_4_ * *local_40;
        pfVar6 = (float *)(local_1d0._0_4_ + 0xc);
        *pfVar6 = *pfVar6 - local_19c;
        *(float *)(local_1d0._0_4_ + 0x10) = *(float *)(local_1d0._0_4_ + 0x10) - local_198;
        *(float *)(local_1d0._0_4_ + 0x14) = *(float *)(local_1d0._0_4_ + 0x14) - local_194;
        *pfVar6 = *pfVar6 + local_134.y;
        *(float *)(local_1d0._0_4_ + 0x10) = *(float *)(local_1d0._0_4_ + 0x10) + local_134.z;
        *(float *)(local_1d0._0_4_ + 0x14) = *(float *)(local_1d0._0_4_ + 0x14) + local_128.x;
        local_18c = local_54 * in_stack_00000004[0xf39d];
        local_110 = 1.0 / (float)local_28;
        local_dc = *(float *)(local_1d0._0_4_ + 4) * 0.0 -
                   *(float *)(local_1d0._0_4_ + 8) * local_18c;
        local_d8 = *(float *)(local_1d0._0_4_ + 8) * 0.0 - *(float *)local_1d0._0_4_ * 0.0;
        local_d4._0_4_ =
             *(float *)local_1d0._0_4_ * local_18c - *(float *)(local_1d0._0_4_ + 4) * 0.0;
        *pfVar6 = *pfVar6 + local_dc;
        *(float *)(local_1d0._0_4_ + 0x10) = *(float *)(local_1d0._0_4_ + 0x10) + local_d8;
        local_118 = *pfVar6 * local_110;
        *(float *)(local_1d0._0_4_ + 0x14) =
             *(float *)(local_1d0._0_4_ + 0x14) + (float)local_d4._0_4_;
        local_114 = *(float *)(local_1d0._0_4_ + 0x10) * local_110;
        local_110 = local_110 * *(float *)(local_1d0._0_4_ + 0x14);
        if ((float *)(local_1d0._0_4_ + 0x18) != &local_118) {
          *(float *)(local_1d0._0_4_ + 0x18) = local_118;
          *(float *)(local_1d0._0_4_ + 0x1c) = local_114;
          *(float *)(local_1d0._0_4_ + 0x20) = local_110;
        }
        local_e8 = *(float *)(local_1d0._0_4_ + 0x18) * in_stack_00000010;
        local_e4 = *(float *)(local_1d0._0_4_ + 0x1c) * in_stack_00000010;
        local_e0 = *(float *)(local_1d0._0_4_ + 0x20) * in_stack_00000010;
        pfVar6 = (float *)(local_1d0._0_4_ + 0x24);
        *pfVar6 = *pfVar6 + local_e8;
        *(float *)(local_1d0._0_4_ + 0x28) = *(float *)(local_1d0._0_4_ + 0x28) + local_e4;
        local_10c = *pfVar6 * in_stack_00000010;
        *(float *)(local_1d0._0_4_ + 0x2c) = *(float *)(local_1d0._0_4_ + 0x2c) + local_e0;
        local_108 = *(float *)(local_1d0._0_4_ + 0x28) * in_stack_00000010;
        local_104 = in_stack_00000010 * *(float *)(local_1d0._0_4_ + 0x2c);
        *(float *)local_1d0._0_4_ = *(float *)local_1d0._0_4_ + local_10c;
        *(float *)(local_1d0._0_4_ + 4) = *(float *)(local_1d0._0_4_ + 4) + local_108;
        *(float *)(local_1d0._0_4_ + 8) = *(float *)(local_1d0._0_4_ + 8) + local_104;
        local_190 = fVar4;
        local_188 = fVar4;
        local_68 = local_18c;
        core_cloth_cpp_FUN_0043a420();
      }
      local_44 = local_44 + 4;
      local_30 = (float *)((int)local_30 + 1);
    } while ((int)local_30 < (int)in_stack_00000004[0x41]);
  }
  local_20 = in_stack_00000004 + 0x15b6;
  local_3c = (float *)0x0;
  do {
    iVar5 = 0;
    if (0 < (int)in_stack_00000004[0x41]) {
      iVar8 = 0;
      do {
        local_1d0._0_4_ = local_20 + *(int *)(iVar8 + (int)in_stack_00000004[0xff8f]) * 0x47;
        if (*(float *)(local_1d0._0_4_ + 0x74) == 0.0) {
          core_cloth_cpp_FUN_0043a420();
        }
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar5 < (int)in_stack_00000004[0x41]);
    }
    local_3c = (float *)((int)local_3c + 1);
  } while ((int)local_3c < 5);
  iVar5 = 0;
  if (0 < (int)in_stack_00000004[0x41]) {
    pfVar6 = in_stack_00000004 + 0xf39b;
    pfVar10 = in_stack_00000004 + 0xf39a;
    iVar8 = 0;
    do {
      iVar1 = *(int *)(iVar8 + (int)in_stack_00000004[0xff8f]);
      if (in_stack_00000004[iVar1 * 0x47 + 0x15e4] != 0.0) {
        in_stack_00000004[iVar1 * 0x47 + 0x15bf] =
             *pfVar10 * in_stack_00000004[iVar1 * 0x47 + 0x15bf];
        in_stack_00000004[iVar1 * 0x47 + 0x15c0] =
             *pfVar10 * in_stack_00000004[iVar1 * 0x47 + 0x15c0];
        in_stack_00000004[iVar1 * 0x47 + 0x15c1] =
             *pfVar10 * in_stack_00000004[iVar1 * 0x47 + 0x15c1];
      }
      if (in_stack_00000004[iVar1 * 0x47 + 0x15e5] != 0.0) {
        in_stack_00000004[iVar1 * 0x47 + 0x15bf] =
             *pfVar6 * in_stack_00000004[iVar1 * 0x47 + 0x15bf];
        in_stack_00000004[iVar1 * 0x47 + 0x15c0] =
             *pfVar6 * in_stack_00000004[iVar1 * 0x47 + 0x15c0];
        in_stack_00000004[iVar1 * 0x47 + 0x15c1] =
             *pfVar6 * in_stack_00000004[iVar1 * 0x47 + 0x15c1];
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar5 < (int)in_stack_00000004[0x41]);
  }
  iVar5 = 0;
  if (0 < (int)in_stack_00000004[0x41]) {
    pfVar6 = in_stack_00000004 + 0x15b6;
    iVar8 = 0;
    do {
      piVar9 = (int *)((int)in_stack_00000004[0x43] + iVar8);
      iVar5 = iVar5 + 1;
      *piVar9 = (int)ROUND(*pfVar6 * _DAT_0065bb3c);
      piVar9[1] = (int)ROUND(pfVar6[1] * _DAT_0065bb3c);
      piVar9[2] = (int)ROUND(pfVar6[2] * _DAT_0065bb3c);
      pfVar6 = pfVar6 + 0x47;
      iVar8 = iVar8 + 0xc;
    } while (iVar5 < (int)in_stack_00000004[0x41]);
  }
  return;
}
