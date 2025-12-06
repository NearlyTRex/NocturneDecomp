// Name: shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640
// Address: 005cd640
// Address Range: [[005cd640, 005cd6e9]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_restoreVertexPositions_FUN_005cd640(CPoly *this_ptr)

{
  CVert *pCVar1;
  CVert *pCVar2;
  
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar1 = pCVar2 + this_ptr->vertex_idx_0;
  *(uint *)&(pCVar1->position).x = *(uint *)&(pCVar1->orig_position).x;
  *(uint *)((int)&(pCVar1->position).x + 4) =
       *(uint *)((int)&(pCVar1->orig_position).x + 4);
  *(uint *)&(pCVar1->position).y = *(uint *)&(pCVar1->orig_position).y;
  *(uint *)((int)&(pCVar1->position).y + 4) =
       *(uint *)((int)&(pCVar1->orig_position).y + 4);
  *(uint *)&(pCVar1->position).z = *(uint *)&(pCVar1->orig_position).z;
  *(uint *)((int)&(pCVar1->position).z + 4) =
       *(uint *)((int)&(pCVar1->orig_position).z + 4);
  pCVar1 = pCVar2 + this_ptr->vertex_idx_1;
  *(uint *)&(pCVar1->position).x = *(uint *)&(pCVar1->orig_position).x;
  *(uint *)((int)&(pCVar1->position).x + 4) =
       *(uint *)((int)&(pCVar1->orig_position).x + 4);
  *(uint *)&(pCVar1->position).y = *(uint *)&(pCVar1->orig_position).y;
  *(uint *)((int)&(pCVar1->position).y + 4) =
       *(uint *)((int)&(pCVar1->orig_position).y + 4);
  *(uint *)&(pCVar1->position).z = *(uint *)&(pCVar1->orig_position).z;
  *(uint *)((int)&(pCVar1->position).z + 4) =
       *(uint *)((int)&(pCVar1->orig_position).z + 4);
  pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
  *(uint *)&(pCVar2->position).x = *(uint *)&(pCVar2->orig_position).x;
  *(uint *)((int)&(pCVar2->position).x + 4) =
       *(uint *)((int)&(pCVar2->orig_position).x + 4);
  *(uint *)&(pCVar2->position).y = *(uint *)&(pCVar2->orig_position).y;
  *(uint *)((int)&(pCVar2->position).y + 4) =
       *(uint *)((int)&(pCVar2->orig_position).y + 4);
  *(uint *)&(pCVar2->position).z = *(uint *)&(pCVar2->orig_position).z;
  *(uint *)((int)&(pCVar2->position).z + 4) =
       *(uint *)((int)&(pCVar2->orig_position).z + 4);
  return;
}
