// Name: engine_clipper.c_clipPolygonFarPlane_FUN_00439ae0
// Address: 00439ae0
// Address Range: [[00439ae0, 00439cd8]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00439ae0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00439b58) */

void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_00439ae0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *pSVar12;
  byte bVar13;
  
  bVar13 = 0;
  iVar8 = 0;
  if (g_INT_005f12f4 != 0) {
    if (0 < g_INT_007e3e88) {
      iVar6 = 0;
      do {
        iVar4 = *(int *)((int)&g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.transformed_z +
                        iVar6);
        if (iVar8 < iVar4) {
          iVar8 = iVar4;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 < g_INT_007e3e88 * 0x30);
    }
    if (g_INT_005f12f4 <= iVar8) {
      g_INT_007e450c = g_INT_007e3e88;
      pSVar9 = g_SRenderVertex_ARRAY_007e3e8c;
      pSVar10 = g_SRenderVertex_ARRAY_007e4510;
      iVar6 = 0;
      iVar8 = g_INT_007e3e88 * 0x30;
      while (7 < iVar8) {
        lVar1._0_4_ = (pSVar9->projected_vertex).transformed_x;
        lVar1._4_4_ = (pSVar9->projected_vertex).transformed_y;
        pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
        (pSVar10->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
        (pSVar10->projected_vertex).transformed_y =
             (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
        pSVar10 = (SRenderVertex *)&(pSVar10->projected_vertex).transformed_z;
        iVar8 = iVar8 + -8;
      }
      if (iVar8 != 0 && -9 < iVar8 + -8) {
        (pSVar10->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
        if (4 < iVar8) {
          (pSVar10->projected_vertex).transformed_y = (pSVar9->projected_vertex).transformed_y;
        }
      }
      g_INT_007e3e88 = 0;
      if (0 < g_INT_007e450c) {
        pSVar9 = g_SRenderVertex_ARRAY_007e4510;
        do {
          uVar7 = iVar6 + 1;
          if (uVar7 == g_INT_007e450c) {
            uVar7 = uVar7 ^ g_INT_007e450c;
          }
          bVar5 = g_INT_005f12f4 <= (pSVar9->projected_vertex).transformed_z;
          if (g_INT_005f12f4 <= g_SRenderVertex_ARRAY_007e4510[uVar7].projected_vertex.transformed_z
             ) {
            bVar5 = bVar5 | 2;
          }
          switch(bVar5) {
          case 0:
            pSVar11 = g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88;
            iVar8 = 0x30;
            pSVar10 = pSVar9;
            pSVar12 = pSVar11;
            if (((uint)pSVar11 & 7) != 0) {
              pSVar12 = (SRenderVertex *)(g_INT_007e3e88 * 0x30 + 0x7e3e90 + (uint)bVar13 * -8);
              pSVar10 = (SRenderVertex *)((int)pSVar9 + (uint)bVar13 * -8 + 4);
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              iVar8 = 0x2c;
            }
            while (7 < iVar8) {
              lVar2._0_4_ = (pSVar10->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar10->projected_vertex).transformed_y;
              pSVar10 = (SRenderVertex *)&(pSVar10->projected_vertex).transformed_z;
              (pSVar12->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar12->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_z;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              (pSVar12->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
              if (4 < iVar8) {
                *(uint *)((int)pSVar12 + (uint)bVar13 * -8 + 4) =
                     *(uint *)((int)pSVar10 + (uint)bVar13 * -8 + 4);
              }
            }
            g_INT_007e3e88 = g_INT_007e3e88 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                      (g_SRenderVertex_ARRAY_007e4510 + uVar7,pSVar9,
                       g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88);
            g_INT_007e3e88 = g_INT_007e3e88 + 1;
            break;
          case 2:
            pSVar11 = g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88;
            iVar8 = 0x30;
            pSVar10 = pSVar9;
            pSVar12 = pSVar11;
            if (((uint)pSVar11 & 7) != 0) {
              pSVar12 = (SRenderVertex *)(g_INT_007e3e88 * 0x30 + 0x7e3e90 + (uint)bVar13 * -8);
              pSVar10 = (SRenderVertex *)((int)pSVar9 + (uint)bVar13 * -8 + 4);
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              iVar8 = 0x2c;
            }
            while (7 < iVar8) {
              lVar3._0_4_ = (pSVar10->projected_vertex).transformed_x;
              lVar3._4_4_ = (pSVar10->projected_vertex).transformed_y;
              pSVar10 = (SRenderVertex *)&(pSVar10->projected_vertex).transformed_z;
              (pSVar12->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
              (pSVar12->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
              pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_z;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              (pSVar12->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
              if (4 < iVar8) {
                *(uint *)((int)pSVar12 + (uint)bVar13 * -8 + 4) =
                     *(uint *)((int)pSVar10 + (uint)bVar13 * -8 + 4);
              }
            }
            g_INT_007e3e88 = g_INT_007e3e88 + 1;
            engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                      (pSVar9,g_SRenderVertex_ARRAY_007e4510 + uVar7,
                       g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88);
            g_INT_007e3e88 = g_INT_007e3e88 + 1;
          }
          iVar6 = iVar6 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar6 < g_INT_007e450c);
      }
    }
  }
  return;
}
