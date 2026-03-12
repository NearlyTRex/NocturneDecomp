// Name: shape_superopt.cpp_CComplexPolygon_computeArea_FUN_005c9100
// Address: 005c9100
// Address Range: [[005c9100, 005c91d8]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  CVector3d *pCVar13;
  double local_28;
  double local_20;
  double local_18;
  double *pdVar5;
  CVector3d *pCVar6;
  double *pdVar3;
  double *pdVar4;
  double *pdVar1;
  CVector3d *pCVar2;
  double *pdVar11;
  CVector3d *pCVar12;
  CVector3d *pCVar9;
  CVector3d *pCVar10;
  CVector3d *pCVar7;
  double *pdVar8;
  
  local_28 = 0.0;
  local_18 = 0.0;
  local_20 = 0.0;
  if (edge_count != 0) {
    local_18 = 0.0;
    pCVar13 = &edges->start_pos;
    do {
      pdVar1 = &pCVar13->y;
      pCVar7 = pCVar13 + 1;
      pCVar2 = pCVar13 + 1;
      pdVar8 = &pCVar13->x;
      pCVar9 = pCVar13 + 1;
      pdVar3 = &pCVar13->z;
      pCVar10 = pCVar13 + 1;
      pdVar4 = &pCVar13->z;
      pdVar11 = &pCVar13->x;
      pCVar12 = pCVar13 + 1;
      pdVar5 = &pCVar13->y;
      pCVar6 = pCVar13 + 1;
      pCVar13 = pCVar13 + 4;
      local_20 = (pCVar2->x - *pdVar8) * (*pdVar1 + pCVar7->y) * 0.5 + local_20;
      local_28 = (pCVar12->y - *pdVar5) * (*pdVar3 + pCVar10->z) * 0.5 + local_28;
      local_18 = (*pdVar11 + pCVar6->x) * (pCVar9->z - *pdVar4) * 0.5 + local_18;
    } while (pCVar13 < &edges[edge_count].start_pos);
  }
  return SQRT(local_18 * local_18 + local_28 * local_28 + local_20 * local_20);
}
