// Name: core_bodypart.cpp_CBodyPart_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a630(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a630(CBodyPart *this_ptr)

{
  UOrientationVector *euler_angles;
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
  CMatrix3x4f *pCVar15;
  int iVar16;
  CMatrix3x3f *pCVar17;
  CVector3f *euler_angles_00;
  byte bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  CVector3f *in_stack_00000008;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  CMatrix3x4f CStack_1b8;
  CMatrix3x4f CStack_188;
  CMatrix3x4f CStack_158;
  CMatrix3x3f CStack_128;
  CMatrix3x4f CStack_f8;
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
  fStack_1d0 = 6.028977e-39;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)local_a4,in_stack_00000008);
  fVar5 = (float)local_a4._4_4_ * 65536.0f;
  fVar6 = (float)local_a4._8_4_ * 65536.0f;
  fVar7 = (float)local_a4._12_4_ * 65536.0f;
  fVar8 = (float)local_a4._16_4_ * 65536.0f;
  fVar9 = (float)local_a4._20_4_ * 65536.0f;
  fVar10 = (float)local_a4._24_4_ * 65536.0f;
  dVar19 = round((double)((float)local_a4._0_4_ * 65536.0f));
  local_30 = (int)ROUND(dVar19);
  fVar11 = (float)local_a4._24_4_ * 65536.0f;
  dVar19 = round((double)fVar5);
  local_30 = (int)ROUND(dVar19);
  fVar5 = (float)local_a4._24_4_ * 65536.0f;
  iVar16 = 0;
  iVar14 = this_ptr->vertex_count;
  fStack_1d0 = 6.029206e-39;
  dVar19 = round((double)fVar6);
  fStack_1d4 = 6.029216e-39;
  dVar20 = round((double)fVar7);
  fStack_1d8 = 6.029225e-39;
  dVar21 = round((double)fVar8);
  fStack_1dc = 6.029235e-39;
  dVar22 = round((double)fVar9);
  fStack_1e0 = 6.029245e-39;
  dVar23 = round((double)fVar10);
  fStack_1e4 = 6.029255e-39;
  dVar24 = round((double)fVar11);
  fStack_1e8 = 6.029265e-39;
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
  euler_angles = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_188,&g_ZeroVector,&euler_angles->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&CStack_158,&g_ZeroVector,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_188,&CStack_158,&CStack_f8);
  pCVar15 = &CStack_f8;
  pCVar17 = &CStack_128;
  for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
    pCVar17->m[0].x = pCVar15->m[0].w;
    pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar18 * -2 + 1) * 4);
    pCVar17 = (CMatrix3x3f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
  }
  pCVar12 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&CStack_128,&local_70);
  if ((CVector3f *)euler_angles != pCVar12) {
    (euler_angles->vec).x = pCVar12->x;
    (this_ptr->base).orient.vec.y = pCVar12->y;
    (this_ptr->base).orient.vec.z = pCVar12->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  iVar14 = 0;
  if (0 < this_ptr->fire_count) {
    pCVar12 = &this_ptr->fires[0].local_position;
    do {
      pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&CStack_c8,(CVector3f *)(local_a4 + 0x1c),pCVar12);
      if (pCVar12 != pCVar13) {
        pCVar12->x = pCVar13->x;
        pCVar12->y = pCVar13->y;
        pCVar12->z = pCVar13->z;
      }
      iVar14 = iVar14 + 1;
      pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (&this_ptr->base,(CVector3f *)(local_a4 + 0x10),pCVar12);
      pCVar12[3].z = pCVar13->x;
      pCVar12[4].x = pCVar13->y;
      pCVar12[4].y = pCVar13->z;
      pCVar12 = (CVector3f *)&pCVar12[0x39].y;
    } while (iVar14 < this_ptr->fire_count);
  }
  local_40 = 0;
  if (0 < this_ptr->attached_model_count) {
    pCVar12 = (CVector3f *)this_ptr->attached_models;
    do {
      pCVar13 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&CStack_c8,&local_7c,pCVar12);
      if (pCVar12 != pCVar13) {
        pCVar12->x = pCVar13->x;
        pCVar12->y = pCVar13->y;
        pCVar12->z = pCVar13->z;
      }
      euler_angles_00 = pCVar12 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_1b8,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&CStack_1b8,&CStack_158,(CMatrix3x4f *)&fStack_1e8);
      pCVar13 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                          ((CMatrix3x3f *)&CStack_158,(CVector3f *)(local_a4 + 4));
      if (euler_angles_00 != pCVar13) {
        euler_angles_00->x = pCVar13->x;
        pCVar12[1].y = pCVar13->y;
        pCVar12[1].z = pCVar13->z;
      }
      pCVar12 = (CVector3f *)&pCVar12[0x21].z;
      local_40 = local_40 + 1;
    } while (local_40 < this_ptr->attached_model_count);
  }
  return;
}
