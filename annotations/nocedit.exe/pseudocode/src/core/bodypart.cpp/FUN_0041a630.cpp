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
  int iVar7;
  float *pfVar8;
  int iVar9;
  CVector3f *euler_angles_00;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f CStack_1b8;
  CMatrix3x4f CStack_188;
  CMatrix3x4f CStack_158;
  CVector3f aCStack_128 [4];
  float afStack_f8 [12];
  CMatrix3x3f CStack_c8;
  byte local_a4 [8];
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CMatrix3x3f local_70;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  CVector3f *local_1c;
  
  bVar10 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)local_a4,in_stack_00000008);
  fVar11 = (float10)(float)local_a4._4_4_ * (float10)65536f;
  fVar12 = (float10)local_9c * (float10)65536f;
  fVar13 = (float10)local_98 * (float10)65536f;
  fVar14 = (float10)local_94.x * (float10)65536f;
  fVar15 = (float10)local_94.y * (float10)65536f;
  fVar16 = (float10)local_94.z * (float10)65536f;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)((float)local_a4._0_4_ * 65536f));
  local_30 = (int)ROUND(dVar18);
  fVar17 = (float10)local_94.z * (float10)65536f;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
  local_30 = (int)ROUND(dVar18);
  fVar11 = (float10)local_94.z * (float10)65536f;
  iVar9 = 0;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  fVar12 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar13);
  fVar13 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar14);
  fVar14 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar15);
  fVar15 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  fVar16 = (float10)dVar18;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  fVar17 = (float10)dVar18;
  matrix_b = (CMatrix3x4f *)0x41a723;
  dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
  iStack_48 = (int)ROUND(fVar12);
  local_70.m[1].z = (float)(int)ROUND(fVar13);
  local_70.m[2].x = (float)(int)ROUND(fVar14);
  local_3c = (int)ROUND(fVar15);
  local_70.m[2].y = (float)(int)ROUND(fVar16);
  iStack_44 = (int)ROUND(fVar17);
  local_38 = (int)ROUND(dVar18);
  if (0 < extraout_ECX) {
    iVar7 = 0;
    do {
      fVar1 = in_stack_00000004[1].location.position.x;
      lVar2 = (longlong)(int)local_70.m[2].z * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)local_70.m[1].z * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)local_70.m[2].y * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_70.m[1].x =
           (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)local_4c * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)local_70.m[2].x * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_70.m[1].y =
           (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)local_3c * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)local_38 * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      *(float *)((int)fVar1 + iVar7) = local_70.m[1].x;
      *(uint *)((int)fVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(float *)((int)fVar1 + 4 + iVar7) = local_70.m[1].y;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < *(int *)(in_stack_00000004[1].actor_name + 0x1c));
  }
  euler_angles = &in_stack_00000004->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&CStack_188,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(&CStack_158,&g_ZeroVector,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_188,&CStack_158,matrix_b);
  pfVar8 = afStack_f8;
  pCVar5 = aCStack_128;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    pCVar5->x = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
    pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar10 * -2 + 1) * 4);
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_128,&local_70);
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
                         (&CStack_c8,&local_88,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar9 = iVar9 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000004,&local_94,pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar9 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
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
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_1b8,&CStack_158,matrix_b);
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&CStack_158,(CMatrix3x3f *)(local_a4 + 4));
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
