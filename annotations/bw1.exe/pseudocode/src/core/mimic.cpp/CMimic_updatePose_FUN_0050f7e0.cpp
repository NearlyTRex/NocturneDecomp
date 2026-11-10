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
  byte *puVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  UOrientationVector *pUVar9;
  int iVar10;
  CMimic *pCVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  float afStackY_1030 [846];
  uint local_2e8 [12];
  uint local_2b8 [12];
  uint local_288 [12];
  uint local_258 [12];
  uint local_228 [12];
  CMatrix3x4f local_1f8;
  uint local_1c8 [12];
  uint local_198 [12];
  CMatrix3x4f local_168;
  uint local_138 [3];
  float local_12c;
  uint local_11c;
  uint local_10c;
  CMatrix3x4f local_108;
  uint local_d8 [12];
  uint local_a8 [12];
  uint local_78 [12];
  float local_48;
  float local_44 [4];
  uint local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  CMimic *local_14;
  
  bVar15 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     (&(this_ptr->base).base.model);
  local_18 = pCVar2->bone_count;
  local_14 = this_ptr;
  pCVar3 = (this_ptr->base).base.model.bone_origins;
  pCVar11 = this_ptr;
  for (iVar8 = 0; iVar10 = _DAT_01d06ab4 * 4, iVar8 < local_18; iVar8 = iVar8 + 1) {
    puVar12 = (uint *)(*(int *)(iVar10 + 0x1d06aa4) + 0x808 + iVar8 * 0x10);
    puVar13 = (uint *)((int)pCVar11 + (uint)bVar15 * -8 + 0x80c);
    puVar14 = puVar12 + (uint)bVar15 * -2 + 1;
    *(uint *)&(pCVar11->base).base.model.field_0x6b0 = *puVar12;
    puVar12 = puVar13 + (uint)bVar15 * -2 + 1;
    *puVar13 = *puVar14;
    *puVar12 = puVar14[(uint)bVar15 * -2 + 1];
    puVar12[(uint)bVar15 * -2 + 1] = (puVar14 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
    puVar12 = (uint *)(iVar8 * 0x30 + *(int *)(iVar10 + 0x1d06aa4) + 0xfd8);
    puVar14 = (uint *)&(local_14->base).base.model.field_0xe80;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
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
  puVar4 = &(this_ptr->base).base.model.field_0x6a4;
  if ((uint *)puVar4 != (uint *)(iVar8 + 0x7fc)) {
    *(uint *)puVar4 = *(uint *)(iVar8 + 0x7fc);
    *(uint *)&(this_ptr->base).base.model.field_0x6a8 = *(uint *)(iVar8 + 0x800);
    *(uint *)&(this_ptr->base).base.model.field_0x6ac = *(uint *)(iVar8 + 0x804);
  }
  (this_ptr->base).base.model.cached_skinned_lod_index = -1;
  iVar8 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2e34);
  puVar12 = *(uint **)(iVar8 + 0x10c);
  puVar14 = *(uint **)&this_ptr->field_0xc43c;
  for (uVar5 = (uint)(*(int *)(iVar8 + 0x104) * 0xc) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(byte *)puVar14 = *(byte *)puVar12;
    puVar12 = (uint *)((int)puVar12 + (uint)bVar15 * -2 + 1);
    puVar14 = (uint *)((int)puVar14 + (uint)bVar15 * -2 + 1);
  }
  pCVar1 = this_ptr->mirror_plane_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_005b5620(&local_168,&(pCVar1->location).position,&(pCVar1->orient).vec);
    core_xform_cpp_FUN_005b5760
              (&local_108,&(this_ptr->mirror_plane_actor->location).position,
               &(this_ptr->mirror_plane_actor->orient).vec);
    iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    core_xform_cpp_FUN_005b5760(&local_1f8,(CVector3f *)(iVar8 + 0x20),(CVector3f *)(iVar8 + 0x30));
    core_xform_cpp_buildZFlipMatrix_FUN_005b70f0(0,&local_108);
    puVar12 = local_198;
    puVar14 = local_d8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&local_1f8,&local_168,local_d8);
    puVar12 = local_a8;
    puVar14 = local_1c8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_1c8);
    puVar12 = local_78;
    puVar14 = local_2e8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_2e8);
    puVar12 = local_288;
    puVar14 = local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005b7030(0,local_138);
    puVar12 = local_258;
    puVar14 = local_2b8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_2b8);
    puVar12 = local_228;
    puVar14 = local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    local_44[2] = local_12c;
    local_44[3] = (float)local_11c;
    local_34 = local_10c;
    local_24 = local_12c;
    local_44[(uint)bVar15 * -2 + 9] = local_44[(uint)bVar15 * -2 + 3];
    local_44[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         local_44[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    (this_ptr->base).base.base.location.position.x = local_24;
    (this_ptr->base).base.base.location.position.y = local_20;
    (this_ptr->base).base.base.location.position.z = local_1c;
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(local_138);
    pUVar9 = &(this_ptr->base).base.base.orient;
    local_48 = local_30;
    local_44[(uint)bVar15 * -2] = local_44[(uint)bVar15 * -2 + 6];
    local_44[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         local_44[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    if (pUVar9 != (UOrientationVector *)&local_48) {
      (pUVar9->vec).x = local_48;
      (this_ptr->base).base.base.orient.vec.y = local_44[0];
      (this_ptr->base).base.base.orient.vec.z = local_44[1];
      return;
    }
  }
  return;
}
