// Name: engine_clipper.c_clipAndRasterize_FUN_0043cbf0
// Address: 0043cbf0
// Address Range: [[0043cbf0, 0043cc38]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043cbf0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043cbf0(int vertex_count,int *vertex_indices)

{
  int iVar1;
  
  if (DAT_0061b4c0 == 0) {
    engine_prim_c_renderIndexedPolygonSoftware_FUN_0053e650(vertex_indices,vertex_count);
    return;
  }
  iVar1 = engine_clipper_c_clipPolygonToViewFrustum_FUN_0043c190(vertex_count,vertex_indices);
  if ((iVar1 == 0) && (2 < DAT_007c7554)) {
    engine_prim_c_renderPolygonSoftware_FUN_0053e120((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
    return;
  }
  return;
}
