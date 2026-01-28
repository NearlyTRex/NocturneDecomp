// Name: shape_superopt.cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0
// Address: 005cd1a0
// Address Range: [[005cd1a0, 005cd21f]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0(CPoly *this_ptr,uint flag_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0(CPoly *this_ptr,uint flag_mask)

{
  int iVar1;
  CVert *pCVar2;
  uint uVar3;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  uVar3 = ~flag_mask;
  pCVar2[iVar1].attrib_flags =
       ~(pCVar2[iVar1].attrib_flags & flag_mask) & flag_mask | pCVar2[iVar1].attrib_flags & uVar3;
  iVar1 = this_ptr->vertex_idx_1;
  pCVar2[iVar1].attrib_flags =
       ~(pCVar2[iVar1].attrib_flags & flag_mask) & flag_mask | pCVar2[iVar1].attrib_flags & uVar3;
  iVar1 = this_ptr->vertex_idx_2;
  pCVar2[iVar1].attrib_flags =
       ~(pCVar2[iVar1].attrib_flags & flag_mask) & flag_mask | uVar3 & pCVar2[iVar1].attrib_flags;
  return;
}
