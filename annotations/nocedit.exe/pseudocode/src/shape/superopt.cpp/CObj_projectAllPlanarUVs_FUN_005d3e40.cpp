// Name: shape_superopt.cpp_CObj_projectAllPlanarUVs_FUN_005d3e40
// Address: 005d3e40
// Address Range: [[005d3e40, 005d3e76]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj *this_ptr,CVector2d *uv_scale)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40(CObj *this_ptr,CVector2d *uv_scale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x68;
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar1) + 0x4c))();
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}
