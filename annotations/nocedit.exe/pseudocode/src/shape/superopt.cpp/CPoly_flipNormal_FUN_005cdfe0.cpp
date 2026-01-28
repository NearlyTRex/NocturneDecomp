// Name: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
// Address: 005cdfe0
// Address Range: [[005cdfe0, 005ce092]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = this_ptr->vertex_idx_0;
  this_ptr->vertex_idx_0 = this_ptr->vertex_idx_1;
  this_ptr->vertex_idx_1 = iVar1;
  uVar2 = *(uint *)&this_ptr->uv_coords[0].x;
  uVar3 = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
  uVar4 = *(uint *)&this_ptr->uv_coords[0].y;
  uVar5 = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
  *(uint *)&this_ptr->uv_coords[0].x = *(uint *)&this_ptr->uv_coords[1].x;
  *(uint *)((int)&this_ptr->uv_coords[0].x + 4) =
       *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
  *(uint *)&this_ptr->uv_coords[0].y = *(uint *)&this_ptr->uv_coords[1].y;
  *(uint *)((int)&this_ptr->uv_coords[0].y + 4) =
       *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
  *(uint *)&this_ptr->uv_coords[1].x = uVar2;
  *(uint *)((int)&this_ptr->uv_coords[1].x + 4) = uVar3;
  *(uint *)&this_ptr->uv_coords[1].y = uVar4;
  *(uint *)((int)&this_ptr->uv_coords[1].y + 4) = uVar5;
  (this_ptr->normal).x = -(this_ptr->normal).x;
  (this_ptr->normal).y = -(this_ptr->normal).y;
  (this_ptr->normal).z = -(this_ptr->normal).z;
  return;
}
