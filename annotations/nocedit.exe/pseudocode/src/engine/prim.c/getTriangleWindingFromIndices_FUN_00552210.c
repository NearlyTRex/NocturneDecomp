// Name: engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
// Address: 00552210
// Address Range: [[00552210, 005522fb]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromIndices_FUN_00552210(SMRGLPrimitiveTriangle *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromIndices_FUN_00552210(SMRGLPrimitiveTriangle *triangle)

{
  int iVar2;
  int iVar5;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iVar1;
  uint uVar2;
  
  iVar1 = triangle->vertices[0].vertex_index;
  iVar2 = triangle->vertices[1].vertex_index;
  iVar5 = triangle->vertices[2].vertex_index;
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
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar4 - iVar3,uVar2)) !=
               (int)((iVar4 - iVar3) - uVar2) < 0);
}
