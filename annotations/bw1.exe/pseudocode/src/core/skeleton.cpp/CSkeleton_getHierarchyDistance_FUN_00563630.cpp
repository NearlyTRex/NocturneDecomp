// Name: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00563630
// Address: 00563630
// Address Range: [[00563630, 00563666]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00563630(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (start_bone_index == target_bone_index) {
      return iVar1;
    }
    start_bone_index = *(int *)(this_ptr->bone_list + start_bone_index * 0x24 + 0x20);
    iVar1 = iVar1 + 1;
  } while (-1 < start_bone_index);
  if (target_bone_index < 0) {
    return iVar1;
  }
  return -1;
}
