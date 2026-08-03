// Name: core_mimic.cpp_FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4f28]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_004d4ba0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_004d4ba0(CMimic *this_ptr)

{
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  SPose *pSVar4;
  CVector3f *pCVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  UOrientationVector *pUVar9;
  int iVar10;
  CMimic *pCVar11;
  int *piVar12;
  float *pfVar13;
  uint *puVar14;
  CVector3i *pCVar15;
  float *pfVar16;
  uint *puVar17;
  CMatrix3x4f *pCVar18;
  byte bVar19;
  uint local_2d0 [12];
  uint local_2a0 [12];
  uint local_270 [12];
  uint local_240 [12];
  uint local_210 [12];
  uint local_1e0 [12];
  float local_1b0 [12];
  uint local_180 [12];
  float local_150 [12];
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  uint local_90 [12];
  CMatrix3x4f local_60;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  CMimic *local_14;
  
  bVar19 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                     (&(this_ptr->base).base.model);
  local_18 = pCVar2->bone_count;
  pCVar5 = (this_ptr->base).base.model.transformed_vertices;
  local_14 = this_ptr;
  pCVar11 = this_ptr;
  for (iVar3 = 0; iVar10 = _DAT_01cae0e8 * 4, iVar3 < local_18; iVar3 = iVar3 + 1) {
    pfVar8 = (float *)(*(int *)(iVar10 + 0x1cae0d8) + 0x800 + iVar3 * 0x10);
    pfVar16 = (float *)((int)pCVar11 + (uint)bVar19 * -8 + 0x804);
    pfVar13 = pfVar8 + (uint)bVar19 * -2 + 1;
    (pCVar11->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar8;
    pfVar8 = pfVar16 + (uint)bVar19 * -2 + 1;
    *pfVar16 = *pfVar13;
    *pfVar8 = pfVar13[(uint)bVar19 * -2 + 1];
    pfVar8[(uint)bVar19 * -2 + 1] = (pfVar13 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    pfVar8 = (float *)(iVar3 * 0x30 + *(int *)(iVar10 + 0x1cae0d8) + 0xfd0);
    pCVar18 = (local_14->base).base.model.bone_transform.bone_world_matrices;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pCVar18->m[0].w = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar19 * -2 + 1;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
    }
    pfVar8 = (float *)(*(int *)(iVar10 + 0x1cae0d8) + 0x1a8 + iVar3 * 0xc);
    if (pCVar5 != (CVector3f *)pfVar8) {
      pCVar5->x = *pfVar8;
      pCVar5->y = pfVar8[1];
      pCVar5->z = pfVar8[2];
    }
    pCVar11 = (CMimic *)((pCVar11->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar5 = pCVar5 + 1;
  }
  iVar3 = *(int *)(iVar10 + 0x1cae0d8);
  pSVar4 = &(this_ptr->base).base.model.bone_transform;
  if (pSVar4 != (SPose *)(iVar3 + 0x7f4)) {
    (pSVar4->pose_data).root_position.x = *(float *)(iVar3 + 0x7f4);
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y = *(float *)(iVar3 + 0x7f8)
    ;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z = *(float *)(iVar3 + 0x7fc)
    ;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  iVar3 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c20);
  piVar12 = *(int **)(iVar3 + 0x10c);
  pCVar15 = (this_ptr->cloth).model.vertex_list;
  for (uVar6 = (uint)(*(int *)(iVar3 + 0x104) * 0xc) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pCVar15->x = *piVar12;
    piVar12 = piVar12 + (uint)bVar19 * -2 + 1;
    pCVar15 = (CVector3i *)((int)pCVar15 + (uint)bVar19 * -8 + 4);
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)&pCVar15->x = (char)*piVar12;
    piVar12 = (int *)((int)piVar12 + (uint)bVar19 * -2 + 1);
    pCVar15 = (CVector3i *)((int)pCVar15 + (uint)bVar19 * -2 + 1);
  }
  pCVar1 = this_ptr->mirror_plane_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_120,&(pCVar1->location).position,&(pCVar1->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_c0,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_f0,(CVector3f *)(iVar3 + 0x20),(CVector3f *)(iVar3 + 0x30));
    pCVar18 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_90);
    puVar14 = local_90;
    puVar17 = local_2a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar17 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_f0,&local_120,local_2a0,pCVar18);
    puVar14 = local_210;
    puVar17 = local_2d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar17 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2d0);
    puVar14 = local_1e0;
    puVar17 = local_270;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar17 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_270);
    pfVar8 = local_1b0;
    pCVar18 = &local_60;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar18->m[0].w = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar19 * -2 + 1;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar19 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(0,&local_60);
    puVar14 = local_180;
    puVar17 = local_240;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar17 = *puVar14;
      puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_240);
    pfVar8 = local_150;
    pCVar18 = &local_60;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar18->m[0].w = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar19 * -2 + 1;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar19 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    (this_ptr->base).base.base.location.position.x = local_60.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_60.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_60.m[2].z;
    pCVar5 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_60,&local_24);
    pUVar9 = &(this_ptr->base).base.base.orient;
    if ((CVector3f *)pUVar9 != pCVar5) {
      (pUVar9->vec).x = pCVar5->x;
      (this_ptr->base).base.base.orient.vec.y = pCVar5->y;
      (this_ptr->base).base.base.orient.vec.z = pCVar5->z;
      return;
    }
  }
  return;
}
