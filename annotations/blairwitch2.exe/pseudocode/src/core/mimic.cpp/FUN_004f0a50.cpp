// Name: core_mimic.cpp_FUN_004f0a50
// Address: 004f0a50
// Address Range: [[004f0a50, 004f0e0c]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_004f0a50(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_004f0a50(CMimic *this_ptr)

{
  CSkeleton *pCVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  CMimic *pCVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int aiStackY_1030 [846];
  byte local_1f8 [48];
  uint local_1c8 [12];
  uint local_198 [12];
  CMatrix3x4f local_168 [48];
  uint local_138 [3];
  uint local_12c;
  uint local_11c;
  uint local_10c;
  byte local_108 [48];
  uint local_d8 [12];
  uint local_a8 [12];
  uint local_78 [12];
  uint local_48;
  int local_44 [4];
  uint local_34;
  uint local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  CMimic *local_14;
  
  bVar11 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  local_18 = *(int *)&pCVar1->field_0x1d1f8;
  local_14 = this_ptr;
  puVar2 = (uint *)&this_ptr->field_0x30c;
  pCVar8 = this_ptr;
  for (iVar6 = 0; iVar7 = _DAT_01cedef4 * 4, iVar6 < local_18; iVar6 = iVar6 + 1) {
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1cedee4) + 0x964 + iVar6 * 0x10);
    puVar9 = (uint *)((int)pCVar8 + (uint)bVar11 * -8 + 0x968);
    puVar10 = puVar5 + (uint)bVar11 * -2 + 1;
    *(uint *)&pCVar8->field_0x964 = *puVar5;
    puVar5 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar9 = *puVar10;
    *puVar5 = puVar10[(uint)bVar11 * -2 + 1];
    puVar5[(uint)bVar11 * -2 + 1] = (puVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    puVar5 = (uint *)(iVar6 * 0x30 + *(int *)(iVar7 + 0x1cedee4) + 0x1134);
    puVar10 = (uint *)&local_14->field_0x1134;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1cedee4) + 0x30c + iVar6 * 0xc);
    if (puVar2 != puVar5) {
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
    }
    pCVar8 = (CMimic *)&pCVar8->field_0x10;
    local_14 = (CMimic *)&local_14->field_0x30;
    puVar2 = puVar2 + 3;
  }
  iVar6 = *(int *)(iVar7 + 0x1cedee4);
  if ((uint *)&this_ptr->field_0x958 != (uint *)(iVar6 + 0x958)) {
    *(uint *)&this_ptr->field_0x958 = *(uint *)(iVar6 + 0x958);
    *(uint *)&this_ptr->field_0x95c = *(uint *)(iVar6 + 0x95c);
    *(uint *)&this_ptr->field_0x960 = *(uint *)(iVar6 + 0x960);
  }
  *(uint *)&this_ptr->field_0x24e4 = 0xffffffff;
  iVar6 = *(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2ea0);
  puVar2 = *(uint **)(iVar6 + 0x10c);
  puVar5 = *(uint **)&this_ptr->field_0x10ccc;
  for (uVar3 = (uint)(*(int *)(iVar6 + 0x104) * 0xc) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(byte *)puVar5 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + (uint)bVar11 * -2 + 1);
    puVar5 = (uint *)((int)puVar5 + (uint)bVar11 * -2 + 1);
  }
  iVar6 = *(int *)&this_ptr->field_0x4b6f4;
  if (iVar6 != 0) {
    core_xform_cpp_FUN_00591ad0(local_168,(CVector3f *)(iVar6 + 0x20),(CVector3f *)(iVar6 + 0x30));
    core_xform_cpp_FUN_00591c10
              (local_108,*(int *)&this_ptr->field_0x4b6f4 + 0x20,
               *(int *)&this_ptr->field_0x4b6f4 + 0x30);
    iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    core_xform_cpp_FUN_00591c10(local_1f8,iVar6 + 0x20,iVar6 + 0x30);
    core_xform_cpp_FUN_005935a0(0,local_108);
    puVar2 = local_198;
    puVar5 = local_d8;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1f8,local_168,local_d8);
    puVar2 = local_a8;
    puVar5 = local_1c8;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(local_1c8);
    puVar2 = local_78;
    puVar5 = (uint *)&stack0xfffffd18;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd18);
    puVar2 = (uint *)&stack0xfffffd78;
    puVar5 = local_138;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_FUN_005934e0(0,local_138);
    puVar2 = (uint *)&stack0xfffffda8;
    puVar5 = (uint *)&stack0xfffffd48;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&stack0xfffffd48);
    puVar2 = (uint *)&stack0xfffffdd8;
    puVar5 = local_138;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar11 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
    }
    local_44[2] = local_12c;
    local_44[3] = local_11c;
    local_34 = local_10c;
    local_24 = local_12c;
    local_44[(uint)bVar11 * -2 + 9] = local_44[(uint)bVar11 * -2 + 3];
    local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    *(uint *)&this_ptr->field_0x20 = local_24;
    *(uint *)&this_ptr->field_0x24 = local_20;
    *(uint *)&this_ptr->field_0x28 = local_1c;
    core_xform_cpp_FUN_00591de0(local_138);
    local_48 = local_30;
    local_44[(uint)bVar11 * -2] = local_44[(uint)bVar11 * -2 + 6];
    local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_44[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if ((uint *)&this_ptr->field_0x30 != &local_48) {
      *(uint *)&this_ptr->field_0x30 = local_48;
      *(int *)&this_ptr->field_0x34 = local_44[0];
      *(int *)&this_ptr->field_0x38 = local_44[1];
      return;
    }
  }
  return;
}
