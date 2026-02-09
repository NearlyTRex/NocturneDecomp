// Name: core_bodypart.cpp_CBodyPart_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a630(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a630(CBodyPart *this_ptr)

{
  COrientation *euler_angles;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  CMatrix3x4f *pCVar9;
  int iVar10;
  CMatrix3x3f *pCVar11;
  CVector3f *euler_angles_00;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  double dVar20;
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
  
  bVar12 = 0;
  fStack_1d0 = 6.028977e-39;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)local_a4,in_stack_00000008);
  fVar13 = (float10)(float)local_a4._4_4_ * (float10)65536.0f;
  fVar14 = (float10)(float)local_a4._8_4_ * (float10)65536.0f;
  fVar15 = (float10)(float)local_a4._12_4_ * (float10)65536.0f;
  fVar16 = (float10)(float)local_a4._16_4_ * (float10)65536.0f;
  fVar5 = (float)local_a4._20_4_ * 65536.0f;
  fVar17 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  dVar19 = round((double)((float)local_a4._0_4_ * 65536.0f));
  local_30 = (int)ROUND(dVar19);
  fVar18 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  dVar19 = round((double)fVar13);
  local_30 = (int)ROUND(dVar19);
  fVar13 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  iVar10 = 0;
  iVar8 = this_ptr->vertex_count;
  fStack_1d0 = 6.029206e-39;
  dVar19 = round((double)fVar14);
  fVar14 = (float10)dVar19;
  fStack_1d4 = 6.029216e-39;
  dVar19 = round((double)fVar15);
  fVar15 = (float10)dVar19;
  fStack_1d8 = 6.029225e-39;
  dVar19 = round((double)fVar16);
  fStack_1dc = 6.029235e-39;
  dVar20 = round((double)fVar5);
  fVar16 = (float10)dVar20;
  fStack_1e0 = 6.029245e-39;
  dVar20 = round((double)fVar17);
  fVar17 = (float10)dVar20;
  fStack_1e4 = 6.029255e-39;
  dVar20 = round((double)fVar18);
  fVar18 = (float10)dVar20;
  fStack_1e8 = 6.029265e-39;
  dVar20 = round((double)fVar13);
  iStack_48 = (int)ROUND(fVar14);
  iStack_5c = (int)ROUND(fVar15);
  local_58 = (int)ROUND(dVar19);
  local_3c = (int)ROUND(fVar16);
  iStack_54 = (int)ROUND(fVar17);
  iStack_44 = (int)ROUND(fVar18);
  local_38 = (int)ROUND(dVar20);
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      iVar1 = this_ptr->unk2;
      lVar2 = (longlong)iStack_50 * (longlong)*(int *)(iVar1 + iVar8);
      lVar3 = (longlong)iStack_5c * (longlong)*(int *)(iVar1 + 4 + iVar8);
      lVar4 = (longlong)iStack_54 * (longlong)*(int *)(iVar1 + 8 + iVar8);
      local_64 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_4c * (longlong)*(int *)(iVar1 + iVar8);
      lVar3 = (longlong)local_58 * (longlong)*(int *)(iVar1 + 4 + iVar8);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)(iVar1 + 8 + iVar8);
      iStack_60 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)(iVar1 + iVar8);
      lVar3 = (longlong)local_3c * (longlong)*(int *)(iVar1 + 4 + iVar8);
      lVar4 = (longlong)local_38 * (longlong)*(int *)(iVar1 + 8 + iVar8);
      *(int *)(iVar1 + iVar8) = local_64;
      *(uint *)(iVar1 + 8 + iVar8) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar8) = iStack_60;
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar10 < this_ptr->vertex_count);
  }
  euler_angles = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_188,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&CStack_158,&g_ZeroVector,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_188,&CStack_158,&CStack_f8);
  pCVar9 = &CStack_f8;
  pCVar11 = &CStack_128;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    pCVar11->m[0].x = pCVar9->m[0].w;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    pCVar11 = (CMatrix3x3f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
  }
  pCVar6 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&CStack_128,&local_70);
  if (euler_angles != (COrientation *)pCVar6) {
    euler_angles->pitch = pCVar6->x;
    (this_ptr->base).orient.bank = pCVar6->y;
    (this_ptr->base).orient.heading = pCVar6->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  iVar8 = 0;
  if (0 < *(int *)(this_ptr->unk5 + 0x5bc)) {
    pCVar6 = (CVector3f *)(this_ptr->unk5 + 0x5c0);
    do {
      pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_c8,(CVector3f *)(local_a4 + 0x1c),pCVar6);
      if (pCVar6 != pCVar7) {
        pCVar6->x = pCVar7->x;
        pCVar6->y = pCVar7->y;
        pCVar6->z = pCVar7->z;
      }
      iVar8 = iVar8 + 1;
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,(CVector3f *)(local_a4 + 0x10),pCVar6);
      pCVar6[3].z = pCVar7->x;
      pCVar6[4].x = pCVar7->y;
      pCVar6[4].y = pCVar7->z;
      pCVar6 = (CVector3f *)&pCVar6[0x39].y;
    } while (iVar8 < *(int *)(this_ptr->unk5 + 0x5bc));
  }
  local_40 = 0;
  if (0 < *(int *)(this_ptr->unk5 + 0xfc)) {
    pCVar6 = (CVector3f *)(this_ptr->unk5 + 0x100);
    do {
      pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_c8,&local_7c,pCVar6);
      if (pCVar6 != pCVar7) {
        pCVar6->x = pCVar7->x;
        pCVar6->y = pCVar7->y;
        pCVar6->z = pCVar7->z;
      }
      euler_angles_00 = pCVar6 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_1b8,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&CStack_1b8,&CStack_158,(CMatrix3x4f *)&fStack_1e8);
      pCVar7 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CMatrix3x3f *)&CStack_158,(CVector3f *)(local_a4 + 4));
      if (euler_angles_00 != pCVar7) {
        euler_angles_00->x = pCVar7->x;
        pCVar6[1].y = pCVar7->y;
        pCVar6[1].z = pCVar7->z;
      }
      pCVar6 = (CVector3f *)&pCVar6[0x21].z;
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)(this_ptr->unk5 + 0xfc));
  }
  return;
}
