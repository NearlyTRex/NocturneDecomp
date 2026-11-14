// Name: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110
// Address: 00547110
// Address Range: [[00547110, 00547164]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                        (this_ptr_00,start_bone_index,target_bone_index);
      if (-1 < iVar1) {
        (this_ptr->bone_transform).bone_scales[0] =
             (this_ptr->bone_transform).bone_scales[0] * scale_factor;
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->base).current_motion_index;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}
