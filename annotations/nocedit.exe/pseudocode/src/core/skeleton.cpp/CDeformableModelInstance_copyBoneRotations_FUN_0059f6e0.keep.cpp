// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// Address: 0059f6e0
// MANUAL RECONSTRUCTION
// Address Range: [[0059f6e0, 0059f740] [0060fb79, 0060fb9f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;

  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (this_ptr_00,start_bone_index,bone_index);
      if (-1 < iVar1) {
        (this_ptr->bone_transform).pose_data.bone_rotations[start_bone_index] = *source_quaternions;
      }
      start_bone_index = start_bone_index + 1;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}
