// Name: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
// Address: 00517b10
// Address Range: [[00517b10, 00517b46]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (start_bone_index == target_bone_index) {
      return iVar1;
    }
    start_bone_index = this_ptr->bone_list[start_bone_index].parent_index;
    iVar1 = iVar1 + 1;
  } while (-1 < start_bone_index);
  if (target_bone_index < 0) {
    return iVar1;
  }
  return -1;
}
