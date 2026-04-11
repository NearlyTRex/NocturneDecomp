// Name: shape_superopt.cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
// Address: 005c7fb0
// MANUAL RECONSTRUCTION
// Address Range: [[005c7fb0, 005c8154]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0(CComplexPolygon *this_ptr,SExpandedEdge *edge_a,SExpandedEdge *edge_b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0(CComplexPolygon *this_ptr,SExpandedEdge *edge_a,SExpandedEdge *edge_b)

{
  int iVar2;
  CVector3d dir_a;
  CVector3d dir_b;

  if (((((edge_a->end_pos).x != (edge_b->start_pos).x) ||
       ((edge_a->end_pos).y != (edge_b->start_pos).y)) ||
      ((edge_a->end_pos).z != (edge_b->start_pos).z)) &&
     ((((edge_a->start_pos).x != (edge_b->end_pos).x ||
       ((edge_a->start_pos).y != (edge_b->end_pos).y)) ||
      ((edge_a->start_pos).z != (edge_b->end_pos).z)))) {
    return 0;
  }
  dir_a.x = (edge_a->end_pos).x - (edge_a->start_pos).x;
  dir_a.y = (edge_a->end_pos).y - (edge_a->start_pos).y;
  dir_a.z = (edge_a->end_pos).z - (edge_a->start_pos).z;
  dir_b.x = (edge_b->end_pos).x - (edge_b->start_pos).x;
  dir_b.y = (edge_b->end_pos).y - (edge_b->start_pos).y;
  dir_b.z = (edge_b->end_pos).z - (edge_b->start_pos).z;
  if (0.0 <= dir_a.x * dir_b.x + dir_a.y * dir_b.y + dir_a.z * dir_b.z) {
    iVar2 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&dir_a,&dir_b);
    return iVar2;
  }
  return 0;
}
