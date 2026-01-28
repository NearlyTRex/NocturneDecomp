// Name: shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
// Address: 00514f90
// Address Range: [[00514f90, 00515104]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90 (CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0, CVector3f *edge_vertex_1)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
          (CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0,
          CVector3f *edge_vertex_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = edge_vertex_1->x - edge_vertex_0->x;
  fVar2 = edge_vertex_1->y - edge_vertex_0->y;
  fVar4 = edge_vertex_1->z - edge_vertex_0->z;
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar4 = fVar4 * fVar5;
    fVar5 = (query_point->z * fVar4 + query_point->x * fVar1 + query_point->y * fVar2) -
            (edge_vertex_0->z * fVar4 + edge_vertex_0->x * fVar1 + edge_vertex_0->y * fVar2);
    if (0.0 < fVar5) {
      if (fVar5 < fVar3) {
        out_closest_point->x = edge_vertex_0->x + fVar1 * fVar5;
        out_closest_point->y = edge_vertex_0->y + fVar2 * fVar5;
        out_closest_point->z = edge_vertex_0->z + fVar4 * fVar5;
        return out_closest_point;
      }
      out_closest_point->x = edge_vertex_1->x;
      out_closest_point->y = edge_vertex_1->y;
      goto LAB_00515093;
    }
  }
  out_closest_point->x = edge_vertex_0->x;
  out_closest_point->y = edge_vertex_0->y;
  edge_vertex_1 = edge_vertex_0;
LAB_00515093:
  out_closest_point->z = edge_vertex_1->z;
  return out_closest_point;
}
