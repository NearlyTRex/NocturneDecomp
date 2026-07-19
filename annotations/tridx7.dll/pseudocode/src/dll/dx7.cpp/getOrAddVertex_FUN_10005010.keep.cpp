// Name: dll_dx7.cpp_getOrAddVertex_FUN_10005010
// Address: 10005010
// MANUAL RECONSTRUCTION
// Address Range: [[10005010, 1000511a] [1000511e, 1000512c]]
// Convention: __cdecl
// Signature: uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags)

#include "nocturne.h"

uint __cdecl dll_dx7_cpp_getOrAddVertex_FUN_10005010(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags)

{
  int vertex_index;
  int cached_index;
  int new_index;
  int texture_u;
  int texture_v;
  SRenderVertex *src;
  int vertex_limit;

  vertex_limit =
      (int)(sizeof(g_VertexBuffer) / sizeof(g_VertexBuffer[0])) - 10;
  new_index = g_PendingVertexCount;
  vertex_index = poly_vertex->vertex_index;
  src = vertex_array + vertex_index;
  if (g_VertexBatchStamp[vertex_index] == g_CurrentBatchStamp) {
    if ((src->u != poly_vertex->texture_u) || (poly_vertex->texture_v != src->v)) {
      texture_v = poly_vertex->texture_v;
      src->u = poly_vertex->texture_u;
      cached_index = g_VertexCacheIndex[vertex_index];
      src->v = texture_v;
      g_VertexBuffer[new_index] = g_VertexBuffer[cached_index];
      texture_u = poly_vertex->texture_u;
      texture_v = poly_vertex->texture_v;
      g_VertexCacheIndex[vertex_index] = new_index;
      g_PendingVertexCount = new_index + 1;
      g_VertexBuffer[new_index].u = (float)texture_u * 5.9604645e-08;
      g_VertexBuffer[new_index].v = (float)texture_v * 5.9604645e-08;
      if (vertex_limit < g_PendingVertexCount) {
        dll_dx7_cpp_fatalError_FUN_10002340("You\'re shoving too many verticies");
      }
    }
  }
  else {
    texture_v = poly_vertex->texture_v;
    g_VertexBatchStamp[vertex_index] = g_CurrentBatchStamp;
    g_VertexCacheIndex[vertex_index] = new_index;
    src->u = poly_vertex->texture_u;
    src->v = texture_v;
    dll_dx7_cpp_buildTLVertex_FUN_100044b0(src,g_VertexBuffer + new_index,render_flags,0x100);
    g_PendingVertexCount = g_PendingVertexCount + 1;
    if (vertex_limit < g_PendingVertexCount) {
      dll_dx7_cpp_fatalError_FUN_10002340("You\'re shoving too many verticies");
    }
  }
  return g_VertexCacheIndex[vertex_index];
}
