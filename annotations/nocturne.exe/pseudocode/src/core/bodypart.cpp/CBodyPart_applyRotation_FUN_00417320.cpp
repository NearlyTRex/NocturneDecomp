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
  int iVar14;
  float *pfVar15;
  int iVar16;
  CMatrix3x4f *pCVar17;
  CVector3f *euler_angles_01;
  byte bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  CMatrix3x4f CStack_1b8;
  CMatrix3x4f CStack_188;
  CMatrix3x4f CStack_158;
  CMatrix3x4f CStack_128;
  float afStack_f8 [12];
  CMatrix3x3f CStack_c8;
  byte local_a4 [40];
  CVector3f local_7c;
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
  
  bVar18 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0((CMatrix3x3f *)local_a4,euler_angles)
  ;
  fVar5 = (float)local_a4._4_4_ * 5.9266679317975379e-315._0_4_;
  fVar6 = (float)local_a4._8_4_ * 5.9266679317975379e-315._0_4_;
  fVar7 = (float)local_a4._12_4_ * 5.9266679317975379e-315._0_4_;
  fVar8 = (float)local_a4._16_4_ * 5.9266679317975379e-315._0_4_;
  fVar9 = (float)local_a4._20_4_ * 5.9266679317975379e-315._0_4_;
  fVar10 = (float)local_a4._24_4_ * 5.9266679317975379e-315._0_4_;
  dVar19 = round((double)((float)local_a4._0_4_ * 5.9266679317975379e-315._0_4_));
  local_30 = (int)ROUND(dVar19);
  fVar11 = (float)local_a4._24_4_ * 5.9266679317975379e-315._0_4_;
  dVar19 = round((double)fVar5);
  local_30 = (int)ROUND(dVar19);
  fVar5 = (float)local_a4._24_4_ * 5.9266679317975379e-315._0_4_;
  iVar16 = 0;
  iVar14 = this_ptr->vertex_count;
  dVar19 = round((double)fVar6);
  dVar20 = round((double)fVar7);
  dVar21 = round((double)fVar8);
  dVar22 = round((double)fVar9);
  dVar23 = round((double)fVar10);
  uVar27 = 0x41740c;
  dVar24 = round((double)fVar11);
  uVar26 = 0x417413;
  dVar25 = round((double)fVar5);
  iStack_48 = (int)ROUND(dVar19);
  iStack_5c = (int)ROUND(dVar20);
  local_58 = (int)ROUND(dVar21);
  local_3c = (int)ROUND(dVar22);
  iStack_54 = (int)ROUND(dVar23);
  iStack_44 = (int)ROUND(dVar24);
  local_38 = (int)ROUND(dVar25);
  if (0 < iVar14) {
    iVar14 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)iStack_50 * (longlong)*(int *)((int)&pCVar1->x + iVar14);
      lVar3 = (longlong)iStack_5c * (longlong)*(int *)((int)&pCVar1->y + iVar14);
      lVar4 = (longlong)iStack_54 * (longlong)*(int *)((int)&pCVar1->z + iVar14);
      local_64 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_4c * (longlong)*(int *)((int)&pCVar1->x + iVar14);
      lVar3 = (longlong)local_58 * (longlong)*(int *)((int)&pCVar1->y + iVar14);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)((int)&pCVar1->z + iVar14);
      iStack_60 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)((int)&pCVar1->x + iVar14);
      lVar3 = (longlong)local_3c * (longlong)*(int *)((int)&pCVar1->y + iVar14);
      lVar4 = (longlong)local_38 * (longlong)*(int *)((int)&pCVar1->z + iVar14);
      *(int *)((int)&pCVar1->x + iVar14) = local_64;
      *(uint *)((int)&pCVar1->z + iVar14) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)((int)&pCVar1->y + iVar14) = iStack_60;
      iVar16 = iVar16 + 1;
      iVar14 = iVar14 + 0xc;
    } while (iVar16 < this_ptr->vertex_count);
  }
  euler_angles_00 = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_188,(CVector3f *)&DAT_02dd1184,&euler_angles_00->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&CStack_158,(CVector3f *)&DAT_02dd1184,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_188,&CStack_158,uVar26,uVar27);
  pfVar15 = afStack_f8;
  pCVar17 = &CStack_128;
  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
    pCVar17->m[0].w = *pfVar15;
    pfVar15 = pfVar15 + (uint)bVar18 * -2 + 1;
    pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pCVar12 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(&CStack_128,&local_70);
  if ((CVector3f *)euler_angles_00 != pCVar12) {
    (euler_angles_00->vec).x = pCVar12->x;
    (this_ptr->base).orient.vec.y = pCVar12->y;
    (this_ptr->base).orient.vec.z = pCVar12->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  iVar14 = 0;
  if (0 < this_ptr->fire_count) {
    pCVar12 = &this_ptr->fires[0].local_position;
    do {
      pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                          (&CStack_c8,(CVector3f *)(local_a4 + 0x1c),pCVar12);
      if (pCVar12 != pCVar13) {
        pCVar12->x = pCVar13->x;
        pCVar12->y = pCVar13->y;
        pCVar12->z = pCVar13->z;
      }
      iVar14 = iVar14 + 1;
      pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          (&this_ptr->base,(CVector3f *)(local_a4 + 0x10),pCVar12);
      pCVar12[3].z = pCVar13->x;
      pCVar12[4].x = pCVar13->y;
      pCVar12[4].y = pCVar13->z;
      pCVar12 = (CVector3f *)&pCVar12[0x38].z;
    } while (iVar14 < this_ptr->fire_count);
  }
  local_40 = 0;
  if (0 < this_ptr->attached_model_count) {
    pCVar12 = &this_ptr->attached_models[0].scale;
    do {
      pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                          (&CStack_c8,&local_7c,pCVar12);
      if (pCVar12 != pCVar13) {
        pCVar12->x = pCVar13->x;
        pCVar12->y = pCVar13->y;
        pCVar12->z = pCVar13->z;
      }
      euler_angles_01 = pCVar12 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&CStack_1b8,(CVector3f *)&DAT_02dd1184,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_1b8,&CStack_158);
      pCVar13 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180
                          (&CStack_158,(CVector3f *)(local_a4 + 4));
      if (euler_angles_01 != pCVar13) {
        euler_angles_01->x = pCVar13->x;
        pCVar12[1].y = pCVar13->y;
        pCVar12[1].z = pCVar13->z;
      }
      pCVar12 = (CVector3f *)&pCVar12[0x21].z;
      local_40 = local_40 + 1;
    } while (local_40 < this_ptr->attached_model_count);
  }
  return;
}
