// Name: shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0
// Address: 005cd0b0
// Address Range: [[005cd0b0, 005cd110]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0(CPoly * this_ptr, uint flag_mask)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0(CPoly *this_ptr,uint flag_mask)

{
  CVert *pCVar1;
  
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((((pCVar1[this_ptr->vertex_idx_0].attrib_flags & flag_mask) == flag_mask) &&
      ((pCVar1[this_ptr->vertex_idx_1].attrib_flags & flag_mask) == flag_mask)) &&
     ((pCVar1[this_ptr->vertex_idx_2].attrib_flags & flag_mask) == flag_mask)) {
    return 1;
  }
  return 0;
}
