// Name: shape_superopt.cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350
// Address: 005cd350
// Address Range: [[005cd350, 005cd3be]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350(CPoly *this_ptr,uint flag_to_set,uint attrib_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350(CPoly *this_ptr,uint flag_to_set,uint attrib_mask)

{
  CVert *pCVar1;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((pCVar1[this_ptr->vertex_idx_0].attrib_flags & attrib_mask) == attrib_mask) {
    pCVar1[this_ptr->vertex_idx_0].state_flags =
         pCVar1[this_ptr->vertex_idx_0].state_flags | flag_to_set;
  }
  if ((pCVar1[this_ptr->vertex_idx_1].attrib_flags & attrib_mask) == attrib_mask) {
    pCVar1[this_ptr->vertex_idx_1].state_flags =
         pCVar1[this_ptr->vertex_idx_1].state_flags | flag_to_set;
  }
  if ((pCVar1[this_ptr->vertex_idx_2].attrib_flags & attrib_mask) != attrib_mask) {
    return;
  }
  pCVar1[this_ptr->vertex_idx_2].state_flags =
       pCVar1[this_ptr->vertex_idx_2].state_flags | flag_to_set;
  return;
}
