// Name: core_bodypart.cpp_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041a630()

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
  int extraout_ECX;
  BADSPACEBASE *in_ESP;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  CVector3f *euler_angles_00;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f *matrix_b_00;
  byte auStack_19c [24];
  byte auStack_184 [52];
  byte auStack_150 [24];
  byte auStack_138 [28];
  uint uStack_11c;
  CVector3f aCStack_118 [4];
  uint auStack_e8 [14];
  byte auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  byte auStack_80 [16];
  CVector3f local_70;
  byte local_64 [8];
  float fStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_38;
  int local_34;
  int local_2c;
  uint local_28;
  int local_18;
  CVector3f *local_14;
  
  bVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(auStack_b0 + 0xc),in_stack_00000008);
  fVar12 = (float10)local_9c * (float10)65536f;
  fVar13 = (float10)local_98 * (float10)65536f;
  fVar14 = (float10)local_94 * (float10)65536f;
  fVar15 = (float10)local_90 * (float10)65536f;
  fVar16 = (float10)local_8c * (float10)65536f;
  fVar17 = (float10)local_88 * (float10)65536f;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)(local_a0 * 65536f));
  local_2c = (int)ROUND(dVar19);
  fVar18 = (float10)local_88 * (float10)65536f;
  matrix_b_00 = (CMatrix3x4f *)0x41a6d6;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  local_2c = (int)ROUND(dVar19);
  fVar12 = (float10)local_88 * (float10)65536f;
  iVar9 = 0;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
  fVar13 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  fVar14 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar15 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar16 = (float10)dVar19;
  matrix_b = (CMatrix3x4f *)0x41a715;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  fVar17 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar18);
  fVar18 = (float10)dVar19;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  iStack_44 = (int)ROUND(fVar13);
  local_58 = (int)ROUND(fVar14);
  iStack_54 = (int)ROUND(fVar15);
  local_38 = (int)ROUND(fVar16);
  iStack_50 = (int)ROUND(fVar17);
  local_40 = (int)ROUND(fVar18);
  local_34 = (int)ROUND(dVar19);
  if (0 < extraout_ECX) {
    iVar7 = 0;
    do {
      fVar1 = in_stack_00000004[1].location.position.x;
      lVar2 = (longlong)local_4c * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)local_58 * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_50 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_64._4_4_ =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)iStack_54 * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)local_40 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      fStack_5c = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                          ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                         ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)iStack_44 * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)local_38 * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)local_34 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      *(uint *)((int)fVar1 + iVar7) = local_64._4_4_;
      *(uint *)((int)fVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(float *)((int)fVar1 + 4 + iVar7) = fStack_5c;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < *(int *)(in_stack_00000004[1].actor_name + 0x1c));
  }
  euler_angles = &in_stack_00000004->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_184,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_150,&g_ZeroVector,local_14);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_184 + 8),(CMatrix3x4f *)(auStack_150 + 4),matrix_b);
  puVar8 = auStack_e8;
  puVar10 = &uStack_11c;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
                     (aCStack_118,(CMatrix3x3f *)(local_64 + 4));
  if (euler_angles != (COrientation *)pCVar5) {
    euler_angles->pitch = pCVar5->x;
    (in_stack_00000004->orient).bank = pCVar5->y;
    (in_stack_00000004->orient).heading = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  iVar9 = 0;
  if (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c)) {
    pCVar5 = (CVector3f *)(in_stack_00000004[5].create_event + 0x20);
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)auStack_b0,&local_70,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar9 = iVar9 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,(CVector3f *)auStack_80,pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar9 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
  }
  local_28 = 0;
  if (0 < (int)in_stack_00000004[1].previous_transform_state.orientation.x) {
    pCVar5 = (CVector3f *)&in_stack_00000004[1].previous_transform_state.orientation.y;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)auStack_b0,(CVector3f *)local_64,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      euler_angles_00 = pCVar5 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_19c,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_19c + 4),(CMatrix3x4f *)auStack_138,matrix_b_00);
      matrix_b_00 = (CMatrix3x4f *)(auStack_80 + 4);
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)(auStack_138 + 4),(CMatrix3x3f *)matrix_b_00);
      if (euler_angles_00 != pCVar6) {
        euler_angles_00->x = pCVar6->x;
        pCVar5[1].y = pCVar6->y;
        pCVar5[1].z = pCVar6->z;
      }
      pCVar5 = (CVector3f *)&pCVar5[0x21].z;
      local_18 = local_18 + 1;
    } while (local_18 < (int)in_stack_00000004[1].previous_transform_state.orientation.x);
  }
  return;
}
