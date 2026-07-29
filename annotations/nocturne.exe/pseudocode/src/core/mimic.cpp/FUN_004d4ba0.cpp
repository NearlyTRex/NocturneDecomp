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
  CSkeleton *pCVar1;
  int iVar2;
  SPose *pSVar3;
  CVector3f *pCVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  UOrientationVector *pUVar8;
  int iVar9;
  CMimic *pCVar10;
  int *piVar11;
  float *pfVar12;
  uint *puVar13;
  CVector3i *pCVar14;
  float *pfVar15;
  uint *puVar16;
  CMatrix3x4f *pCVar17;
  byte bVar18;
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
  
  bVar18 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                     (&(this_ptr->base).base.model);
  local_18 = pCVar1->bone_count;
  pCVar4 = (this_ptr->base).base.model.transformed_vertices;
  local_14 = this_ptr;
  pCVar10 = this_ptr;
  for (iVar2 = 0; iVar9 = _DAT_01cae0e8 * 4, iVar2 < local_18; iVar2 = iVar2 + 1) {
    pfVar7 = (float *)(*(int *)(iVar9 + 0x1cae0d8) + 0x800 + iVar2 * 0x10);
    pfVar15 = (float *)((int)pCVar10 + (uint)bVar18 * -8 + 0x804);
    pfVar12 = pfVar7 + (uint)bVar18 * -2 + 1;
    (pCVar10->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar7;
    pfVar7 = pfVar15 + (uint)bVar18 * -2 + 1;
    *pfVar15 = *pfVar12;
    *pfVar7 = pfVar12[(uint)bVar18 * -2 + 1];
    pfVar7[(uint)bVar18 * -2 + 1] = (pfVar12 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
    pfVar7 = (float *)(iVar2 * 0x30 + *(int *)(iVar9 + 0x1cae0d8) + 0xfd0);
    pCVar17 = (local_14->base).base.model.bone_transform.bone_world_matrices;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar17->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar18 * -2 + 1;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
    }
    pfVar7 = (float *)(*(int *)(iVar9 + 0x1cae0d8) + 0x1a8 + iVar2 * 0xc);
    if (pCVar4 != (CVector3f *)pfVar7) {
      pCVar4->x = *pfVar7;
      pCVar4->y = pfVar7[1];
      pCVar4->z = pfVar7[2];
    }
    pCVar10 = (CMimic *)((pCVar10->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar4 = pCVar4 + 1;
  }
  iVar2 = *(int *)(iVar9 + 0x1cae0d8);
  pSVar3 = &(this_ptr->base).base.model.bone_transform;
  if (pSVar3 != (SPose *)(iVar2 + 0x7f4)) {
    (pSVar3->pose_data).root_position.x = *(float *)(iVar2 + 0x7f4);
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y = *(float *)(iVar2 + 0x7f8)
    ;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z = *(float *)(iVar2 + 0x7fc)
    ;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  iVar2 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c20);
  piVar11 = *(int **)(iVar2 + 0x10c);
  pCVar14 = (this_ptr->cloth).model.vertex_list;
  for (uVar5 = (uint)(*(int *)(iVar2 + 0x104) * 0xc) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pCVar14->x = *piVar11;
    piVar11 = piVar11 + (uint)bVar18 * -2 + 1;
    pCVar14 = (CVector3i *)((int)pCVar14 + (uint)bVar18 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)&pCVar14->x = (char)*piVar11;
    piVar11 = (int *)((int)piVar11 + (uint)bVar18 * -2 + 1);
    pCVar14 = (CVector3i *)((int)pCVar14 + (uint)bVar18 * -2 + 1);
  }
  iVar2 = (this_ptr->cloth).vertices[0x300].connected_indices[10];
  if (iVar2 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_120,(CVector3f *)(iVar2 + 0x20),(CVector3f *)(iVar2 + 0x30));
    iVar2 = (this_ptr->cloth).vertices[0x300].connected_indices[10];
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_c0,(CVector3f *)(iVar2 + 0x20),(CVector3f *)(iVar2 + 0x30));
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_f0,(CVector3f *)(iVar2 + 0x20),(CVector3f *)(iVar2 + 0x30));
    pCVar17 = &local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_90);
    puVar13 = local_90;
    puVar16 = local_2a0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_f0,&local_120,local_2a0,pCVar17);
    puVar13 = local_210;
    puVar16 = local_2d0;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2d0);
    puVar13 = local_1e0;
    puVar16 = local_270;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_270);
    pfVar7 = local_1b0;
    pCVar17 = &local_60;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar17->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar18 * -2 + 1;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(0,&local_60);
    puVar13 = local_180;
    puVar16 = local_240;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar16 = *puVar13;
      puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar18 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_240);
    pfVar7 = local_150;
    pCVar17 = &local_60;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar17->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar18 * -2 + 1;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    (this_ptr->base).base.base.location.position.x = local_60.m[0].z;
    (this_ptr->base).base.base.location.position.y = local_60.m[1].z;
    (this_ptr->base).base.base.location.position.z = local_60.m[2].z;
    pCVar4 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_60,&local_24);
    pUVar8 = &(this_ptr->base).base.base.orient;
    if ((CVector3f *)pUVar8 != pCVar4) {
      (pUVar8->vec).x = pCVar4->x;
      (this_ptr->base).base.base.orient.vec.y = pCVar4->y;
      (this_ptr->base).base.base.orient.vec.z = pCVar4->z;
      return;
    }
  }
  return;
}
