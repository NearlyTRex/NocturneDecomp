// Name: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
// Address: 005f7ed0
// Address Range: [[005f7ed0, 005f802c]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipPolygonStage1_FUN_005f7ed0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f7fd8) */
/* WARNING: Removing unreachable block (ram,0x005f7f4d) */

void __cdecl core_xform_cpp_clipPolygonStage1_FUN_005f7ed0(void)

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
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < g_ClipVertexCountStage1) {
    vertex_a = g_ClipVertexBufferStage1;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == g_ClipVertexCountStage1) {
        uVar4 = uVar4 ^ g_ClipVertexCountStage1;
      }
      pSVar6 = g_ClipVertexBufferStage1 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_x;
      if (g_ClipVertexBufferStage1[uVar4].projected_vertex.transformed_z <=
          (pSVar6->projected_vertex).transformed_x) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
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
        if (iVar5 != 0 && SCARRY4(iVar5 + -8,8) == iVar5 < 0) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (pSVar6,vertex_a,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        break;
      case 2:
        pSVar8 = g_ClipVertexBufferStage2 + g_ClipVertexCountStage2;
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar8->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && SCARRY4(iVar5 + -8,8) == iVar5 < 0) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                  (vertex_a,pSVar6,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
        g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < g_ClipVertexCountStage1);
  }
  return;
}
