// Name: engine_clipper.c_clipAndRasterize_FUN_00431d90
// Address: 00431d90
// Address Range: [[00431d90, 00431dd8]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_00431d90(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipAndRasterize_FUN_00431d90(int vertex_count,int *vertex_indices)

{
  int iVar1;
  
  if (DAT_006141e0 == 0) {
    engine_prim_c_FUN_0051d050(vertex_indices,vertex_count);
    return;
  }
  iVar1 = engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(vertex_count,vertex_indices);
  if ((iVar1 == 0) && (2 < DAT_007bee30)) {
    engine_prim_c_FUN_0051cb20((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
    return;
  }
  return;
}
