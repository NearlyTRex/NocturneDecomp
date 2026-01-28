// Name: shape_superopt.cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410
// Address: 005cd410
// Address Range: [[005cd410, 005cd4a0]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410 (CPoly *this_ptr,uint set_mask,uint attrib_test)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410
          (CPoly *this_ptr,uint set_mask,uint attrib_test)

{
  int iVar1;
  CVert *pCVar2;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((pCVar2[iVar1].attrib_flags & attrib_test) == attrib_test) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | set_mask;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~set_mask;
  }
  iVar1 = this_ptr->vertex_idx_1;
  if ((pCVar2[iVar1].attrib_flags & attrib_test) == attrib_test) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | set_mask;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~set_mask;
  }
  iVar1 = this_ptr->vertex_idx_2;
  if ((pCVar2[iVar1].attrib_flags & attrib_test) == attrib_test) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | set_mask;
    return;
  }
  pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~set_mask;
  return;
}
