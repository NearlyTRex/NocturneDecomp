// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70
// Address: 00416d70
// Address Range: [[00416d70, 00417265]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00416d70(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00416d70(CBodyPart *this_ptr,CVector3f *euler_angles)

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
  CVector3f *pCVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  int aiStackY_10a0 [933];
  byte local_1a0 [48];
  CMatrix3x4f local_170;
  CMatrix3x4f local_140;
  uint local_110 [12];
  CMatrix3x3f local_e0;
  float local_b8;
  int aiStack_b4 [2];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  int aiStack_60 [2];
  float local_58;
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
  
  bVar15 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_e0,euler_angles);
  fVar16 = (float10)local_e0.m[0].x * (float10)_DAT_005cbf6a;
  fVar17 = (float10)local_e0.m[0].y * (float10)_DAT_005cbf6a;
  fVar18 = (float10)local_e0.m[0].z * (float10)_DAT_005cbf6a;
  fVar19 = (float10)local_e0.m[1].x * (float10)_DAT_005cbf6a;
  fVar20 = (float10)local_e0.m[1].y * (float10)_DAT_005cbf6a;
  fVar21 = (float10)local_e0.m[1].z * (float10)_DAT_005cbf6a;
  fVar22 = (float10)local_e0.m[2].x * (float10)_DAT_005cbf6a;
  round();
  local_30 = (int)ROUND(fVar16);
  fVar16 = (float10)local_e0.m[2].y * (float10)_DAT_005cbf6a;
  round();
  local_3c = (int)ROUND(fVar17);
  fVar17 = (float10)local_e0.m[2].z * (float10)_DAT_005cbf6a;
  iVar13 = 0;
  round();
  round();
  round();
  round();
  round();
  round();
  round();
  local_38 = (int)ROUND(fVar18);
  local_34 = (int)ROUND(fVar19);
  local_24 = (int)ROUND(fVar20);
  local_20 = (int)ROUND(fVar21);
  local_2c = (int)ROUND(fVar22);
  local_28 = (int)ROUND(fVar16);
  local_1c = (int)ROUND(fVar17);
  if (0 < extraout_ECX) {
    iVar11 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)local_30 * (longlong)*(int *)((int)&pCVar1->x + iVar11);
      lVar3 = (longlong)local_34 * (longlong)*(int *)((int)&pCVar1->y + iVar11);
      lVar4 = (longlong)local_2c * (longlong)*(int *)((int)&pCVar1->z + iVar11);
      lVar5 = (longlong)local_3c * (longlong)*(int *)((int)&pCVar1->x + iVar11);
      lVar6 = (longlong)local_24 * (longlong)*(int *)((int)&pCVar1->y + iVar11);
      lVar7 = (longlong)local_28 * (longlong)*(int *)((int)&pCVar1->z + iVar11);
      local_40 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)local_38 * (longlong)*(int *)((int)&pCVar1->x + iVar11);
      lVar6 = (longlong)local_20 * (longlong)*(int *)((int)&pCVar1->y + iVar11);
      lVar7 = (longlong)local_1c * (longlong)*(int *)((int)&pCVar1->z + iVar11);
      *(uint *)((int)&pCVar1->x + iVar11) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)((int)&pCVar1->z + iVar11) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)((int)&pCVar1->y + iVar11) = local_40;
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar13 < this_ptr->vertex_count);
  }
  euler_angles_00 = &(this_ptr->base).orient;
  core_xform_cpp_FUN_00591ad0(&local_140,(CVector3f *)&DAT_0265370c,&euler_angles_00->vec);
  core_xform_cpp_FUN_00591ad0(&local_170,(CVector3f *)&DAT_0265370c,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_140,&local_170);
  puVar12 = local_110;
  puVar14 = (uint *)&stack0xfffffe30;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_00592280(&stack0xfffffe30);
  local_70.x = local_94;
  *(int *)((int)&local_70 + (uint)bVar15 * -8 + 4) = aiStack_b4[(uint)bVar15 * -2 + 9];
  *(int *)((int)&local_70 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
       aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
  if ((CVector3f *)euler_angles_00 != &local_70) {
    (euler_angles_00->vec).x = local_70.x;
    (this_ptr->base).orient.vec.y = local_70.y;
    (this_ptr->base).orient.vec.z = local_70.z;
  }
  iVar13 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  if (0 < this_ptr->fire_count) {
    pSVar8 = this_ptr->fires;
    do {
      local_18 = pSVar8;
      core_dirmat_cpp_FUN_004495a0(&local_e0,pSVar8);
      local_a0 = local_58;
      aiStack_b4[(uint)bVar15 * -2 + 6] = aiStack_60[(uint)bVar15 * -2 + 3];
      aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
           aiStack_60[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      if (pSVar8 != (SBodyPartFire *)(aiStack_b4 + 5)) {
        (pSVar8->local_position).x = local_a0;
        (pSVar8->local_position).y = local_9c;
        (pSVar8->local_position).z = local_98;
      }
      core_actor_cpp_FUN_00408d70(this_ptr,local_18);
      local_7c = local_64;
      aiStack_b4[(uint)bVar15 * -2 + 0xf] = aiStack_60[(uint)bVar15 * -2];
      aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
           aiStack_60[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      (local_18->flame).base.location.position.x = local_7c;
      (local_18->flame).base.location.position.y = local_78;
      (local_18->flame).base.location.position.z = local_74;
      iVar13 = iVar13 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar13 < this_ptr->fire_count);
  }
  local_14 = 0;
  if (0 < this_ptr->attached_model_count) {
    pSVar9 = this_ptr->attached_models;
    do {
      core_dirmat_cpp_FUN_004495a0(&local_e0,pSVar9);
      local_88 = local_4c;
      aiStack_b4[(uint)bVar15 * -2 + 0xc] = aiStack_60[(uint)bVar15 * -2 + 6];
      aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
           aiStack_60[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      if (pSVar9 != (SBodyPartModel *)(aiStack_b4 + 0xb)) {
        (pSVar9->position_offset).x = local_88;
        (pSVar9->position_offset).y = local_84;
        (pSVar9->position_offset).z = local_80;
      }
      pCVar10 = &pSVar9->euler_angles;
      core_xform_cpp_FUN_00591c10(local_1a0,&DAT_0265370c,pCVar10);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1a0,&local_170);
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_170);
      local_ac = local_b8;
      aiStack_b4[(uint)bVar15 * -2 + 3] = aiStack_b4[(uint)bVar15 * -2];
      aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           aiStack_b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      if (pCVar10 != (CVector3f *)(aiStack_b4 + 2)) {
        pCVar10->x = local_ac;
        (pSVar9->euler_angles).y = local_a8;
        (pSVar9->euler_angles).z = local_a4;
      }
      pSVar9 = pSVar9 + 1;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->attached_model_count);
  }
  return;
}
