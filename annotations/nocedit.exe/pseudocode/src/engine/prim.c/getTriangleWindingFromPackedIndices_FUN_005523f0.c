// Name: engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
// Address: 005523f0
// Address Range: [[005523f0, 005524e7]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0(STrianglePackedIndices *triangle)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
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
  iVar6 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar7 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar4 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar5 = iVar7 - iVar6;
  return (uint)((SBORROW4(iVar7,iVar6) != SBORROW4(iVar5,uVar4)) != (int)(iVar5 - uVar4) < 0);
}
