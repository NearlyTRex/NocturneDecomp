// Name: shape_superopt.cpp_CPoly_setVertexStateFlags_FUN_005cd220
// Address: 005cd220
// Address Range: [[005cd220, 005cd2ac]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlags_FUN_005cd220(CPoly *this_ptr,uint set_mask,uint clear_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlags_FUN_005cd220(CPoly *this_ptr,uint set_mask,uint clear_mask)

{
  CVert *pCVar1;
  uint uVar2;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  pCVar1[this_ptr->vertex_idx_0].state_flags =
       pCVar1[this_ptr->vertex_idx_0].state_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_0].state_flags = pCVar1[this_ptr->vertex_idx_0].state_flags | set_mask
  ;
  pCVar1[this_ptr->vertex_idx_1].state_flags =
       pCVar1[this_ptr->vertex_idx_1].state_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_1].state_flags = pCVar1[this_ptr->vertex_idx_1].state_flags | set_mask
  ;
  pCVar1[this_ptr->vertex_idx_2].state_flags =
       pCVar1[this_ptr->vertex_idx_2].state_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_2].state_flags = pCVar1[this_ptr->vertex_idx_2].state_flags | set_mask
  ;
  uVar2 = this_ptr->flags & clear_mask;
  this_ptr->flags = uVar2;
  this_ptr->flags = uVar2 | set_mask;
  return;
}
