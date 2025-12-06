// Name: core_bugs.cpp_FUN_004268e0
// Address: 004268e0
// Address Range: [[004268e0, 004270ee]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004268e0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_004268e0(uint param_1, uint param_2,
   uint param_3) */

void core_bugs_cpp_FUN_004268e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  CVector3f *pCVar5;
  CDeformableModel *pCVar6;
  ushort *puVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_fffffeec;
  float local_10c;
  CMatrix3x3f local_f4;
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
  CVector3f CStack_a4;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c [2];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  byte local_3c [8];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(in_stack_00000008 + 0x2c) < 0) {
    piVar4 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    *(int *)(in_stack_00000008 + 0x30) * 0xc);
    local_6c[0].x = (float)*piVar4 * _DAT_0065b5b8;
    local_6c[0].y = (float)piVar4[1] * _DAT_0065b5b8;
    local_6c[0].z = (float)piVar4[2] * _DAT_0065b5b8;
    core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
              (local_6c,(CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    iVar8 = core_bugs_cpp_FUN_00426420();
    if (iVar8 != 0) {
      core_bugs_cpp_FUN_004270f0();
      *(uint *)(in_stack_00000008 + 0x34) = 0;
      return;
    }
  }
  else {
    if (*(float *)(in_stack_00000008 + 0x38) <= 0.0) {
      core_bugs_cpp_FUN_004270f0();
      *(uint *)(in_stack_00000008 + 0x34) = 0;
    }
    else {
      iVar8 = 0;
      while( true ) {
        fVar2 = *(float *)(in_stack_00000008 + 0x34);
        fVar3 = in_stack_fffffeec * local_10c + fVar2;
        *(float *)(in_stack_00000008 + 0x34) = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_FUN_004270f0();
        in_stack_fffffeec = in_stack_fffffeec - (1.0 - fVar2) / local_10c;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + -1f
        ;
        if ((in_stack_fffffeec < (float)0.001) || (iVar8 = iVar8 + 1, 2 < iVar8)) break;
      }
      if (*(float *)(in_stack_00000008 + 0x34) < 0.0) {
        *(uint *)(in_stack_00000008 + 0x34) = 0;
      }
      if (1.0 < *(float *)(in_stack_00000008 + 0x34)) {
        *(uint *)(in_stack_00000008 + 0x34) = 0x3f800000;
      }
    }
    piVar4 = (int *)(*(int *)(in_stack_00000008 + 0x2c) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_80 = (float)*piVar4 * _DAT_0065b5b8;
    local_7c = (float)piVar4[1] * _DAT_0065b5b8;
    local_78 = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)(*(int *)(in_stack_00000008 + 0x30) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_2c = (float)*piVar4 * _DAT_0065b5b8;
    local_28 = (float)piVar4[1] * _DAT_0065b5b8;
    fStack_24 = (float)piVar4[2] * _DAT_0065b5b8;
    pfVar1 = (float *)(in_stack_00000008 + 0x34);
    local_b0 = local_2c * *pfVar1;
    local_ac = local_28 * *pfVar1;
    local_a8 = fStack_24 * *pfVar1;
    local_18 = 1.0 - *(float *)(in_stack_00000008 + 0x34);
    local_74 = local_80 * local_18;
    local_70 = local_7c * local_18;
    local_6c[0].x = local_78 * local_18;
    local_3c._4_4_ = local_74 + local_b0;
    local_34 = local_70 + local_ac;
    local_30 = local_6c[0].x + local_a8;
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_a4,(CVector3f *)(local_3c + 4),
                        (CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    if ((CVector3f *)(in_stack_00000008 + 8) != pCVar5) {
      ((CVector3f *)(in_stack_00000008 + 8))->x = pCVar5->x;
      *(float *)(in_stack_00000008 + 0xc) = pCVar5->y;
      *(float *)(in_stack_00000008 + 0x10) = pCVar5->z;
    }
    local_d0 = local_28 - local_7c;
    local_cc = fStack_24 - local_78;
    local_c8 = fStack_20 - local_74;
    iVar8 = *(int *)(in_stack_00000004 + 0x12b3c + *(int *)(in_stack_00000008 + 0x2c) * 0x28);
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc));
    puVar7 = (ushort *)(*(int *)((int)pCVar6->tri_data_ptr + unaff_EDI) + iVar8 * 0x12);
    piVar4 = (int *)((uint)*puVar7 * 0xc + *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234))
    ;
    local_78 = (float)*piVar4 * _DAT_0065b5b8;
    local_74 = (float)piVar4[1] * _DAT_0065b5b8;
    local_70 = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    (uint)puVar7[1] * 0xc);
    fStack_24 = (float)*piVar4 * _DAT_0065b5b8;
    fStack_20 = (float)piVar4[1] * _DAT_0065b5b8;
    local_1c = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)((uint)puVar7[2] * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_54 = (float)*piVar4 * _DAT_0065b5b8;
    local_50 = (float)piVar4[1] * _DAT_0065b5b8;
    local_4c = (float)piVar4[2] * _DAT_0065b5b8;
    fStack_44 = fStack_20 - local_74;
    local_88 = local_4c - local_1c;
    fStack_40 = local_1c - local_70;
    local_90 = local_54 - fStack_24;
    local_48 = fStack_24 - local_78;
    local_8c = local_50 - fStack_20;
    local_b0 = fStack_40 * local_90 - local_48 * local_88;
    local_ac = local_48 * local_8c - fStack_44 * local_90;
    local_b4 = fStack_44 * local_88 - fStack_40 * local_8c;
    local_7c = local_b4 * local_c8 - local_b0 * local_cc;
    local_84 = local_b0 * local_c4 - local_ac * local_c8;
    local_80 = local_ac * local_cc - local_b4 * local_c4;
    local_c0 = local_c8 * local_7c - local_c4 * local_80;
    local_bc = local_c4 * local_84 - local_cc * local_7c;
    local_b8 = local_cc * local_80 - local_c8 * local_84;
    if (&local_b4 != &local_c0) {
      local_b4 = local_c0;
      local_b0 = local_bc;
      local_ac = local_b8;
    }
    fVar2 = SQRT(local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0);
    if (fVar2 <= 0.0) {
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_ac = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_b4 = local_b4 * fVar2;
      local_b0 = local_b0 * fVar2;
      local_ac = local_ac * fVar2;
    }
    fVar2 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if (fVar2 <= 0.0) {
      local_80 = 0.0;
      local_84 = 0.0;
      local_7c = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_84 = local_84 * fVar2;
      local_80 = local_80 * fVar2;
      local_7c = local_7c * fVar2;
    }
    fVar2 = SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if (fVar2 <= 0.0) {
      local_c8 = 0.0;
      local_cc = 0.0;
      local_c4 = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_cc = local_cc * fVar2;
      local_c8 = local_c8 * fVar2;
      local_c4 = local_c4 * fVar2;
    }
    local_f4.m[0].x = local_84;
    local_f4.m[0].y = local_b4;
    local_f4.m[0].z = local_cc;
    local_f4.m[1].x = local_80;
    local_f4.m[1].y = local_b0;
    local_f4.m[1].z = local_c8;
    local_f4.m[2].x = local_7c;
    local_f4.m[2].y = local_ac;
    local_f4.m[2].z = local_c4;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                       (&local_f4,(CVector3f *)local_3c);
    if ((CVector3f *)(in_stack_00000008 + 0x14) != pCVar5) {
      ((CVector3f *)(in_stack_00000008 + 0x14))->x = pCVar5->x;
      *(float *)(in_stack_00000008 + 0x18) = pCVar5->y;
      *(float *)(in_stack_00000008 + 0x1c) = pCVar5->z;
      return;
    }
  }
  return;
}
