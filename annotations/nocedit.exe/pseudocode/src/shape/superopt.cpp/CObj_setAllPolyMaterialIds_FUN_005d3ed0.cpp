// Name: shape_superopt.cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0
// Address: 005d3ed0
// Address Range: [[005d3ed0, 005d3f06]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj *this_ptr,int material_id)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj *this_ptr,int material_id)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this_ptr->poly_count != 0) {
    iVar3 = 0;
    do {
      iVar1 = (int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar3;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x68;
      (**(code **)(*(int *)(iVar1 + 100) + 0x50))(iVar1,material_id);
    } while (uVar2 < (uint)this_ptr->poly_count);
  }
  return;
}
