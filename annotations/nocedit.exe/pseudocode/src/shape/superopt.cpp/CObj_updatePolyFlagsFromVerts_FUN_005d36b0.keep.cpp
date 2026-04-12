// Name: shape_superopt.cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0
// Address: 005d36b0
// MANUAL RECONSTRUCTION
// Address Range: [[005d36b0, 005d375f]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj *this_ptr,uint mask)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0(CObj *this_ptr,uint mask)

{
  CPoly *poly;
  int iVar3;
  uint local_1c;
  bool bVar1;

  poly = this_ptr->poly_array;
  bVar1 = true;
  local_1c = 0;
  if (this_ptr->poly_count != 0) {
    do {
      iVar3 = 0;
      if ((this_ptr->vertex_data[poly->vertex_idx_0].state_flags & mask) == mask) {
        iVar3 = 1;
        if ((this_ptr->vertex_data[poly->vertex_idx_1].state_flags & mask) == mask) {
          iVar3 = 2;
          if ((this_ptr->vertex_data[poly->vertex_idx_2].state_flags & mask) == mask) {
            iVar3 = 3;
          }
        }
      }
      if (iVar3 == 3) {
        poly->flags = poly->flags | mask;
      }
      else {
        poly->flags = poly->flags & ~mask;
        bVar1 = false;
      }
      poly = poly + 1;
      local_1c = local_1c + 1;
    } while (local_1c < (uint)this_ptr->poly_count);
  }
  if (!bVar1) {
    this_ptr->flags = this_ptr->flags & ~mask;
    return;
  }
  this_ptr->flags = this_ptr->flags | mask;
  return;
}
