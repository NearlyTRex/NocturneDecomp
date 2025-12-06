// Name: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
// Address: 0059a100
// Address Range: [[0059a100, 0059a136]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
          (CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

{
  int iVar1;
  
  iVar1 = 0;
  if (start_bone_index != target_bone_index) {
    do {
      start_bone_index = this_ptr->bone_list[start_bone_index].parent_index;
      iVar1 = iVar1 + 1;
      if (start_bone_index < 0) {
        if (target_bone_index < 0) {
          return iVar1;
        }
        return -1;
      }
    } while (start_bone_index != target_bone_index);
  }
  return iVar1;
}
