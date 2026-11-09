// Name: core_skeleton.cpp_FUN_0054e340
// Address: 0054e340
// Address Range: [[0054e340, 0054e394]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e340(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e340(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  start_bone_index = 0;
  if (0 < *(int *)&this_ptr_00->field_0x1de78) {
    do {
      iVar1 = core_skeleton_cpp_FUN_005481d0(this_ptr_00,start_bone_index,target_bone_index);
      if (-1 < iVar1) {
        *(float *)&this_ptr->field_0xcf0 = *(float *)&this_ptr->field_0xcf0 * scale_factor;
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&this_ptr->field_0x4;
    } while (start_bone_index < *(int *)&this_ptr_00->field_0x1de78);
  }
  return;
}
