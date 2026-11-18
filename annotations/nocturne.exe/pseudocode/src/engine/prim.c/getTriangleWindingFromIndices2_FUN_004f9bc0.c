// Name: engine_prim.c_getTriangleWindingFromIndices2_FUN_004f9bc0
// Address: 004f9bc0
// Address Range: [[004f9bc0, 004f9cab]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_004f9bc0(SMRGLPrimitiveTriangle *triangle_indices)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_004f9bc0(SMRGLPrimitiveTriangle *triangle_indices)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = triangle_indices->vertices[0].vertex_index;
  iVar3 = triangle_indices->vertices[1].vertex_index;
  iVar4 = triangle_indices->vertices[2].vertex_index;
  if (g_CullingMode == 1) {
    local_24 = g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_005c5014[iVar1].projected_vertex.screen_x;
    local_20 = g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_005c5014[iVar1].projected_vertex.screen_y;
    local_1c = g_SRenderVertex_ARRAY_005c5014[iVar4].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_x;
    local_18 = g_SRenderVertex_ARRAY_005c5014[iVar4].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_y;
  }
  else {
    local_1c = g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_005c5014[iVar1].projected_vertex.screen_x;
    local_18 = g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_005c5014[iVar1].projected_vertex.screen_y;
    local_24 = g_SRenderVertex_ARRAY_005c5014[iVar4].projected_vertex.screen_x -
               g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_x;
    local_20 = g_SRenderVertex_ARRAY_005c5014[iVar4].projected_vertex.screen_y -
               g_SRenderVertex_ARRAY_005c5014[iVar3].projected_vertex.screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)local_24 * (longlong)local_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)local_20 * (longlong)local_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)local_20 * (longlong)local_1c) <
                (uint)((longlong)local_24 * (longlong)local_18));
  iVar1 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}
