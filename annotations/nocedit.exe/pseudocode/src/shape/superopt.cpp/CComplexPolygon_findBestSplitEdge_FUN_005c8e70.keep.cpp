// Name: shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
// Address: 005c8e70
// MANUAL RECONSTRUCTION
// Address Range: [[005c8e70, 005c90fe]]
// Convention: __cdecl
// Signature: SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  SExpandedEdge *edge;
  double dVar7;
  double dVar8;
  CVector3d local_e4;
  double local_9c;
  CVector3d local_6c;
  double best_area;
  int local_2c;
  uint local_24;
  SExpandedEdge *local_20;
  CVector3d *local_1c;
  SExpandedEdge *local_18;
  int local_14;
  double local_94;
  double local_8c;
  
  local_18 = (SExpandedEdge *)0x0;
  local_24 = 0;
  best_area = 0.0;
  if (this_ptr->expanded_edge_count != 0) {
    local_1c = &this_ptr->normal;
    do {
      edge = this_ptr->expanded_edges + local_24;
      local_6c = edge->start_pos;
      local_9c = edge->end_pos.x - edge->start_pos.x;
      local_94 = edge->end_pos.y - edge->start_pos.y;
      local_8c = edge->end_pos.z - edge->start_pos.z;
      dVar8 = local_94 * local_1c->z - local_8c * local_1c->y;
      dVar1 = local_8c * local_1c->x - local_9c * local_1c->z;
      dVar2 = local_9c * local_1c->y - local_94 * local_1c->x;
      dVar3 = 1.0 / SQRT(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1);
      local_e4.x = dVar8 * dVar3;
      local_e4.y = dVar1 * dVar3;
      local_2c = 0;
      local_14 = 0;
      local_e4.z = dVar2 * dVar3;
      local_20 = edge;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_e4,buf_a,buf_b,&local_2c,&local_14);
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar5 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar4 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_14,1);
        if ((iVar5 == 0) && (iVar4 == 0)) {
          return (SExpandedEdge *)0x0;
        }
        dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_a,local_2c)
        ;
        if (best_area < dVar7) {
          best_area = dVar7;
          local_18 = local_20;
        }
        dVar8 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100(this_ptr,buf_b,local_14)
        ;
        if (best_area < dVar8) {
          best_area = dVar8;
          local_18 = local_20;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < (uint)this_ptr->expanded_edge_count);
  }
  return local_18;
}
