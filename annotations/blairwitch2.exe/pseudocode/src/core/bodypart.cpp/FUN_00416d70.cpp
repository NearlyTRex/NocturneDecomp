// Name: core_bodypart.cpp_FUN_00416d70
// Address: 00416d70
// Address Range: [[00416d70, 00417265]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00416d70(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_FUN_00416d70(CBodyPart *this_ptr,CVector3f *euler_angles)

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
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  int aiStackY_10a0 [933];
  byte local_1a0 [48];
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
  uint local_b8;
  int aiStack_b4 [4];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
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
  
  bVar13 = 0;
  core_dirmat_cpp_FUN_00449280((CMatrix3x3f *)&local_e0,euler_angles);
  fVar14 = (float10)local_e0 * (float10)_DAT_005cbf6a;
  fVar15 = (float10)local_dc * (float10)_DAT_005cbf6a;
  fVar16 = (float10)local_d8 * (float10)_DAT_005cbf6a;
  fVar17 = (float10)local_d4 * (float10)_DAT_005cbf6a;
  fVar18 = (float10)local_d0 * (float10)_DAT_005cbf6a;
  fVar19 = (float10)local_cc * (float10)_DAT_005cbf6a;
  fVar20 = (float10)local_c8 * (float10)_DAT_005cbf6a;
  round();
  local_30 = (int)ROUND(fVar14);
  fVar14 = (float10)local_c4 * (float10)_DAT_005cbf6a;
  round();
  local_3c = (int)ROUND(fVar15);
  fVar15 = (float10)local_c0 * (float10)_DAT_005cbf6a;
  iVar11 = 0;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  local_38 = (int)ROUND(fVar16);
  local_34 = (int)ROUND(fVar17);
  local_24 = (int)ROUND(fVar18);
  local_20 = (int)ROUND(fVar19);
  local_2c = (int)ROUND(fVar20);
  local_28 = (int)ROUND(fVar14);
  local_1c = (int)ROUND(fVar15);
  if (0 < extraout_ECX) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)&this_ptr->field_0x2d4;
      lVar2 = (longlong)local_30 * (longlong)*(int *)(iVar1 + iVar10);
      lVar3 = (longlong)local_34 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar4 = (longlong)local_2c * (longlong)*(int *)(iVar1 + 8 + iVar10);
      lVar5 = (longlong)local_3c * (longlong)*(int *)(iVar1 + iVar10);
      lVar6 = (longlong)local_24 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar7 = (longlong)local_28 * (longlong)*(int *)(iVar1 + 8 + iVar10);
      local_40 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)local_38 * (longlong)*(int *)(iVar1 + iVar10);
      lVar6 = (longlong)local_20 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar7 = (longlong)local_1c * (longlong)*(int *)(iVar1 + 8 + iVar10);
      *(uint *)(iVar1 + iVar10) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)(iVar1 + 8 + iVar10) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar10) = local_40;
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar11 < *(int *)&this_ptr->field_0x2d0);
  }
  euler_angles_00 = &this_ptr->field_0x30;
  core_xform_cpp_FUN_00591ad0(local_140,(CVector3f *)&DAT_0265370c,(CVector3f *)euler_angles_00);
  core_xform_cpp_FUN_00591ad0(local_170,(CVector3f *)&DAT_0265370c,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_140,local_170);
  puVar9 = local_110;
  puVar12 = (uint *)&stack0xfffffe30;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
    puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
  }
  core_xform_cpp_FUN_00592280(&stack0xfffffe30);
  local_70._0_4_ = local_94._0_4_;
  *(uint *)((int)&local_70 + (uint)bVar13 * -8 + 4) =
       *(uint *)((int)&local_94 + (uint)bVar13 * -8 + 4);
  *(uint *)((int)&local_70 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
       *(uint *)((int)&local_94 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
  if ((CVector3f *)euler_angles_00 != &local_70) {
    *(uint *)euler_angles_00 = local_70._0_4_;
    *(uint *)&this_ptr->field_0x34 = local_70._4_4_;
    *(uint *)&this_ptr->field_0x38 = local_70._8_4_;
  }
  iVar11 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  if (0 < *(int *)&this_ptr->field_0x8a8) {
    piVar8 = (int *)&this_ptr->field_0x8ac;
    do {
      local_18 = piVar8;
      core_dirmat_cpp_FUN_004495a0(&local_e0,piVar8);
      local_a0 = aiStack_60[2];
      aiStack_b4[(uint)bVar13 * -2 + 6] = aiStack_60[(uint)bVar13 * -2 + 3];
      aiStack_b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           aiStack_60[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      if (piVar8 != aiStack_b4 + 5) {
        *piVar8 = local_a0;
        piVar8[1] = local_9c;
        piVar8[2] = local_98;
      }
      core_actor_cpp_FUN_00408d70(this_ptr,local_18);
      local_84[2] = local_64;
      local_84[(uint)bVar13 * -2 + 3] = aiStack_60[(uint)bVar13 * -2];
      local_84[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           aiStack_60[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      local_18[0xb] = local_84[2];
      local_18[0xc] = local_84[3];
      local_18[0xd] = local_74;
      iVar11 = iVar11 + 1;
      piVar8 = piVar8 + 0x103;
    } while (iVar11 < *(int *)&this_ptr->field_0x8a8);
  }
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x3e8) {
    puVar9 = (uint *)&this_ptr->field_0x3ec;
    do {
      core_dirmat_cpp_FUN_004495a0(&local_e0,puVar9);
      local_88 = local_4c;
      local_84[(uint)bVar13 * -2] = aiStack_60[(uint)bVar13 * -2 + 6];
      local_84[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           aiStack_60[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      if (puVar9 != &local_88) {
        *puVar9 = local_88;
        puVar9[1] = local_84[0];
        puVar9[2] = local_84[1];
      }
      piVar8 = puVar9 + 3;
      core_xform_cpp_FUN_00591c10(local_1a0,&DAT_0265370c,piVar8);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1a0,local_170);
      core_xform_cpp_FUN_00591de0(local_170);
      aiStack_b4[2] = local_b8;
      aiStack_b4[(uint)bVar13 * -2 + 3] = aiStack_b4[(uint)bVar13 * -2];
      aiStack_b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           aiStack_b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      if (piVar8 != aiStack_b4 + 2) {
        *piVar8 = aiStack_b4[2];
        puVar9[4] = aiStack_b4[3];
        puVar9[5] = local_a4;
      }
      puVar9 = puVar9 + 0x65;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)&this_ptr->field_0x3e8);
  }
  return;
}
