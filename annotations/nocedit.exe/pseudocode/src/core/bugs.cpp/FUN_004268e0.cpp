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
  float fVar4;
  int *piVar5;
  CVector3f *pCVar6;
  CDeformableModel *pCVar7;
  ushort *puVar8;
  int iVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  float local_114;
  CMatrix3x3f local_fc;
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
  CVector3f CStack_a4;
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
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_44;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_18;
  int iStack_14;
  
  local_114 = in_stack_0000000c;
  if (*(int *)(in_stack_00000008 + 0x2c) < 0) {
    piVar5 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    *(int *)(in_stack_00000008 + 0x30) * 0xc);
    local_68.x = (float)*piVar5 * _DAT_0065b5b8;
    local_68.y = (float)piVar5[1] * _DAT_0065b5b8;
    local_68.z = (float)piVar5[2] * _DAT_0065b5b8;
    core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
              (&local_68,(CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    iVar9 = core_bugs_cpp_FUN_00426420();
    if (iVar9 != 0) {
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
      fVar4 = _DAT_0065b5cc / *(float *)(in_stack_00000008 + 0x38);
      iVar9 = 0;
      while( true ) {
        fVar2 = *(float *)(in_stack_00000008 + 0x34);
        fVar3 = local_114 * fVar4 + fVar2;
        *(float *)(in_stack_00000008 + 0x34) = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_FUN_004270f0();
        local_114 = local_114 - (1.0 - fVar2) / fVar4;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + -1f
        ;
        if ((local_114 < (float)0.001) || (iVar9 = iVar9 + 1, 2 < iVar9)) break;
      }
      if (*(float *)(in_stack_00000008 + 0x34) < 0.0) {
        *(uint *)(in_stack_00000008 + 0x34) = 0;
      }
      if (1.0 < *(float *)(in_stack_00000008 + 0x34)) {
        *(uint *)(in_stack_00000008 + 0x34) = 0x3f800000;
      }
    }
    piVar5 = (int *)(*(int *)(in_stack_00000008 + 0x2c) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_80 = (float)*piVar5 * _DAT_0065b5b8;
    local_7c = (float)piVar5[1] * _DAT_0065b5b8;
    local_78 = (float)piVar5[2] * _DAT_0065b5b8;
    piVar5 = (int *)(*(int *)(in_stack_00000008 + 0x30) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_2c = (float)*piVar5 * _DAT_0065b5b8;
    local_28 = (float)piVar5[1] * _DAT_0065b5b8;
    fStack_24 = (float)piVar5[2] * _DAT_0065b5b8;
    pfVar1 = (float *)(in_stack_00000008 + 0x34);
    local_b0 = local_2c * *pfVar1;
    local_ac = local_28 * *pfVar1;
    local_a8 = fStack_24 * *pfVar1;
    local_18 = 1.0 - *(float *)(in_stack_00000008 + 0x34);
    local_74 = local_80 * local_18;
    local_70 = local_7c * local_18;
    local_6c = local_78 * local_18;
    local_38.x = local_74 + local_b0;
    local_38.y = local_70 + local_ac;
    local_38.z = local_6c + local_a8;
    pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_a4,&local_38,(CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    if ((CVector3f *)(in_stack_00000008 + 8) != pCVar6) {
      ((CVector3f *)(in_stack_00000008 + 8))->x = pCVar6->x;
      *(float *)(in_stack_00000008 + 0xc) = pCVar6->y;
      *(float *)(in_stack_00000008 + 0x10) = pCVar6->z;
    }
    local_d4 = local_2c - local_80;
    local_d0 = local_28 - local_7c;
    local_cc = fStack_24 - local_78;
    iVar9 = *(int *)(in_stack_00000004 + 0x12b3c + *(int *)(in_stack_00000008 + 0x2c) * 0x28);
    iStack_14 = *(int *)(in_stack_00000004 + 0x12b30) << 2;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc));
    puVar8 = (ushort *)(*(int *)((int)pCVar7->tri_data_ptr + iStack_14) + iVar9 * 0x12);
    piVar5 = (int *)((uint)*puVar8 * 0xc + *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234))
    ;
    local_80 = (float)*piVar5 * _DAT_0065b5b8;
    local_7c = (float)piVar5[1] * _DAT_0065b5b8;
    local_78 = (float)piVar5[2] * _DAT_0065b5b8;
    piVar5 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    (uint)puVar8[1] * 0xc);
    local_2c = (float)*piVar5 * _DAT_0065b5b8;
    local_28 = (float)piVar5[1] * _DAT_0065b5b8;
    fStack_24 = (float)piVar5[2] * _DAT_0065b5b8;
    piVar5 = (int *)((uint)puVar8[2] * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_5c = (float)*piVar5 * _DAT_0065b5b8;
    local_58 = (float)piVar5[1] * _DAT_0065b5b8;
    local_54 = (float)piVar5[2] * _DAT_0065b5b8;
    local_4c = local_28 - local_7c;
    local_90 = local_54 - fStack_24;
    local_48 = fStack_24 - local_78;
    local_98 = local_5c - local_2c;
    local_50 = local_2c - local_80;
    local_94 = local_58 - local_28;
    local_b8 = local_48 * local_98 - local_50 * local_90;
    local_b4 = local_50 * local_94 - local_4c * local_98;
    local_bc = local_4c * local_90 - local_48 * local_94;
    local_84 = local_bc * local_d0 - local_b8 * local_d4;
    local_8c = local_b8 * local_cc - local_b4 * local_d0;
    local_88 = local_b4 * local_d4 - local_bc * local_cc;
    local_c8 = local_d0 * local_84 - local_cc * local_88;
    local_c4 = local_cc * local_8c - local_d4 * local_84;
    local_c0 = local_d4 * local_88 - local_d0 * local_8c;
    if (&local_bc != &local_c8) {
      local_bc = local_c8;
      local_b8 = local_c4;
      local_b4 = local_c0;
    }
    fVar4 = SQRT(local_b4 * local_b4 + local_bc * local_bc + local_b8 * local_b8);
    if (fVar4 <= 0.0) {
      local_b8 = 0.0;
      local_bc = 0.0;
      local_b4 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_bc = local_bc * fVar4;
      local_b8 = local_b8 * fVar4;
      local_b4 = local_b4 * fVar4;
    }
    fVar4 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88);
    if (fVar4 <= 0.0) {
      local_88 = 0.0;
      local_8c = 0.0;
      local_84 = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_8c = local_8c * fVar4;
      local_88 = local_88 * fVar4;
      local_84 = local_84 * fVar4;
    }
    fVar4 = SQRT(local_cc * local_cc + local_d4 * local_d4 + local_d0 * local_d0);
    if (fVar4 <= 0.0) {
      local_d0 = 0.0;
      local_d4 = 0.0;
      local_cc = 0.0;
    }
    else {
      fVar4 = 1.0 / fVar4;
      local_d4 = local_d4 * fVar4;
      local_d0 = local_d0 * fVar4;
      local_cc = local_cc * fVar4;
    }
    local_fc.m[0].x = local_8c;
    local_fc.m[0].y = local_bc;
    local_fc.m[0].z = local_d4;
    local_fc.m[1].x = local_88;
    local_fc.m[1].y = local_b8;
    local_fc.m[1].z = local_d0;
    local_fc.m[2].x = local_84;
    local_fc.m[2].y = local_b4;
    local_fc.m[2].z = local_cc;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&local_fc,&CStack_44);
    if ((CVector3f *)(in_stack_00000008 + 0x14) != pCVar6) {
      ((CVector3f *)(in_stack_00000008 + 0x14))->x = pCVar6->x;
      *(float *)(in_stack_00000008 + 0x18) = pCVar6->y;
      *(float *)(in_stack_00000008 + 0x1c) = pCVar6->z;
      return;
    }
  }
  return;
}
