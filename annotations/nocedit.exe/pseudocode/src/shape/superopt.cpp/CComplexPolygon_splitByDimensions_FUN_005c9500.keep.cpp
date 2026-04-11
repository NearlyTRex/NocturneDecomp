// Name: shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500
// Address: 005c9500
// MANUAL RECONSTRUCTION
// Address Range: [[005c9500, 005c9a9e]]
// Convention: __cdecl
// Signature: CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_splitByDimensions_FUN_005c9500(CComplexPolygon *this_ptr,double *max_dimensions)

#include "nocturne.h"

CComplexPolygon * __cdecl shape_superopt_cpp_CComplexPolygon_splitByDimensions_FUN_005c9500(CComplexPolygon *this_ptr,double *max_dimensions)

{
  SExpandedEdge *pSVar1;
  SExpandedEdge *pSVar5;
  CComplexPolygon *this_ptr_00;
  CComplexPolygon *pCVar6;
  int iVar2;
  uint uVar9;
  CVector3d *pCVar7;
  CVector3d bbox_min;
  CVector3d bbox_max;
  CVector3d plane_point;
  CVector3d plane_normal_vec;
  CVector3d *plane_normal;
  int local_28;
  int local_24;
  SExpandedEdge *local_1c;
  SExpandedEdge *local_20;
  SExpandedEdge *local_18;
  SExpandedEdge *local_14;
  SExpandedEdge *ptr;
  bool bVar2;
  bool bVar3;

  if ((this_ptr->expanded_edge_count != 0) &&
     (this_ptr->expanded_edges != (SExpandedEdge *)0x0)) {
    bbox_min = this_ptr->expanded_edges[0].start_pos;
    bbox_max = this_ptr->expanded_edges[0].start_pos;
    uVar9 = 0;
    if (this_ptr->expanded_edge_count != 0) {
      do {
        CVector3d *pos = &this_ptr->expanded_edges[uVar9].start_pos;
        if (pos->x < bbox_min.x) bbox_min.x = pos->x;
        if (pos->y < bbox_min.y) bbox_min.y = pos->y;
        if (pos->z < bbox_min.z) bbox_min.z = pos->z;
        if (bbox_max.x < pos->x) bbox_max.x = pos->x;
        if (bbox_max.y < pos->y) bbox_max.y = pos->y;
        if (bbox_max.z < pos->z) bbox_max.z = pos->z;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)this_ptr->expanded_edge_count);
    }
    local_1c = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
    local_28 = 0;
    if (local_1c != (SExpandedEdge *)0x0) {
      local_18 = local_1c;
      local_20 = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->expanded_edge_count * 0xc0);
      local_14 = local_20;
      local_24 = 0;
      if (local_20 == (SExpandedEdge *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_18);
        return (CComplexPolygon *)0x0;
      }
      if (*max_dimensions + 0.5 < bbox_max.x - bbox_min.x) {
        plane_point.x = *max_dimensions + bbox_min.x;
        plane_point.y = bbox_min.y;
        plane_point.z = bbox_min.z;
        plane_normal_vec.x = 1.0;
        plane_normal_vec.y = 0.0;
        plane_normal_vec.z = 0.0;
        local_28 = 0;
        local_24 = 0;
        plane_normal = &plane_point;
        pCVar7 = &plane_normal_vec;
      }
      else if (max_dimensions[1] + 0.5 < bbox_max.y - bbox_min.y) {
        plane_point.x = bbox_min.x;
        plane_point.y = bbox_min.y + max_dimensions[1];
        plane_point.z = bbox_min.z;
        plane_normal_vec.x = 0.0;
        plane_normal_vec.y = 1.0;
        plane_normal_vec.z = 0.0;
        local_28 = 0;
        local_24 = 0;
        plane_normal = &plane_point;
        pCVar7 = &plane_normal_vec;
      }
      else {
        if (bbox_max.z - bbox_min.z <= max_dimensions[2] + 0.5) {
          shape_memdbg_cpp_free_FUN_005fe659(local_18);
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          return (CComplexPolygon *)0x0;
        }
        plane_point.x = bbox_min.x;
        plane_point.y = bbox_min.y;
        plane_point.z = bbox_min.z + max_dimensions[2];
        plane_normal_vec.x = 0.0;
        plane_normal_vec.y = 0.0;
        plane_normal_vec.z = 1.0;
        local_28 = 0;
        plane_normal = &plane_point;
        pCVar7 = &plane_normal_vec;
      }
      shape_superopt_cpp_CComplexPolygon_splitEdgesByPlane_FUN_005c9aa0
                (this_ptr,plane_normal,pCVar7,local_18,local_20,&local_28,&local_24);
      ptr = local_1c;
      bVar2 = false;
      if (local_28 != 0) {
        pSVar1 = local_1c;
        do {
          if ((pSVar1->start_side == 0) || (pSVar1->end_side == 0)) {
            bVar2 = true;
            break;
          }
          pSVar1 = pSVar1 + 1;
        } while (pSVar1 < local_1c + local_28);
      }
      bVar3 = false;
      if (local_24 != 0) {
        pSVar5 = local_14;
        do {
          if ((pSVar5->start_side == 0) || (pSVar5->end_side == 0)) {
            bVar3 = true;
            break;
          }
          pSVar5 = pSVar5 + 1;
        } while (pSVar5 < local_14 + local_24);
      }
      if ((bVar2) || (bVar3)) {
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_1c,&local_28,0);
        if (iVar2 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(ptr);
          shape_memdbg_cpp_free_FUN_005fe659(local_14);
          return (CComplexPolygon *)0x0;
        }
        iVar2 = shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
                          (this_ptr,local_14,&local_24,0);
        if (iVar2 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(ptr);
          shape_memdbg_cpp_free_FUN_005fe659(local_14);
          return (CComplexPolygon *)0x0;
        }
      }
      this_ptr_00 = (CComplexPolygon *)shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      pCVar6 = (CComplexPolygon *)0x0;
      if (this_ptr_00 != (CComplexPolygon *)0x0) {
        pCVar6 = shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(this_ptr_00);
      }
      if (pCVar6 == (CComplexPolygon *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_1c);
        shape_memdbg_cpp_free_FUN_005fe659(local_14);
        return (CComplexPolygon *)0x0;
      }
      pCVar6->material_id = this_ptr->material_id;
      pCVar6->normal = this_ptr->normal;
      pCVar6->expanded_edge_count = local_28;
      pCVar6->expanded_edges = local_1c;
      shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0(this_ptr);
      this_ptr->expanded_edge_count = local_24;
      this_ptr->expanded_edges = local_14;
      return pCVar6;
    }
  }
  return (CComplexPolygon *)0x0;
}
