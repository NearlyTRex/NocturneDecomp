// Name: core_xform.cpp_clipPolygonStage4_FUN_005f8330
// Address: 005f8330
// MANUAL RECONSTRUCTION
// Address Range: [[005f8330, 005f8493]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005f8330(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage4_FUN_005f8330(void)

{
  byte bVar3;
  uint uVar4;
  SRenderVertex *vertex_a;
  int local_14;
  
  local_14 = 0;
  if (0 < g_ClipVertexCountStage4) {
    vertex_a = g_ClipVertexBufferStage4;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage4) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage4;
      }
      bVar3 = (vertex_a->projected_vertex).transformed_y <=
              -(vertex_a->projected_vertex).transformed_z;
      if (g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_y <=
          -g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        g_ClippedVertexBuffer[g_ClippedVertexCount] = *vertex_a;
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                  (g_ClipVertexBufferStage4 + uVar4,vertex_a,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        g_ClippedVertexBuffer[g_ClippedVertexCount] = *vertex_a;
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                  (vertex_a,g_ClipVertexBufferStage4 + uVar4,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage4);
  }
  return;
}
