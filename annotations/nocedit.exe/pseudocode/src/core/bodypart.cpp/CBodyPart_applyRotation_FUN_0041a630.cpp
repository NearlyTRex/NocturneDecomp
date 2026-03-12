// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
  int iVar20;
  CVector3f *pCVar21;
  int iVar7;
  CMatrix3x4f *pCVar8;
  int iVar9;
  CMatrix3x3f *pCVar10;
  CVector3f *euler_angles_01;
  byte bVar11;
  CMatrix3x4f local_1c4;
  CMatrix3x4f local_194;
  CMatrix3x4f local_164;
  CMatrix3x4f local_134;
  CMatrix3x3f local_104;
  CMatrix3x4f local_d4;
  CMatrix3x3f local_a4;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  longlong lVar3;
  longlong lVar4;
  UOrientationVector *euler_angles_00;
  CVector3i *pCVar1;
  longlong lVar2;
  
  bVar11 = 0;
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
    iVar7 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)(int)ROUND(ROUND(fVar10)) * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar3 = (longlong)(int)ROUND(ROUND(fVar13)) * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar4 = (longlong)(int)ROUND(ROUND(fVar16)) * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      lVar1 = (longlong)(int)ROUND(ROUND(fVar11)) * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar5 = (longlong)(int)ROUND(ROUND(fVar14)) * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar6 = (longlong)(int)ROUND(ROUND(fVar17)) * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      lVar7 = (longlong)(int)ROUND(ROUND(fVar12)) * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar8 = (longlong)(int)ROUND(ROUND(fVar15)) * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar9 = (longlong)(int)ROUND(ROUND(fVar18)) * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      *(uint *)((int)&pCVar1->x + iVar7) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)((int)&pCVar1->z + iVar7) =
           ((uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) << 0x10) +
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar8 >> 0x10 | (int)((ulonglong)lVar8 >> 0x20) << 0x10);
      *(uint *)((int)&pCVar1->y + iVar7) =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < this_ptr->vertex_count);
  }
  euler_angles_02 = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_164,&g_ZeroVector.f,&euler_angles_02->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_134,&g_ZeroVector.f,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_164,&local_134,&local_d4);
  pCVar8 = &local_d4;
  pCVar10 = &local_104;
  for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
    pCVar10 = (CMatrix3x3f *)((int)pCVar10 + (uint)bVar11 * -8 + 4);
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + (uint)bVar11 * -8 + 4);
    pCVar10->m[0].x = pCVar8->m[0].w;
    pCVar8 = pCVar8;
    pCVar10 = pCVar10;
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&local_104,&local_4c);
  if ((CVector3f *)euler_angles_02 != pCVar5) {
    (euler_angles_02->vec).x = pCVar5->x;
    (this_ptr->base).orient.vec.y = pCVar5->y;
    (this_ptr->base).orient.vec.z = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  iVar20 = 0;
  if (0 < this_ptr->fire_count) {
    pCVar21 = &this_ptr->fires[0].local_position;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_a4,&local_64,pCVar21);
      if (pCVar21 != pCVar6) {
        pCVar21->x = pCVar6->x;
        pCVar21->y = pCVar6->y;
        pCVar21->z = pCVar6->z;
      }
      iVar20 = iVar20 + 1;
      pCVar19 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          (&this_ptr->base,&local_70,pCVar21);
      pCVar21[3].z = pCVar19->x;
      pCVar21[4].x = pCVar19->y;
      pCVar21[4].y = pCVar19->z;
      pCVar21 = (CVector3f *)&pCVar21[0x39].y;
    } while (iVar20 < this_ptr->fire_count);
  }
  local_1c = 0;
  if (0 < this_ptr->attached_model_count) {
    pCVar21 = (CVector3f *)this_ptr->attached_models;
    do {
      pCVar19 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                          (&local_a4,&local_58,pCVar21);
      if (pCVar21 != pCVar19) {
        pCVar21->x = pCVar19->x;
        pCVar21->y = pCVar19->y;
        pCVar21->z = pCVar19->z;
      }
      euler_angles_01 = pCVar21 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_194,&g_ZeroVector.f,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_194,&local_134,&local_1c4);
      pCVar19 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_134,&local_7c)
      ;
      if (euler_angles_01 != pCVar19) {
        euler_angles_01->x = pCVar19->x;
        pCVar21[1].y = pCVar19->y;
        pCVar21[1].z = pCVar19->z;
      }
      pCVar21 = (CVector3f *)&pCVar21[0x21].z;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->attached_model_count);
  }
  return;
}
