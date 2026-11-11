// Name: core_cloth.cpp_FUN_005b1980
// Address: 005b1980
// Address Range: [[005b1980, 005b19af]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_005b1980(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_005b1980(CCloth *this_ptr,int vertex_index)

{
  this_ptr->vertices[vertex_index].collide_bone_index = -1;
  this_ptr->vertices[vertex_index].locked = 0;
  return;
}
