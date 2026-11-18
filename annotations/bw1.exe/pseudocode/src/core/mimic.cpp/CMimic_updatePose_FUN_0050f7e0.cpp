// Name: core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0
// Address: 0050f7e0
// Address Range: [[0050f7e0, 0050fb9c]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0050f7e0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0050f7e0(CMimic *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CSkeleton *pCVar5;
  CVector3f *pCVar6;
  SPose *pSVar7;
  uint uVar8;
  int iVar9;
  CVector3f *pCVar10;
  int iVar11;
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
  CMatrix3x4f *pCVar22;
  float *pfVar23;
  byte bVar24;
  float afStackY_1030 [846];
  CVector3f *in_stack_fffffd18;
  CMatrix3x4f local_2b8;
  CMatrix3x4f local_288;
  CMatrix3x4f local_258;
  CMatrix3x4f local_228;
  CMatrix3x4f local_1f8;
  CMatrix3x4f local_1c8;
  CMatrix3x4f local_198;
  CMatrix3x4f local_168;
  CMatrix3x4f local_138;
  CMatrix3x4f local_108;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  CMatrix3x4f local_78;
  float local_48;
  float local_44 [4];
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  CMimic *local_14;
  
  bVar24 = 0;
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     (&(this_ptr->base).base.model);
  local_18 = pCVar5->bone_count;
  local_14 = this_ptr;
  pCVar6 = (this_ptr->base).base.model.bone_origins;
  pCVar14 = this_ptr;
  for (iVar11 = 0; iVar4 = g_INT_01d06ab4, iVar11 < local_18; iVar11 = iVar11 + 1) {
    pfVar23 = &(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).model.bone_transform.pose_data.
               bone_rotations[iVar11].w;
    pfVar21 = (float *)((int)pCVar14 + (uint)bVar24 * -8 + 0x80c);
    pfVar16 = pfVar23 + (uint)bVar24 * -2 + 1;
    (pCVar14->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar23;
    pfVar23 = pfVar21 + (uint)bVar24 * -2 + 1;
    *pfVar21 = *pfVar16;
    *pfVar23 = pfVar16[(uint)bVar24 * -2 + 1];
    pfVar23[(uint)bVar24 * -2 + 1] = (pfVar16 + (uint)bVar24 * -2 + 1)[(uint)bVar24 * -2 + 1];
    pCVar19 = (g_CHero_PTR_ARRAY_01d06aa4[iVar4]->base).model.bone_transform.bone_model_matrices +
              iVar11;
    pCVar18 = (local_14->base).base.model.bone_transform.bone_model_matrices;
    for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
      pCVar18->m[0].w = pCVar19->m[0].w;
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + (uint)bVar24 * -8 + 4);
    }
    pCVar10 = (g_CHero_PTR_ARRAY_01d06aa4[iVar4]->base).model.bone_origins + iVar11;
    if (pCVar6 != pCVar10) {
      pCVar6->x = pCVar10->x;
      pCVar6->y = pCVar10->y;
      pCVar6->z = pCVar10->z;
    }
    pCVar14 = (CMimic *)((pCVar14->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar6 = pCVar6 + 1;
  }
  pCVar1 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
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
  pCVar2 = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).cloth_list.cloths[0];
  pCVar15 = (pCVar2->model).vertex_list;
  pCVar20 = (this_ptr->cloth).model.vertex_list;
  for (uVar8 = (uint)((pCVar2->model).vertex_count * 0xc) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    pCVar20->x = pCVar15->x;
    pCVar15 = (CVector3i *)((int)pCVar15 + ((uint)bVar24 * -2 + 1) * 4);
    pCVar20 = (CVector3i *)((int)pCVar20 + (uint)bVar24 * -8 + 4);
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(char *)&pCVar20->x = (char)pCVar15->x;
    pCVar15 = (CVector3i *)((int)pCVar15 + (uint)bVar24 * -2 + 1);
    pCVar20 = (CVector3i *)((int)pCVar20 + (uint)bVar24 * -2 + 1);
  }
  pCVar3 = this_ptr->mirror_plane_actor;
  if (pCVar3 != (CDemonActor *)0x0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005b5620
              (&local_168,&(pCVar3->location).position,&(pCVar3->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              (&local_108,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
              (&local_1f8,&(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.location.position
               ,&(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).base.orient.vec);
    pCVar19 = &local_108;
    core_xform_cpp_buildZFlipMatrix_FUN_005b70f0(0.0,&local_198);
    pCVar18 = &local_d8;
    pCVar17 = &local_198;
    pCVar22 = &local_d8;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar22->m[0].w = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1f8,&local_168,&local_a8);
    pCVar17 = &local_a8;
    pCVar22 = &local_1c8;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar22->m[0].w = pCVar17->m[0].w;
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1c8,pCVar18,&local_78);
    pCVar18 = &local_78;
    pfVar23 = (float *)&stack0xfffffd18;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar23 = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
      pfVar23 = pfVar23 + (uint)bVar24 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
              ((CMatrix3x4f *)&stack0xfffffd18,pCVar19,&local_288);
    pCVar19 = &local_138;
    pCVar18 = &local_288;
    pCVar17 = &local_138;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005b7030(0.0,&local_258);
    pCVar18 = &local_258;
    pCVar17 = &local_2b8;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar17->m[0].w = pCVar18->m[0].w;
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar17 = (CMatrix3x4f *)((int)pCVar17 + ((uint)bVar24 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2b8,pCVar19,&local_228);
    pCVar19 = &local_228;
    pCVar18 = &local_138;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      pCVar18->m[0].w = pCVar19->m[0].w;
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
      pCVar18 = (CMatrix3x4f *)((int)pCVar18 + ((uint)bVar24 * -2 + 1) * 4);
    }
    local_44[2] = local_138.m[0].z;
    local_44[3] = local_138.m[1].z;
    local_34 = local_138.m[2].z;
    local_24 = local_138.m[0].z;
    local_44[(uint)bVar24 * -2 + 9] = local_44[(uint)bVar24 * -2 + 3];
    local_44[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 10] =
         local_44[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 4];
    (this_ptr->base).base.base.location.position.x = local_24;
    (this_ptr->base).base.base.location.position.y = local_20;
    (this_ptr->base).base.base.location.position.z = local_1c;
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_138,in_stack_fffffd18);
    pUVar13 = &(this_ptr->base).base.base.orient;
    local_48 = local_30;
    local_44[(uint)bVar24 * -2] = local_44[(uint)bVar24 * -2 + 6];
    local_44[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1] =
         local_44[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 7];
    if (pUVar13 != (UOrientationVector *)&local_48) {
      (pUVar13->vec).x = local_48;
      (this_ptr->base).base.base.orient.vec.y = local_44[0];
      (this_ptr->base).base.base.orient.vec.z = local_44[1];
      return;
    }
  }
  return;
}
