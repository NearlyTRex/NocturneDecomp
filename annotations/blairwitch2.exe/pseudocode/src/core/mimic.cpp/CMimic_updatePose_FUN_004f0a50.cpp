// Name: core_mimic.cpp_CMimic_updatePose_FUN_004f0a50
// Address: 004f0a50
// Address Range: [[004f0a50, 004f0e0c]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_004f0a50(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_updatePose_FUN_004f0a50(CMimic *this_ptr)

{
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  uint *puVar3;
  byte *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  UOrientationVector *pUVar9;
  int iVar10;
  CMimic *pCVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  float afStackY_1030 [846];
  byte local_1f8 [48];
  uint local_1c8 [12];
  uint local_198 [12];
  CMatrix3x4f local_168;
  uint local_138 [3];
  uint local_12c;
  uint local_11c;
  uint local_10c;
  byte local_108 [48];
  uint local_d8 [12];
  uint local_a8 [12];
  uint local_78 [12];
  float local_48;
  float local_44 [4];
  uint local_34;
  float local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  CMimic *local_14;
  
  bVar14 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     (&(this_ptr->base).base.model);
  local_18 = pCVar2->bone_count;
  local_14 = this_ptr;
  puVar3 = (uint *)&(this_ptr->base).base.model.field_0x58;
  pCVar11 = this_ptr;
  for (iVar8 = 0; iVar10 = _DAT_01cedef4 * 4, iVar8 < local_18; iVar8 = iVar8 + 1) {
    puVar7 = (uint *)(*(int *)(iVar10 + 0x1cedee4) + 0x964 + iVar8 * 0x10);
    puVar12 = (uint *)((int)pCVar11 + (uint)bVar14 * -8 + 0x968);
    puVar13 = puVar7 + (uint)bVar14 * -2 + 1;
    *(uint *)&(pCVar11->base).base.model.field_0x6b0 = *puVar7;
    puVar7 = puVar12 + (uint)bVar14 * -2 + 1;
    *puVar12 = *puVar13;
    *puVar7 = puVar13[(uint)bVar14 * -2 + 1];
    puVar7[(uint)bVar14 * -2 + 1] = (puVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
    puVar7 = (uint *)(iVar8 * 0x30 + *(int *)(iVar10 + 0x1cedee4) + 0x1134);
    puVar13 = (uint *)&(local_14->base).base.model.field_0xe80;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar7;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    puVar7 = (uint *)(*(int *)(iVar10 + 0x1cedee4) + 0x30c + iVar8 * 0xc);
    if (puVar3 != puVar7) {
      *puVar3 = *puVar7;
      puVar3[1] = puVar7[1];
      puVar3[2] = puVar7[2];
    }
    pCVar11 = (CMimic *)((pCVar11->base).base.base.actor_name + 0x10);
    local_14 = (CMimic *)&(local_14->base).base.base.orient;
    puVar3 = puVar3 + 3;
  }
  iVar8 = *(int *)(iVar10 + 0x1cedee4);
  puVar4 = &(this_ptr->base).base.model.field_0x6a4;
  if ((uint *)puVar4 != (uint *)(iVar8 + 0x958)) {
    *(uint *)puVar4 = *(uint *)(iVar8 + 0x958);
    *(uint *)&(this_ptr->base).base.model.field_0x6a8 = *(uint *)(iVar8 + 0x95c);
    *(uint *)&(this_ptr->base).base.model.field_0x6ac = *(uint *)(iVar8 + 0x960);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x2230 = 0xffffffff;
  iVar8 = *(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2ea0);
  puVar3 = *(uint **)(iVar8 + 0x10c);
  puVar7 = *(uint **)&this_ptr->field_0x10ccc;
  for (uVar5 = (uint)(*(int *)(iVar8 + 0x104) * 0xc) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(byte *)puVar7 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + (uint)bVar14 * -2 + 1);
    puVar7 = (uint *)((int)puVar7 + (uint)bVar14 * -2 + 1);
  }
  pCVar1 = this_ptr->mirror_plane_actor;
  if (pCVar1 != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_00591ad0(&local_168,(CVector3f *)&pCVar1->field_0x20,&(pCVar1->orient).vec);
    core_xform_cpp_FUN_00591c10
              (local_108,&this_ptr->mirror_plane_actor->field_0x20,
               &this_ptr->mirror_plane_actor->orient);
    iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    core_xform_cpp_FUN_00591c10(local_1f8,iVar8 + 0x20,iVar8 + 0x30);
    core_xform_cpp_buildZFlipMatrix_FUN_005935a0(0,local_108);
    puVar3 = local_198;
    puVar7 = local_d8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1f8,&local_168,local_d8);
    puVar3 = local_a8;
    puVar7 = local_1c8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1c8);
    puVar3 = local_78;
    puVar7 = (uint *)&stack0xfffffd18;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd18);
    puVar3 = (uint *)&stack0xfffffd78;
    puVar7 = local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_buildXFlipMatrix_FUN_005934e0(0,local_138);
    puVar3 = (uint *)&stack0xfffffda8;
    puVar7 = (uint *)&stack0xfffffd48;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd48);
    puVar3 = (uint *)&stack0xfffffdd8;
    puVar7 = local_138;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    local_44[2] = (float)local_12c;
    local_44[3] = (float)local_11c;
    local_34 = local_10c;
    local_24 = local_12c;
    local_44[(uint)bVar14 * -2 + 9] = local_44[(uint)bVar14 * -2 + 3];
    local_44[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
         local_44[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    *(uint *)&(this_ptr->base).base.base.field_0x20 = local_24;
    *(uint *)&(this_ptr->base).base.base.field_0x24 = local_20;
    *(uint *)&(this_ptr->base).base.base.field_0x28 = local_1c;
    core_xform_cpp_matrixToEulerAngles_FUN_00591de0(local_138);
    pUVar9 = &(this_ptr->base).base.base.orient;
    local_48 = local_30;
    local_44[(uint)bVar14 * -2] = local_44[(uint)bVar14 * -2 + 6];
    local_44[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_44[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    if (pUVar9 != (UOrientationVector *)&local_48) {
      (pUVar9->vec).x = local_48;
      (this_ptr->base).base.base.orient.vec.y = local_44[0];
      (this_ptr->base).base.base.orient.vec.z = local_44[1];
      return;
    }
  }
  return;
}
