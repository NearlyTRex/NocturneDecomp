// Name: shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50
// Address: 00515e50
// Address Range: [[00515e50, 00515e85]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodVert_findEdge_FUN_00515e50(CLodVert * this_ptr, int edge_index)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodVert_findEdge_FUN_00515e50(CLodVert *this_ptr,int edge_index)

{
  int iVar1;
  CLodVert *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->adjacent_edge_count) {
    do {
      if (edge_index == pCVar2->adjacent_edge_indices[0]) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CLodVert *)&(pCVar2->position).y;
    } while (iVar1 < this_ptr->adjacent_edge_count);
  }
  return -1;
}
