// Name: shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
// Address: 005c8b50
// MANUAL RECONSTRUCTION
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: __cdecl
// Signature: SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

#include "nocturne.h"

SExpandedEdge * __cdecl shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50(CComplexPolygon *this_ptr,SExpandedEdge *buf_a,SExpandedEdge *buf_b)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  SExpandedEdge *edge;
  double dVar7;
  double dVar8;
  CVector3d local_b4;
  double local_84;
  CVector3d local_6c;
  double best_area;
  int local_2c;
  int local_28;
  uint local_20;
  SExpandedEdge *local_1c;
  SExpandedEdge *local_18;
  CVector3d *local_14;
  double local_7c;
  double local_74;
  
  local_1c = (SExpandedEdge *)0x0;
  local_20 = 0;
  best_area = 0.0;
  if (this_ptr->expanded_edge_count != 0) {
    local_14 = &this_ptr->normal;
    do {
      edge = &this_ptr->expanded_edges[local_20];
      local_18 = edge;
      local_6c = edge->start_pos;
      local_84 = edge->end_pos.x - edge->start_pos.x;
      local_7c = edge->end_pos.y - edge->start_pos.y;
      local_74 = edge->end_pos.z - edge->start_pos.z;
      dVar8 = local_7c * local_14->z - local_74 * local_14->y;
      dVar1 = local_74 * local_14->x - local_84 * local_14->z;
      dVar2 = local_84 * local_14->y - local_7c * local_14->x;
      dVar3 = 1.0 / SQRT(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1);
      local_b4.x = dVar8 * dVar3;
      local_b4.y = dVar1 * dVar3;
      local_2c = 0;
      local_28 = 0;
      local_b4.z = dVar2 * dVar3;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&local_6c,&local_b4,buf_a,buf_b,&local_2c,&local_28);
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar5 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_a,&local_2c,1);
        iVar4 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,buf_b,&local_28,1);
        if ((iVar5 == 0) && (iVar4 == 0)) {
          return (SExpandedEdge *)0x0;
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_a,local_2c);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(this_ptr,buf_b,local_28);
        }
        if ((iVar5 != 0) || (iVar4 != 0)) {
          if ((iVar5 != 0) && (iVar4 != 0)) {
            return local_18;
          }
          if (iVar5 == 0) {
            dVar8 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_b,local_28);
            if (best_area < dVar8) {
              best_area = dVar8;
              local_1c = local_18;
            }
          }
          else {
            dVar7 = shape_superopt_cpp_CComplexPolygon_computeArea_FUN_005c9100
                              (this_ptr,buf_a,local_2c);
            if (best_area < dVar7) {
              best_area = dVar7;
              local_1c = local_18;
            }
          }
        }
      }
      local_20 = local_20 + 1;
    } while (local_20 < (uint)this_ptr->expanded_edge_count);
  }
  return local_1c;
}
