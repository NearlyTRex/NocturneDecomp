// Name: shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
// Address: 005cbe20
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  int iVar1;
  SEdgeChainEntry *pSVar2;
  SExpandedEdge *pSVar3;
  int iVar4;
  byte bVar5;
  
  bVar5 = 0;
  shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(this_ptr,edges,edge_count);
  pSVar2 = (SEdgeChainEntry *)realloc(this_ptr->edge_array,(this_ptr->edge_count + 1) * 8);
  if (pSVar2 != (SEdgeChainEntry *)0x0) {
    this_ptr->edge_array = pSVar2;
    iVar1 = this_ptr->edge_count;
    pSVar2 = this_ptr->edge_array;
    pSVar3 = shape_memdbg_cpp_malloc_FUN_006021da(edge_count * 0x60);
    pSVar2[iVar1].edges = pSVar3;
    if (pSVar3 != (SExpandedEdge *)0x0) {
      for (iVar4 = (edge_count * 3 & 0x7ffffffU) << 3; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar3->start_vertex_index = edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar5 * -8 + 4);
        pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)&pSVar3->start_vertex_index = (char)edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar5 * -2 + 1);
        pSVar3 = (SExpandedEdge *)((int)pSVar3 + (uint)bVar5 * -2 + 1);
      }
      pSVar2[iVar1].edge_count = edge_count;
      this_ptr->edge_count = this_ptr->edge_count + 1;
      return 1;
    }
  }
  return 0;
}
