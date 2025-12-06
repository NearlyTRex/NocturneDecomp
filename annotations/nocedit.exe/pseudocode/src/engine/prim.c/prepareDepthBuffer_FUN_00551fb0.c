// Name: engine_prim.c_prepareDepthBuffer_FUN_00551fb0
// Address: 00551fb0
// Address Range: [[00551fb0, 0055201d]]
// Convention: __cdecl
// Signature: void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  int iVar2;
  
  if (g_ProcessorType == 0) {
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
