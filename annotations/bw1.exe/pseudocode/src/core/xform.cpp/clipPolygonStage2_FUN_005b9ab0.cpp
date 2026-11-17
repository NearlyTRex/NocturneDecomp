// Name: core_xform.cpp_clipPolygonStage2_FUN_005b9ab0
// Address: 005b9ab0
// Address Range: [[005b9ab0, 005b9c12]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005b9ab0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b9bbe) */
/* WARNING: Removing unreachable block (ram,0x005b9b33) */

void __cdecl core_xform_cpp_clipPolygonStage2_FUN_005b9ab0(void)

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
  if (0 < g_INT_02c9d2ec) {
    vertex_a = g_SRenderVertex_ARRAY_02c9d2f8;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == g_INT_02c9d2ec) {
        uVar4 = uVar4 ^ g_INT_02c9d2ec;
      }
      pSVar6 = g_SRenderVertex_ARRAY_02c9d2f8 + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <=
          -g_SRenderVertex_ARRAY_02c9d2f8[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0;
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
            *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                  (pSVar6,vertex_a,g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0);
        g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
        break;
      case 2:
        pSVar8 = g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0;
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
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0
                  (vertex_a,pSVar6,g_SRenderVertex_ARRAY_02c9def8 + g_INT_02c9d2f0);
        g_INT_02c9d2f0 = g_INT_02c9d2f0 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < g_INT_02c9d2ec);
  }
  return;
}
