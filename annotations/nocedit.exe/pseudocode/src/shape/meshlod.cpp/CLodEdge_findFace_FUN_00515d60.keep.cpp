// Name: shape_meshlod.cpp_CLodEdge_findFace_FUN_00515d60
// Address: 00515d60
// MANUAL RECONSTRUCTION
// Address Range: [[00515d60, 00515d8c]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(CLodEdge *this_ptr,int tri_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(CLodEdge *this_ptr,int tri_index)

{
  int iVar1;

  iVar1 = 0;
  if (0 < this_ptr->adjacent_tri_count) {
    do {
      if (tri_index == this_ptr->adjacent_tri_indices[iVar1]) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->adjacent_tri_count);
  }
  return -1;
}
