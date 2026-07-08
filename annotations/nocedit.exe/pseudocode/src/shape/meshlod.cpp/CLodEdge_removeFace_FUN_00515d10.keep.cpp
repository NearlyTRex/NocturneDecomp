// Name: shape_meshlod.cpp_CLodEdge_removeFace_FUN_00515d10
// Address: 00515d10
// MANUAL RECONSTRUCTION
// Address Range: [[00515d10, 00515d50]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge *this_ptr,int tri_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodEdge_removeFace_FUN_00515d10(CLodEdge *this_ptr,int tri_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_meshlod_cpp_CLodEdge_findFace_FUN_00515d60(this_ptr,tri_index);
  if (iVar1 < 0) {
    return;
  }
  iVar2 = this_ptr->adjacent_tri_count + -1;
  this_ptr->adjacent_tri_count = iVar2;
  memmove
            (this_ptr->adjacent_tri_indices + iVar1,this_ptr->adjacent_tri_indices + iVar1 + 1,
             (iVar2 - iVar1) * sizeof(*this_ptr->adjacent_tri_indices));
  return;
}
