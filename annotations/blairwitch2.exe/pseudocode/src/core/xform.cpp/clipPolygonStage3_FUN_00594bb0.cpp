// Name: core_xform.cpp_clipPolygonStage3_FUN_00594bb0
// Address: 00594bb0
// Address Range: [[00594bb0, 00594d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00594bb0(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00594bb0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  int iStack_14;
  
  bVar9 = 0;
  iStack_14 = 0;
  if (0 < g_ClipVertexCountStage3) {
    vertex_a = g_ClipVertexBufferStage3;
    do {
      uVar4 = iStack_14 + 1;
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
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        pSVar8 = pSVar7;
        if (((uint)pSVar7 & 7) != 0) {
          pSVar8 = (SRenderVertex *)(g_ClipVertexCountStage4 * 0x30 + 0x2666c70 + (uint)bVar9 * -8);
          pSVar6 = (SRenderVertex *)((int)vertex_a + (uint)bVar9 * -8 + 4);
          (pSVar7->projected_vertex).transformed_x = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar8->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar8->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                  (g_ClipVertexBufferStage3 + uVar4,vertex_a,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 2:
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        pSVar8 = pSVar7;
        if (((uint)pSVar7 & 7) != 0) {
          pSVar8 = (SRenderVertex *)(g_ClipVertexCountStage4 * 0x30 + 0x2666c70 + (uint)bVar9 * -8);
          pSVar6 = (SRenderVertex *)((int)vertex_a + (uint)bVar9 * -8 + 4);
          (pSVar7->projected_vertex).transformed_x = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar8->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar8->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_00594730
                  (vertex_a,g_ClipVertexBufferStage3 + uVar4,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < g_ClipVertexCountStage3);
  }
  return;
}
