// Name: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
// Address: 005cdfe0
// Address Range: [[005cdfe0, 005ce092]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = this_ptr->vertex_idx_0;
  this_ptr->vertex_idx_0 = this_ptr->vertex_idx_1;
  this_ptr->vertex_idx_1 = iVar3;
  uVar4 = *(uint *)&this_ptr->uv_coords[0].impl.x;
  uVar5 = *(uint *)((int)&this_ptr->uv_coords[0].impl.x + 4);
  uVar6 = *(uint *)&this_ptr->uv_coords[0].impl.y;
  uVar7 = *(uint *)((int)&this_ptr->uv_coords[0].impl.y + 4);
  *(uint *)&this_ptr->uv_coords[0].impl.x = *(uint *)&this_ptr->uv_coords[1].impl.x;
  *(uint *)((int)&this_ptr->uv_coords[0].impl.x + 4) =
       *(uint *)((int)&this_ptr->uv_coords[1].impl.x + 4);
  *(uint *)&this_ptr->uv_coords[0].impl.y = *(uint *)&this_ptr->uv_coords[1].impl.y;
  *(uint *)((int)&this_ptr->uv_coords[0].impl.y + 4) =
       *(uint *)((int)&this_ptr->uv_coords[1].impl.y + 4);
  *(uint *)&this_ptr->uv_coords[1].impl.x = uVar4;
  *(uint *)((int)&this_ptr->uv_coords[1].impl.x + 4) = uVar5;
  *(uint *)&this_ptr->uv_coords[1].impl.y = uVar6;
  *(uint *)((int)&this_ptr->uv_coords[1].impl.y + 4) = uVar7;
  dVar1 = (this_ptr->normal).impl.y;
  dVar2 = (this_ptr->normal).impl.z;
  (this_ptr->normal).impl.x = -(this_ptr->normal).impl.x;
  (this_ptr->normal).impl.y = -dVar1;
  (this_ptr->normal).impl.z = -dVar2;
  return;
}
