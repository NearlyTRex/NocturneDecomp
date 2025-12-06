// Name: shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
// Address: 005d35e0
// Address Range: [[005d35e0, 005d3649]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0(CObj * this_ptr, uint mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(CObj *this_ptr,uint mask)

{
  CVert *pCVar1;
  CPoly *this_ptr_00;
  uint uVar2;
  
  pCVar1 = this_ptr->vertex_data;
  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      pCVar1->state_flags = pCVar1->state_flags & ~mask;
      uVar2 = uVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  this_ptr_00 = this_ptr->poly_array;
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar2 = uVar2 + 1;
      (*this_ptr_00->vtable->clearVertexStateFlags)(this_ptr_00,mask);
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  this_ptr->flags = this_ptr->flags & ~mask;
  return;
}
