// Name: core_mimic.cpp_CMimic_updatePose_FUN_0050f7e0
// Address: 0050f7e0
// Address Range: [[0050f7e0, 0050fb9c]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0050f7e0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_0050f7e0(CMimic *this_ptr)

{
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  SPose *pSVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  UOrientationVector *pUVar9;
  int iVar10;
  CMimic *pCVar11;
  int *piVar12;
  float *pfVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  CMatrix3x4f *pCVar16;
  CVector3i *pCVar17;
  float *pfVar18;
  CMatrix3x4f *pCVar19;
  byte bVar20;
  float afStackY_1030 [846];
  CMatrix3x4f local_2e8;
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
  
  bVar20 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     (&(this_ptr->base).base.model);
  local_18 = pCVar2->bone_count;
  local_14 = this_ptr;
  pCVar3 = (this_ptr->base).base.model.bone_origins;
  pCVar11 = this_ptr;
  for (iVar8 = 0; iVar10 = _DAT_01d06ab4 * 4, iVar8 < local_18; iVar8 = iVar8 + 1) {
    pfVar7 = (float *)(*(int *)(iVar10 + 0x1d06aa4) + 0x808 + iVar8 * 0x10);
    pfVar18 = (float *)((int)pCVar11 + (uint)bVar20 * -8 + 0x80c);
    pfVar13 = pfVar7 + (uint)bVar20 * -2 + 1;
    (pCVar11->base).base.model.bone_transform.pose_data.bone_rotations[0].w = *pfVar7;
    pfVar7 = pfVar18 + (uint)bVar20 * -2 + 1;
    *pfVar18 = *pfVar13;
    *pfVar7 = pfVar13[(uint)bVar20 * -2 + 1];
    pfVar7[(uint)bVar20 * -2 + 1] = (pfVar13 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
    pfVar7 = (float *)(iVar8 * 0x30 + *(int *)(iVar10 + 0x1d06aa4) + 0xfd8);
    pCVar16 = (local_14->base).base.model.bone_transform.bone_model_matrices;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      pCVar16->m[0].w = *pfVar7;
      pfVar7 = pfVar7 + (uint)bVar20 * -2 + 1;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + (uint)bVar20 * -8 + 4);
    }
    pfVar7 = (float *)(*(int *)(iVar10 + 0x1d06aa4) + 0x1b0 + iVar8 * 0xc);
    if (pCVar3 != (CVector3f *)pfVar7) {
      pCVar3->x = *pfVar7;
      pCVar3->y = pfVar7[1];
      pCVar3->z = pfVar7[2];
    }
    pCVar11 = (CMimic *)((pCVar11->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    pCVar3 = pCVar3 + 1;
  }
  iVar8 = *(int *)(iVar10 + 0x1d06aa4);
  pSVar4 = &(this_ptr->base).base.model.bone_transform;
  if (pSVar4 != (SPose *)(iVar8 + 0x7fc)) {
    (pSVar4->pose_data).root_position.x = *(float *)(iVar8 + 0x7fc);
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.y = *(float *)(iVar8 + 0x800)
    ;
    (this_ptr->base).base.model.bone_transform.pose_data.root_position.z = *(float *)(iVar8 + 0x804)
    ;
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  iVar8 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2e34);
  piVar12 = *(int **)(iVar8 + 0x10c);
  pCVar17 = (this_ptr->cloth).model.vertex_list;
  for (uVar5 = (uint)(*(int *)(iVar8 + 0x104) * 0xc) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pCVar17->x = *piVar12;
    piVar12 = piVar12 + (uint)bVar20 * -2 + 1;
    pCVar17 = (CVector3i *)((int)pCVar17 + (uint)bVar20 * -8 + 4);
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(char *)&pCVar17->x = (char)*piVar12;
    piVar12 = (int *)((int)piVar12 + (uint)bVar20 * -2 + 1);
    pCVar17 = (CVector3i *)((int)pCVar17 + (uint)bVar20 * -2 + 1);
  }
  pCVar1 = this_ptr->mirror_plane_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_005b5620(&local_168,&(pCVar1->location).position,&(pCVar1->orient).vec);
    core_xform_cpp_FUN_005b5760
              (&local_108,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    core_xform_cpp_FUN_005b5760(&local_1f8,(CVector3f *)(iVar8 + 0x20),(CVector3f *)(iVar8 + 0x30));
    pCVar16 = &local_108;
    core_xform_cpp_buildZFlipMatrix_FUN_005b70f0(0.0,&local_198);
    pCVar15 = &local_d8;
    pCVar14 = &local_198;
    pCVar19 = &local_d8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar19->m[0].w = pCVar14->m[0].w;
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1f8,&local_168,&local_a8);
    pCVar14 = &local_a8;
    pCVar19 = &local_1c8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar19->m[0].w = pCVar14->m[0].w;
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1c8,pCVar15,&local_78);
    pCVar15 = &local_78;
    pCVar14 = &local_2e8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(float *)pCVar14 = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2e8,pCVar16,&local_288);
    pCVar16 = &local_138;
    pCVar15 = &local_288;
    pCVar14 = &local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar14->m[0].w = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005b7030(0.0,&local_258);
    pCVar15 = &local_258;
    pCVar14 = &local_2b8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar14->m[0].w = pCVar15->m[0].w;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_2b8,pCVar16,&local_228);
    pCVar16 = &local_228;
    pCVar15 = &local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pCVar15->m[0].w = pCVar16->m[0].w;
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar20 * -2 + 1) * 4);
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar20 * -2 + 1) * 4);
    }
    local_44[2] = local_138.m[0].z;
    local_44[3] = local_138.m[1].z;
    local_34 = local_138.m[2].z;
    local_24 = local_138.m[0].z;
    local_44[(uint)bVar20 * -2 + 9] = local_44[(uint)bVar20 * -2 + 3];
    local_44[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 10] =
         local_44[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 4];
    (this_ptr->base).base.base.location.position.x = local_24;
    (this_ptr->base).base.base.location.position.y = local_20;
    (this_ptr->base).base.base.location.position.z = local_1c;
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&local_138);
    pUVar9 = &(this_ptr->base).base.base.orient;
    local_48 = local_30;
    local_44[(uint)bVar20 * -2] = local_44[(uint)bVar20 * -2 + 6];
    local_44[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
         local_44[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 7];
    if (pUVar9 != (UOrientationVector *)&local_48) {
      (pUVar9->vec).x = local_48;
      (this_ptr->base).base.base.orient.vec.y = local_44[0];
      (this_ptr->base).base.base.orient.vec.z = local_44[1];
      return;
    }
  }
  return;
}
