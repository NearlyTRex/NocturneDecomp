// Name: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
// Address: 005f7ed0
// MANUAL RECONSTRUCTION
// Address Range: [[005f7ed0, 005f802c]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void)

{
  byte bVar3;
  uint uVar4;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar2;
  int local_14;
  
  local_14 = 0;
  if (0 < g_ClipVertexCountStage1) {
    vertex_a = g_ClipVertexBufferStage1;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage1) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage1;
      }
      pSVar2 = g_ClipVertexBufferStage1 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_x;
      if (g_ClipVertexBufferStage1[uVar4].projected_vertex.transformed_z <=
          (pSVar2->projected_vertex).transformed_x) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        g_ClipVertexBufferStage2[g_ClipVertexCountStage2] = *vertex_a;
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (pSVar2,vertex_a,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 2:
        g_ClipVertexBufferStage2[g_ClipVertexCountStage2] = *vertex_a;
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (vertex_a,pSVar2,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage1);
  }
  return;
}
