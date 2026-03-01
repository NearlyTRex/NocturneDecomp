// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart *this_ptr,CVector3f *euler_angles)

{
  UOrientationVector *euler_angles_00;
  CVector3i *pCVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
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
  
  bVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_a4,euler_angles);
  local_2c = (int)ROUND(ROUND(local_a4.m[0].x * 65536.0f));
  local_28 = (int)ROUND(ROUND(local_a4.m[0].y * 65536.0f));
  iVar9 = 0;
  local_24 = (int)ROUND(ROUND(local_a4.m[0].z * 65536.0f));
  local_38 = (int)ROUND(ROUND(local_a4.m[1].x * 65536.0f));
  local_34 = (int)ROUND(ROUND(local_a4.m[1].y * 65536.0f));
  local_18 = (int)ROUND(ROUND(local_a4.m[1].z * 65536.0f));
  local_30 = (int)ROUND(ROUND(local_a4.m[2].x * 65536.0f));
  local_20 = (int)ROUND(ROUND(local_a4.m[2].y * 65536.0f));
  local_14 = (int)ROUND(ROUND(local_a4.m[2].z * 65536.0f));
  if (0 < this_ptr->vertex_count) {
    iVar7 = 0;
    do {
      pCVar1 = this_ptr->vertices;
      lVar2 = (longlong)local_2c * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar3 = (longlong)local_38 * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar4 = (longlong)local_30 * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      local_40 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar3 = (longlong)local_34 * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar4 = (longlong)local_20 * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      local_3c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&pCVar1->x + iVar7);
      lVar3 = (longlong)local_18 * (longlong)*(int *)((int)&pCVar1->y + iVar7);
      lVar4 = (longlong)local_14 * (longlong)*(int *)((int)&pCVar1->z + iVar7);
      *(int *)((int)&pCVar1->x + iVar7) = local_40;
      *(uint *)((int)&pCVar1->z + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)((int)&pCVar1->y + iVar7) = local_3c;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < this_ptr->vertex_count);
  }
  euler_angles_00 = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_164,&g_ZeroVector.f,&euler_angles_00->vec);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_134,&g_ZeroVector.f,euler_angles);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_164,&local_134,&local_d4);
  pCVar8 = &local_d4;
  pCVar10 = &local_104;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    pCVar10->m[0].x = pCVar8->m[0].w;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar11 * -2 + 1) * 4);
    pCVar10 = (CMatrix3x3f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(&local_104,&local_4c);
  if ((CVector3f *)euler_angles_00 != pCVar5) {
    (euler_angles_00->vec).x = pCVar5->x;
    (this_ptr->base).orient.vec.y = pCVar5->y;
    (this_ptr->base).orient.vec.z = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  iVar9 = 0;
  if (0 < this_ptr->fire_count) {
    pCVar5 = &this_ptr->fires[0].local_position;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_a4,&local_64,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar9 = iVar9 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&local_70,pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar9 < this_ptr->fire_count);
  }
  local_1c = 0;
  if (0 < this_ptr->attached_model_count) {
    pCVar5 = (CVector3f *)this_ptr->attached_models;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_a4,&local_58,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      euler_angles_01 = pCVar5 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_194,&g_ZeroVector.f,euler_angles_01);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_194,&local_134,&local_1c4);
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_134,&local_7c);
      if (euler_angles_01 != pCVar6) {
        euler_angles_01->x = pCVar6->x;
        pCVar5[1].y = pCVar6->y;
        pCVar5[1].z = pCVar6->z;
      }
      pCVar5 = (CVector3f *)&pCVar5[0x21].z;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->attached_model_count);
  }
  return;
}
