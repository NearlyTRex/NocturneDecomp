// Name: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
// Address: 005f81c0
// MANUAL RECONSTRUCTION
// Address Range: [[005f81c0, 005f831d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void)

{
  byte bVar3;
  uint uVar4;
  SRenderVertex *vertex_a;
  int local_14;
  
  local_14 = 0;
  if (0 < g_ClipVertexCountStage3) {
    vertex_a = g_ClipVertexBufferStage3;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage3) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage3;
      }
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_y;
      if (g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_z <=
          g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_y) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        g_ClipVertexBufferStage4[g_ClipVertexCountStage4] = *vertex_a;
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                  (g_ClipVertexBufferStage3 + uVar4,vertex_a,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 2:
        g_ClipVertexBufferStage4[g_ClipVertexCountStage4] = *vertex_a;
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                  (vertex_a,g_ClipVertexBufferStage3 + uVar4,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage3);
  }
  return;
}
