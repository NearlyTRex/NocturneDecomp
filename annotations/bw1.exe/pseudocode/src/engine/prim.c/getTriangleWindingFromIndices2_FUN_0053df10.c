// Name: engine_prim.c_getTriangleWindingFromIndices2_FUN_0053df10
// Address: 0053df10
// Address Range: [[0053df10, 0053dffb]]
// Convention: __cdecl
// Signature: int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_0053df10(SMRGLPrimitiveTriangle *triangle_indices)

#include "nocturne.h"

int __cdecl engine_prim_c_getTriangleWindingFromIndices2_FUN_0053df10(SMRGLPrimitiveTriangle *triangle_indices)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = triangle_indices->vertices[0].vertex_index;
  iVar3 = triangle_indices->vertices[1].vertex_index;
  iVar4 = triangle_indices->vertices[2].vertex_index;
  if (g_INT_00713a7c == 1) {
    iStack_24 = g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_x -
                g_SRenderVertex_ARRAY_00629014[iVar1].projected_vertex.screen_x;
    iStack_20 = g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_y -
                g_SRenderVertex_ARRAY_00629014[iVar1].projected_vertex.screen_y;
    iStack_1c = g_SRenderVertex_ARRAY_00629014[iVar4].projected_vertex.screen_x -
                g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_x;
    iStack_18 = g_SRenderVertex_ARRAY_00629014[iVar4].projected_vertex.screen_y -
                g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_y;
  }
  else {
    iStack_1c = g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_x -
                g_SRenderVertex_ARRAY_00629014[iVar1].projected_vertex.screen_x;
    iStack_18 = g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_y -
                g_SRenderVertex_ARRAY_00629014[iVar1].projected_vertex.screen_y;
    iStack_24 = g_SRenderVertex_ARRAY_00629014[iVar4].projected_vertex.screen_x -
                g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_x;
    iStack_20 = g_SRenderVertex_ARRAY_00629014[iVar4].projected_vertex.screen_y -
                g_SRenderVertex_ARRAY_00629014[iVar3].projected_vertex.screen_y;
  }
  iVar3 = (int)((ulonglong)((longlong)iStack_24 * (longlong)iStack_18) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)iStack_20 * (longlong)iStack_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)iStack_20 * (longlong)iStack_1c) <
                (uint)((longlong)iStack_24 * (longlong)iStack_18));
  iVar1 = iVar4 - iVar3;
  return (uint)((SBORROW4(iVar4,iVar3) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0);
}
