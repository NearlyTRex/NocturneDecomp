// Name: shape_superopt.cpp_CObj_projectAllPlanarUVs_FUN_005d3e40
// Address: 005d3e40
// MANUAL RECONSTRUCTION
// Address Range: [[005d3e40, 005d3e76]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj *this_ptr,CVector2d *uv_scale)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj *this_ptr,CVector2d *uv_scale)

{
  uint uVar2;

  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      (*this_ptr->poly_array[uVar2].vtable->projectUVPlanar)(&this_ptr->poly_array[uVar2],uv_scale);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}
