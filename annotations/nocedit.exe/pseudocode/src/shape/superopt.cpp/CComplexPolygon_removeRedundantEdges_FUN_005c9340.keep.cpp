// Name: shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
// Address: 005c9340
// MANUAL RECONSTRUCTION
// Address Range: [[005c9340, 005c94f5] [03fc2bf9, 03fc2cdb]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

{
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar4;
  int iVar5;
  SExpandedEdge *pSVar6;
  SExpandedEdge *dest;
  uint uVar7;
  CVector3d *pCVar8;
  double *pdVar9;
  byte bVar10;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  uint local_18;
  double dVar1;
  double dVar2;
  double dVar3;
  
  uVar7 = 0;
  if (*edge_count_ptr != 0) {
    do {
      pSVar6 = edges + uVar7;
      dVar1 = (pSVar6->end_pos).x - (pSVar6->start_pos).x;
      dVar3 = (pSVar6->end_pos).y - (pSVar6->start_pos).y;
      dVar2 = (pSVar6->end_pos).z - (pSVar6->start_pos).z;
      if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < 1e-10) {
        memmove
                  (pSVar6,edges + uVar7 + 1,((*edge_count_ptr - uVar7) + -1) * sizeof(*edges));
        uVar7 = uVar7 - 1;
        *edge_count_ptr = *edge_count_ptr + -1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)*edge_count_ptr);
  }
  local_18 = 0;
  while ((local_18 < *edge_count_ptr - 1U && (2 < (uint)*edge_count_ptr))) {
    dest = edges + local_18;
    iVar4 = local_18 + 1;
    dVar4 = edges[iVar4].start_pos.x - (dest->end_pos).x;
    dVar6 = edges[iVar4].start_pos.y - (dest->end_pos).y;
    dVar5 = edges[iVar4].start_pos.z - (dest->end_pos).z;
    if ((1e-10 < SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4)) ||
       (dVar4 = edges[iVar4].end_pos.x - (dest->start_pos).x,
       dVar6 = edges[iVar4].end_pos.y - (dest->start_pos).y,
       dVar5 = edges[iVar4].end_pos.z - (dest->start_pos).z,
       1e-10 < SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4))) {
      local_18 = local_18 + 1;
    }
    else {
      memmove
                (dest,edges + local_18 + 2,((*edge_count_ptr - local_18) + -2) * sizeof(*edges));
      *edge_count_ptr = *edge_count_ptr + -2;
    }
  }
  if (2 < (uint)*edge_count_ptr) {
    return;
  }
  *edge_count_ptr = 0;
  return;
}
