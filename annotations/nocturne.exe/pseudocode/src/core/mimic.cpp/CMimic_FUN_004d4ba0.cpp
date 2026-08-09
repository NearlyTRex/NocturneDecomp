// Name: core_mimic.cpp_CMimic_FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4f28]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_FUN_004d4ba0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_FUN_004d4ba0(CMimic *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CSkeleton *pCVar5;
  int iVar6;
  SPose *pSVar7;
  CVector3f *pCVar8;
  uint uVar9;
  int iVar10;
  CVector3f *pCVar11;
  SPose *pSVar12;
  UOrientationVector *pUVar13;
  CMimic *pCVar14;
  CVector3i *pCVar15;
  float *pfVar16;
  CMatrix3x4f *pCVar17;
  CMatrix3x4f *pCVar18;
  CMatrix3x4f *pCVar19;
  CVector3i *pCVar20;
  float *pfVar21;
  float *pfVar22;
  CMatrix3x4f *pCVar23;
  byte bVar24;
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
  
  bVar24 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                     (&(this_ptr->base).base.model);
  local_18 = pCVar5->bone_count;
  pCVar8 = (this_ptr->base).base.model.transformed_vertices;
  local_14 = this_ptr;
  pCVar14 = this_ptr;
  for (iVar6 = 0; iVar4 = g_LocalHeroIndex, iVar6 < local_18; iVar6 = iVar6 + 1) {
    pfVar22 = &(g_HeroActors[g_LocalHeroIndex]->base).model.bone_transform.pose_data.bone_rotations
               [iVar6].w;
    pfVar21 = (float *)((int)pCVar14 + (uint)bVar24 * -8 + 0x804);
    pfVar16 = pfVar22 + (uint)bVar24 * -2 + 1;
    (pCVar14->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar22;
    pfVar22 = pfVar21 + (uint)bVar24 * -2 + 1;
    *pfVar21 = *pfVar16;
    *pfVar22 = pfVar16[(uint)bVar24 * -2 + 1];
    pfVar22[(uint)bVar24 * -2 + 1] = (pfVar16 + (uint)bVar24 * -2 + 1)[(uint)bVar24 * -2 + 1];
    pCVar19 = (g_HeroActors[iVar4]->base).model.bone_transform.bone_world_matrices + iVar6;
    pCVar18 = (local_14->base).base.model.bone_transform.bone_world_matrices;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      pCVar18->m[0].w = pCVar19->m[0].w;
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + (uint)bVar24 * -8 + 4);
    }
    pCVar11 = (g_HeroActors[iVar4]->base).model.transformed_vertices + iVar6;
    if (pCVar8 != pCVar11) {
      pCVar8->x = pCVar11->x;
      pCVar8->y = pCVar11->y;
      pCVar8->z = pCVar11->z;
    }
    pCVar14 = (CMimic *)((pCVar14->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar8 = pCVar8 + 1;
  }
  pCVar1 = g_HeroActors[g_LocalHeroIndex];
  pSVar7 = &(this_ptr->base).base.model.bone_transform;
  pSVar12 = &(pCVar1->base).model.bone_transform;
  if (pSVar7 != pSVar12) {
    (pSVar7->pose_data).root_position.x = (pSVar12->pose_data).root_position.x;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y =
         (pCVar1->base).model.bone_transform.pose_data.root_position.y;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z =
         (pCVar1->base).model.bone_transform.pose_data.root_position.z;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  pCVar2 = (g_HeroActors[g_LocalHeroIndex]->base).cloth_list.cloths[0];
  pCVar15 = (pCVar2->model).vertex_list;
  pCVar20 = (this_ptr->cloth).model.vertex_list;
  for (uVar9 = (uint)((pCVar2->model).vertex_count * 0xc) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pCVar20->x = pCVar15->x;
    pCVar15 = (CVector3i *)((int)pCVar15 + ((uint)bVar24 * -2 + 1) * 4);
    pCVar20 = (CVector3i *)((int)pCVar20 + (uint)bVar24 * -8 + 4);
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(char *)&pCVar20->x = (char)pCVar15->x;
    pCVar15 = (CVector3i *)((int)pCVar15 + (uint)bVar24 * -2 + 1);
    pCVar20 = (CVector3i *)((int)pCVar20 + (uint)bVar24 * -2 + 1);
  }
  pCVar3 = this_ptr->mirror_plane_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_120,&(pCVar3->location).position,&(pCVar3->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_c0,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_f0,&(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
               &(g_HeroActors[g_LocalHeroIndex]->base).base.orient.vec);
    pCVar18 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0.0,&local_90);
    pCVar19 = &local_2a0;
    pCVar17 = &local_90;
    pCVar23 = &local_2a0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar23->m[0].w = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar23 = (CMatrix3x4f *)((int)pCVar23 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_f0,&local_120,&local_210);
    pCVar17 = &local_210;
    pCVar23 = &local_2d0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(float *)pCVar23 = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar23 = (CMatrix3x4f *)((int)pCVar23 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_2d0,pCVar19,&local_1e0);
    pCVar19 = &local_1e0;
    pCVar17 = &local_270;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar17->m[0].w = pCVar19->m[0].w;
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_270,pCVar18,&local_1b0);
    pCVar19 = &local_60;
    pCVar18 = &local_1b0;
    pCVar17 = &local_60;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(0.0,&local_180);
    pCVar18 = &local_180;
    pCVar17 = &local_240;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_240,pCVar19,&local_150);
    pCVar19 = &local_150;
    pCVar18 = &local_60;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar18->m[0].w = pCVar19->m[0].w;
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    (this_ptr->base).base.base.location.position.x = local_60.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_60.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_60.m[2].z;
    pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_60,&local_24);
    pUVar13 = &(this_ptr->base).base.base.orient;
    if ((CVector3f *)pUVar13 != pCVar8) {
      (pUVar13->vec).x = pCVar8->x;
      (this_ptr->base).base.base.orient.vec.y = pCVar8->y;
      (this_ptr->base).base.base.orient.vec.z = pCVar8->z;
      return;
    }
  }
  return;
}
