// Name: shape_superopt.cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0
// Address: 005d3ed0
// MANUAL RECONSTRUCTION
// Address Range: [[005d3ed0, 005d3f06]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj *this_ptr,int material_id)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj *this_ptr,int material_id)

{
  uint uVar2;

  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      (*this_ptr->poly_array[uVar2].vtable->setMaterialId)(&this_ptr->poly_array[uVar2],material_id);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}
