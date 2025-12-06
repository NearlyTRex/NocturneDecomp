// Name: shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0
// Address: 005cd3c0
// Address Range: [[005cd3c0, 005cd40f]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0(CPoly * this_ptr, uint mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0(CPoly *this_ptr,uint mask)

{
  CVert *pCVar1;
  uint uVar2;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  uVar2 = ~mask;
  pCVar1[this_ptr->vertex_idx_0].state_flags = pCVar1[this_ptr->vertex_idx_0].state_flags & uVar2;
  pCVar1[this_ptr->vertex_idx_1].state_flags = pCVar1[this_ptr->vertex_idx_1].state_flags & uVar2;
  pCVar1[this_ptr->vertex_idx_2].state_flags = pCVar1[this_ptr->vertex_idx_2].state_flags & uVar2;
  this_ptr->flags = this_ptr->flags & uVar2;
  return;
}
