// Name: shape_superopt.cpp_CObj_setStateFlags_FUN_005d3440
// Address: 005d3440
// Address Range: [[005d3440, 005d34c7]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_setStateFlags_FUN_005d3440(CObj * this_ptr, uint set_mask, uint clear_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_setStateFlags_FUN_005d3440(CObj *this_ptr,uint set_mask,uint clear_mask)

{
  CVert *pCVar1;
  uint uVar2;
  uint uVar3;
  CPoly *this_ptr_00;
  
  pCVar1 = this_ptr->vertex_data;
  uVar3 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      uVar2 = pCVar1->state_flags & clear_mask;
      pCVar1->state_flags = uVar2;
      pCVar1->state_flags = uVar2 | set_mask;
      uVar3 = uVar3 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar3 < (uint)this_ptr->vertex_count);
  }
  this_ptr_00 = this_ptr->poly_array;
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar3 = uVar3 + 1;
      (*this_ptr_00->vtable->setVertexStateFlags)(this_ptr_00,set_mask,clear_mask);
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  uVar3 = this_ptr->flags & clear_mask;
  this_ptr->flags = uVar3;
  this_ptr->flags = uVar3 | set_mask;
  return;
}
