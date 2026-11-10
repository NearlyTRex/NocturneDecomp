// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
// Address: 0054dd10
// Address Range: [[0054dd10, 0054df58]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  byte bVar4;
  CSkeleton *apCStackY_1030 [1016];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  CSkeleton *local_30;
  byte *local_2c;
  CSkeleton *local_28;
  CMatrix3x4f *local_24;
  int local_20;
  int local_1c;
  CVector3f *local_18;
  CQuaternion4f *local_14;
  
  bVar4 = 0;
  local_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  local_20 = 0;
  if (0 < local_30->bone_count) {
    local_1c = 0;
    local_2c = &this_ptr->field_0xe80;
    local_14 = (CQuaternion4f *)&this_ptr->field_0x6b0;
    local_18 = this_ptr->bone_origins;
    pCVar1 = this_ptr;
    pCVar2 = this_ptr;
    local_28 = local_30;
    local_24 = (CMatrix3x4f *)local_2c;
    do {
      iVar3 = local_20 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005855f0(local_24,local_14);
      if (*(int *)&pCVar1->field_0xcf0 != 0x3f800000) {
        *(float *)(&this_ptr->field_0xe80 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe80 + iVar3);
        *(float *)(&this_ptr->field_0xe84 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe84 + iVar3);
        *(float *)(&this_ptr->field_0xe88 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe88 + iVar3);
        *(float *)(&this_ptr->field_0xe90 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe90 + iVar3);
        *(float *)(&this_ptr->field_0xe94 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe94 + iVar3);
        *(float *)(&this_ptr->field_0xe98 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xe98 + iVar3);
        *(float *)(&this_ptr->field_0xea0 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xea0 + iVar3);
        *(float *)(&this_ptr->field_0xea4 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xea4 + iVar3);
        *(float *)(&this_ptr->field_0xea8 + iVar3) =
             *(float *)&pCVar1->field_0xcf0 * *(float *)(&this_ptr->field_0xea8 + iVar3);
      }
      if (*(int *)(local_28->bone_list + 0x20) < 0) {
        *(float *)&pCVar2->field_0xe8c =
             *(float *)((int)&this_ptr->bone_origins[0].x + local_1c) +
             *(float *)&this_ptr->field_0x6a4;
        *(float *)&pCVar2->field_0xe9c =
             *(float *)((int)&this_ptr->bone_origins[0].y + local_1c) +
             *(float *)&this_ptr->field_0x6a8;
        *(float *)&pCVar2->field_0xeac =
             *(float *)((int)&this_ptr->bone_origins[0].z + local_1c) +
             *(float *)&this_ptr->field_0x6ac;
      }
      else {
        core_xform_cpp_FUN_00583260
                  ((int)&local_18->x + local_1c,
                   local_2c + *(int *)(local_28->bone_list + 0x20) * 0x30);
        local_48 = local_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        *(uint *)&pCVar2->field_0xe8c = local_48;
        *(uint *)&pCVar2->field_0xe9c = local_44;
        *(uint *)&pCVar2->field_0xeac = local_40;
      }
      pCVar1 = (CDeformableModelInstance *)&(pCVar1->base).current_motion_index;
      pCVar2 = (CDeformableModelInstance *)(pCVar2->base).current_motion_name;
      local_24 = local_24 + 1;
      local_14 = local_14 + 1;
      local_1c = local_1c + 0xc;
      local_28 = (CSkeleton *)&local_28->field_0x24;
      local_20 = local_20 + 1;
    } while (local_20 < local_30->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
