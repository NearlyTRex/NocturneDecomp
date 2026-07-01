// Name: shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
// Address: 005cbe20
// MANUAL RECONSTRUCTION
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  SEdgeChainEntry *pSVar2;
  SEdgeChainEntry *entry;
  SExpandedEdge *new_edges;

  shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(this_ptr,edges,edge_count);
  pSVar2 = (SEdgeChainEntry *)realloc(this_ptr->edge_array,(this_ptr->edge_count + 1) * sizeof(SEdgeChainEntry));
  if (pSVar2 != (SEdgeChainEntry *)0x0) {
    this_ptr->edge_array = pSVar2;
    entry = &this_ptr->edge_array[this_ptr->edge_count];
    new_edges = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(edge_count * sizeof(SExpandedEdge));
    entry->edges = new_edges;
    if (new_edges != (SExpandedEdge *)0x0) {
      memcpy(new_edges,edges,edge_count * 0x60);
      entry->edge_count = edge_count;
      this_ptr->edge_count = this_ptr->edge_count + 1;
      return 1;
    }
  }
  return 0;
}
