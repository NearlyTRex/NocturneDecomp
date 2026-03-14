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
  int iVar3;
  int *piVar4;
  byte bVar5;
  
  bVar5 = 0;
  shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(this_ptr,edges,edge_count);
  pvVar1 = realloc(this_ptr->edge_array,(this_ptr->edge_count + 1) * 8);
  if (pvVar1 != (void *)0x0) {
    this_ptr->edge_array = pvVar1;
    piVar4 = (int *)((int)this_ptr->edge_array + this_ptr->edge_count * 8);
    piVar2 = shape_memdbg_cpp_malloc_FUN_006021da(edge_count * 0x60);
    piVar4[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      for (iVar3 = (edge_count * 3 & 0x7ffffffU) << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar5 * -8 + 4);
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar2 = (char)edges->start_vertex_index;
        edges = (SExpandedEdge *)((int)edges + (uint)bVar5 * -2 + 1);
        piVar2 = (int *)((int)piVar2 + (uint)bVar5 * -2 + 1);
      }
      *piVar4 = edge_count;
      this_ptr->edge_count = this_ptr->edge_count + 1;
      return;
    }
  }
  return;
}
