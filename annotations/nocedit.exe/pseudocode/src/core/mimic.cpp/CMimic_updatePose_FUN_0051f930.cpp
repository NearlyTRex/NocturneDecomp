// Name: core_mimic.cpp_CMimic_updatePose_FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051fcb8] [0060495b, 0060497e] [03fc15ee, 03fc18bb]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0051f930(CMimic *this_ptr)

{
  float *pfVar1;
  CHero *pCVar5;
  CSkeleton *pCVar6;
  int iVar7;
  SPose *pSVar8;
  CVector3f *pCVar9;
  uint uVar10;
  int iVar6;
  int iVar11;
  CVector3f *pCVar12;
  CVector3f *pCVar7;
  SPose *pSVar13;
  UOrientationVector *pUVar14;
  CMimic *pCVar15;
  CVector3i *pCVar16;
  uint *puVar17;
  uint *puVar18;
  CMatrix3x4f *pCVar19;
  CMatrix3x4f *pCVar20;
  CMatrix3x4f *pCVar21;
  CVector3i *pCVar22;
  uint *puVar23;
  uint *puVar24;
  CMatrix3x4f *pCVar25;
  byte bVar26;
  CMatrix3x4f *pCVar8;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f local_2d0;
  CMatrix3x4f local_2a0;
  CMatrix3x4f local_270;
  CMatrix3x4f local_240;
  CMatrix3x4f local_210;
  CMatrix3x4f local_1e0;
  CMatrix3x4f local_1b0;
  CMatrix3x4f local_180;
  CMatrix3x4f local_150;
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  CMatrix3x4f local_90;
  CMatrix3x4f local_60;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  CMimic *local_14;
  CCloth *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CQuaternion4f *pCVar1;
  CHero *pCVar2;
  
  bVar26 = 0;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&(this_ptr->base).base.model);
  iVar6 = pCVar6->bone_count;
  pCVar7 = (this_ptr->base).base.model.transformed_vertices;
  local_14 = this_ptr;
  pCVar15 = this_ptr;
  for (iVar7 = 0; iVar5 = g_LocalHeroIndex, iVar7 < iVar6; iVar7 = iVar7 + 1) {
    pfVar1 = &(g_HeroActors[g_LocalHeroIndex]->base).model.bone_transform.pose_data.bone_rotations
              [iVar7].w;
    (pCVar15->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar1;
    (pCVar15->base).base.model.bone_transform.pose_data.bone_rotations[0].x = pfVar1[1];
    (pCVar15->base).base.model.bone_transform.pose_data.bone_rotations[0].y = pfVar1[2];
    (pCVar15->base).base.model.bone_transform.pose_data.bone_rotations[0].z = pfVar1[3];
    pCVar5 = g_HeroActors[iVar5];
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[0].w =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[0].w;
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[0].x =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[0].x;
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[0].y =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[0].y;
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[0].z =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[0].z;
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[1].w =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[1].w;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 1) + 4) =
         *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 1) + 4)
    ;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 1) + 8) =
         *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 1) + 8)
    ;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 1) + 0xc)
         = *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 1) +
                     0xc);
    (local_14->base).base.model.bone_transform.bone_world_matrices[0].m[2].w =
         (pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m[2].w;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 2) + 4) =
         *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 2) + 4)
    ;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 2) + 8) =
         *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 2) + 8)
    ;
    *(float *)((int)((local_14->base).base.model.bone_transform.bone_world_matrices[0].m + 2) + 0xc)
         = *(float *)((int)((pCVar5->base).model.bone_transform.bone_world_matrices[iVar7].m + 2) +
                     0xc);
    pCVar12 = (g_HeroActors[iVar5]->base).model.transformed_vertices + iVar7;
    if (pCVar7 != pCVar12) {
      pCVar7->x = pCVar12->x;
      pCVar7->y = pCVar12->y;
      pCVar7->z = pCVar12->z;
    }
    pCVar15 = (CMimic *)((pCVar15->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar7 = pCVar7 + 1;
  }
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar8 = &(this_ptr->base).base.model.bone_transform;
  pSVar13 = &(pCVar2->base).model.bone_transform;
  if (pSVar8 != pSVar13) {
    (pSVar8->pose_data).root_position.x = (pSVar13->pose_data).root_position.x;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y =
         (pCVar2->base).model.bone_transform.pose_data.root_position.y;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z =
         (pCVar2->base).model.bone_transform.pose_data.root_position.z;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  pCVar3 = (g_HeroActors[g_LocalHeroIndex]->base).cloth_list.cloths[0];
  pCVar16 = (pCVar3->model).vertex_list;
  pCVar22 = (this_ptr->cloth).model.vertex_list;
  for (uVar10 = (uint)((pCVar3->model).vertex_count * 0xc) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    pCVar22->x = pCVar16->x;
    pCVar16 = (CVector3i *)((int)pCVar16 + (uint)bVar26 * -8 + 4);
    pCVar22 = (CVector3i *)((int)pCVar22 + (uint)bVar26 * -8 + 4);
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    pCVar22 = (CVector3i *)((int)pCVar22 + (uint)bVar26 * -2 + 1);
    pCVar16 = (CVector3i *)((int)pCVar16 + (uint)bVar26 * -2 + 1);
    *(char *)&pCVar22->x = (char)pCVar16->x;
    pCVar16 = pCVar16;
    pCVar22 = pCVar22;
  }
  pCVar4 = this_ptr->mirror_plane_actor;
  if (pCVar4 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_120,&(pCVar4->location).position,&(pCVar4->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_c0,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_f0,&(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
               &(g_HeroActors[g_LocalHeroIndex]->base).base.orient.vec);
    matrix_b = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_90);
    pCVar8 = &local_2a0;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_f0,&local_120,&local_210);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2d0,pCVar8,&local_1e0);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_270,matrix_b,&local_1b0);
    pCVar8 = &local_60;
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(0.0,&local_180);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_240,pCVar8,&local_150);
    (this_ptr->base).base.base.location.position.x = local_150.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_150.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_150.m[2].z;
    pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_60,&local_24);
    pUVar14 = &(this_ptr->base).base.base.orient;
    if (pUVar14 != (UOrientationVector *)pCVar9) {
      (pUVar14->vec).x = pCVar9->x;
      (this_ptr->base).base.base.orient.vec.y = pCVar9->y;
      (this_ptr->base).base.base.orient.vec.z = pCVar9->z;
      return;
    }
  }
  return;
}
