// Name: engine_clipper.c_clipPolygonFarPlane_FUN_0043bed0
// Address: 0043bed0
// Address Range: [[0043bed0, 0043bfcf] [0043c015, 0043c055]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_0043bed0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043c072) */
/* WARNING: Removing unreachable block (ram,0x0043bfec) */

void __cdecl engine_clipper_c_clipPolygonFarPlane_FUN_0043bed0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  SRenderVertex *v1;
  int *piVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  SRenderVertex *pSVar11;
  byte bVar12;
  
  bVar12 = 0;
  iVar7 = 0;
  if (g_FarPlaneDistance != 0) {
    if (0 < g_INT_007c7554) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)((int)&g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_z +
                        iVar5);
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar5 = iVar5 + 0x30;
      } while (iVar5 < g_INT_007c7554 * 0x30);
    }
    if (g_FarPlaneDistance <= iVar7) {
      g_INT_007c7bd8 = g_INT_007c7554;
      iVar5 = 0;
      piVar10 = &g_SRenderVertex_ARRAY_007c7bdc[0].projected_vertex.transformed_y;
      piVar8 = &g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_y;
      g_SRenderVertex_ARRAY_007c7bdc[0].projected_vertex.transformed_x =
           g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_x;
      iVar7 = g_INT_007c7554 * 0x30 + -4;
      if (iVar7 != 0 && 3 < g_INT_007c7554 * 0x30) {
        while (7 < iVar7) {
          lVar1 = *(longlong *)piVar8;
          piVar8 = piVar8 + 2;
          *(longlong *)piVar10 = (longlong)ROUND((float10)lVar1);
          piVar10 = piVar10 + 2;
          iVar7 = iVar7 + -8;
        }
        if (iVar7 != 0 && -9 < iVar7 + -8) {
          *piVar10 = *piVar8;
          if (4 < iVar7) {
            piVar10[1] = piVar8[1];
          }
        }
      }
      g_INT_007c7554 = 0;
      if (0 < g_INT_007c7bd8) {
        v1 = g_SRenderVertex_ARRAY_007c7bdc;
        do {
          uVar6 = iVar5 + 1;
          if (uVar6 == g_INT_007c7bd8) {
            uVar6 = uVar6 ^ g_INT_007c7bd8;
          }
          bVar4 = g_FarPlaneDistance <= (v1->projected_vertex).transformed_z;
          if (g_FarPlaneDistance <=
              g_SRenderVertex_ARRAY_007c7bdc[uVar6].projected_vertex.transformed_z) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            pSVar11 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
            iVar7 = 0x30;
            pSVar9 = v1;
            while (7 < iVar7) {
              lVar2._0_4_ = (pSVar9->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar9->projected_vertex).transformed_y;
              pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              if (4 < iVar7) {
                *(uint *)((int)pSVar11 + (uint)bVar12 * -8 + 4) =
                     *(uint *)((int)pSVar9 + (uint)bVar12 * -8 + 4);
              }
            }
            g_INT_007c7554 = g_INT_007c7554 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                      (g_SRenderVertex_ARRAY_007c7bdc + uVar6,v1,
                       g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
            g_INT_007c7554 = g_INT_007c7554 + 1;
            break;
          case 2:
            pSVar11 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
            iVar7 = 0x30;
            pSVar9 = v1;
            while (7 < iVar7) {
              lVar1._0_4_ = (pSVar9->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar9->projected_vertex).transformed_y;
              pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              if (4 < iVar7) {
                *(uint *)((int)pSVar11 + (uint)bVar12 * -8 + 4) =
                     *(uint *)((int)pSVar9 + (uint)bVar12 * -8 + 4);
              }
            }
            g_INT_007c7554 = g_INT_007c7554 + 1;
            engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                      (v1,g_SRenderVertex_ARRAY_007c7bdc + uVar6,
                       g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
            g_INT_007c7554 = g_INT_007c7554 + 1;
          }
          iVar5 = iVar5 + 1;
          v1 = v1 + 1;
        } while (iVar5 < g_INT_007c7bd8);
      }
    }
  }
  return;
}
