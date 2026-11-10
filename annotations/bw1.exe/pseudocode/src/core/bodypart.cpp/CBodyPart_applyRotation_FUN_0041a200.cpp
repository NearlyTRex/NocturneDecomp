// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200
// Address: 0041a200
// Address Range: [[0041a200, 0041a6f5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a200(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a200(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  CVector3i *pCVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int extraout_ECX;
  UOrientationVector *euler_angles_00;
  SBodyPartFire *pSVar8;
  SBodyPartModel *pSVar9;
  byte *euler_angles_01;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float afStackY_10a0 [933];
  CMatrix3x4f local_1a0;
  CMatrix3x4f local_170;
  CMatrix3x4f local_140;
  uint local_110 [12];
  CMatrix3x3f local_e0;
  float local_b8;
  float afStack_b4 [2];
  CVector3f local_ac;
  uint local_a0;
  float local_9c [5];
  float local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  CVector3f local_70;
  uint local_64;
  float afStack_60 [5];
  float local_4c;
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
  SBodyPartFire *local_18;
  int local_14;
  
  bVar14 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_e0,euler_angles);
  fVar15 = (float10)local_e0.m[0].x * (float10)_DAT_005d44e1;
  fVar16 = (float10)local_e0.m[0].y * (float10)_DAT_005d44e1;
  fVar17 = (float10)local_e0.m[0].z * (float10)_DAT_005d44e1;
  fVar18 = (float10)local_e0.m[1].x * (float10)_DAT_005d44e1;
  fVar19 = (float10)local_e0.m[1].y * (float10)_DAT_005d44e1;
  fVar20 = (float10)local_e0.m[1].z * (float10)_DAT_005d44e1;
  fVar21 = (float10)local_e0.m[2].x * (float10)_DAT_005d44e1;
  round();
  local_30 = (int)ROUND(fVar15);
  fVar15 = (float10)local_e0.m[2].y * (float10)_DAT_005d44e1;
  round();
  local_3c = (int)ROUND(fVar16);
  fVar16 = (float10)local_e0.m[2].z * (float10)_DAT_005d44e1;
  iVar12 = 0;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  local_38 = (int)ROUND(fVar17);
  local_34 = (int)ROUND(fVar18);
  local_24 = (int)ROUND(fVar19);
  local_20 = (int)ROUND(fVar20);
  local_2c = (int)ROUND(fVar21);
  local_28 = (int)ROUND(fVar15);
  local_1c = (int)ROUND(fVar16);
  if (0 < extraout_ECX) {
    iVar10 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)local_30 * (longlong)*(int *)((int)&pCVar1->x + iVar10);
      lVar3 = (longlong)local_34 * (longlong)*(int *)((int)&pCVar1->y + iVar10);
      lVar4 = (longlong)local_2c * (longlong)*(int *)((int)&pCVar1->z + iVar10);
      lVar5 = (longlong)local_3c * (longlong)*(int *)((int)&pCVar1->x + iVar10);
      lVar6 = (longlong)local_24 * (longlong)*(int *)((int)&pCVar1->y + iVar10);
      lVar7 = (longlong)local_28 * (longlong)*(int *)((int)&pCVar1->z + iVar10);
      local_40 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)local_38 * (longlong)*(int *)((int)&pCVar1->x + iVar10);
      lVar6 = (longlong)local_20 * (longlong)*(int *)((int)&pCVar1->y + iVar10);
      lVar7 = (longlong)local_1c * (longlong)*(int *)((int)&pCVar1->z + iVar10);
      *(uint *)((int)&pCVar1->x + iVar10) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)((int)&pCVar1->z + iVar10) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)((int)&pCVar1->y + iVar10) = local_40;
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar12 < this_ptr->vertex_count);
  }
  euler_angles_00 = &(this_ptr->base).orient;
  core_xform_cpp_FUN_005b5620(&local_140,(CVector3f *)&DAT_02c8af28,&euler_angles_00->vec);
  core_xform_cpp_FUN_005b5620(&local_170,(CVector3f *)&DAT_02c8af28,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_140,&local_170);
  puVar11 = local_110;
  puVar13 = (uint *)&stack0xfffffe30;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_005b5dd0(&stack0xfffffe30);
  local_70.x = local_9c[2];
  *(float *)((int)&local_70 + (uint)bVar14 * -8 + 4) = local_9c[(uint)bVar14 * -2 + 3];
  *(float *)((int)&local_70 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
       local_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
  if ((CVector3f *)euler_angles_00 != &local_70) {
    (euler_angles_00->vec).x = local_70.x;
    (this_ptr->base).orient.vec.y = local_70.y;
    (this_ptr->base).orient.vec.z = local_70.z;
  }
  iVar12 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
  if (0 < this_ptr->fire_count) {
    pSVar8 = this_ptr->fires;
    do {
      local_18 = pSVar8;
      core_dirmat_cpp_FUN_0045f700(&local_e0,pSVar8);
      local_a0 = afStack_60[2];
      local_9c[(uint)bVar14 * -2] = afStack_60[(uint)bVar14 * -2 + 3];
      local_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
      if (pSVar8 != (SBodyPartFire *)&local_a0) {
        *(uint *)pSVar8 = local_a0;
        *(float *)&pSVar8->field_0x4 = local_9c[0];
        *(float *)&pSVar8->field_0x8 = local_9c[1];
      }
      core_actor_cpp_FUN_00408b40(this_ptr,local_18);
      local_7c = local_64;
      local_9c[(uint)bVar14 * -2 + 9] = afStack_60[(uint)bVar14 * -2];
      local_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
           afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      *(uint *)&local_18->field_0x2c = local_7c;
      *(uint *)&local_18->field_0x30 = local_78;
      *(uint *)&local_18->field_0x34 = local_74;
      iVar12 = iVar12 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar12 < this_ptr->fire_count);
  }
  local_14 = 0;
  if (0 < this_ptr->attached_model_count) {
    pSVar9 = this_ptr->attached_models;
    do {
      core_dirmat_cpp_FUN_0045f700(&local_e0,pSVar9);
      local_88 = local_4c;
      local_9c[(uint)bVar14 * -2 + 6] = afStack_60[(uint)bVar14 * -2 + 6];
      local_9c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_60[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      if (pSVar9 != (SBodyPartModel *)(local_9c + 5)) {
        *(float *)pSVar9 = local_88;
        *(uint *)&pSVar9->field_0x4 = local_84;
        *(uint *)&pSVar9->field_0x8 = local_80;
      }
      euler_angles_01 = &pSVar9->field_0xc;
      core_xform_cpp_FUN_005b5760
                (&local_1a0,(CVector3f *)&DAT_02c8af28,(CVector3f *)euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1a0,&local_170);
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_170);
      local_ac.x = local_b8;
      *(float *)((int)&local_ac + (uint)bVar14 * -8 + 4) = afStack_b4[(uint)bVar14 * -2];
      *(float *)((int)&local_ac + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      if ((CVector3f *)euler_angles_01 != &local_ac) {
        *(float *)euler_angles_01 = local_ac.x;
        *(float *)&pSVar9->field_0x10 = local_ac.y;
        *(float *)&pSVar9->field_0x14 = local_ac.z;
      }
      pSVar9 = pSVar9 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->attached_model_count);
  }
  return;
}
