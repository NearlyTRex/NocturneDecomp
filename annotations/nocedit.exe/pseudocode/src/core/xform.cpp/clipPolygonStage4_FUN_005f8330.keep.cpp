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
  int iVar1;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar7;
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
        pSVar3 = g_ClippedVertexBuffer + g_ClippedVertexCount;
        iVar1 = 0x30;
        pSVar2 = vertex_a;
        while (7 < iVar1) {
          memcpy(&(pSVar3->projected_vertex).transformed_x, &(pSVar2->projected_vertex).transformed_x, 8);
          pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_z;
          pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_z;
          iVar1 = iVar1 + -8;
        }
        if (iVar1 != 0 && -9 < iVar1 + -8) {
          (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
          if (4 < iVar1) {
            (pSVar3->projected_vertex).transformed_y = (pSVar2->projected_vertex).transformed_y;
          }
        }
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                  (g_ClipVertexBufferStage4 + uVar4,vertex_a,
                   g_ClippedVertexBuffer + g_ClippedVertexCount);
        g_ClippedVertexCount = g_ClippedVertexCount + 1;
        break;
      case 2:
        pSVar7 = g_ClippedVertexBuffer + g_ClippedVertexCount;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (iVar5 = iVar5 + -8, 7 < iVar5) {
          memcpy(&(pSVar7->projected_vertex).transformed_x, &(pSVar6->projected_vertex).transformed_x, 8);
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar5 = iVar5;
        }
        if (iVar5 != 0 && -9 < iVar5) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            (pSVar7->projected_vertex).transformed_y = (pSVar6->projected_vertex).transformed_y;
          }
        }
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
