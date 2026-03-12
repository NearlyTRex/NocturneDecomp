// Name: shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
// Address: 00514f90
// Address Range: [[00514f90, 00515104]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)

#include "nocturne.h"

CVector3f * __cdecl shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f *out_closest_point,CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)

{
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar4;
  float fVar5;
  float fVar2;
  float fVar3;
  float fVar1;
  
  fVar1 = edge_vertex_1->x - edge_vertex_0->x;
  fVar2 = edge_vertex_1->y - edge_vertex_0->y;
  fVar4 = edge_vertex_1->z - edge_vertex_0->z;
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar5 = 1.0 / fVar3;
    fVar6 = fVar1 * fVar5;
    fVar7 = fVar2 * fVar5;
    fVar8 = fVar4 * fVar5;
    fVar9 = (query_point->z * fVar8 + query_point->x * fVar6 + query_point->y * fVar7) -
            (edge_vertex_0->z * fVar8 + edge_vertex_0->x * fVar6 + edge_vertex_0->y * fVar7);
    if (0.0 < fVar9) {
      if (fVar9 < fVar3) {
        out_closest_point->x = edge_vertex_0->x + fVar6 * fVar9;
        out_closest_point->y = edge_vertex_0->y + fVar7 * fVar9;
        out_closest_point->z = edge_vertex_0->z + fVar8 * fVar9;
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
