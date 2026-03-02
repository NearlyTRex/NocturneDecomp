// Name: shape_superopt.cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340
// Address: 005c9340
// Address Range: [[005c9340, 005c94f5]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_removeRedundantEdges_FUN_005c9340(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  SExpandedEdge *pSVar6;
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
  
  bVar10 = 0;
  uVar7 = 0;
  if (*edge_count_ptr != 0) {
    do {
      pSVar6 = edges + uVar7;
      dVar1 = (pSVar6->end_pos).x - (pSVar6->start_pos).x;
      dVar3 = (pSVar6->end_pos).y - (pSVar6->start_pos).y;
      dVar2 = (pSVar6->end_pos).z - (pSVar6->start_pos).z;
      if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < 1e-10) {
        memmove
                  (pSVar6,edges + uVar7 + 1,((*edge_count_ptr - uVar7) + -1) * 0x60);
        uVar7 = uVar7 - 1;
        *edge_count_ptr = *edge_count_ptr + -1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)*edge_count_ptr);
  }
  local_18 = 0;
  while ((local_18 < *edge_count_ptr - 1U && (2 < (uint)*edge_count_ptr))) {
    pSVar6 = edges + local_18;
    iVar4 = local_18 + 1;
    pCVar8 = &pSVar6->start_pos;
    pdVar9 = &local_c0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *(uint *)&pCVar8->x;
      pCVar8 = (CVector3d *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
      pdVar9 = (double *)((int)pdVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    pCVar8 = &pSVar6->end_pos;
    pdVar9 = &local_78;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *(uint *)&pCVar8->x;
      pCVar8 = (CVector3d *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    pCVar8 = &edges[iVar4].start_pos;
    pdVar9 = &local_a8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *(uint *)&pCVar8->x;
      pCVar8 = (CVector3d *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    dVar1 = local_a8 - local_78;
    dVar3 = local_a0 - local_70;
    dVar2 = local_98 - local_68;
    pCVar8 = &edges[iVar4].end_pos;
    pdVar9 = &local_90;
    for (iVar5 = 6; uVar7 = local_18, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *(uint *)&pCVar8->x;
      pCVar8 = (CVector3d *)((int)pCVar8 + (uint)bVar10 * -8 + 4);
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    if ((1e-10 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) ||
       (1e-10 <
        SQRT((local_80 - local_b0) * (local_80 - local_b0) +
             (local_88 - local_b8) * (local_88 - local_b8) +
             (local_90 - local_c0) * (local_90 - local_c0)))) {
      local_18 = local_18 + 1;
    }
    else {
      memmove
                (pSVar6,edges + local_18 + 2,((*edge_count_ptr - local_18) + -2) * 0x60);
      *edge_count_ptr = *edge_count_ptr + -2;
      local_18 = uVar7;
    }
  }
  if (2 < (uint)*edge_count_ptr) {
    return;
  }
  *edge_count_ptr = 0;
  return;
}
