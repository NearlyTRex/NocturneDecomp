// Name: shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110
// Address: 00515110
// Address Range: [[00515110, 0051514f]]
// Convention: __cdecl
// Signature: double shape_meshlod.cpp_computeDistanceSquaredToEdge_FUN_00515110(CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)

#include "nocturne.h"

double __cdecl
shape_meshlod_cpp_computeDistanceSquaredToEdge_FUN_00515110
          (CVector3f *query_point,CVector3f *edge_vertex_0,CVector3f *edge_vertex_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *in_stack_00000004;
  CVector3f local_24 [2];
  
  pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                     (local_24,in_stack_00000004,query_point,edge_vertex_0);
  fVar1 = in_stack_00000004->x - pCVar4->x;
  fVar3 = in_stack_00000004->y - pCVar4->y;
  fVar2 = in_stack_00000004->z - pCVar4->z;
  return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
}
