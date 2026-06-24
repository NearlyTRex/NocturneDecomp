// Name: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
// Address: 005cdfe0
// MANUAL RECONSTRUCTION
// Address Range: [[005cdfe0, 005ce092]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

{
  double dVar1;
  double dVar2;
  int iVar3;
  CP2D tmp;

  iVar3 = this_ptr->vertex_idx_0;
  this_ptr->vertex_idx_0 = this_ptr->vertex_idx_1;
  this_ptr->vertex_idx_1 = iVar3;
  tmp = this_ptr->uv_coords[0];
  this_ptr->uv_coords[0] = this_ptr->uv_coords[1];
  this_ptr->uv_coords[1] = tmp;
  dVar1 = (this_ptr->normal).impl.y;
  dVar2 = (this_ptr->normal).impl.z;
  (this_ptr->normal).impl.x = -(this_ptr->normal).impl.x;
  (this_ptr->normal).impl.y = -dVar1;
  (this_ptr->normal).impl.z = -dVar2;
  return;
}
