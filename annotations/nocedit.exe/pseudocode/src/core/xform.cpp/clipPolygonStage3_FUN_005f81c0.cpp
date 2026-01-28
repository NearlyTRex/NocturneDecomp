// Name: core_xform.cpp_clipPolygonStage3_FUN_005f81c0
// Address: 005f81c0
// Address Range: [[005f81c0, 005f831d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f82c9) */
/* WARNING: Removing unreachable block (ram,0x005f823e) */

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005f81c0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  int local_14;
  
  bVar8 = 0;
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
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
          (pSVar7->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar7 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
          }
        }
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                  (g_ClipVertexBufferStage3 + uVar4,vertex_a,
                   g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
        g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
        break;
      case 2:
        pSVar7 = g_ClipVertexBufferStage4 + g_ClipVertexCountStage4;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          (pSVar7->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar7->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar7 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
          }
        }
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
