// Name: shape_superopt.cpp_CComplexPolygon_isConvex_FUN_005cb3a0
// Address: 005cb3a0
// MANUAL RECONSTRUCTION
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_isConvex_FUN_005cb3a0(CComplexPolygon *this_ptr,SExpandedEdge *edges,int edge_count)

{
  bool x_dominant;
  bool y_dominant;
  SExpandedEdge *pSVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar3;
  double abs_nx;
  double abs_ny;
  double abs_nz;
  CVector3d winding_normal;
  CVector2d edge_start_2d;
  CVector2d edge_end_2d;
  CVector2d test_start_2d;
  CVector2d test_end_2d;
  SExpandedEdge *local_20;

  shape_superopt_cpp_CComplexPolygon_computeWindingNormal_FUN_005cbb40
            (this_ptr,&winding_normal,edges,edge_count);
  if (winding_normal.z * (this_ptr->normal).z +
      winding_normal.x * (this_ptr->normal).x + winding_normal.y * (this_ptr->normal).y < 0.0) {
    return 0;
  }
  abs_nx = ABS((this_ptr->normal).x);
  abs_ny = ABS((this_ptr->normal).y);
  abs_nz = ABS((this_ptr->normal).z);
  x_dominant = (abs_nx >= abs_ny) && (abs_nx >= abs_nz);
  y_dominant = (abs_ny >= abs_nx) && (abs_ny >= abs_nz);
  uVar3 = 0;
  if (edge_count != 0) {
    local_20 = edges;
    do {
      if (x_dominant) {
        edge_start_2d.x = (local_20->start_pos).y;
        edge_start_2d.y = (local_20->start_pos).z;
        edge_end_2d.x = (local_20->end_pos).y;
        edge_end_2d.y = (local_20->end_pos).z;
      }
      else if (y_dominant) {
        edge_start_2d.x = (local_20->start_pos).x;
        edge_start_2d.y = (local_20->start_pos).z;
        edge_end_2d.x = (local_20->end_pos).x;
        edge_end_2d.y = (local_20->end_pos).z;
      }
      else {
        edge_start_2d.x = (local_20->start_pos).x;
        edge_start_2d.y = (local_20->start_pos).y;
        edge_end_2d.x = (local_20->end_pos).x;
        edge_end_2d.y = (local_20->end_pos).y;
      }
      uVar2 = 0;
      pSVar1 = edges;
      if (edge_count != 0) {
        do {
          if (uVar2 != uVar3) {
            if (x_dominant) {
              test_start_2d.x = (pSVar1->start_pos).y;
              test_start_2d.y = (pSVar1->start_pos).z;
              test_end_2d.x = (pSVar1->end_pos).y;
              test_end_2d.y = (pSVar1->end_pos).z;
            }
            else if (y_dominant) {
              test_start_2d.x = (pSVar1->start_pos).x;
              test_start_2d.y = (pSVar1->start_pos).z;
              test_end_2d.x = (pSVar1->end_pos).x;
              test_end_2d.y = (pSVar1->end_pos).z;
            }
            else {
              test_start_2d.x = (pSVar1->start_pos).x;
              test_start_2d.y = (pSVar1->start_pos).y;
              test_end_2d.x = (pSVar1->end_pos).x;
              test_end_2d.y = (pSVar1->end_pos).y;
            }
            dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&edge_start_2d,&edge_end_2d,&test_start_2d);
            dVar3 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&edge_start_2d,&edge_end_2d,&test_end_2d);
            if ((dVar4 == 0.0 && dVar3 == 0.0) ||
               ((dVar4 < 0.0 && 0.0 < dVar3) || (0.0 < dVar4 && dVar3 < 0.0))) {
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
          pSVar1 = pSVar1 + 1;
        } while (uVar2 < (uint)edge_count);
      }
      local_20 = local_20 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)edge_count);
  }
  return 1;
}
