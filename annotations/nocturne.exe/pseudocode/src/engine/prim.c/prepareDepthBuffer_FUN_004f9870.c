// Name: engine_prim.c_prepareDepthBuffer_FUN_004f9870
// Address: 004f9870
// Address Range: [[004f9870, 004f98dd]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_prepareDepthBuffer_FUN_004f9870(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_prepareDepthBuffer_FUN_004f9870(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c0399c == 0) {
    iVar2 = 0;
    if (0 < vertex_count) {
      do {
        while ((vertices->projected_vertex).transformed_z >> 4 == 0) {
          (vertices->projected_vertex).transformed_z = 0x7fffffff;
          iVar2 = iVar2 + 1;
          vertices = vertices + 1;
          if (vertex_count <= iVar2) {
            return;
          }
        }
        (vertices->projected_vertex).transformed_z = (vertices->projected_vertex).inv_z;
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
      } while (iVar2 < vertex_count);
    }
  }
  else {
    iVar2 = 0;
    if (0 < vertex_count) {
      do {
        iVar1 = (vertices->projected_vertex).transformed_z;
        if (iVar1 == 0) {
          (vertices->projected_vertex).transformed_z = 0x7fffffff;
        }
        else {
          (vertices->projected_vertex).transformed_z = 0x7fffffff - iVar1;
        }
        iVar2 = iVar2 + 1;
        vertices = vertices + 1;
      } while (iVar2 < vertex_count);
    }
  }
  return;
}
