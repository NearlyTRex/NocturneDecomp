// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30
// Address: 00415e30
// Address Range: [[00415e30, 00416325]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00415e30(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00415e30(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  CDemonActor *pCVar14;
  CDemonActor *pCVar15;
  int unaff_EBX;
  UOrientationVector *euler_angles_00;
  CVector3f *pCVar16;
  CVector3f *euler_angles_01;
  int iVar17;
  CMatrix3x4f *pCVar18;
  int iVar19;
  CMatrix3x4f *pCVar20;
  byte bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float afStackY_10c4 [933];
  CVector3f *euler_out;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  CMatrix3x4f CStack_1f4;
  CMatrix3x4f CStack_1c4;
  CMatrix3x4f CStack_194;
  CMatrix3x4f CStack_164;
  CMatrix3x4f CStack_134;
  CMatrix3x3f CStack_104;
  byte local_e0 [32];
  float local_c0 [5];
  CVector3f local_ac;
  float local_a0;
  float local_9c [2];
  CVector3f local_94;
  CVector3f local_88;
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
  CVector3f *local_3c;
  int local_38;
  int local_34;
  CDemonActor *local_20;
  CVector3f *local_1c;
  
  bVar21 = 0;
  fStack_20c = 6.003139e-39;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550((CMatrix3x3f *)local_e0,euler_angles)
  ;
  fVar1 = (float)local_e0._4_4_ * _DAT_005b6c8a;
  fVar8 = (float)local_e0._8_4_ * _DAT_005b6c8a;
  fVar9 = (float)local_e0._12_4_ * _DAT_005b6c8a;
  fVar10 = (float)local_e0._16_4_ * _DAT_005b6c8a;
  fVar11 = (float)local_e0._20_4_ * _DAT_005b6c8a;
  fVar12 = (float)local_e0._24_4_ * _DAT_005b6c8a;
  dVar22 = round((double)((float)local_e0._0_4_ * _DAT_005b6c8a));
  local_34 = (int)ROUND(dVar22);
  fVar13 = (float)local_e0._24_4_ * _DAT_005b6c8a;
  dVar22 = round((double)fVar1);
  iStack_44 = (int)ROUND(dVar22);
  fVar1 = (float)local_e0._24_4_ * _DAT_005b6c8a;
  iVar19 = 0;
  iVar17 = *(int *)(unaff_EBX + 0x174);
  fStack_20c = 6.003377e-39;
  dVar22 = round((double)fVar8);
  fStack_210 = 6.003387e-39;
  dVar23 = round((double)fVar9);
  fStack_214 = 6.003397e-39;
  dVar24 = round((double)fVar10);
  fStack_218 = 6.003406e-39;
  dVar25 = round((double)fVar11);
  fStack_21c = 6.003416e-39;
  dVar26 = round((double)fVar12);
  fStack_220 = 6.003426e-39;
  dVar27 = round((double)fVar13);
  euler_out = (CVector3f *)0x415f23;
  dVar28 = round((double)fVar1);
  pCVar14 = local_20;
  iStack_5c = (int)ROUND(dVar22);
  local_58 = (int)ROUND(dVar23);
  iStack_48 = (int)ROUND(dVar24);
  iStack_44 = (int)ROUND(dVar25);
  iStack_50 = (int)ROUND(dVar26);
  local_4c = (int)ROUND(dVar27);
  local_40 = (int)ROUND(dVar28);
  if (0 < iVar17) {
    iVar17 = 0;
    do {
      fVar1 = local_20[1].location.position.x;
      lVar2 = (longlong)iStack_54 * (longlong)*(int *)((int)fVar1 + iVar17);
      lVar3 = (longlong)local_58 * (longlong)*(int *)((int)fVar1 + 4 + iVar17);
      lVar4 = (longlong)iStack_50 * (longlong)*(int *)((int)fVar1 + 8 + iVar17);
      lVar5 = (longlong)iStack_60 * (longlong)*(int *)((int)fVar1 + iVar17);
      lVar6 = (longlong)iStack_48 * (longlong)*(int *)((int)fVar1 + 4 + iVar17);
      lVar7 = (longlong)local_4c * (longlong)*(int *)((int)fVar1 + 8 + iVar17);
      local_64 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)iStack_5c * (longlong)*(int *)((int)fVar1 + iVar17);
      lVar6 = (longlong)iStack_44 * (longlong)*(int *)((int)fVar1 + 4 + iVar17);
      lVar7 = (longlong)local_40 * (longlong)*(int *)((int)fVar1 + 8 + iVar17);
      *(uint *)((int)fVar1 + iVar17) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)((int)fVar1 + 8 + iVar17) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)((int)fVar1 + 4 + iVar17) = local_64;
      iVar19 = iVar19 + 1;
      iVar17 = iVar17 + 0xc;
    } while (iVar19 < *(int *)(local_20[1].actor_name + 0x1c));
  }
  euler_angles_00 = &local_20->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00583800
            (&CStack_164,(CVector3f *)&DAT_02cfd900,&euler_angles_00->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00583800
            (&CStack_194,(CVector3f *)&DAT_02cfd900,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_164,&CStack_194,&CStack_134);
  pCVar18 = &CStack_134;
  pCVar20 = &CStack_1f4;
  for (iVar17 = 0xc; iVar17 != 0; iVar17 = iVar17 + -1) {
    pCVar20->m[0].w = pCVar18->m[0].w;
    pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar21 * -2 + 1) * 4);
    pCVar20 = (CMatrix3x4f *)((int)pCVar20 + ((uint)bVar21 * -2 + 1) * 4);
  }
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_00583fb0(&CStack_1f4,euler_out);
  local_94.x = local_c0[2];
  *(float *)((int)&local_94 + (uint)bVar21 * -8 + 4) = local_c0[(uint)bVar21 * -2 + 3];
  pCVar15 = local_20;
  *(float *)((int)&local_94 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
       local_c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  if ((CVector3f *)euler_angles_00 != &local_94) {
    (euler_angles_00->vec).x = local_94.x;
    (pCVar14->orient).vec.y = local_94.y;
    (pCVar14->orient).vec.z = local_94.z;
  }
  iVar17 = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(local_20);
  if (0 < *(int *)(pCVar15[5].create_event + 0x1c)) {
    pCVar16 = (CVector3f *)(pCVar15[5].create_event + 0x20);
    do {
      local_3c = pCVar16;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
                (&CStack_104,pCVar16,&local_7c);
      local_e0._28_4_ = local_7c.x;
      local_c0[(uint)bVar21 * -2] = *(float *)((int)&local_7c + (uint)bVar21 * -8 + 4);
      local_c0[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           *(float *)((int)&local_7c + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      if (pCVar16 != (CVector3f *)(local_e0 + 0x1c)) {
        pCVar16->x = (float)local_e0._28_4_;
        pCVar16->y = local_c0[0];
        pCVar16->z = local_c0[1];
      }
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(local_20,local_3c,&local_88);
      local_a0 = local_88.x;
      local_9c[(uint)bVar21 * -2] = *(float *)((int)&local_88 + (uint)bVar21 * -8 + 4);
      local_9c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
           *(float *)((int)&local_88 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      local_3c[3].z = local_a0;
      local_3c[4].x = local_9c[0];
      local_3c[4].y = local_9c[1];
      iVar17 = iVar17 + 1;
      pCVar16 = (CVector3f *)&pCVar16[0x39].y;
    } while (iVar17 < *(int *)(local_20[5].create_event + 0x1c));
  }
  local_38 = 0;
  if (0 < (int)local_20[1].previous_transform_state.position.z) {
    pCVar16 = (CVector3f *)&local_20[1].previous_transform_state.orientation;
    do {
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
                (&CStack_104,pCVar16,&local_70);
      local_ac.x = local_70.x;
      *(uint *)((int)&local_ac + (uint)bVar21 * -8 + 4) =
           *(uint *)((int)&local_70 + (uint)bVar21 * -8 + 4);
      *(uint *)((int)&local_ac + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8) =
           *(uint *)((int)&local_70 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
      if (pCVar16 != &local_ac) {
        pCVar16->x = local_ac.x;
        pCVar16->y = local_ac.y;
        pCVar16->z = local_ac.z;
      }
      euler_angles_01 = pCVar16 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00583940
                (&CStack_1c4,(CVector3f *)&DAT_02cfd900,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                (&CStack_1c4,&CStack_194,(CMatrix3x4f *)&stack0xfffffddc);
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&CStack_194,euler_out);
      local_e0._16_4_ = local_e0._4_4_;
      *(uint *)(local_e0 + (uint)bVar21 * -8 + 0x14) =
           *(uint *)(local_e0 + (uint)bVar21 * -8 + 8);
      *(uint *)(local_e0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 0x18) =
           *(uint *)(local_e0 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 0xc);
      if (euler_angles_01 != (CVector3f *)(local_e0 + 0x10)) {
        euler_angles_01->x = (float)local_e0._16_4_;
        pCVar16[1].y = (float)local_e0._20_4_;
        pCVar16[1].z = (float)local_e0._24_4_;
      }
      pCVar16 = (CVector3f *)&pCVar16[0x21].z;
      local_38 = local_38 + 1;
    } while (local_38 < (int)local_20[1].previous_transform_state.position.z);
  }
  return;
}
