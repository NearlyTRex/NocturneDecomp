// Name: shape_superopt.cpp_CObj_setStateFlagIfCondition_FUN_005d34d0
// Address: 005d34d0
// Address Range: [[005d34d0, 005d3583]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_setStateFlagIfCondition_FUN_005d34d0(CObj *this_ptr,uint flag_to_set,uint condition_mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_setStateFlagIfCondition_FUN_005d34d0(CObj *this_ptr,uint flag_to_set,uint condition_mask)

{
  uint uVar1;
  CVert *pCVar2;
  CPoly *this_ptr_00;
  uint set_mask;
  uint clear_mask;
  
  uVar1 = 0;
  pCVar2 = this_ptr->vertex_data;
  if (this_ptr->vertex_count != 0) {
    do {
      if ((pCVar2->state_flags & condition_mask) == condition_mask) {
        pCVar2->state_flags = pCVar2->state_flags | flag_to_set;
      }
      else {
        pCVar2->state_flags = pCVar2->state_flags & ~flag_to_set;
      }
      uVar1 = uVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (uVar1 < (uint)this_ptr->vertex_count);
  }
  uVar1 = 0;
  this_ptr_00 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      if ((this_ptr_00->flags & condition_mask) == condition_mask) {
        clear_mask = 0xffffffff;
        set_mask = flag_to_set;
      }
      else {
        clear_mask = ~flag_to_set;
        set_mask = 0;
      }
      (*this_ptr_00->vtable->setVertexStateFlags)(this_ptr_00,set_mask,clear_mask);
      uVar1 = uVar1 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar1 < (uint)this_ptr->poly_count);
  }
  if ((this_ptr->flags & condition_mask) == condition_mask) {
    this_ptr->flags = this_ptr->flags | flag_to_set;
    return;
  }
  this_ptr->flags = this_ptr->flags & ~flag_to_set;
  return;
}
