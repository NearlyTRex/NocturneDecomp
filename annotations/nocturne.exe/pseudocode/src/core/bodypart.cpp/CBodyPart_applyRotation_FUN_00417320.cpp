// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
// Address: 00417320
// Address Range: [[00417320, 00417724]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  UOrientationVector *euler_angles_00;
  CVector3i *pCVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  float *pfVar14;
  SBodyPartModel *pSVar15;
  int iVar16;
  int iVar17;
  CMatrix3x4f *pCVar18;
  byte bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  byte auStack_1b8 [48];
  CMatrix3x4f CStack_188;
  CMatrix3x4f CStack_158;
  CMatrix3x4f CStack_128;
  float afStack_f8 [12];
  byte auStack_c8 [36];
  CMatrix3x3f local_a4;
  byte local_7c [12];
  CVector3f local_70;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  CVector3f *local_1c;
  
  bVar19 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_a4,euler_angles);
  fVar5 = local_a4.m[0].y * 5.9266679317975379e-315._0_4_;
  fVar6 = local_a4.m[0].z * 5.9266679317975379e-315._0_4_;
  fVar7 = local_a4.m[1].x * 5.9266679317975379e-315._0_4_;
  fVar8 = local_a4.m[1].y * 5.9266679317975379e-315._0_4_;
  fVar9 = local_a4.m[1].z * 5.9266679317975379e-315._0_4_;
  fVar10 = local_a4.m[2].x * 5.9266679317975379e-315._0_4_;
  dVar20 = round((double)(local_a4.m[0].x * 5.9266679317975379e-315._0_4_));
  local_30 = (int)ROUND(dVar20);
  fVar11 = local_a4.m[2].x * 5.9266679317975379e-315._0_4_;
  dVar20 = round((double)fVar5);
  local_30 = (int)ROUND(dVar20);
  fVar5 = local_a4.m[2].x * 5.9266679317975379e-315._0_4_;
  iVar17 = 0;
  iVar16 = this_ptr->vertex_count;
  dVar20 = round((double)fVar6);
  dVar21 = round((double)fVar7);
  dVar22 = round((double)fVar8);
  dVar23 = round((double)fVar9);
  dVar24 = round((double)fVar10);
  uVar28 = 0x41740c;
  dVar25 = round((double)fVar11);
  uVar27 = 0x417413;
  dVar26 = round((double)fVar5);
  iStack_48 = (int)ROUND(dVar20);
  iStack_5c = (int)ROUND(dVar21);
  local_58 = (int)ROUND(dVar22);
  local_3c = (int)ROUND(dVar23);
  iStack_54 = (int)ROUND(dVar24);
  iStack_44 = (int)ROUND(dVar25);
  local_38 = (int)ROUND(dVar26);
  if (0 < iVar16) {
    iVar16 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)iStack_50 * (longlong)*(int *)((int)&pCVar1->x + iVar16);
      lVar3 = (longlong)iStack_5c * (longlong)*(int *)((int)&pCVar1->y + iVar16);
      lVar4 = (longlong)iStack_54 * (longlong)*(int *)((int)&pCVar1->z + iVar16);
      local_64 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_4c * (longlong)*(int *)((int)&pCVar1->x + iVar16);
      lVar3 = (longlong)local_58 * (longlong)*(int *)((int)&pCVar1->y + iVar16);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)((int)&pCVar1->z + iVar16);
      iStack_60 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)((int)&pCVar1->x + iVar16);
      lVar3 = (longlong)local_3c * (longlong)*(int *)((int)&pCVar1->y + iVar16);
      lVar4 = (longlong)local_38 * (longlong)*(int *)((int)&pCVar1->z + iVar16);
      *(int *)((int)&pCVar1->x + iVar16) = local_64;
      *(uint *)((int)&pCVar1->z + iVar16) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)((int)&pCVar1->y + iVar16) = iStack_60;
      iVar17 = iVar17 + 1;
      iVar16 = iVar16 + 0xc;
    } while (iVar17 < this_ptr->vertex_count);
  }
  euler_angles_00 = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_188,(CVector3f *)&DAT_02dd1184,&euler_angles_00->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_158,(CVector3f *)&DAT_02dd1184,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_188,&CStack_158,uVar27,uVar28);
  pfVar14 = afStack_f8;
  pCVar18 = &CStack_128;
  for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
    pCVar18->m[0].w = *pfVar14;
    pfVar14 = pfVar14 + (uint)bVar19 * -2 + 1;
    pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar19 * -2 + 1) * 4);
  }
  pCVar12 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(&CStack_128,&local_70);
  if ((CVector3f *)euler_angles_00 != pCVar12) {
    (euler_angles_00->vec).x = pCVar12->x;
    (this_ptr->base).orient.vec.y = pCVar12->y;
    (this_ptr->base).orient.vec.z = pCVar12->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  iVar16 = 0;
  if (0 < this_ptr->fire_count) {
    pCVar12 = &this_ptr->fires[0].local_position;
    do {
      pCVar13 = (CVector3f *)
                core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                          (auStack_c8,&local_a4.m[2].y,pCVar12);
      if (pCVar12 != pCVar13) {
        pCVar12->x = pCVar13->x;
        pCVar12->y = pCVar13->y;
        pCVar12->z = pCVar13->z;
      }
      iVar16 = iVar16 + 1;
      pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&this_ptr->base,(CVector3f *)&local_a4.m[1].y,pCVar12);
      pCVar12[3].z = pCVar13->x;
      pCVar12[4].x = pCVar13->y;
      pCVar12[4].y = pCVar13->z;
      pCVar12 = (CVector3f *)&pCVar12[0x38].z;
    } while (iVar16 < this_ptr->fire_count);
  }
  local_40 = 0;
  if (0 < this_ptr->attached_model_count) {
    pSVar15 = this_ptr->attached_models;
    do {
      pfVar14 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                   (auStack_c8,local_7c,pSVar15);
      if (pSVar15 != (SBodyPartModel *)pfVar14) {
        (pSVar15->scale).x = *pfVar14;
        (pSVar15->scale).y = pfVar14[1];
        (pSVar15->scale).z = pfVar14[2];
      }
      pCVar13 = &pSVar15->position;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (auStack_1b8,&DAT_02dd1184,pCVar13);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_1b8,&CStack_158);
      pCVar12 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180
                          (&CStack_158,(CVector3f *)&local_a4.m[0].y);
      if (pCVar13 != pCVar12) {
        pCVar13->x = pCVar12->x;
        (pSVar15->position).y = pCVar12->y;
        (pSVar15->position).z = pCVar12->z;
      }
      pSVar15 = pSVar15 + 1;
      local_40 = local_40 + 1;
    } while (local_40 < this_ptr->attached_model_count);
  }
  return;
}
