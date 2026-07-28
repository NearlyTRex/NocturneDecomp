// Name: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
// Address: 00519bc0
// Address Range: [[00519bc0, 00519bdb]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00519bc0(CDeformableModel *this_ptr,int bone_index)

{
  if (this_ptr->texture_sets[0].textures[0x28].textures[0].base.type < 2) {
    return 0;
  }
  return *(int *)(this_ptr->texture_sets[1].textures[0x37].textures[2].texture_name +
                 bone_index * 4 + 0xc);
}
