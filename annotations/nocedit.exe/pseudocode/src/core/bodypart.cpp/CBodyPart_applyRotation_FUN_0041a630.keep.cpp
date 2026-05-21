// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630
// Address: 0041a630
// MANUAL RECONSTRUCTION
// Address Range: [[0041a630, 0041aa34] [03fc490e, 03fc4975]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  UOrientationVector *euler_angles_02;
  longlong lVar1;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar19;
  CVector3f *pCVar20;
  int iVar9;
  int iVar21;
  CVector3f *euler_angles_01;
  CMatrix3x4f local_1c4;
  CMatrix3x4f local_194;
  CMatrix3x4f local_164;
  CMatrix3x4f local_134;
  CMatrix3x4f local_d4;
  CMatrix3x3f local_a4;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  int local_1c;
  longlong lVar3;
  longlong lVar4;
  CVector3i *pCVar1;
  longlong lVar2;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_a4,euler_angles);
  fVar10 = local_a4.m[0].x * 65536.0f;
  fVar11 = local_a4.m[0].y * 65536.0f;
  fVar12 = local_a4.m[0].z * 65536.0f;
  fVar13 = local_a4.m[1].x * 65536.0f;
  fVar14 = local_a4.m[1].y * 65536.0f;
  fVar15 = local_a4.m[1].z * 65536.0f;
  fVar16 = local_a4.m[2].x * 65536.0f;
  fVar17 = local_a4.m[2].y * 65536.0f;
  fVar18 = local_a4.m[2].z * 65536.0f;
  iVar9 = 0;
  if (0 < this_ptr->vertex_count) {
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)(int)ROUND(ROUND(fVar10)) * (longlong)pCVar1[iVar9].x;
      lVar3 = (longlong)(int)ROUND(ROUND(fVar13)) * (longlong)pCVar1[iVar9].y;
      lVar4 = (longlong)(int)ROUND(ROUND(fVar16)) * (longlong)pCVar1[iVar9].z;
      lVar1 = (longlong)(int)ROUND(ROUND(fVar11)) * (longlong)pCVar1[iVar9].x;
      lVar5 = (longlong)(int)ROUND(ROUND(fVar14)) * (longlong)pCVar1[iVar9].y;
      lVar6 = (longlong)(int)ROUND(ROUND(fVar17)) * (longlong)pCVar1[iVar9].z;
      lVar7 = (longlong)(int)ROUND(ROUND(fVar12)) * (longlong)pCVar1[iVar9].x;
      lVar8 = (longlong)(int)ROUND(ROUND(fVar15)) * (longlong)pCVar1[iVar9].y;
      lVar9 = (longlong)(int)ROUND(ROUND(fVar18)) * (longlong)pCVar1[iVar9].z;
      pCVar1[iVar9].x =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      pCVar1[iVar9].z =
           ((uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) << 0x10) +
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar8 >> 0x10 | (int)((ulonglong)lVar8 >> 0x20) << 0x10);
      pCVar1[iVar9].y =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      iVar9 = iVar9 + 1;
    } while (iVar9 < this_ptr->vertex_count);
  }
  euler_angles_02 = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_164,&g_ZeroVector.f,&euler_angles_02->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_134,&g_ZeroVector.f,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_164,&local_134,&local_d4);
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&local_d4,&local_4c);
  if ((CVector3f *)euler_angles_02 != pCVar5) {
    (this_ptr->base).orient.vec = *pCVar5;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  iVar21 = 0;
  if (0 < this_ptr->fire_count) {
    do {
      pCVar20 = &this_ptr->fires[iVar21].local_position;
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_a4,&local_64,pCVar20);
      if (pCVar20 != pCVar6) {
        *pCVar20 = *pCVar6;
      }
      iVar21 = iVar21 + 1;
      pCVar19 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (&this_ptr->base,&local_70,pCVar20);
      pCVar20[3].z = pCVar19->x;
      pCVar20[4].x = pCVar19->y;
      pCVar20[4].y = pCVar19->z;
    } while (iVar21 < this_ptr->fire_count);
  }
  local_1c = 0;
  if (0 < this_ptr->attached_model_count) {
    do {
      pCVar20 = (CVector3f *)&this_ptr->attached_models[local_1c];
      pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&local_a4,&local_58,pCVar20);
      if (pCVar20 != pCVar19) {
        *pCVar20 = *pCVar19;
      }
      euler_angles_01 = pCVar20 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_194,&g_ZeroVector.f,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_194,&local_134,&local_1c4);
      pCVar19 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_1c4,&local_7c);
      if (euler_angles_01 != pCVar19) {
        *euler_angles_01 = *pCVar19;
      }
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->attached_model_count);
  }
  return;
}
