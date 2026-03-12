// Name: shape_superopt.cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
// Address: 005c91e0
// Address Range: [[005c91e0, 005c9339]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

{
  int edge_count;
  int iVar4;
  int iVar5;
  int iVar1;
  int extraout_EAX;
  uint uVar6;
  CVector3d *pCVar7;
  SExpandedEdge *edges_00;
  uint uVar8;
  double dVar2;
  double dVar1;
  double dVar3;
  
  iVar4 = shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
                    (this_ptr,edges,*edge_count_ptr);
  if (iVar4 == 0) {
    return 0;
  }
  shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
            (this_ptr,edges,edge_count_ptr);
  if (*edge_count_ptr == 0) {
    return 1;
  }
  uVar8 = 0;
  do {
    uVar6 = uVar8 + 1;
    if (uVar6 < (uint)*edge_count_ptr) {
      pCVar7 = &edges[uVar6].end_pos;
      do {
        dVar1 = edges[uVar8].start_pos.x - pCVar7->x;
        dVar3 = edges[uVar8].start_pos.y - pCVar7->y;
        dVar2 = edges[uVar8].start_pos.z - pCVar7->z;
        if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < 1e-10) break;
        uVar6 = uVar6 + 1;
        pCVar7 = pCVar7 + 4;
      } while (uVar6 < (uint)*edge_count_ptr);
    }
    if (uVar6 == *edge_count_ptr) {
      return uVar6 ^ *edge_count_ptr;
    }
    edge_count = (uVar6 - uVar8) + 1;
    edges_00 = edges + uVar8;
    iVar5 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,edges_00,edge_count);
    if ((iVar5 == 0) ||
       (iVar1 = shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
                          (this_ptr,&this_ptr->normal,edges_00,edge_count,edges,*edge_count_ptr),
       iVar1 != 0)) {
      uVar8 = uVar8 + edge_count;
    }
    else {
      shape_superopt_cpp_CComplexPolygon_storeEdgeSubChain_FUN_005cbe20
                (this_ptr,edges_00,edge_count);
      if (extraout_EAX == 0) {
        return 0;
      }
      memmove
                (edges_00,edges_00 + edge_count,(*edge_count_ptr - (uVar8 + edge_count)) * 0x60);
      *edge_count_ptr = *edge_count_ptr - edge_count;
    }
    if ((uint)*edge_count_ptr <= uVar8) {
      return 1;
    }
  } while( true );
}
