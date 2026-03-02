// Name: shape_superopt.cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20
// Address: 005cbf20
// Address Range: [[005cbf20, 005cbf89]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_isEdgeChainClosed_FUN_005cbf20(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  CVector3d *pCVar7;
  
  if (edge_count != 0) {
    pCVar7 = &edges->start_pos;
    uVar4 = edge_count - 1;
    uVar5 = 0;
    do {
      dVar1 = pCVar7->x - edges[uVar4].end_pos.x;
      dVar3 = pCVar7->y - edges[uVar4].end_pos.y;
      dVar2 = pCVar7->z - edges[uVar4].end_pos.z;
      if (9.9999999999999995e-08 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) {
        return 0;
      }
      uVar6 = uVar5 + 1;
      pCVar7 = pCVar7 + 4;
      uVar4 = uVar5;
      uVar5 = uVar6;
    } while (uVar6 < (uint)edge_count);
  }
  return 1;
}
