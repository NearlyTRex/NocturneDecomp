// Name: engine_prim.c_getTriangleWindingFromIndices2_FUN_00552300
// Address: 00552300
// MANUAL RECONSTRUCTION
// Address Range: [[00552300, 005523eb]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_00552300(SMRGLPrimitiveTriangle *triangle_indices)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_00552300(SMRGLPrimitiveTriangle *triangle_indices)

{
  int iVar2;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iVar1;

  iVar1 = triangle_indices->vertices[0].vertex_index;
  iVar2 = triangle_indices->vertices[1].vertex_index;
  iVar5 = triangle_indices->vertices[2].vertex_index;
  if (g_CullingMode == 1) {
    local_24 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    local_1c = g_RenderVertexBuffer[iVar5].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar2].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[iVar5].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar2].projected_vertex.screen_y;
  }
  else {
    local_1c = g_RenderVertexBuffer[iVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar1].projected_vertex.screen_y;
    local_24 = g_RenderVertexBuffer[iVar5].projected_vertex.screen_x -
               g_RenderVertexBuffer[iVar2].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[iVar5].projected_vertex.screen_y -
               g_RenderVertexBuffer[iVar2].projected_vertex.screen_y;
  }
  return (uint)((longlong)local_20 * (longlong)local_1c <
                (longlong)local_24 * (longlong)local_18);
}
