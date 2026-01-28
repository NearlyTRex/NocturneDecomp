// Name: shape_superopt.cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
// Address: 005d3e80
// Address Range: [[005d3e80, 005d3ecf]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80 (CObj *this_ptr,CVector2d *uv_scale,uint flag_mask)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80
          (CObj *this_ptr,CVector2d *uv_scale,uint flag_mask)

{
  CPoly *this_ptr_00;
  uint uVar1;
  
  this_ptr_00 = this_ptr->poly_array;
  uVar1 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      while ((this_ptr_00->flags & flag_mask) == flag_mask) {
        (*this_ptr_00->vtable->projectUVPlanar)(this_ptr_00,uv_scale);
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
