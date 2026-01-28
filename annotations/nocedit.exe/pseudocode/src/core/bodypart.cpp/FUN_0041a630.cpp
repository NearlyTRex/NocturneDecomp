// Name: core_bodypart.cpp_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_0041a630(void)

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041a630(void)

{
  COrientation *euler_angles;
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int iVar7;
  CMatrix3x4f *pCVar8;
  int iVar9;
  CMatrix3x3f *pCVar10;
  CVector3f *euler_angles_00;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  double dVar19;
  CDemonActor *in_stack_00000004;
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
  
  bVar11 = 0;
  fStack_1d0 = 6.028977e-39;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)local_a4,in_stack_00000008);
  fVar12 = (float10)(float)local_a4._4_4_ * (float10)65536.0f;
  fVar13 = (float10)(float)local_a4._8_4_ * (float10)65536.0f;
  fVar14 = (float10)(float)local_a4._12_4_ * (float10)65536.0f;
  fVar15 = (float10)(float)local_a4._16_4_ * (float10)65536.0f;
  fVar1 = (float)local_a4._20_4_ * 65536.0f;
  fVar16 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)((float)local_a4._0_4_ * 65536.0f));
  local_30 = (int)ROUND(dVar18);
  fVar17 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  local_30 = (int)ROUND(dVar18);
  fVar12 = (float10)(float)local_a4._24_4_ * (float10)65536.0f;
  iVar9 = 0;
  iVar7 = *(int *)(in_stack_00000004[1].actor_name + 0x1c);
  fStack_1d0 = 6.029206e-39;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
  fVar13 = (float10)dVar18;
  fStack_1d4 = 6.029216e-39;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  fVar14 = (float10)dVar18;
  fStack_1d8 = 6.029225e-39;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fStack_1dc = 6.029235e-39;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  fVar15 = (float10)dVar19;
  fStack_1e0 = 6.029245e-39;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar16 = (float10)dVar19;
  fStack_1e4 = 6.029255e-39;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  fVar17 = (float10)dVar19;
  fStack_1e8 = 6.029265e-39;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  iStack_48 = (int)ROUND(fVar13);
  iStack_5c = (int)ROUND(fVar14);
  local_58 = (int)ROUND(dVar18);
  local_3c = (int)ROUND(fVar15);
  iStack_54 = (int)ROUND(fVar16);
  iStack_44 = (int)ROUND(fVar17);
  local_38 = (int)ROUND(dVar19);
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      fVar1 = in_stack_00000004[1].location.position.x;
      lVar2 = (longlong)iStack_50 * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)iStack_5c * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_54 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_64 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_4c * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)local_58 * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      iStack_60 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)local_3c * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)local_38 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      *(int *)((int)fVar1 + iVar7) = local_64;
      *(uint *)((int)fVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)((int)fVar1 + 4 + iVar7) = iStack_60;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < *(int *)(in_stack_00000004[1].actor_name + 0x1c));
  }
  euler_angles = &in_stack_00000004->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_188,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&CStack_158,&g_ZeroVector,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_188,&CStack_158,&CStack_f8);
  pCVar8 = &CStack_f8;
  pCVar10 = &CStack_128;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    pCVar10->m[0].x = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
    pCVar10 = (CMatrix3x3f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&CStack_128,&local_70);
  if (euler_angles != (COrientation *)pCVar5) {
    euler_angles->pitch = pCVar5->x;
    (in_stack_00000004->orient).bank = pCVar5->y;
    (in_stack_00000004->orient).heading = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c)) {
    pCVar5 = (CVector3f *)(in_stack_00000004[5].create_event + 0x20);
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_c8,(CVector3f *)(local_a4 + 0x1c),pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar7 = iVar7 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,(CVector3f *)(local_a4 + 0x10),pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar7 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
  }
  local_40 = 0;
  if (0 < (int)in_stack_00000004[1].previous_transform_state.orientation.x) {
    pCVar5 = (CVector3f *)&in_stack_00000004[1].previous_transform_state.orientation.y;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_c8,&local_7c,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      euler_angles_00 = pCVar5 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_1b8,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&CStack_1b8,&CStack_158,(CMatrix3x4f *)&fStack_1e8);
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CMatrix3x3f *)&CStack_158,(CVector3f *)(local_a4 + 4));
      if (euler_angles_00 != pCVar6) {
        euler_angles_00->x = pCVar6->x;
        pCVar5[1].y = pCVar6->y;
        pCVar5[1].z = pCVar6->z;
      }
      pCVar5 = (CVector3f *)&pCVar5[0x21].z;
      local_40 = local_40 + 1;
    } while (local_40 < (int)in_stack_00000004[1].previous_transform_state.orientation.x);
  }
  return;
}
