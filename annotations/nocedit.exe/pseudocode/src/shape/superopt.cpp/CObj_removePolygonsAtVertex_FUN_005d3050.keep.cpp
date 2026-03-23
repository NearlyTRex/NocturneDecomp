// Name: shape_superopt.cpp_CObj_removePolygonsAtVertex_FUN_005d3050
// Address: 005d3050
// MANUAL RECONSTRUCTION
// Address Range: [[005d3050, 005d30bb]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj *this_ptr,int vertex_index)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050(CObj *this_ptr,int vertex_index)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint index;

  index = 0;
  if (this_ptr->poly_count == 0) {
    return 1;
  }
  do {
    piVar1 = &this_ptr->poly_array[index].vertex_idx_0;
    uVar3 = 0;
    iVar2 = *piVar1;
    while (vertex_index != iVar2) {
      piVar1 = piVar1 + 1;
      uVar3 = uVar3 + 1;
      if ((int *)this_ptr->poly_array[index].uv_coords <= piVar1) break;
      iVar2 = *piVar1;
    }
    if (uVar3 < 3) {
      iVar2 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
      if (iVar2 == 0) {
        return 0;
      }
      if ((uint)this_ptr->poly_count <= index) {
        return 1;
      }
    }
    else {
      index = index + 1;
      if ((uint)this_ptr->poly_count <= index) {
        return 1;
      }
    }
  } while( true );
}
