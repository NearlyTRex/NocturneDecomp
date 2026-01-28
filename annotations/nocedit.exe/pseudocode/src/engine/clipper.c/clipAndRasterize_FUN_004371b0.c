// Name: engine_clipper.c_clipAndRasterize_FUN_004371b0
// Address: 004371b0
// Address Range: [[004371b0, 004371f8]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_004371b0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipAndRasterize_FUN_004371b0(int vertex_count,int *vertex_indices)

{
  int iVar1;
  
  if (g_VertexProcessingEnabled == 0) {
    engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(vertex_indices,vertex_count);
    return;
  }
  iVar1 = engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(vertex_count,vertex_indices);
  if ((iVar1 == 0) && (2 < g_ClippedVertexCount)) {
    engine_prim_c_renderPolygonSoftware_FUN_00552510(g_ClippedVertexBuffer,g_ClippedVertexCount);
    return;
  }
  return;
}
