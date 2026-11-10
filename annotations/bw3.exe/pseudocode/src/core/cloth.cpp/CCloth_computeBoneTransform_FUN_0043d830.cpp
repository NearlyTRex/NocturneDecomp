// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043d830
// Address: 0043d830
// Address Range: [[0043d830, 0043d9ad]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043d830(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043d830(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_100c [944];
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_a8;
  uint local_98;
  uint local_88;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14 [2];
  
  bVar5 = 0;
  iVar2 = bone_index * 0xac;
  core_xform_cpp_inverse_FUN_00584560
            (&model_ptr->field_0xe80 + *(int *)(this_ptr + iVar2 + 0x37b90) * 0x30);
  puVar3 = (uint *)&stack0xffffffac;
  puVar4 = (uint *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&stack0xffffff7c,this_ptr + iVar2 + 0x37b98);
  puVar3 = (uint *)&stack0xfffffeec;
  puVar4 = &stack0xfffffebc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(uint *)(this_ptr + iVar2 + 0x37bc8) = local_144;
  *(uint *)(this_ptr + iVar2 + 0x37bcc) = local_134;
  *(uint *)(this_ptr + iVar2 + 0x37bd0) = local_124;
  *(uint *)(this_ptr + iVar2 + 0x37bd4) = local_140;
  *(uint *)(this_ptr + iVar2 + 0x37bd8) = local_130;
  *(uint *)(this_ptr + iVar2 + 0x37bdc) = local_120;
  *(uint *)(this_ptr + iVar2 + 0x37be0) = local_13c;
  *(uint *)(this_ptr + iVar2 + 0x37be4) = local_12c;
  *(uint *)(this_ptr + iVar2 + 0x37be8) = local_11c;
  core_xform_cpp_inverse_FUN_00584560(&stack0xfffffebc);
  puVar3 = (uint *)&stack0xffffff1c;
  puVar4 = (uint *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_24 = local_a8;
  local_20 = local_98;
  local_1c = local_88;
  local_18 = local_a8;
  local_14[(uint)bVar5 * -2] = (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe];
  local_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (&stack0xffffffe0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (this_ptr + iVar2 + 0x37bf0 == (CCloth *)&local_18) {
    return;
  }
  *(uint *)(this_ptr + iVar2 + 0x37bf0) = local_18;
  *(uint *)(this_ptr + iVar2 + 0x37bf4) = local_14[0];
  *(uint *)(this_ptr + iVar2 + 0x37bf8) = local_14[1];
  return;
}
