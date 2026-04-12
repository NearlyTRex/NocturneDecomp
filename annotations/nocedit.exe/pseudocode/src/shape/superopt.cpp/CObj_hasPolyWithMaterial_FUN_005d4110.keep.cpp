// Name: shape_superopt.cpp_CObj_hasPolyWithMaterial_FUN_005d4110
// Address: 005d4110
// MANUAL RECONSTRUCTION
// Address Range: [[005d4110, 005d4155]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_hasPolyWithMaterial_FUN_005d4110(CObj *this_ptr,int material_id)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_hasPolyWithMaterial_FUN_005d4110(CObj *this_ptr,int material_id)

{
  int iVar1;
  uint uVar3;

  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      iVar1 = (*this_ptr->poly_array[uVar3].vtable->getMaterialId)(&this_ptr->poly_array[uVar3]);
      if (iVar1 == material_id) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  return 0;
}
