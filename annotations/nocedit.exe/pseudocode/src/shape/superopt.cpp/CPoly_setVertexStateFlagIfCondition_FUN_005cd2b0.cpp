// Name: shape_superopt.cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0
// Address: 005cd2b0
// Address Range: [[005cd2b0, 005cd340]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0 (CPoly *this_ptr,uint flag_to_set,uint condition_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0
          (CPoly *this_ptr,uint flag_to_set,uint condition_mask)

{
  int iVar1;
  CVert *pCVar2;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((pCVar2[iVar1].state_flags & condition_mask) == condition_mask) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | flag_to_set;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~flag_to_set;
  }
  iVar1 = this_ptr->vertex_idx_1;
  if ((pCVar2[iVar1].state_flags & condition_mask) == condition_mask) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | flag_to_set;
  }
  else {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~flag_to_set;
  }
  iVar1 = this_ptr->vertex_idx_2;
  if ((pCVar2[iVar1].state_flags & condition_mask) == condition_mask) {
    pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags | flag_to_set;
    return;
  }
  pCVar2[iVar1].state_flags = pCVar2[iVar1].state_flags & ~flag_to_set;
  return;
}
