// Name: dll_dx7.cpp_getOrAddVertex_FUN_10005010
// Address: 10005010
// Address Range: [[10005010, 1000511a] [1000511e, 1000512c]]
// Convention: __cdecl
// Signature: uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags)

#include "nocturne.h"

uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SRenderVertex *src;
  SScreenVertex *pSVar6;
  SScreenVertex *pSVar7;
  char *message;
  
  iVar3 = g_PendingVertexCount;
  iVar1 = poly_vertex->vertex_index;
  src = vertex_array + iVar1;
  if (g_VertexBatchStamp[iVar1] == g_CurrentBatchStamp) {
    if ((src->u != poly_vertex->texture_u) || (poly_vertex->texture_v != src->v)) {
      iVar4 = poly_vertex->texture_v;
      src->u = poly_vertex->texture_u;
      iVar2 = g_VertexCacheIndex[iVar1];
      src->v = iVar4;
      pSVar6 = g_VertexBuffer + iVar2;
      pSVar7 = g_VertexBuffer + g_PendingVertexCount;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar7->x = pSVar6->x;
        pSVar6 = (SScreenVertex *)&pSVar6->y;
        pSVar7 = (SScreenVertex *)&pSVar7->y;
      }
      iVar4 = poly_vertex->texture_u;
      iVar2 = poly_vertex->texture_v;
      g_VertexCacheIndex[iVar1] = g_PendingVertexCount;
      iVar5 = g_PendingVertexCount + 1;
      pSVar6 = g_VertexBuffer + g_PendingVertexCount;
      g_PendingVertexCount = iVar5;
      pSVar6->u = (float)iVar4 * 5.9604645e-08;
      g_VertexBuffer[iVar3].v = (float)iVar2 * 5.9604645e-08;
      if (0x3e76 < iVar5) {
        message = "You're shoving too many verticies";
        goto LAB_10005116;
      }
    }
  }
  else {
    iVar4 = poly_vertex->texture_v;
    g_VertexBatchStamp[iVar1] = g_CurrentBatchStamp;
    g_VertexCacheIndex[iVar1] = iVar3;
    src->u = poly_vertex->texture_u;
    src->v = iVar4;
    dll_dx7_cpp_buildTLVertex_FUN_100044b0(src,g_VertexBuffer + iVar3,render_flags,0x100);
    g_PendingVertexCount = g_PendingVertexCount + 1;
    if (0x3e76 < g_PendingVertexCount) {
      message = "You're shoving too many verticies";
LAB_10005116:
                    /* WARNING: Subroutine does not return */
      dll_dx7_cpp_fatalError_FUN_10002340(message);
    }
  }
  return g_VertexCacheIndex[iVar1];
}
