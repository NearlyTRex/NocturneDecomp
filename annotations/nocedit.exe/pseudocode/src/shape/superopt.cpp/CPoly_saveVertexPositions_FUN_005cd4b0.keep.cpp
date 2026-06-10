// Name: shape_superopt.cpp_CPoly_saveVertexPositions_FUN_005cd4b0
// Address: 005cd4b0
// MANUAL RECONSTRUCTION
// Address Range: [[005cd4b0, 005cd559]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_saveVertexPositions_FUN_005cd4b0(CPoly *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_saveVertexPositions_FUN_005cd4b0(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_0;
  pCVar1->orig_position = pCVar1->position;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  pCVar1->orig_position = pCVar1->position;
  pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
  pCVar2->orig_position = pCVar2->position;
  return;
}
