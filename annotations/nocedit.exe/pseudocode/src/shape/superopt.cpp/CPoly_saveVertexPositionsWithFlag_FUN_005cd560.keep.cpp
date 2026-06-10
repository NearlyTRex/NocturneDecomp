// Name: shape_superopt.cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560
// Address: 005cd560
// MANUAL RECONSTRUCTION
// Address Range: [[005cd560, 005cd630]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560(CPoly *this_ptr,uint flag_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560(CPoly *this_ptr,uint flag_mask)

{
  CVert *pCVar1;
  CVert *pCVar2;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_0;
  if ((pCVar1->state_flags & flag_mask) == flag_mask) {
    pCVar1->orig_position = pCVar1->position;
  }
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  if ((pCVar1->state_flags & flag_mask) == flag_mask) {
    pCVar1->orig_position = pCVar1->position;
  }
  pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
  if ((pCVar2->state_flags & flag_mask) != flag_mask) {
    return;
  }
  pCVar2->orig_position = pCVar2->position;
  return;
}
