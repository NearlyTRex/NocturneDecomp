// Name: core_cloth.cpp_CCloth_resetState_FUN_004421a0
// Address: 004421a0
// Address Range: [[004421a0, 004421cf]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_resetState_FUN_004421a0(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_resetState_FUN_004421a0(CCloth *this_ptr,int vertex_index)

{
  this_ptr->vertices[vertex_index].collide_bone_index = -1;
  this_ptr->vertices[vertex_index].locked = 0;
  return;
}
