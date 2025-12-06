// Name: shape_superopt.cpp_CPoly_setVertexAttribFlags_FUN_005cd120
// Address: 005cd120
// Address Range: [[005cd120, 005cd19d]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_setVertexAttribFlags_FUN_005cd120(CPoly * this_ptr, uint set_mask, uint clear_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_setVertexAttribFlags_FUN_005cd120
          (CPoly *this_ptr,uint set_mask,uint clear_mask)

{
  CVert *pCVar1;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  pCVar1[this_ptr->vertex_idx_0].attrib_flags =
       pCVar1[this_ptr->vertex_idx_0].attrib_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_0].attrib_flags =
       pCVar1[this_ptr->vertex_idx_0].attrib_flags | set_mask;
  pCVar1[this_ptr->vertex_idx_1].attrib_flags =
       pCVar1[this_ptr->vertex_idx_1].attrib_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_1].attrib_flags =
       pCVar1[this_ptr->vertex_idx_1].attrib_flags | set_mask;
  pCVar1[this_ptr->vertex_idx_2].attrib_flags =
       pCVar1[this_ptr->vertex_idx_2].attrib_flags & clear_mask;
  pCVar1[this_ptr->vertex_idx_2].attrib_flags =
       pCVar1[this_ptr->vertex_idx_2].attrib_flags | set_mask;
  return;
}
