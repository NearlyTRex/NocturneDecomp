// Name: shape_superopt.cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
// Address: 005cbe20
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  
  bVar6 = 0;
  shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(this_ptr,edges,edge_count);
  pvVar1 = realloc(this_ptr->edge_array,(this_ptr->edge_count + 1) * 8);
  if (pvVar1 != (void *)0x0) {
    this_ptr->edge_array = pvVar1;
    piVar5 = (int *)((int)this_ptr->edge_array + this_ptr->edge_count * 8);
    piVar2 = shape_memdbg_cpp_malloc_FUN_006021da(edge_count * 0x60);
    piVar5[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      for (uVar3 = (uint)(edge_count * 0x60) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar2 = edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar6 * -8 + 4);
        piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(char *)piVar2 = (char)edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar6 * -2 + 1);
        piVar2 = (int *)((int)piVar2 + (uint)bVar6 * -2 + 1);
      }
      *piVar5 = edge_count;
      this_ptr->edge_count = this_ptr->edge_count + 1;
      return;
    }
  }
  return;
}
