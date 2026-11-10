// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
// Address: 0056acc0
// Address Range: [[0056acc0, 0056ad88]]
// Convention: __cdecl
// Signature: SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

#include "nocturne.h"

SPose * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0(CDeformableModelInstance *this_ptr,SPose *bone_transform)

{
  SPose *pSVar1;
  CSkeleton *pCVar2;
  SPose *pSVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  SPose *pSVar8;
  byte bVar9;
  CDeformableModelInstance *local_14;
  CDeformableModelInstance *local_10;
  SPose *local_c;
  
  bVar9 = 0;
  if (bone_transform != (SPose *)&this_ptr->field_0x6a4) {
    *(uint *)bone_transform = *(uint *)&this_ptr->field_0x6a4;
    *(uint *)(bone_transform + 4) = *(uint *)&this_ptr->field_0x6a8;
    *(uint *)(bone_transform + 8) = *(uint *)&this_ptr->field_0x6ac;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  pSVar1 = (SPose *)pCVar2->bone_count;
  iVar5 = 0;
  pSVar8 = pSVar1;
  if (0 < (int)pSVar1) {
    local_10 = this_ptr;
    local_c = bone_transform;
    local_14 = this_ptr;
    pSVar3 = bone_transform;
    do {
      pSVar8 = bone_transform + (uint)bVar9 * -8 + 0x10;
      puVar6 = (uint *)((int)local_14 + (uint)bVar9 * -8 + 0x6b4);
      *(uint *)(bone_transform + 0xc) = *(uint *)&local_14->field_0x6b0;
      puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
      *(uint *)pSVar8 = *puVar6;
      *(uint *)(pSVar8 + (uint)bVar9 * -8 + 4) = *puVar7;
      *(uint *)(pSVar8 + (uint)bVar9 * -8 + 4 + (uint)bVar9 * -8 + 4) =
           puVar7[(uint)bVar9 * -2 + 1];
      pSVar8 = pSVar3 + 0x30;
      *(uint *)(local_c + 0x64c) = *(uint *)&this_ptr->field_0xcf0;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->base).current_motion_index;
      bone_transform = bone_transform + 0x10;
      puVar6 = (uint *)&local_10->field_0xe80;
      pSVar3 = pSVar3 + 0x7dc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pSVar3 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pSVar3 = pSVar3 + (uint)bVar9 * -8 + 4;
      }
      iVar5 = iVar5 + 1;
      local_10 = (CDeformableModelInstance *)(local_10->base).current_motion_name;
      local_c = local_c + 4;
      local_14 = (CDeformableModelInstance *)&(local_14->base).tween_speed;
      pSVar3 = pSVar8;
    } while (iVar5 < (int)pSVar1);
  }
  return pSVar8;
}
