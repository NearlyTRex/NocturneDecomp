// Name: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 00436618]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonNearPlane_FUN_00436420(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004365c2) */
/* WARNING: Removing unreachable block (ram,0x0043653c) */

void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

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
  longlong *plVar10;
  SRenderVertex *pSVar11;
  byte bVar12;
  
  bVar12 = 0;
  iVar7 = 0;
  if (g_NearPlaneDistance != 0) {
    if (0 < g_ClippedVertexCount) {
      iVar5 = 0;
      do {
        iVar3 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z + iVar5);
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar5 = iVar5 + 0x30;
      } while (iVar5 < g_ClippedVertexCount * 0x30);
    }
    if (g_NearPlaneDistance <= iVar7) {
      DAT_008254a8 = g_ClippedVertexCount;
      iVar5 = 0;
      plVar10 = (longlong *)((int)&DAT_008254ac + 4);
      piVar8 = &g_ClippedVertexBuffer[0].projected_vertex.transformed_y;
      DAT_008254ac._0_4_ = g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
      iVar7 = g_ClippedVertexCount * 0x30 + -4;
      if (iVar7 != 0 && 3 < g_ClippedVertexCount * 0x30) {
        while (7 < iVar7) {
          lVar1 = *(longlong *)piVar8;
          piVar8 = piVar8 + 2;
          *plVar10 = (longlong)ROUND((float10)lVar1);
          plVar10 = plVar10 + 1;
          iVar7 = iVar7 + -8;
        }
        if (iVar7 != 0 && -9 < iVar7 + -8) {
          *(int *)plVar10 = *piVar8;
          if (4 < iVar7) {
            *(int *)((int)plVar10 + 4) = piVar8[1];
          }
        }
      }
      g_ClippedVertexCount = 0;
      if (0 < (int)DAT_008254a8) {
        v1 = (SRenderVertex *)&DAT_008254ac;
        do {
          uVar6 = iVar5 + 1;
          if (uVar6 == DAT_008254a8) {
            uVar6 = uVar6 ^ DAT_008254a8;
          }
          bVar4 = g_NearPlaneDistance <= (v1->projected_vertex).transformed_z;
          if (g_NearPlaneDistance <= *(int *)(&DAT_008254b4 + uVar6 * 0x30)) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            pSVar11 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      ((SRenderVertex *)(&DAT_008254ac + uVar6 * 6),v1,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 2:
            pSVar11 = g_ClippedVertexBuffer + g_ClippedVertexCount;
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
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (v1,(SRenderVertex *)(&DAT_008254ac + uVar6 * 6),
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
          }
          iVar5 = iVar5 + 1;
          v1 = v1 + 1;
        } while (iVar5 < (int)DAT_008254a8);
      }
    }
  }
  return;
}
