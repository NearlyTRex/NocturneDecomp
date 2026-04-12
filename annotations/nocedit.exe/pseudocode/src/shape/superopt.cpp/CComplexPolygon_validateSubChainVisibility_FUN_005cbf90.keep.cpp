// Name: shape_superopt.cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90
// Address: 005cbf90
// MANUAL RECONSTRUCTION
// Address Range: [[005cbf90, 005cc61f]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_validateSubChainVisibility_FUN_005cbf90(CComplexPolygon *this_ptr,CVector3d *normal,SExpandedEdge *sub_chain,int sub_chain_count,SExpandedEdge *full_edges,int full_edge_count)

{
  bool x_dominant;
  bool y_dominant;
  bool z_dominant;
  SExpandedEdge *pSVar2;
  int iVar3;
  double dVar5;
  double abs_nx;
  double abs_ny;
  double abs_nz;
  CVector2d edge_start_2d;
  CVector2d edge_end_2d;
  CVector2d test_pt_2d;
  double prev_area;
  SExpandedEdge *local_28;
  bool bVar1;

  abs_nx = ABS(normal->x);
  abs_ny = ABS(normal->y);
  abs_nz = ABS(normal->z);
  x_dominant = (abs_nx >= abs_ny) && (abs_nx >= abs_nz);
  y_dominant = (abs_ny >= abs_nx) && (abs_ny >= abs_nz);
  z_dominant = (abs_nz >= abs_nx) && (abs_nz >= abs_ny);
  if (full_edge_count != 0) {
    local_28 = full_edges;
    do {
      if ((local_28 < sub_chain) || (sub_chain + sub_chain_count <= local_28)) {
        if (x_dominant) {
          test_pt_2d.x = (local_28->start_pos).y;
          test_pt_2d.y = (local_28->start_pos).z;
        }
        else if (y_dominant) {
          test_pt_2d.x = (local_28->start_pos).x;
          test_pt_2d.y = (local_28->start_pos).z;
        }
        else if (z_dominant) {
          test_pt_2d.x = (local_28->start_pos).x;
          test_pt_2d.y = (local_28->start_pos).y;
        }
        iVar3 = 0;
        bVar1 = false;
        prev_area = 0.0;
        if (sub_chain_count != 0) {
          pSVar2 = sub_chain;
          do {
            if (x_dominant) {
              edge_start_2d.x = (pSVar2->start_pos).y;
              edge_start_2d.y = (pSVar2->start_pos).z;
              edge_end_2d.x = (pSVar2->end_pos).y;
              edge_end_2d.y = (pSVar2->end_pos).z;
            }
            else if (y_dominant) {
              edge_start_2d.x = (pSVar2->start_pos).x;
              edge_start_2d.y = (pSVar2->start_pos).z;
              edge_end_2d.x = (pSVar2->end_pos).x;
              edge_end_2d.y = (pSVar2->end_pos).z;
            }
            else if (z_dominant) {
              edge_start_2d.x = (pSVar2->start_pos).x;
              edge_start_2d.y = (pSVar2->start_pos).y;
              edge_end_2d.x = (pSVar2->end_pos).x;
              edge_end_2d.y = (pSVar2->end_pos).y;
            }
            if ((edge_start_2d.x != test_pt_2d.x || edge_start_2d.y != test_pt_2d.y) &&
               (edge_end_2d.x != test_pt_2d.x || edge_end_2d.y != test_pt_2d.y)) {
              dVar5 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                                (&edge_start_2d,&edge_end_2d,&test_pt_2d);
              if (dVar5 != 0.0) {
                if (bVar1) {
                  if ((prev_area < 0.0 && 0.0 < dVar5) ||
                     (0.0 < prev_area && dVar5 < 0.0)) break;
                }
                else {
                  prev_area = dVar5;
                  bVar1 = true;
                }
              }
            }
            pSVar2 = pSVar2 + 1;
            iVar3 = iVar3 + 1;
          } while (pSVar2 < sub_chain + sub_chain_count);
        }
        if (iVar3 == sub_chain_count) {
          return 1;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < full_edges + full_edge_count);
  }
  return 0;
}
