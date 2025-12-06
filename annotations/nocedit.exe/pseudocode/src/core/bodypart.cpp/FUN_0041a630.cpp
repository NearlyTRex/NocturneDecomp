// Name: core_bodypart.cpp_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041a630()

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041a630
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonActor *param_5,CVector3f *param_6)

{
  COrientation *euler_angles;
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint extraout_EAX;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int extraout_ECX;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
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
  int unaff_retaddr;
  int in_stack_00000030;
  CVector3f *in_stack_00000034;
  CMatrix3x4f *in_stack_fffffe6c;
  float *in_stack_fffffe80;
  byte auStack_154 [24];
  byte auStack_13c [52];
  byte auStack_108 [24];
  byte auStack_f0 [28];
  float local_d4;
  CVector3f aCStack_d0 [3];
  CMatrix3x3f local_a4;
  float fStack_80;
  float fStack_78;
  CMatrix3x3f CStack_68;
  CVector3f local_38;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_a4,param_6);
  fVar12 = (float10)local_a4.m[0].y * (float10)65536f;
  fVar13 = (float10)local_a4.m[0].z * (float10)65536f;
  fVar14 = (float10)local_a4.m[1].x * (float10)65536f;
  fVar15 = (float10)local_a4.m[1].y * (float10)65536f;
  fVar16 = (float10)local_a4.m[1].z * (float10)65536f;
  fVar17 = (float10)local_a4.m[2].x * (float10)65536f;
  fVar18 = (float10)local_a4.m[2].y * (float10)65536f;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_28.y = (float)(int)ROUND(fVar12);
  fVar12 = (float10)fStack_80 * (float10)65536f;
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  local_1c.x = (float)(int)ROUND(fVar13);
  fVar13 = (float10)fStack_78 * (float10)65536f;
  iVar9 = 0;
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  crt_math_c_round_FUN_005fe6b0(dVar19);
  if (0 < extraout_ECX) {
    iVar7 = 0;
    do {
      fVar1 = param_5[1].location.position.x;
      lVar2 = (longlong)unaff_EBX * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar15) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar18) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_1c.y = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)unaff_retaddr * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar16) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar12) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_1c.z = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar17) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar13) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      *(float *)((int)fVar1 + iVar7) = local_1c.y;
      *(uint *)((int)fVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(float *)((int)fVar1 + 4 + iVar7) = local_1c.z;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < *(int *)(param_5[1].actor_name + 0x1c));
  }
  euler_angles = &param_5->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_13c,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_108,&g_ZeroVector,in_stack_00000034);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_13c + 8),(CMatrix3x4f *)(auStack_108 + 4),in_stack_fffffe6c);
  pfVar8 = &local_a4.m[0].y;
  pfVar10 = &local_d4;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_d0,(CMatrix3x3f *)&local_1c.y)
  ;
  if (euler_angles != (COrientation *)pCVar5) {
    euler_angles->pitch = pCVar5->x;
    (param_5->orient).bank = pCVar5->y;
    (param_5->orient).heading = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
  iVar9 = 0;
  if (0 < *(int *)(param_5[5].create_event + 0x1c)) {
    pCVar5 = (CVector3f *)(param_5[5].create_event + 0x20);
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_68,&local_28,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar9 = iVar9 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(param_5,&local_38,pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar9 < *(int *)(param_5[5].create_event + 0x1c));
  }
  if (0 < (int)param_5[1].previous_transform_state.orientation.x) {
    pCVar5 = (CVector3f *)&param_5[1].previous_transform_state.orientation.y;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_68,&local_1c,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      euler_angles_00 = pCVar5 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_154,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_154 + 4),(CMatrix3x4f *)auStack_f0,
                 (CMatrix3x4f *)in_stack_fffffe80);
      in_stack_fffffe80 = &local_38.y;
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)(auStack_f0 + 4),(CMatrix3x3f *)in_stack_fffffe80);
      if (euler_angles_00 != pCVar6) {
        euler_angles_00->x = pCVar6->x;
        pCVar5[1].y = pCVar6->y;
        pCVar5[1].z = pCVar6->z;
      }
      pCVar5 = (CVector3f *)&pCVar5[0x21].z;
      in_stack_00000030 = in_stack_00000030 + 1;
    } while (in_stack_00000030 < (int)param_5[1].previous_transform_state.orientation.x);
  }
  return;
}
