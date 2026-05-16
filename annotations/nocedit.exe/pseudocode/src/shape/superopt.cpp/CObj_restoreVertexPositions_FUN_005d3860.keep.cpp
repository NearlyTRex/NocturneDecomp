// Name: shape_superopt.cpp_CObj_restoreVertexPositions_FUN_005d3860
// Address: 005d3860
// MANUAL RECONSTRUCTION
// Address Range: [[005d3860, 005d38a8]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CObj_restoreVertexPositions_FUN_005d3860(CObj *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CObj_restoreVertexPositions_FUN_005d3860(CObj *this_ptr)

{
  uint uVar2;

  uVar2 = 0;
  if (this_ptr->vertex_count != 0) {
    do {
      this_ptr->vertex_data[uVar2].position = this_ptr->vertex_data[uVar2].orig_position;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)this_ptr->vertex_count);
  }
  return;
}
