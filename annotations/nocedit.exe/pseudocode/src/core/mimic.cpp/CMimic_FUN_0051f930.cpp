// Name: core_mimic.cpp_CMimic_FUN_0051f930
// Address: 0051f930
// Address Range: [[0051f930, 0051fcb8]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_FUN_0051f930(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_FUN_0051f930(CMimic *this_ptr)

{
  CQuaternion4f *pCVar1;
  CHero *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CSkeleton *pCVar5;
  int iVar6;
  SBoneTransformData *pSVar7;
  CVector3f *pCVar8;
  uint uVar9;
  int iVar10;
  CVector3f *pCVar11;
  SBoneTransformData *pSVar12;
  COrientation *pCVar13;
  CMimic *pCVar14;
  uint *puVar15;
  CMatrix3x4f *pCVar16;
  CMatrix3x4f *pCVar17;
  CMatrix3x4f *pCVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  CMatrix3x4f *pCVar22;
  byte bVar23;
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
  
  bVar23 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&(this_ptr->base).base.model);
  local_18 = pCVar5->bone_count;
  pCVar8 = (this_ptr->base).base.model.transformed_vertices;
  local_14 = this_ptr;
  pCVar14 = this_ptr;
  for (iVar6 = 0; iVar4 = g_LocalHeroIndex, iVar6 < local_18; iVar6 = iVar6 + 1) {
    pCVar1 = (g_HeroActors[g_LocalHeroIndex]->base).model.bone_transform.bone_rotations + iVar6;
    puVar20 = (uint *)((int)pCVar14 + (uint)bVar23 * -8 + 0x80c);
    puVar15 = (uint *)((int)pCVar1 + ((uint)bVar23 * -2 + 1) * 4);
    (pCVar14->base).base.model.bone_transform.bone_rotations[0].w = pCVar1->w;
    puVar21 = puVar20 + (uint)bVar23 * -2 + 1;
    puVar19 = puVar15 + (uint)bVar23 * -2 + 1;
    *puVar20 = *puVar15;
    *puVar21 = *puVar19;
    puVar21[(uint)bVar23 * -2 + 1] = puVar19[(uint)bVar23 * -2 + 1];
    pCVar18 = (g_HeroActors[iVar4]->base).model.bone_transform.bone_world_matrices + iVar6;
    pCVar17 = (local_14->base).base.model.bone_transform.bone_world_matrices;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + (uint)bVar23 * -8 + 4);
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
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  pSVar7 = &(this_ptr->base).base.model.bone_transform;
  pSVar12 = &(pCVar2->base).model.bone_transform;
  if (pSVar7 != pSVar12) {
    (pSVar7->root_position).x = (pSVar12->root_position).x;
    (this_ptr->base).base.model.bone_transform.root_position.y =
         (pCVar2->base).model.bone_transform.root_position.y;
    (this_ptr->base).base.model.bone_transform.root_position.z =
         (pCVar2->base).model.bone_transform.root_position.z;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  iVar6 = *(int *)((g_HeroActors[g_LocalHeroIndex]->base).cloth_data + 400);
  puVar15 = *(uint **)(iVar6 + 0x10c);
  puVar19 = *(uint **)(this_ptr->unk3 + 0x10c);
  for (uVar9 = (uint)(*(int *)(iVar6 + 0x104) * 0xc) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar19 = *puVar15;
    puVar15 = puVar15 + (uint)bVar23 * -2 + 1;
    puVar19 = puVar19 + (uint)bVar23 * -2 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(byte *)puVar19 = *(byte *)puVar15;
    puVar15 = (uint *)((int)puVar15 + (uint)bVar23 * -2 + 1);
    puVar19 = (uint *)((int)puVar19 + (uint)bVar23 * -2 + 1);
  }
  pCVar3 = this_ptr->mirror_plane_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_120,&(pCVar3->location).position,(CVector3f *)&pCVar3->orient);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_c0,&(this_ptr->mirror_plane_actor->location).position,
               (CVector3f *)&this_ptr->mirror_plane_actor->orient);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_f0,&(g_HeroActors[g_LocalHeroIndex]->base).base.location.position,
               (CVector3f *)&(g_HeroActors[g_LocalHeroIndex]->base).base.orient);
    pCVar17 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0(0.0,&local_90);
    pCVar18 = &local_2a0;
    pCVar16 = &local_90;
    pCVar22 = &local_2a0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar22->m[0].w = pCVar16->m[0].w;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar23 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_f0,&local_120,&local_210);
    pCVar16 = &local_210;
    pCVar22 = &local_2d0;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(float *)pCVar22 = pCVar16->m[0].w;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar23 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2d0,pCVar18,&local_1e0);
    pCVar18 = &local_1e0;
    pCVar16 = &local_270;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar16->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar23 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_270,pCVar17,&local_1b0);
    pCVar18 = &local_60;
    pCVar17 = &local_1b0;
    pCVar16 = &local_60;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar16->m[0].w = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar23 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005f6ee0(0.0,&local_180);
    pCVar17 = &local_180;
    pCVar16 = &local_240;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar16->m[0].w = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar23 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_240,pCVar18,&local_150);
    pCVar18 = &local_150;
    pCVar17 = &local_60;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar23 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar23 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    (this_ptr->base).base.base.location.position.x = local_60.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_60.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_60.m[2].z;
    pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_60,&local_24);
    pCVar13 = &(this_ptr->base).base.base.orient;
    if (pCVar13 != (COrientation *)pCVar8) {
      pCVar13->pitch = pCVar8->x;
      (this_ptr->base).base.base.orient.bank = pCVar8->y;
      (this_ptr->base).base.base.orient.heading = pCVar8->z;
      return;
    }
  }
  return;
}
