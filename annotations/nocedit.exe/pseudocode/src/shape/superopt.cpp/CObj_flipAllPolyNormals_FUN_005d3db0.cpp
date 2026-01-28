// Name: shape_superopt.cpp_CObj_flipAllPolyNormals_FUN_005d3db0
// Address: 005d3db0
// Address Range: [[005d3db0, 005d3de3]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_flipAllPolyNormals_FUN_005d3db0(CObj *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_flipAllPolyNormals_FUN_005d3db0(CObj *this_ptr)

{
  CPoly *this_ptr_00;
  uint uVar1;
  
  this_ptr_00 = this_ptr->poly_array;
  uVar1 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar1 = uVar1 + 1;
      (*this_ptr_00->vtable->flipNormal)(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar1 < (uint)this_ptr->poly_count);
  }
  return;
}
