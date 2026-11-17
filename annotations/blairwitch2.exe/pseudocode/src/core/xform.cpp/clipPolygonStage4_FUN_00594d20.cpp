// Name: core_xform.cpp_clipPolygonStage4_FUN_00594d20
// Address: 00594d20
// Address Range: [[00594d20, 00594e83]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage4_FUN_00594d20(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage4_FUN_00594d20(void)

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
  if (0 < g_INT_02665a68) {
    vertex_a = g_SRenderVertex_ARRAY_02666c6c;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == g_INT_02665a68) {
        uVar4 = uVar4 ^ g_INT_02665a68;
      }
      bVar3 = (vertex_a->projected_vertex).transformed_y <=
              -(vertex_a->projected_vertex).transformed_z;
      if (g_SRenderVertex_ARRAY_02666c6c[uVar4].projected_vertex.transformed_y <=
          -g_SRenderVertex_ARRAY_02666c6c[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar7 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        pSVar8 = pSVar7;
        if (((uint)pSVar7 & 7) != 0) {
          pSVar8 = (SRenderVertex *)(g_INT_007bee30 * 0x30 + 0x7bee38 + (uint)bVar9 * -8);
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
        g_INT_007bee30 = g_INT_007bee30 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005947f0
                  (g_SRenderVertex_ARRAY_02666c6c + uVar4,vertex_a,
                   g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
        g_INT_007bee30 = g_INT_007bee30 + 1;
        break;
      case 2:
        pSVar7 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        pSVar8 = pSVar7;
        if (((uint)pSVar7 & 7) != 0) {
          pSVar8 = (SRenderVertex *)(g_INT_007bee30 * 0x30 + 0x7bee38 + (uint)bVar9 * -8);
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
        g_INT_007bee30 = g_INT_007bee30 + 1;
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005947f0
                  (vertex_a,g_SRenderVertex_ARRAY_02666c6c + uVar4,
                   g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
        g_INT_007bee30 = g_INT_007bee30 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < g_INT_02665a68);
  }
  return;
}
