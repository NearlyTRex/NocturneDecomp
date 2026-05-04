// Name: core_xform.cpp_clipPolygonStage2_FUN_005f8040
// Address: 005f8040
// MANUAL RECONSTRUCTION
// Address Range: [[005f8040, 005f81a2]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005f8040(void)

{
  byte bVar3;
  uint uVar4;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar2;
  int local_14;
  
  local_14 = 0;
  if (0 < g_ClipVertexCountStage2) {
    vertex_a = g_ClipVertexBufferStage2;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage2) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage2;
      }
      pSVar2 = g_ClipVertexBufferStage2 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar2->projected_vertex).transformed_x <=
          -g_ClipVertexBufferStage2[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        g_ClipVertexBufferStage3[g_ClipVertexCountStage3] = *vertex_a;
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (pSVar2,vertex_a,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        break;
      case 2:
        g_ClipVertexBufferStage3[g_ClipVertexCountStage3] = *vertex_a;
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                  (vertex_a,pSVar2,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
        g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage2);
  }
  return;
}
