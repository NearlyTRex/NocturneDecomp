// Name: shape_superopt.cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0
// Address: 005d3df0
// Address Range: [[005d3df0, 005d3e3a]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0(CObj * this_ptr, uint flag_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0(CObj *this_ptr,uint flag_mask)

{
  CPoly *this_ptr_00;
  uint uVar1;
  
  this_ptr_00 = this_ptr->poly_array;
  uVar1 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      while ((this_ptr_00->flags & flag_mask) == flag_mask) {
        (*this_ptr_00->vtable->flipNormal)(this_ptr_00);
        uVar1 = uVar1 + 1;
        this_ptr_00 = this_ptr_00 + 1;
        if ((uint)this_ptr->poly_count <= uVar1) {
          return;
        }
      }
      uVar1 = uVar1 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (uVar1 < (uint)this_ptr->poly_count);
  }
  return;
}
