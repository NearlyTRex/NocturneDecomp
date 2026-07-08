// Name: shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
// Address: 005c84c0
// MANUAL RECONSTRUCTION
// Address Range: [[005c84c0, 005c8b48]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(CComplexPolygon *this_ptr)

{
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  SExpandedEdge *pSVar3;
  SExpandedEdge *pSVar11;
  int iVar2;
  int iVar6;
  CVector3d *local_1c;
  SExpandedEdge *local_20;
  SExpandedEdge *local_24;
  CVector3d plane_point;
  CVector3d plane_normal;
  CVector3d edge_dir;
  int local_28;
  int local_2c;
  int local_18;
  int local_14;
  SExpandedEdge *reflex_edge;
  SExpandedEdge *split_edge;

  if (this_ptr->expanded_edge_count != 0) {
    iVar2 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                      (this_ptr,this_ptr->expanded_edges,&this_ptr->expanded_edge_count);
    if (iVar2 == 0) {
      return 0;
    }
    if (this_ptr->expanded_edge_count != 0) {
      pSVar3 = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      if (pSVar3 == (SExpandedEdge *)0x0) {
        return 0;
      }
      local_20 = pSVar3;
      local_24 = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      if (local_24 == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(pSVar3);
        return 0;
      }
      local_1c = &this_ptr->normal;
      while( true ) {
        pSVar11 = local_24;
        reflex_edge = shape_superopt_cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50
                          (this_ptr,local_20,local_24);
        if (reflex_edge == (SExpandedEdge *)0x0) break;
        plane_point = reflex_edge->start_pos;
        edge_dir.x = reflex_edge->end_pos.x - reflex_edge->start_pos.x;
        edge_dir.y = reflex_edge->end_pos.y - reflex_edge->start_pos.y;
        edge_dir.z = reflex_edge->end_pos.z - reflex_edge->start_pos.z;
        dVar2 = edge_dir.y * local_1c->z - edge_dir.z * local_1c->y;
        dVar3 = edge_dir.z * local_1c->x - edge_dir.x * local_1c->z;
        dVar4 = edge_dir.x * local_1c->y - edge_dir.y * local_1c->x;
        dVar5 = 1.0 / SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
        plane_normal.x = dVar2 * dVar5;
        plane_normal.y = dVar3 * dVar5;
        plane_normal.z = dVar4 * dVar5;
        local_18 = 0;
        local_14 = 0;
        shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                  (this_ptr,&plane_point,&plane_normal,local_20,local_24,&local_18,&local_14);
        if ((local_18 == 0) || (local_14 == 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        iVar6 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_18,0);
        pSVar11 = local_24;
        if (iVar6 == 0) goto LAB_005c8a4c;
        iVar6 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_24,&local_14,0);
        if (iVar6 == 0) goto LAB_005c8a6e;
        iVar6 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,local_20,&local_18);
        if (iVar6 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
          return 0;
        }
        iVar6 = shape_superopt_cpp_CComplexPolygon_processEdgeSubLoops_FUN_005c91e0
                          (this_ptr,pSVar11,&local_14);
        if (iVar6 == 0) goto LAB_005c8a6e;
        if ((local_18 == 0) && (local_14 == 0)) goto LAB_005c89e6;
        if ((local_18 != 0) && (local_14 != 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        if (local_18 == 0) {
          memcpy(this_ptr->expanded_edges,local_24,local_14 * sizeof(*this_ptr->expanded_edges));
          this_ptr->expanded_edge_count = local_14;
        }
        else {
          memcpy(this_ptr->expanded_edges,local_20,local_18 * sizeof(*this_ptr->expanded_edges));
          this_ptr->expanded_edge_count = local_18;
        }
      }
      split_edge = shape_superopt_cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70
                        (this_ptr,local_20,pSVar11);
      if (split_edge == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
        return 0;
      }
      plane_point = split_edge->start_pos;
      edge_dir.x = split_edge->end_pos.x - split_edge->start_pos.x;
      edge_dir.y = split_edge->end_pos.y - split_edge->start_pos.y;
      edge_dir.z = split_edge->end_pos.z - split_edge->start_pos.z;
      dVar2 = edge_dir.y * local_1c->z - edge_dir.z * local_1c->y;
      dVar3 = edge_dir.z * local_1c->x - edge_dir.x * local_1c->z;
      dVar4 = edge_dir.x * local_1c->y - edge_dir.y * local_1c->x;
      dVar5 = 1.0 / SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
      plane_normal.x = dVar2 * dVar5;
      plane_normal.y = dVar3 * dVar5;
      plane_normal.z = dVar4 * dVar5;
      local_28 = 0;
      local_2c = 0;
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,&plane_point,&plane_normal,local_20,local_24,&local_28,&local_2c);
      if ((local_28 != 0) && (local_2c != 0)) {
        iVar6 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_20,&local_28,0);
        pSVar11 = local_24;
        if (iVar6 != 0) {
          iVar6 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                            (this_ptr,local_24,&local_2c,0);
          if (iVar6 == 0) {
LAB_005c8a6e:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(pSVar11);
            return 0;
          }
          if ((local_28 == 0) || (local_2c == 0)) goto LAB_005c8a2a;
          memcpy(this_ptr->expanded_edges,local_20,local_28 * sizeof(*this_ptr->expanded_edges));
          this_ptr->expanded_edge_count = local_28;
          iVar6 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar6 == 0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 0;
          }
          memcpy(this_ptr->expanded_edges,local_24,local_2c * sizeof(*this_ptr->expanded_edges));
          this_ptr->expanded_edge_count = local_2c;
          iVar6 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0(this_ptr);
          if (iVar6 != 0) {
LAB_005c89e6:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 1;
          }
        }
LAB_005c8a4c:
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(local_24);
        return 0;
      }
LAB_005c8a2a:
      shape_memdbg_cpp_free_FUN_005fe659(local_20);
      shape_memdbg_cpp_free_FUN_005fe659(local_24);
      return 0;
    }
  }
  return 1;
}
