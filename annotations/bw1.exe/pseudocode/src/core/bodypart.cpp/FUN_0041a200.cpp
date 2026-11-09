// Name: core_bodypart.cpp_FUN_0041a200
// Address: 0041a200
// Address Range: [[0041a200, 0041a6f5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_0041a200(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_0041a200(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int extraout_ECX;
  byte *euler_angles_00;
  uint *puVar8;
  CVector3f *euler_angles_01;
  int iVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  int aiStackY_10a0 [933];
  CMatrix3x4f local_1a0 [48];
  CMatrix3x4f local_170 [48];
  CMatrix3x4f local_140 [48];
  uint local_110 [12];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  CVector3f local_b8;
  CVector3f local_ac;
  uint local_a0;
  int local_9c [2];
  CVector3f local_94;
  uint local_88;
  int local_84 [4];
  uint local_74;
  CVector3f local_70;
  uint local_64;
  int aiStack_60 [5];
  uint local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  int local_14;
  
  bVar12 = 0;
  core_dirmat_cpp_FUN_0045f3e0((CMatrix3x3f *)&local_e0,euler_angles);
  fVar13 = (float10)local_e0 * (float10)_DAT_005d44e1;
  fVar14 = (float10)local_dc * (float10)_DAT_005d44e1;
  fVar15 = (float10)local_d8 * (float10)_DAT_005d44e1;
  fVar16 = (float10)local_d4 * (float10)_DAT_005d44e1;
  fVar17 = (float10)local_d0 * (float10)_DAT_005d44e1;
  fVar18 = (float10)local_cc * (float10)_DAT_005d44e1;
  fVar19 = (float10)local_c8 * (float10)_DAT_005d44e1;
  round();
  local_30 = (int)ROUND(fVar13);
  fVar13 = (float10)local_c4 * (float10)_DAT_005d44e1;
  round();
  local_3c = (int)ROUND(fVar14);
  fVar14 = (float10)local_c0 * (float10)_DAT_005d44e1;
  iVar10 = 0;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  local_38 = (int)ROUND(fVar15);
  local_34 = (int)ROUND(fVar16);
  local_24 = (int)ROUND(fVar17);
  local_20 = (int)ROUND(fVar18);
  local_2c = (int)ROUND(fVar19);
  local_28 = (int)ROUND(fVar13);
  local_1c = (int)ROUND(fVar14);
  if (0 < extraout_ECX) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)&this_ptr->field_0x178;
      lVar2 = (longlong)local_30 * (longlong)*(int *)(iVar1 + iVar9);
      lVar3 = (longlong)local_34 * (longlong)*(int *)(iVar1 + 4 + iVar9);
      lVar4 = (longlong)local_2c * (longlong)*(int *)(iVar1 + 8 + iVar9);
      lVar5 = (longlong)local_3c * (longlong)*(int *)(iVar1 + iVar9);
      lVar6 = (longlong)local_24 * (longlong)*(int *)(iVar1 + 4 + iVar9);
      lVar7 = (longlong)local_28 * (longlong)*(int *)(iVar1 + 8 + iVar9);
      local_40 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)local_38 * (longlong)*(int *)(iVar1 + iVar9);
      lVar6 = (longlong)local_20 * (longlong)*(int *)(iVar1 + 4 + iVar9);
      lVar7 = (longlong)local_1c * (longlong)*(int *)(iVar1 + 8 + iVar9);
      *(uint *)(iVar1 + iVar9) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)(iVar1 + 8 + iVar9) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar9) = local_40;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar10 < *(int *)&this_ptr->field_0x174);
  }
  euler_angles_00 = &this_ptr->field_0x30;
  core_xform_cpp_FUN_005b5620(local_140,(CVector3f *)&DAT_02c8af28,(CVector3f *)euler_angles_00);
  core_xform_cpp_FUN_005b5620(local_170,(CVector3f *)&DAT_02c8af28,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_140,local_170);
  puVar8 = local_110;
  puVar11 = (uint *)&stack0xfffffe30;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  core_xform_cpp_FUN_005b5dd0(&stack0xfffffe30);
  local_70._0_4_ = local_94._0_4_;
  *(uint *)((int)&local_70 + (uint)bVar12 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar12 * -8 + 4);
  *(uint *)((int)&local_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
       *(uint *)((int)&local_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
  if ((CVector3f *)euler_angles_00 != &local_70) {
    *(uint *)euler_angles_00 = local_70._0_4_;
    *(uint *)&this_ptr->field_0x34 = local_70._4_4_;
    *(uint *)&this_ptr->field_0x38 = local_70._8_4_;
  }
  iVar10 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  if (0 < *(int *)&this_ptr->field_0x74c) {
    puVar8 = (uint *)&this_ptr->field_0x750;
    do {
      local_18 = puVar8;
      core_dirmat_cpp_FUN_0045f700(&local_e0,puVar8);
      local_a0 = aiStack_60[2];
      local_9c[(uint)bVar12 * -2] = aiStack_60[(uint)bVar12 * -2 + 3];
      local_9c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           aiStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      if (puVar8 != &local_a0) {
        *puVar8 = local_a0;
        puVar8[1] = local_9c[0];
        puVar8[2] = local_9c[1];
      }
      core_actor_cpp_FUN_00408b40(this_ptr,local_18);
      local_84[2] = local_64;
      local_84[(uint)bVar12 * -2 + 3] = aiStack_60[(uint)bVar12 * -2];
      local_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           aiStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      local_18[0xb] = local_84[2];
      local_18[0xc] = local_84[3];
      local_18[0xd] = local_74;
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 0xac;
    } while (iVar10 < *(int *)&this_ptr->field_0x74c);
  }
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x28c) {
    puVar8 = (uint *)&this_ptr->field_0x290;
    do {
      core_dirmat_cpp_FUN_0045f700(&local_e0,puVar8);
      local_88 = local_4c;
      local_84[(uint)bVar12 * -2] = aiStack_60[(uint)bVar12 * -2 + 6];
      local_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           aiStack_60[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      if (puVar8 != &local_88) {
        *puVar8 = local_88;
        puVar8[1] = local_84[0];
        puVar8[2] = local_84[1];
      }
      euler_angles_01 = (CVector3f *)(puVar8 + 3);
      core_xform_cpp_FUN_005b5760(local_1a0,(CVector3f *)&DAT_02c8af28,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_1a0,local_170);
      core_xform_cpp_FUN_005b5930(local_170);
      local_ac._0_4_ = local_b8._0_4_;
      *(uint *)((int)&local_ac + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)&local_b8 + (uint)bVar12 * -8 + 4);
      *(uint *)((int)&local_ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           *(uint *)((int)&local_b8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
      if (euler_angles_01 != &local_ac) {
        *(uint *)euler_angles_01 = local_ac._0_4_;
        puVar8[4] = local_ac._4_4_;
        puVar8[5] = local_ac._8_4_;
      }
      puVar8 = puVar8 + 0x65;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)&this_ptr->field_0x28c);
  }
  return;
}
