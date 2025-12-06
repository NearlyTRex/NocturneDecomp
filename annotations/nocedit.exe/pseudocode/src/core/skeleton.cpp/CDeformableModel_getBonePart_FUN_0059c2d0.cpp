// Name: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
// Address: 0059c2d0
// Address Range: [[0059c2d0, 0059c2eb]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0(CDeformableModel * this_ptr, int bone_index)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0
          (CDeformableModel *this_ptr,int bone_index)

{
  if (this_ptr->num_parts < 2) {
    return 0;
  }
  return this_ptr->bone_to_part_map[bone_index];
}
