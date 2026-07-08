// Name: shape_superopt.cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
// Address: 005c8280
// MANUAL RECONSTRUCTION
// Address Range: [[005c8280, 005c84b9]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  SExpandedEdge *sorted;
  SExpandedEdge *pSVar1;
  SExpandedEdge *pSVar2;
  int iVar5;
  int iVar7;
  bool bVar1;

  sorted = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(edge_count * sizeof(SExpandedEdge));
  iVar7 = 0;
  if (sorted == (SExpandedEdge *)0x0) {
    return 0;
  }
  do {
    iVar5 = 0;
    if (edge_count != 0) {
      pSVar2 = edges;
      do {
        if (pSVar2->start_vertex_index != -1) break;
        pSVar2 = pSVar2 + 1;
        iVar5 = iVar5 + 1;
      } while (pSVar2 < edges + edge_count);
    }
    if (iVar5 == edge_count) {
      memcpy(edges,sorted,edge_count * sizeof(*edges));
      shape_memdbg_cpp_free_FUN_005fe659(sorted);
      return 1;
    }
    pSVar1 = edges + iVar5;
    sorted[iVar7] = *pSVar1;
    iVar7 = iVar7 + 1;
    pSVar1->start_vertex_index = -1;
    do {
      bVar1 = true;
      if (edge_count != 0) {
        pSVar1 = edges;
        do {
          if (!bVar1) break;
          if ((pSVar1->start_vertex_index != -1) &&
             ((pSVar1->start_pos).x == sorted[iVar7 - 1].end_pos.x) &&
             ((pSVar1->start_pos).y == sorted[iVar7 - 1].end_pos.y) &&
             ((pSVar1->start_pos).z == sorted[iVar7 - 1].end_pos.z)) {
            sorted[iVar7] = *pSVar1;
            iVar7 = iVar7 + 1;
            bVar1 = false;
            pSVar1->start_vertex_index = -1;
          }
          pSVar1 = pSVar1 + 1;
        } while (pSVar1 < edges + edge_count);
      }
    } while (!bVar1);
  } while( true );
}
