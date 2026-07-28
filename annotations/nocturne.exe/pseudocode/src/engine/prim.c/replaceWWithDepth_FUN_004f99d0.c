// Name: engine_prim.c_replaceWWithDepth_FUN_004f99d0
// Address: 004f99d0
// Address Range: [[004f99d0, 004f9a06]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_replaceWWithDepth_FUN_004f99d0(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_replaceWWithDepth_FUN_004f99d0(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < vertex_count) {
    do {
      while ((vertices->projected_vertex).transformed_z != 0) {
        (vertices->projected_vertex).transformed_z = (vertices->projected_vertex).inv_z;
        iVar1 = iVar1 + 1;
        vertices = vertices + 1;
        if (vertex_count <= iVar1) {
          return;
        }
      }
      (vertices->projected_vertex).transformed_z = 0x7fffffff;
      iVar1 = iVar1 + 1;
      vertices = vertices + 1;
    } while (iVar1 < vertex_count);
  }
  return;
}
