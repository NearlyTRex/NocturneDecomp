// Name: core_cloth.cpp_FUN_0043abb0
// Address: 0043abb0
// Address Range: [[0043abb0, 0043b789]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043abb0()
// Cross-references:
//   core_cloth.cpp_FUN_0043ab80 (0043ab80) at 0043ab9e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006184a2
//   undefined4 DAT_006184aa
//   undefined4 DAT_006184b2
//   undefined4 DAT_0065bb3c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_0326eed8
//   undefined4 DAT_0326eedc
//   undefined4 DAT_0326eee0
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_cloth.cpp_FUN_0043a2b0
//   core_cloth.cpp_FUN_0043a420
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_FUN_0043abb0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

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
  undefined1 local_1d0 [16];
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
  undefined1 local_d4 [40];
  float local_ac;
  float local_a8;
  undefined1 auStack_a4 [24];
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
  
  if ((float)_DAT_006184a2 <= in_stack_00000014) {
    in_stack_00000014 = -9999.0;
  }
  if (in_stack_00000010 < (float)_DAT_006184aa) {
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
  local_d4._8_4_ = (float)local_d4._8_4_ * (float)_DAT_006184b2;
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
  fVar4 = core_actor_cpp_FUN_0040cd70((float)local_d4._0_4_);
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


// Assembly code:
// 0043abb0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043abb0
// 0043abb1: PUSH ESI
// 0043abb2: PUSH EDI
// 0043abb3: PUSH EBP
// 0043abb4: MOV EBP,ESP
// 0043abb6: SUB ESP,0x1d0
// 0043abbc: AND ESP,0xfffffff8
// 0043abbf: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043abc2: FLD float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0043abc5: FCOMP double ptr [0x006184a2]
//   XREF to: 006184a2 (READ)
// 0043abcb: FNSTSW AX
// 0043abcd: SAHF
// 0043abce: JNC 0x0043b4d7
//   XREF to: 0043b4d7 (CONDITIONAL_JUMP)
// 0043abd4: FLD float ptr [EBP + 0x20]
//   Label: LAB_0043abd4
//   XREF to: Stack[0x10] (READ)
// 0043abd7: FCOMP double ptr [0x006184aa]
//   XREF to: 006184aa (READ)
// 0043abdd: FNSTSW AX
// 0043abdf: SAHF
// 0043abe0: JNC 0x0043abe9
//   XREF to: 0043abe9 (CONDITIONAL_JUMP)
// 0043abe2: MOV dword ptr [EBP + 0x20],0x3c23d70a
//   XREF to: Stack[0x10] (WRITE)
// 0043abe9: FLD float ptr [EBP + 0x20]
//   Label: LAB_0043abe9
//   XREF to: Stack[0x10] (READ)
// 0043abec: FLD1
// 0043abee: FDIVRP
// 0043abf0: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043abf3: FSTP float ptr [EDI + 0x3fe40]
// 0043abf9: FLD float ptr [EAX + 0x4]
// 0043abfc: FSUBR float ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0043abff: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0043ac02: FSTP float ptr [EDI + 0x3fe44]
// 0043ac08: TEST EBX,EBX
// 0043ac0a: JZ 0x0043ada0
//   XREF to: 0043ada0 (CONDITIONAL_JUMP)
// 0043ac10: XOR ESI,ESI
// 0043ac12: MOV EAX,dword ptr [EDI + 0x3f028]
// 0043ac18: MOV dword ptr [ESP + 0x1a0],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 0043ac1f: TEST EAX,EAX
// 0043ac21: JLE 0x0043ad7b
//   XREF to: 0043ad7b (CONDITIONAL_JUMP)
// 0043ac27: LEA EAX,[EBX + 0xe80]
// 0043ac2d: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0043ac34: LEA EAX,[EDI + 0x56d8]
// 0043ac3a: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043ac41: MOV dword ptr [ESP + 0x198],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 0043ac48: MOV EAX,dword ptr [ESP + 0x198]
//   Label: LAB_0043ac48
//   XREF to: Stack[-0x48] (READ)
// 0043ac4f: IMUL EBX,dword ptr [EAX + 0x3f02c],0x11c
// 0043ac59: ADD EBX,dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x1c] (READ)
// 0043ac60: XOR ESI,ESI
// 0043ac62: MOV dword ptr [EBX + 0x8],0x0
// 0043ac69: MOV dword ptr [ESP + 0x1b4],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0043ac70: MOV EAX,dword ptr [EBX + 0xdc]
// 0043ac76: MOV EDX,dword ptr [EBX + 0x8]
// 0043ac79: MOV dword ptr [EBX + 0x4],EDX
// 0043ac7c: MOV EDX,dword ptr [EBX + 0x4]
// 0043ac7f: MOV dword ptr [EBX],EDX
// 0043ac81: TEST EAX,EAX
// 0043ac83: JLE 0x0043ad4d
//   XREF to: 0043ad4d (CONDITIONAL_JUMP)
// 0043ac89: LEA ESI,[EBX + 0x110]
// 0043ac8f: LEA EAX,[EBX + 0xec]
// 0043ac95: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0043ac9c: MOV dword ptr [ESP + 0x1b0],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0043aca3: MOV EAX,dword ptr [ESP + 0x1b0]
//   Label: LAB_0043aca3
//   XREF to: Stack[-0x30] (READ)
// 0043acaa: IMUL EAX,dword ptr [EAX + 0xe0],0x30
// 0043acb1: ADD EAX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 0043acb8: PUSH EAX
// 0043acb9: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x28] (READ)
// 0043acc0: PUSH EAX
// 0043acc1: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0x9c] (DATA)
// 0043acc8: PUSH EAX
// 0043acc9: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0043acce: FLD float ptr [EAX]
// 0043acd0: FMUL float ptr [ESI]
// 0043acd2: ADD ESP,0xc
// 0043acd5: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x174] (WRITE)
// 0043acd9: FLD float ptr [EAX + 0x4]
// 0043acdc: FMUL float ptr [ESI]
// 0043acde: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x170] (WRITE)
// 0043ace2: FLD float ptr [EAX + 0x8]
// 0043ace5: FMUL float ptr [ESI]
// 0043ace7: ADD ESI,0x4
// 0043acea: MOV EDX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x28] (READ)
// 0043acf1: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x30] (READ)
// 0043acf8: ADD EDX,0xc
// 0043acfb: ADD ECX,0x4
// 0043acfe: MOV dword ptr [ESP + 0x1b8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0043ad05: MOV dword ptr [ESP + 0x1b0],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0043ad0c: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 0043ad13: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x16c] (WRITE)
// 0043ad17: INC EAX
// 0043ad18: FLD float ptr [EBX + 0x4]
// 0043ad1b: FLD float ptr [EBX]
// 0043ad1d: FADD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x174] (READ)
// 0043ad21: FLD float ptr [EBX + 0x8]
// 0043ad24: FXCH
// 0043ad26: FSTP float ptr [EBX]
// 0043ad28: FXCH
// 0043ad2a: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x170] (READ)
// 0043ad2e: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0043ad35: FSTP float ptr [EBX + 0x4]
// 0043ad38: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x16c] (READ)
// 0043ad3c: MOV EDX,dword ptr [EBX + 0xdc]
// 0043ad42: FSTP float ptr [EBX + 0x8]
// 0043ad45: CMP EAX,EDX
// 0043ad47: JL 0x0043aca3
//   XREF to: 0043aca3 (CONDITIONAL_JUMP)
// 0043ad4d: MOV EDX,dword ptr [ESP + 0x198]
//   Label: LAB_0043ad4d
//   XREF to: Stack[-0x48] (READ)
// 0043ad54: MOV ECX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x40] (READ)
// 0043ad5b: MOV EBX,dword ptr [EDI + 0x3f028]
// 0043ad61: ADD EDX,0x4
// 0043ad64: INC ECX
// 0043ad65: MOV dword ptr [ESP + 0x198],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0043ad6c: MOV dword ptr [ESP + 0x1a0],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 0043ad73: CMP ECX,EBX
// 0043ad75: JL 0x0043ac48
//   XREF to: 0043ac48 (CONDITIONAL_JUMP)
// 0043ad7b: MOV ESI,dword ptr [EDI + 0x3ce8c]
//   Label: LAB_0043ad7b
// 0043ad81: XOR EBX,EBX
// 0043ad83: TEST ESI,ESI
// 0043ad85: JLE 0x0043ada0
//   XREF to: 0043ada0 (CONDITIONAL_JUMP)
// 0043ad87: MOV EDX,dword ptr [EBP + 0x28]
//   Label: LAB_0043ad87
//   XREF to: Stack[0x18] (READ)
// 0043ad8a: PUSH EDX
// 0043ad8b: PUSH EBX
// 0043ad8c: PUSH EDI
// 0043ad8d: CALL core_cloth.cpp_FUN_0043a2b0
//   XREF to: 0043a2b0 (UNCONDITIONAL_CALL)
// 0043ad92: INC EBX
// 0043ad93: MOV ECX,dword ptr [EDI + 0x3ce8c]
// 0043ad99: ADD ESP,0xc
// 0043ad9c: CMP EBX,ECX
// 0043ad9e: JL 0x0043ad87
//   XREF to: 0043ad87 (CONDITIONAL_JUMP)
// 0043ada0: MOV ECX,dword ptr [EDI + 0x104]
//   Label: LAB_0043ada0
// 0043ada6: XOR ESI,ESI
// 0043ada8: TEST ECX,ECX
// 0043adaa: JLE 0x0043aeb3
//   XREF to: 0043aeb3 (CONDITIONAL_JUMP)
// 0043adb0: LEA EAX,[EDI + 0x3ce90]
// 0043adb6: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043adbd: LEA EAX,[EDI + 0x56d8]
// 0043adc3: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043adca: MOV dword ptr [ESP + 0x15c],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 0043add1: IMUL EAX,ESI,0x11c
//   Label: LAB_0043add1
// 0043add7: MOV dword ptr [ESP + 0x17c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0043adde: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x84] (READ)
// 0043ade5: MOV EAX,dword ptr [EAX + 0x57b0]
// 0043adeb: CMP EAX,-0x1
// 0043adee: JZ 0x0043ae90
//   XREF to: 0043ae90 (CONDITIONAL_JUMP)
// 0043adf4: IMUL EAX,EAX,0xac
// 0043adfa: MOV EBX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x24] (READ)
// 0043ae01: ADD EBX,EAX
// 0043ae03: MOV EAX,dword ptr [EBX + 0x44]
// 0043ae06: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0043ae0d: XOR EAX,EAX
// 0043ae0f: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 0043ae13: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 0043ae17: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x80] (READ)
// 0043ae1e: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 0043ae25: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x168] (DATA)
// 0043ae29: PUSH EAX
// 0043ae2a: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0xcc] (DATA)
// 0043ae31: PUSH EAX
// 0043ae32: LEA EAX,[EBX + 0x78]
// 0043ae35: PUSH EAX
// 0043ae36: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0043ae3b: FLD float ptr [EBX + 0xa0]
// 0043ae41: FADD float ptr [EAX]
// 0043ae43: ADD ESP,0xc
// 0043ae46: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x18c] (WRITE)
// 0043ae4a: FLD float ptr [EBX + 0xa4]
// 0043ae50: FADD float ptr [EAX + 0x4]
// 0043ae53: MOV ECX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x64] (READ)
// 0043ae5a: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x188] (WRITE)
// 0043ae5e: FLD float ptr [EBX + 0xa8]
// 0043ae64: MOV EBX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 0043ae6b: FADD float ptr [EAX + 0x8]
// 0043ae6e: ADD EBX,ECX
// 0043ae70: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x18c] (DATA)
// 0043ae74: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x184] (WRITE)
// 0043ae78: CMP EBX,EAX
// 0043ae7a: JZ 0x0043ae90
//   XREF to: 0043ae90 (CONDITIONAL_JUMP)
// 0043ae7c: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18c] (DATA)
// 0043ae80: MOV dword ptr [EBX],EAX
// 0043ae82: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x188] (READ)
// 0043ae86: MOV dword ptr [EBX + 0x4],EAX
// 0043ae89: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x184] (READ)
// 0043ae8d: MOV dword ptr [EBX + 0x8],EAX
// 0043ae90: MOV EBX,dword ptr [ESP + 0x15c]
//   Label: LAB_0043ae90
//   XREF to: Stack[-0x84] (READ)
// 0043ae97: INC ESI
// 0043ae98: ADD EBX,0x11c
// 0043ae9e: MOV EAX,dword ptr [EDI + 0x104]
// 0043aea4: MOV dword ptr [ESP + 0x15c],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 0043aeab: CMP ESI,EAX
// 0043aead: JL 0x0043add1
//   XREF to: 0043add1 (CONDITIONAL_JUMP)
// 0043aeb3: MOV EDX,dword ptr [EBP + 0x1c]
//   Label: LAB_0043aeb3
//   XREF to: Stack[0xc] (READ)
// 0043aeb6: PUSH EDX
// 0043aeb7: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1d8] (DATA)
// 0043aebb: PUSH EAX
// 0043aebc: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0043aec1: ADD ESP,0x8
// 0043aec4: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1d0] (READ)
// 0043aec8: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 0043aecf: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c4] (READ)
// 0043aed3: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 0043aeda: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1b8] (READ)
// 0043aede: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0043aee4: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 0043aeeb: MOV EAX,dword ptr [EDX + 0x15ac60]
//   XREF to: 0326eed8 (READ)
// 0043aef1: ADD EDX,0x15ac60
//   XREF to: 0326eed8 (PARAM)
// 0043aef7: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0043aefe: LEA EAX,[EDX + 0x4]
//   XREF to: 0326eedc (DATA)
// 0043af01: MOV EAX,dword ptr [EAX]
//   XREF to: 0326eedc (READ)
// 0043af03: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0043af0a: FLD float ptr [ESP + 0x154]
//   XREF to: Stack[-0x8c] (READ)
// 0043af11: FMUL ST0
// 0043af13: LEA EAX,[EDX + 0x8]
//   XREF to: 0326eee0 (DATA)
// 0043af16: FLD float ptr [ESP + 0x150]
//   XREF to: Stack[-0x90] (READ)
// 0043af1d: FMUL ST0
// 0043af1f: MOV EAX,dword ptr [EAX]
//   XREF to: 0326eee0 (READ)
// 0043af21: FADDP
// 0043af23: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0043af2a: FLD float ptr [ESP + 0x158]
//   XREF to: Stack[-0x88] (READ)
// 0043af31: FMUL ST0
// 0043af33: FADDP
// 0043af35: FSQRT
// 0043af37: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1dc] (WRITE)
// 0043af3b: FLDZ
// 0043af3d: FCOMPP
// 0043af3f: FNSTSW AX
// 0043af41: SAHF
// 0043af42: JNC 0x0043b4e3
//   XREF to: 0043b4e3 (CONDITIONAL_JUMP)
// 0043af48: FLD1
// 0043af4a: FLD float ptr [ESP + 0x150]
//   XREF to: Stack[-0x90] (READ)
// 0043af51: FXCH
// 0043af53: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1dc] (READ)
// 0043af57: FXCH
// 0043af59: FMUL ST1
// 0043af5b: FLD float ptr [ESP + 0x154]
//   XREF to: Stack[-0x8c] (READ)
// 0043af62: FMUL ST2
// 0043af64: FLD float ptr [ESP + 0x158]
//   XREF to: Stack[-0x88] (READ)
// 0043af6b: FMULP ST3
// 0043af6d: FXCH
// 0043af6f: FSTP float ptr [ESP + 0x150]
//   XREF to: Stack[-0x90] (WRITE)
// 0043af76: FSTP float ptr [ESP + 0x154]
//   XREF to: Stack[-0x8c] (WRITE)
// 0043af7d: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x88] (WRITE)
// 0043af84: FLD float ptr [ESP + 0x154]
//   Label: LAB_0043af84
//   XREF to: Stack[-0x8c] (READ)
// 0043af8b: FMUL float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x110] (READ)
// 0043af92: FLD float ptr [ESP + 0x150]
//   XREF to: Stack[-0x90] (READ)
// 0043af99: FMUL float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x114] (READ)
// 0043afa0: FADDP
// 0043afa2: FLD float ptr [ESP + 0x158]
//   XREF to: Stack[-0x88] (READ)
// 0043afa9: FMUL float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x10c] (READ)
// 0043afb0: FADDP
// 0043afb2: FST float ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (WRITE)
// 0043afb9: MOV EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 0043afc0: FLDZ
// 0043afc2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e0] (DATA)
// 0043afc5: FCOMPP
// 0043afc7: FNSTSW AX
// 0043afc9: SAHF
// 0043afca: JNC 0x0043afd1
//   XREF to: 0043afd1 (CONDITIONAL_JUMP)
// 0043afcc: XOR EAX,EAX
// 0043afce: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e0] (DATA)
// 0043afd1: FLD float ptr [ESP]
//   Label: LAB_0043afd1
//   XREF to: Stack[-0x1e0] (DATA)
// 0043afd4: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0043afd9: FMUL double ptr [0x006184b2]
//   XREF to: 006184b2 (READ)
// 0043afdf: FLD float ptr [EAX + 0x15ac60]
//   XREF to: 0326eed8 (READ)
// 0043afe5: FXCH
// 0043afe7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 0043afea: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 0043afed: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0xd8] (WRITE)
// 0043aff4: FLD float ptr [EAX + 0x15ac64]
//   XREF to: 0326eedc (READ)
// 0043affa: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 0043affd: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0xd4] (WRITE)
// 0043b004: FLD float ptr [EAX + 0x15ac68]
//   XREF to: 0326eee0 (READ)
// 0043b00a: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0xd8] (DATA)
// 0043b011: FMUL float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 0043b014: PUSH EAX
// 0043b015: LEA EAX,[ESP + 0x13c]
//   XREF to: Stack[-0xa8] (DATA)
// 0043b01c: PUSH EAX
// 0043b01d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1d8] (DATA)
// 0043b021: LEA EBX,[EDI + 0x3fe64]
// 0043b027: PUSH EAX
// 0043b028: FSTP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0xd0] (WRITE)
// 0043b02f: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0043b034: FLD float ptr [EAX]
// 0043b036: FADD float ptr [EBX]
// 0043b038: ADD ESP,0xc
// 0043b03b: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x198] (WRITE)
// 0043b03f: FLD float ptr [EAX + 0x4]
// 0043b042: FADD float ptr [EBX + 0x4]
// 0043b045: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x194] (WRITE)
// 0043b049: FLD float ptr [EAX + 0x8]
// 0043b04c: FADD float ptr [EBX + 0x8]
// 0043b04f: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043b052: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x190] (WRITE)
// 0043b056: MOV dword ptr [EBX + 0x8],0x0
// 0043b05d: LEA EAX,[EDI + 0x3fe48]
// 0043b063: MOV ECX,dword ptr [EBX + 0x8]
// 0043b066: MOV dword ptr [EBX + 0x4],ECX
// 0043b069: MOV ECX,dword ptr [EBX + 0x4]
// 0043b06c: MOV dword ptr [EBX],ECX
// 0043b06e: FLD float ptr [EDX]
// 0043b070: FSUB float ptr [EAX]
// 0043b072: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x150] (WRITE)
// 0043b079: FLD float ptr [EDX + 0x4]
// 0043b07c: FSUB float ptr [EAX + 0x4]
// 0043b07f: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x14c] (WRITE)
// 0043b086: FLD float ptr [EDX + 0x8]
// 0043b089: FSUB float ptr [EAX + 0x8]
// 0043b08c: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x148] (WRITE)
// 0043b093: CMP EAX,EDX
// 0043b095: JZ 0x0043b0a7
//   XREF to: 0043b0a7 (CONDITIONAL_JUMP)
// 0043b097: MOV ECX,dword ptr [EDX]
// 0043b099: MOV dword ptr [EAX],ECX
// 0043b09b: MOV ECX,dword ptr [EDX + 0x4]
// 0043b09e: MOV dword ptr [EAX + 0x4],ECX
// 0043b0a1: MOV ECX,dword ptr [EDX + 0x8]
// 0043b0a4: MOV dword ptr [EAX + 0x8],ECX
// 0043b0a7: LEA EAX,[ESP + 0x90]
//   Label: LAB_0043b0a7
//   XREF to: Stack[-0x150] (DATA)
// 0043b0ae: PUSH EAX
// 0043b0af: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x15c] (DATA)
// 0043b0b6: PUSH EAX
// 0043b0b7: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1d8] (DATA)
// 0043b0bb: PUSH EAX
// 0043b0bc: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0043b0c1: ADD ESP,0xc
// 0043b0c4: FLD1
// 0043b0c6: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0x15c] (READ)
// 0043b0cd: FXCH
// 0043b0cf: FDIV float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0043b0d2: FXCH
// 0043b0d4: FMUL ST1
// 0043b0d6: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x158] (READ)
// 0043b0dd: FMUL ST2
// 0043b0df: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x154] (READ)
// 0043b0e6: FXCH ST2
// 0043b0e8: FST float ptr [ESP + 0x12c]
//   XREF to: Stack[-0xb4] (WRITE)
// 0043b0ef: FSUB float ptr [ESP + 0x48]
//   XREF to: Stack[-0x198] (READ)
// 0043b0f3: FXCH ST2
// 0043b0f5: FMUL ST3
// 0043b0f7: FXCH ST2
// 0043b0f9: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0x180] (WRITE)
// 0043b0fd: FMUL ST3
// 0043b0ff: FXCH
// 0043b101: FSTP float ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (WRITE)
// 0043b108: FXCH
// 0043b10a: FST float ptr [ESP + 0x134]
//   XREF to: Stack[-0xac] (WRITE)
// 0043b111: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (READ)
// 0043b118: FSUB float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x194] (READ)
// 0043b11c: FXCH
// 0043b11e: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[-0x190] (READ)
// 0043b122: FXCH
// 0043b124: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0x17c] (WRITE)
// 0043b128: FMUL ST3
// 0043b12a: FXCH
// 0043b12c: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x178] (WRITE)
// 0043b130: FMULP ST3
// 0043b132: LEA EAX,[EDI + 0x3fe54]
// 0043b138: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0043b13b: FXCH
// 0043b13d: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x108] (WRITE)
// 0043b144: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x104] (WRITE)
// 0043b14b: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x100] (WRITE)
// 0043b152: FLD float ptr [EDX]
// 0043b154: FSUB float ptr [EAX]
// 0043b156: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe4] (WRITE)
// 0043b15d: FLD float ptr [EDX + 0x4]
// 0043b160: FSUB float ptr [EAX + 0x4]
// 0043b163: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0xe0] (WRITE)
// 0043b16a: FLD float ptr [EDX + 0x8]
// 0043b16d: FSUB float ptr [EAX + 0x8]
// 0043b170: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0xdc] (WRITE)
// 0043b177: CMP EAX,EDX
// 0043b179: JZ 0x0043b18b
//   XREF to: 0043b18b (CONDITIONAL_JUMP)
// 0043b17b: MOV ECX,dword ptr [EDX]
// 0043b17d: MOV dword ptr [EAX],ECX
// 0043b17f: MOV ECX,dword ptr [EDX + 0x4]
// 0043b182: MOV dword ptr [EAX + 0x4],ECX
// 0043b185: MOV ECX,dword ptr [EDX + 0x8]
// 0043b188: MOV dword ptr [EAX + 0x8],ECX
// 0043b18b: PUSH dword ptr [ESP + 0x100]
//   Label: LAB_0043b18b
//   XREF to: Stack[-0xe0] (READ)
// 0043b192: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0043b197: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043b19e: FLD float ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x14] (READ)
// 0043b1a5: ADD ESP,0x4
// 0043b1a8: FLD1
// 0043b1aa: FDIV float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0043b1ad: FXCH
// 0043b1af: FMUL ST1
// 0043b1b1: FMULP
// 0043b1b3: MOV EBX,dword ptr [EDI + 0x104]
// 0043b1b9: XOR EDX,EDX
// 0043b1bb: FSTP float ptr [ESP + 0x168]
//   XREF to: Stack[-0x78] (WRITE)
// 0043b1c2: TEST EBX,EBX
// 0043b1c4: JLE 0x0043b271
//   XREF to: 0043b271 (CONDITIONAL_JUMP)
// 0043b1ca: LEA EAX,[EDI + 0x56d8]
// 0043b1d0: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0043b1d7: LEA EAX,[EDI + 0x57a4]
// 0043b1dd: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0043b1e4: MOV ESI,EDI
// 0043b1e6: LEA EAX,[EDI + 0x56e4]
// 0043b1ec: IMUL EBX,EDX,0x11c
//   Label: LAB_0043b1ec
// 0043b1f2: MOV dword ptr [EAX + 0x8],0x0
// 0043b1f9: MOV ECX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x6c] (READ)
// 0043b200: FLD float ptr [EAX + 0x8]
// 0043b203: FST float ptr [EAX + 0x4]
// 0043b206: FSTP float ptr [EAX]
// 0043b208: MOV dword ptr [ESI + 0x5790],0x0
// 0043b212: ADD EBX,ECX
// 0043b214: MOV ECX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x4c] (READ)
// 0043b21b: MOV dword ptr [ESI + 0x5794],0x0
// 0043b225: CMP EBX,ECX
// 0043b227: JZ 0x0043b243
//   XREF to: 0043b243 (CONDITIONAL_JUMP)
// 0043b229: MOV ECX,dword ptr [EBX]
// 0043b22b: MOV dword ptr [EAX + 0xc0],ECX
// 0043b231: MOV ECX,dword ptr [EBX + 0x4]
// 0043b234: MOV dword ptr [EAX + 0xc4],ECX
// 0043b23a: MOV ECX,dword ptr [EBX + 0x8]
// 0043b23d: MOV dword ptr [EAX + 0xc8],ECX
// 0043b243: MOV EBX,dword ptr [ESP + 0x194]
//   Label: LAB_0043b243
//   XREF to: Stack[-0x4c] (READ)
// 0043b24a: ADD ESI,0x11c
// 0043b250: ADD EAX,0x11c
// 0043b255: INC EDX
// 0043b256: ADD EBX,0x11c
// 0043b25c: MOV ECX,dword ptr [EDI + 0x104]
// 0043b262: MOV dword ptr [ESP + 0x194],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 0043b269: CMP EDX,ECX
// 0043b26b: JL 0x0043b1ec
//   XREF to: 0043b1ec (CONDITIONAL_JUMP)
// 0043b271: FLD float ptr [EDI + 0x3ce58]
//   Label: LAB_0043b271
// 0043b277: FCHS
// 0043b279: FSTP float ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x14] (WRITE)
// 0043b280: MOV EAX,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x14] (READ)
// 0043b287: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 0043b28e: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x138] (DATA)
// 0043b295: PUSH EAX
// 0043b296: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x144] (DATA)
// 0043b29d: PUSH EAX
// 0043b29e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1d8] (DATA)
// 0043b2a2: XOR EBX,EBX
// 0043b2a4: PUSH EAX
// 0043b2a5: MOV dword ptr [ESP + 0xb4],EBX
//   XREF to: Stack[-0x138] (WRITE)
// 0043b2ac: MOV dword ptr [ESP + 0xbc],EBX
//   XREF to: Stack[-0x130] (WRITE)
// 0043b2b3: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0043b2b8: FLD float ptr [EDI + 0x3ce58]
// 0043b2be: FDIV float ptr [EDI + 0x3ce5c]
// 0043b2c4: ADD ESP,0xc
// 0043b2c7: MOV EDX,dword ptr [EDI + 0x104]
// 0043b2cd: MOV dword ptr [ESP + 0x19c],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 0043b2d4: FSTP float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0043b2db: TEST EDX,EDX
// 0043b2dd: JLE 0x0043b377
//   XREF to: 0043b377 (CONDITIONAL_JUMP)
// 0043b2e3: FLD float ptr [ESP + 0x168]
//   XREF to: Stack[-0x78] (READ)
// 0043b2ea: LEA EAX,[EDI + 0x3ce60]
// 0043b2f0: FMUL float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 0043b2f7: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0043b2fe: LEA EAX,[EDI + 0x3ce70]
// 0043b304: MOV dword ptr [ESP + 0x188],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 0043b30b: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0043b312: LEA EAX,[EDI + 0x56d8]
// 0043b318: FSTP float ptr [ESP + 0x178]
//   XREF to: Stack[-0x68] (WRITE)
// 0043b31f: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0043b326: MOV ESI,dword ptr [ESP + 0x188]
//   Label: LAB_0043b326
//   XREF to: Stack[-0x58] (READ)
// 0043b32d: MOV EAX,dword ptr [EDI + 0x3fe3c]
// 0043b333: ADD EAX,ESI
// 0043b335: IMUL EBX,dword ptr [EAX],0x11c
// 0043b33b: ADD EBX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x74] (READ)
// 0043b342: MOV ESI,dword ptr [EBX + 0x74]
// 0043b345: TEST ESI,ESI
// 0043b347: JZ 0x0043b4ff
//   XREF to: 0043b4ff (CONDITIONAL_JUMP)
// 0043b34d: MOV EBX,dword ptr [ESP + 0x188]
//   Label: LAB_0043b34d
//   XREF to: Stack[-0x58] (READ)
// 0043b354: MOV ESI,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x44] (READ)
// 0043b35b: MOV EDX,dword ptr [EDI + 0x104]
// 0043b361: ADD EBX,0x4
// 0043b364: INC ESI
// 0043b365: MOV dword ptr [ESP + 0x188],EBX
//   XREF to: Stack[-0x58] (WRITE)
// 0043b36c: MOV dword ptr [ESP + 0x19c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 0043b373: CMP ESI,EDX
// 0043b375: JL 0x0043b326
//   XREF to: 0043b326 (CONDITIONAL_JUMP)
// 0043b377: LEA EAX,[EDI + 0x56d8]
//   Label: LAB_0043b377
// 0043b37d: XOR ECX,ECX
// 0043b37f: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0043b386: MOV dword ptr [ESP + 0x190],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0043b38d: MOV EBX,dword ptr [EDI + 0x104]
//   Label: LAB_0043b38d
// 0043b393: XOR ESI,ESI
// 0043b395: TEST EBX,EBX
// 0043b397: JLE 0x0043b3c7
//   XREF to: 0043b3c7 (CONDITIONAL_JUMP)
// 0043b399: XOR EBX,EBX
// 0043b39b: MOV EAX,dword ptr [EDI + 0x3fe3c]
//   Label: LAB_0043b39b
// 0043b3a1: IMUL EAX,dword ptr [EBX + EAX*0x1],0x11c
// 0043b3a8: ADD EAX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x34] (READ)
// 0043b3af: CMP dword ptr [EAX + 0x74],0x0
// 0043b3b3: JZ 0x0043b77b
//   XREF to: 0043b77b (CONDITIONAL_JUMP)
// 0043b3b9: INC ESI
//   Label: LAB_0043b3b9
// 0043b3ba: MOV EAX,dword ptr [EDI + 0x104]
// 0043b3c0: ADD EBX,0x4
// 0043b3c3: CMP ESI,EAX
// 0043b3c5: JL 0x0043b39b
//   XREF to: 0043b39b (CONDITIONAL_JUMP)
// 0043b3c7: MOV EDX,dword ptr [ESP + 0x190]
//   Label: LAB_0043b3c7
//   XREF to: Stack[-0x50] (READ)
// 0043b3ce: INC EDX
// 0043b3cf: MOV dword ptr [ESP + 0x190],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0043b3d6: CMP EDX,0x5
// 0043b3d9: JL 0x0043b38d
//   XREF to: 0043b38d (CONDITIONAL_JUMP)
// 0043b3db: MOV EBX,dword ptr [EDI + 0x104]
// 0043b3e1: XOR ECX,ECX
// 0043b3e3: TEST EBX,EBX
// 0043b3e5: JLE 0x0043b47c
//   XREF to: 0043b47c (CONDITIONAL_JUMP)
// 0043b3eb: LEA EAX,[EDI + 0x3ce6c]
// 0043b3f1: LEA EDX,[EDI + 0x3ce68]
// 0043b3f7: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0043b3fe: LEA EAX,[EDI + 0x56d8]
// 0043b404: XOR ESI,ESI
// 0043b406: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0043b40d: MOV EAX,dword ptr [EDI + 0x3fe3c]
//   Label: LAB_0043b40d
// 0043b413: IMUL EAX,dword ptr [ESI + EAX*0x1],0x11c
// 0043b41a: MOV EBX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x70] (READ)
// 0043b421: ADD EBX,EAX
// 0043b423: CMP dword ptr [EBX + 0xb8],0x0
// 0043b42a: JZ 0x0043b445
//   XREF to: 0043b445 (CONDITIONAL_JUMP)
// 0043b42c: LEA EAX,[EBX + 0x24]
// 0043b42f: FLD float ptr [EDX]
// 0043b431: FMUL float ptr [EAX]
// 0043b433: FSTP float ptr [EAX]
// 0043b435: FLD float ptr [EDX]
// 0043b437: FMUL float ptr [EAX + 0x4]
// 0043b43a: FSTP float ptr [EAX + 0x4]
// 0043b43d: FLD float ptr [EDX]
// 0043b43f: FMUL float ptr [EAX + 0x8]
// 0043b442: FSTP float ptr [EAX + 0x8]
// 0043b445: CMP dword ptr [EBX + 0xbc],0x0
//   Label: LAB_0043b445
// 0043b44c: JZ 0x0043b46e
//   XREF to: 0043b46e (CONDITIONAL_JUMP)
// 0043b44e: LEA EAX,[EBX + 0x24]
// 0043b451: MOV EBX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x60] (READ)
// 0043b458: FLD float ptr [EBX]
// 0043b45a: FMUL float ptr [EAX]
// 0043b45c: FSTP float ptr [EAX]
// 0043b45e: FLD float ptr [EBX]
// 0043b460: FMUL float ptr [EAX + 0x4]
// 0043b463: FSTP float ptr [EAX + 0x4]
// 0043b466: FLD float ptr [EBX]
// 0043b468: FMUL float ptr [EAX + 0x8]
// 0043b46b: FSTP float ptr [EAX + 0x8]
// 0043b46e: INC ECX
//   Label: LAB_0043b46e
// 0043b46f: MOV EBX,dword ptr [EDI + 0x104]
// 0043b475: ADD ESI,0x4
// 0043b478: CMP ECX,EBX
// 0043b47a: JL 0x0043b40d
//   XREF to: 0043b40d (CONDITIONAL_JUMP)
// 0043b47c: MOV ESI,dword ptr [EDI + 0x104]
//   Label: LAB_0043b47c
// 0043b482: XOR ECX,ECX
// 0043b484: TEST ESI,ESI
// 0043b486: JLE 0x0043b4d0
//   XREF to: 0043b4d0 (CONDITIONAL_JUMP)
// 0043b488: LEA ESI,[EDI + 0x56d8]
// 0043b48e: XOR EDX,EDX
// 0043b490: MOV EBX,dword ptr [EDI + 0x10c]
//   Label: LAB_0043b490
// 0043b496: MOV EAX,ESI
// 0043b498: ADD EBX,EDX
// 0043b49a: INC ECX
// 0043b49b: FLD float ptr [EAX]
// 0043b49d: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b4a3: FISTP dword ptr [EBX]
// 0043b4a5: FLD float ptr [EAX + 0x4]
// 0043b4a8: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b4ae: FISTP dword ptr [EBX + 0x4]
// 0043b4b1: FLD float ptr [EAX + 0x8]
// 0043b4b4: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043b4ba: FISTP dword ptr [EBX + 0x8]
// 0043b4bd: ADD ESI,0x11c
// 0043b4c3: MOV EBX,dword ptr [EDI + 0x104]
// 0043b4c9: ADD EDX,0xc
// 0043b4cc: CMP ECX,EBX
// 0043b4ce: JL 0x0043b490
//   XREF to: 0043b490 (CONDITIONAL_JUMP)
// 0043b4d0: MOV ESP,EBP
//   Label: LAB_0043b4d0
// 0043b4d2: POP EBP
// 0043b4d3: POP EDI
// 0043b4d4: POP ESI
// 0043b4d5: POP EBX
// 0043b4d6: RET
// 0043b4d7: MOV dword ptr [EBP + 0x24],0xc61c3c00
//   Label: LAB_0043b4d7
//   XREF to: Stack[0x14] (WRITE)
// 0043b4de: JMP 0x0043abd4
//   XREF to: 0043abd4 (UNCONDITIONAL_JUMP)
// 0043b4e3: XOR ECX,ECX
//   Label: LAB_0043b4e3
// 0043b4e5: MOV dword ptr [ESP + 0x154],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 0043b4ec: MOV dword ptr [ESP + 0x150],ECX
//   XREF to: Stack[-0x90] (WRITE)
// 0043b4f3: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 0043b4fa: JMP 0x0043af84
//   XREF to: 0043af84 (UNCONDITIONAL_JUMP)
// 0043b4ff: MOV EDX,dword ptr [ESP + 0x184]
//   Label: LAB_0043b4ff
//   XREF to: Stack[-0x5c] (READ)
// 0043b506: LEA EAX,[EBX + 0x24]
// 0043b509: FLD float ptr [EDX]
// 0043b50b: FMUL float ptr [EAX]
// 0043b50d: FSTP float ptr [EAX]
// 0043b50f: FLD float ptr [EDX]
// 0043b511: FMUL float ptr [EAX + 0x4]
// 0043b514: FSTP float ptr [EAX + 0x4]
// 0043b517: FLD float ptr [EDX]
// 0043b519: FMUL float ptr [EAX + 0x8]
// 0043b51c: FSTP float ptr [EAX + 0x8]
// 0043b51f: FLD float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 0043b526: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x108] (READ)
// 0043b52d: FMUL ST1
// 0043b52f: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x104] (READ)
// 0043b536: FMUL ST2
// 0043b538: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x100] (READ)
// 0043b53f: FMUL ST3
// 0043b541: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x54] (READ)
// 0043b548: FXCH ST2
// 0043b54a: FSTP float ptr [ESP + 0x120]
//   XREF to: Stack[-0xc0] (WRITE)
// 0043b551: FSTP float ptr [ESP + 0x124]
//   XREF to: Stack[-0xbc] (WRITE)
// 0043b558: FSTP float ptr [ESP + 0x128]
//   XREF to: Stack[-0xb8] (WRITE)
// 0043b55f: FLD float ptr [ESP + 0x120]
//   XREF to: Stack[-0xc0] (READ)
// 0043b566: FMUL float ptr [EAX]
// 0043b568: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0xbc] (READ)
// 0043b56f: FXCH
// 0043b571: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1b0] (WRITE)
// 0043b575: FMUL float ptr [EAX]
// 0043b577: FLD float ptr [ESP + 0x128]
//   XREF to: Stack[-0xb8] (READ)
// 0043b57e: FXCH
// 0043b580: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1ac] (WRITE)
// 0043b584: FMUL float ptr [EAX]
// 0043b586: LEA EAX,[EBX + 0xc]
// 0043b589: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x1a8] (WRITE)
// 0043b58d: FLD float ptr [EAX]
// 0043b58f: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1b0] (READ)
// 0043b593: FLD float ptr [EAX + 0x4]
// 0043b596: FXCH
// 0043b598: FSTP float ptr [EAX]
// 0043b59a: FSUB float ptr [ESP + 0x34]
//   XREF to: Stack[-0x1ac] (READ)
// 0043b59e: FLD float ptr [EAX + 0x8]
// 0043b5a1: FXCH
// 0043b5a3: FSTP float ptr [EAX + 0x4]
// 0043b5a6: FSUB float ptr [ESP + 0x38]
//   XREF to: Stack[-0x1a8] (READ)
// 0043b5aa: FLD float ptr [EAX]
// 0043b5ac: FXCH
// 0043b5ae: FSTP float ptr [EAX + 0x8]
// 0043b5b1: FADD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x144] (READ)
// 0043b5b8: FLD float ptr [EAX + 0x4]
// 0043b5bb: FXCH
// 0043b5bd: FSTP float ptr [EAX]
// 0043b5bf: FADD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x140] (READ)
// 0043b5c6: FLD float ptr [EAX + 0x8]
// 0043b5c9: FXCH
// 0043b5cb: FSTP float ptr [EAX + 0x4]
// 0043b5ce: FADD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x13c] (READ)
// 0043b5d5: FLD float ptr [ESP + 0x178]
//   XREF to: Stack[-0x68] (READ)
// 0043b5dc: FXCH
// 0043b5de: FSTP float ptr [EAX + 0x8]
// 0043b5e1: FMUL float ptr [EDI + 0x3ce74]
// 0043b5e7: FLD1
// 0043b5e9: FDIVRP ST2,ST0
// 0043b5eb: FSTP float ptr [ESP + 0x164]
//   XREF to: Stack[-0x7c] (WRITE)
// 0043b5f2: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x1a4] (WRITE)
// 0043b5f6: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x7c] (READ)
// 0043b5fd: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x19c] (WRITE)
// 0043b601: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x1a0] (WRITE)
// 0043b605: FLDZ
// 0043b607: FMUL float ptr [EBX + 0x4]
// 0043b60a: FLD float ptr [EBX + 0x8]
// 0043b60d: FMUL float ptr [ESP + 0x164]
//   XREF to: Stack[-0x7c] (READ)
// 0043b614: FSUBP
// 0043b616: FLDZ
// 0043b618: FXCH
// 0043b61a: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (WRITE)
// 0043b621: FMUL float ptr [EBX + 0x8]
// 0043b624: FLDZ
// 0043b626: FMUL float ptr [EBX]
// 0043b628: FSUBP
// 0043b62a: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (WRITE)
// 0043b631: FLD float ptr [EBX]
// 0043b633: FMUL float ptr [ESP + 0x164]
//   XREF to: Stack[-0x7c] (READ)
// 0043b63a: FLDZ
// 0043b63c: FMUL float ptr [EBX + 0x4]
// 0043b63f: FSUBP
// 0043b641: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (WRITE)
// 0043b648: FLD float ptr [EAX + 0x4]
// 0043b64b: FLD float ptr [EAX]
// 0043b64d: FADD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (READ)
// 0043b654: FLD float ptr [EAX + 0x8]
// 0043b657: FXCH
// 0043b659: FSTP float ptr [EAX]
// 0043b65b: FXCH
// 0043b65d: FADD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (READ)
// 0043b664: FLD float ptr [EAX]
// 0043b666: FXCH
// 0043b668: FSTP float ptr [EAX + 0x4]
// 0043b66b: FXCH
// 0043b66d: FADD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (READ)
// 0043b674: FXCH
// 0043b676: FMUL ST2
// 0043b678: FXCH
// 0043b67a: FSTP float ptr [EAX + 0x8]
// 0043b67d: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x12c] (WRITE)
// 0043b684: FLD float ptr [EAX + 0x4]
// 0043b687: FMUL ST1
// 0043b689: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x128] (WRITE)
// 0043b690: FMUL float ptr [EAX + 0x8]
// 0043b693: LEA ESI,[EBX + 0x18]
// 0043b696: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x12c] (DATA)
// 0043b69d: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x124] (WRITE)
// 0043b6a4: CMP ESI,EAX
// 0043b6a6: JZ 0x0043b6c5
//   XREF to: 0043b6c5 (CONDITIONAL_JUMP)
// 0043b6a8: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x12c] (DATA)
// 0043b6af: MOV dword ptr [ESI],EAX
// 0043b6b1: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x128] (READ)
// 0043b6b8: MOV dword ptr [ESI + 0x4],EAX
// 0043b6bb: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x124] (READ)
// 0043b6c2: MOV dword ptr [ESI + 0x8],EAX
// 0043b6c5: LEA EAX,[EBX + 0x18]
//   Label: LAB_0043b6c5
// 0043b6c8: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0043b6cb: FLD float ptr [EAX]
// 0043b6cd: FMUL ST1
// 0043b6cf: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0xfc] (WRITE)
// 0043b6d6: FLD float ptr [EAX + 0x4]
// 0043b6d9: FMUL ST1
// 0043b6db: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (WRITE)
// 0043b6e2: FLD float ptr [EAX + 0x8]
// 0043b6e5: FMUL ST1
// 0043b6e7: LEA EAX,[EBX + 0x24]
// 0043b6ea: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (WRITE)
// 0043b6f1: FLD float ptr [EAX + 0x4]
// 0043b6f4: FLD float ptr [EAX]
// 0043b6f6: FADD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0xfc] (READ)
// 0043b6fd: FLD float ptr [EAX + 0x8]
// 0043b700: FXCH
// 0043b702: FSTP float ptr [EAX]
// 0043b704: FXCH
// 0043b706: FADD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (READ)
// 0043b70d: FLD float ptr [EAX]
// 0043b70f: FXCH
// 0043b711: FSTP float ptr [EAX + 0x4]
// 0043b714: FXCH
// 0043b716: FADD float ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (READ)
// 0043b71d: FXCH
// 0043b71f: FMUL ST2
// 0043b721: FXCH
// 0043b723: FSTP float ptr [EAX + 0x8]
// 0043b726: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x120] (WRITE)
// 0043b72d: FLD float ptr [EAX + 0x4]
// 0043b730: FMUL ST1
// 0043b732: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x11c] (WRITE)
// 0043b739: FMUL float ptr [EAX + 0x8]
// 0043b73c: PUSH EBX
// 0043b73d: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x118] (WRITE)
// 0043b744: FLD float ptr [EBX]
// 0043b746: FADD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x120] (READ)
// 0043b74d: FLD float ptr [EBX + 0x4]
// 0043b750: FXCH
// 0043b752: FSTP float ptr [EBX]
// 0043b754: FADD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x11c] (READ)
// 0043b75b: FLD float ptr [EBX + 0x8]
// 0043b75e: FXCH
// 0043b760: FSTP float ptr [EBX + 0x4]
// 0043b763: FADD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x118] (READ)
// 0043b76a: PUSH EDI
// 0043b76b: FSTP float ptr [EBX + 0x8]
// 0043b76e: CALL core_cloth.cpp_FUN_0043a420
//   XREF to: 0043a420 (UNCONDITIONAL_CALL)
// 0043b773: ADD ESP,0x8
// 0043b776: JMP 0x0043b34d
//   XREF to: 0043b34d (UNCONDITIONAL_JUMP)
// 0043b77b: PUSH EAX
//   Label: LAB_0043b77b
// 0043b77c: PUSH EDI
// 0043b77d: CALL core_cloth.cpp_FUN_0043a420
//   XREF to: 0043a420 (UNCONDITIONAL_CALL)
// 0043b782: ADD ESP,0x8
// 0043b785: JMP 0x0043b3b9
//   XREF to: 0043b3b9 (UNCONDITIONAL_JUMP)
