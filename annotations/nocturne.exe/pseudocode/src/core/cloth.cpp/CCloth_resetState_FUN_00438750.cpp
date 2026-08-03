// Name: core_cloth.cpp_CCloth_resetState_FUN_00438750
// Address: 00438750
// Address Range: [[00438750, 0043877f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(CCloth *this_ptr,int vertex_index)

{
  this_ptr->vertices[vertex_index].collide_bone_index = -1;
  this_ptr->vertices[vertex_index].locked = 0;
  return;
}
