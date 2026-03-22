// Name: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
// Address: 0059f6e0
// Address Range: [[0059f6e0, 0059f740] [0060fb79, 0060fb9f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (this_ptr_00,start_bone_index,bone_index);
      if (-1 < iVar1) {
        (this_ptr->bone_transform).pose_data.bone_rotations[0].w = source_quaternions->w;
        (this_ptr->bone_transform).pose_data.bone_rotations[0].x = source_quaternions->x;
        (this_ptr->bone_transform).pose_data.bone_rotations[0].y = source_quaternions->y;
        (this_ptr->bone_transform).pose_data.bone_rotations[0].z = source_quaternions->z;
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).tween_speed;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}
