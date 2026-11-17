// Name: engine_prim.c_calculateTriangleWindingOrderFromIndices_FUN_0051c820
// Address: 0051c820
// Address Range: [[0051c820, 0051c90b]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_0051c820(SMRGLPrimitiveTriangle *triangle)

#include "nocturne.h"

int __cdecl engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_0051c820(SMRGLPrimitiveTriangle *triangle)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = triangle->vertices[0].vertex_index;
  iVar3 = triangle->vertices[1].vertex_index;
  iVar4 = triangle->vertices[2].vertex_index;
  if (g_INT_0070ca7c == 1) {
    local_24 = g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_00622014[iVar1].projected_vertex.screen_x;
    local_20 = g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_00622014[iVar1].projected_vertex.screen_y;
    local_1c = g_SRenderVertex_ARRAY_00622014[iVar4].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_x;
    local_18 = g_SRenderVertex_ARRAY_00622014[iVar4].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y;
  }
  else {
    local_1c = g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_00622014[iVar1].projected_vertex.screen_x;
    local_18 = g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_00622014[iVar1].projected_vertex.screen_y;
    local_24 = g_SRenderVertex_ARRAY_00622014[iVar4].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_x;
    local_20 = g_SRenderVertex_ARRAY_00622014[iVar4].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_00622014[iVar3].projected_vertex.screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}
