// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// Address Range: [[004a1f40, 004a204e] [0060dda9, 0060de5c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar1;
  SRenderVertex *pSVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  CVector3i local_24;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  local_24.x = (int)ROUND(start_point->x * 256.0f);
  local_24.y = (int)ROUND(start_point->y * 256.0f);
  local_24.z = (int)ROUND(start_point->z * 256.0f);
  engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_24);
  local_24.x = (int)ROUND((start_point->x * 0.8f + end_point->x * 0.2f) *
                          256.0f);
  local_24.y = (int)ROUND((start_point->y * 0.8f + end_point->y * 0.2f) *
                          256.0f);
  local_24.z = (int)ROUND((0.8f * start_point->z + 0.2f * end_point->z) *
                          256.0f);
  engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_24);
  pSVar2 = g_RenderVertexBuffer + 1;
  piVar3 = (int *)&stack0xffffff94;
  iVar17 = g_RenderVertexBuffer[1].projected_vertex.transformed_x;
  iVar18 = g_RenderVertexBuffer[1].projected_vertex.transformed_y;
  iVar19 = g_RenderVertexBuffer[1].projected_vertex.transformed_z;
  iVar20 = g_RenderVertexBuffer[1].projected_vertex.inv_z;
  iVar21 = g_RenderVertexBuffer[1].projected_vertex.screen_x;
  iVar22 = g_RenderVertexBuffer[1].projected_vertex.screen_y;
  iVar23 = g_RenderVertexBuffer[1].u;
  iVar24 = g_RenderVertexBuffer[1].v;
  iVar25 = g_RenderVertexBuffer[1].r;
  iVar26 = g_RenderVertexBuffer[1].g;
  iVar27 = g_RenderVertexBuffer[1].b;
  iVar28 = g_RenderVertexBuffer[1].a;
  for (iVar1 = g_RenderVertexBuffer[1].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  pSVar2 = g_RenderVertexBuffer;
  piVar3 = (int *)&stack0xffffff64;
  iVar5 = g_RenderVertexBuffer[0].projected_vertex.transformed_x;
  iVar6 = g_RenderVertexBuffer[0].projected_vertex.transformed_y;
  iVar7 = g_RenderVertexBuffer[0].projected_vertex.transformed_z;
  iVar8 = g_RenderVertexBuffer[0].projected_vertex.inv_z;
  iVar9 = g_RenderVertexBuffer[0].projected_vertex.screen_x;
  iVar10 = g_RenderVertexBuffer[0].projected_vertex.screen_y;
  iVar11 = g_RenderVertexBuffer[0].u;
  iVar12 = g_RenderVertexBuffer[0].v;
  iVar13 = g_RenderVertexBuffer[0].r;
  iVar14 = g_RenderVertexBuffer[0].g;
  iVar15 = g_RenderVertexBuffer[0].b;
  iVar16 = g_RenderVertexBuffer[0].a;
  for (iVar1 = g_RenderVertexBuffer[0].a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  vertex1.projected_vertex.transformed_y = iVar6;
  vertex1.projected_vertex.transformed_x = iVar5;
  vertex1.projected_vertex.transformed_z = iVar7;
  vertex1.projected_vertex.inv_z = iVar8;
  vertex1.projected_vertex.screen_x = iVar9;
  vertex1.projected_vertex.screen_y = iVar10;
  vertex1.u = iVar11;
  vertex1.v = iVar12;
  vertex1.r = iVar13;
  vertex1.g = iVar14;
  vertex1.b = iVar15;
  vertex1.a = iVar16;
  vertex2.projected_vertex.transformed_y = iVar18;
  vertex2.projected_vertex.transformed_x = iVar17;
  vertex2.projected_vertex.transformed_z = iVar19;
  vertex2.projected_vertex.inv_z = iVar20;
  vertex2.projected_vertex.screen_x = iVar21;
  vertex2.projected_vertex.screen_y = iVar22;
  vertex2.u = iVar23;
  vertex2.v = iVar24;
  vertex2.r = iVar25;
  vertex2.g = iVar26;
  vertex2.b = iVar27;
  vertex2.a = iVar28;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
  return;
}
