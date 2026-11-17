// Name: core_xform.cpp_clipPolygonStage2_FUN_00594a30
// Address: 00594a30
// Address Range: [[00594a30, 00594b92]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage2_FUN_00594a30(void)

#include "nocturne.h"

void __cdecl core_xform_cpp_clipPolygonStage2_FUN_00594a30(void)

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
  SRenderVertex *pSVar9;
  byte bVar10;
  int iStack_14;
  
  bVar10 = 0;
  iStack_14 = 0;
  if (0 < g_INT_02665a60) {
    vertex_a = g_SRenderVertex_ARRAY_02665a6c;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == g_INT_02665a60) {
        uVar4 = uVar4 ^ g_INT_02665a60;
      }
      pSVar6 = g_SRenderVertex_ARRAY_02665a6c + uVar4;
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <=
          -g_SRenderVertex_ARRAY_02665a6c[uVar4].projected_vertex.transformed_z) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        pSVar9 = g_SRenderVertex_ARRAY_0266666c + g_INT_02665a64;
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        pSVar7 = pSVar9;
        if (((uint)pSVar9 & 7) != 0) {
          pSVar7 = (SRenderVertex *)(g_INT_02665a64 * 0x30 + 0x2666670 + (uint)bVar10 * -8);
          pSVar6 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          (pSVar9->projected_vertex).transformed_x = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
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
            *(uint *)((int)pSVar7 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          }
        }
        g_INT_02665a64 = g_INT_02665a64 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                  (pSVar6,vertex_a,g_SRenderVertex_ARRAY_0266666c + g_INT_02665a64);
        g_INT_02665a64 = g_INT_02665a64 + 1;
        break;
      case 2:
        pSVar8 = g_SRenderVertex_ARRAY_0266666c + g_INT_02665a64;
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        pSVar9 = pSVar8;
        if (((uint)pSVar8 & 7) != 0) {
          pSVar9 = (SRenderVertex *)(g_INT_02665a64 * 0x30 + 0x2666670 + (uint)bVar10 * -8);
          pSVar7 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          (pSVar8->projected_vertex).transformed_x = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          (pSVar9->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
          (pSVar9->projected_vertex).transformed_y =
               (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
          pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          (pSVar9->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)pSVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
          }
        }
        g_INT_02665a64 = g_INT_02665a64 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                  (vertex_a,pSVar6,g_SRenderVertex_ARRAY_0266666c + g_INT_02665a64);
        g_INT_02665a64 = g_INT_02665a64 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < g_INT_02665a60);
  }
  return;
}
