// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0
// Address: 00568cf0
// Address Range: [[00568cf0, 00568d50]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_00568cf0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630
                        (this_ptr_00,start_bone_index,bone_index);
      if (-1 < iVar1) {
        puVar4 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + 0x6b4);
        puVar2 = (uint *)((int)source_quaternions + (uint)bVar6 * -8 + 4);
        (this_ptr->bone_transform).pose_data.bone_rotations[0].w = source_quaternions->w;
        puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
        *puVar4 = *puVar2;
        *puVar5 = *puVar3;
        puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->base).tween_speed;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}
