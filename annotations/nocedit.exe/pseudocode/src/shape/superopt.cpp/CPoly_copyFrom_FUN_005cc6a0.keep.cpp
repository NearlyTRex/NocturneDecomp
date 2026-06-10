// Name: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
// MANUAL RECONSTRUCTION
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

{
  this_ptr->parent_obj = parent_obj;
  memcpy(&this_ptr->vertex_idx_0, &source->vertex_idx_0, sizeof(int) * 3);
  memcpy(this_ptr->uv_coords, source->uv_coords, sizeof(this_ptr->uv_coords));
  this_ptr->material_id = source->material_id;
  this_ptr->flags = source->flags;
  this_ptr->normal = source->normal;
  return;
}
