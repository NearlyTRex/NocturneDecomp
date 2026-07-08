// Name: shape_meshlod.cpp_CLodVert_removeEdge_FUN_00515e00
// Address: 00515e00
// MANUAL RECONSTRUCTION
// Address Range: [[00515e00, 00515e46]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert *this_ptr,int edge_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodVert_removeEdge_FUN_00515e00(CLodVert *this_ptr,int edge_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_meshlod_cpp_CLodVert_findEdge_FUN_00515e50(this_ptr,edge_index);
  if (iVar1 < 0) {
    return;
  }
  iVar2 = this_ptr->adjacent_edge_count + -1;
  this_ptr->adjacent_edge_count = iVar2;
  memmove
            (this_ptr->adjacent_edge_indices + iVar1,this_ptr->adjacent_edge_indices + iVar1 + 1,
             (iVar2 - iVar1) * sizeof(*this_ptr->adjacent_edge_indices));
  return;
}
