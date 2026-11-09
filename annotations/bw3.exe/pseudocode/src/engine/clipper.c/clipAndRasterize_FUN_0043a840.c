// Name: engine_clipper.c_clipAndRasterize_FUN_0043a840
// Address: 0043a840
// Address Range: [[0043a840, 0043a888]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043a840(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043a840(int vertex_count,int *vertex_indices)

{
  int iVar1;
  
  if (DAT_005fba40 == 0) {
    engine_prim_c_FUN_005163b0(vertex_indices,vertex_count);
    return;
  }
  iVar1 = engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(vertex_count,vertex_indices);
  if ((iVar1 == 0) && (2 < DAT_007e3e88)) {
    engine_prim_c_FUN_00515e80((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88);
    return;
  }
  return;
}
