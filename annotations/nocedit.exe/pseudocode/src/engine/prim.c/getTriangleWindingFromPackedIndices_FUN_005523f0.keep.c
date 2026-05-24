// Name: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
// Address: 005523f0
// MANUAL RECONSTRUCTION
// Address Range: [[005523f0, 005524e7]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices *triangle)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ushort uVar3;
  ushort uVar1;
  ushort uVar2;

  uVar1 = triangle->vertex_index_0;
  uVar2 = triangle->vertex_index_1;
  uVar3 = triangle->vertex_index_2;
  if (g_CullingMode == 1) {
    local_24 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_y;
    local_1c = g_RenderVertexBuffer[uVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_y;
  }
  else {
    local_1c = g_RenderVertexBuffer[uVar2].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_x;
    local_18 = g_RenderVertexBuffer[uVar2].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar1].projected_vertex.screen_y;
    local_24 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_x -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_x;
    local_20 = g_RenderVertexBuffer[uVar3].projected_vertex.screen_y -
               g_RenderVertexBuffer[uVar2].projected_vertex.screen_y;
  }
  return (uint)((longlong)local_20 * (longlong)local_1c <
                (longlong)local_24 * (longlong)local_18);
}
