// Name: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
// Address: 00519bc0
// Address Range: [[00519bc0, 00519bdb]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel *this_ptr,int bone_index)

{
  if (this_ptr->num_parts < 2) {
    return 0;
  }
  return this_ptr->bone_to_part_map[bone_index];
}
