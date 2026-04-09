// Name: shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110
// Address: 00515110
// Address Range: [[00515110, 0051515c]]
// Convention: __cdecl
// Signature: double __cdecl shape_meshlod_cpp_computeDistanceSquaredToEdge_FUN_00515110(CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)

#include "nocturne.h"

double __cdecl shape_meshlod_cpp_computeDistanceSquaredToEdge_FUN_00515110(CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)

{
  CVector3f *pCVar4;
  CVector3f local_24 [2];
  float fVar3;
  float fVar1;
  float fVar2;
  
  pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                     (local_24,query_point,edge_vertex_0,edge_vertex_1);
  fVar1 = query_point->x - pCVar4->x;
  fVar3 = query_point->y - pCVar4->y;
  fVar2 = query_point->z - pCVar4->z;
  return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
}
