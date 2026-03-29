// Name: engine_clipper.c_clipPolygonNearPlane_FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 00436618]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004365c2) */
/* WARNING: Removing unreachable block (ram,0x0043653c) */

void __cdecl engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void)

{
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar4;
  int iVar7;
  int iVar6;
  SRenderVertex *v1;
  int *piVar8;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar9;
  int *piVar10;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar11;
  byte bVar12;
  int iVar3;
  longlong lVar1;
  longlong lVar2;
  
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
      g_SecondaryClipVertexCount = g_ClippedVertexCount;
      iVar6 = 0;
      g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_x =
           g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
      piVar8 = &g_ClippedVertexBuffer[0].projected_vertex.transformed_y;
      piVar10 = &g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y;
      iVar4 = g_ClippedVertexCount * 0x30 + -4;
      if (iVar4 != 0 && 3 < g_ClippedVertexCount * 0x30) {
        while (7 < iVar4) {
          lVar1 = *(longlong *)piVar8;
          piVar8 = piVar8 + 2;
          *(longlong *)piVar10 = (longlong)ROUND((float10)lVar1);
          piVar10 = piVar10 + 2;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          *piVar10 = *piVar8;
          if (4 < iVar4) {
            piVar10[1] = piVar8[1];
          }
        }
      }
      g_ClippedVertexCount = 0;
      if (0 < g_SecondaryClipVertexCount) {
        v1 = g_SecondaryClipVertexBuffer;
        do {
          uVar6 = iVar6 + 1;
          if (uVar6 == g_SecondaryClipVertexCount) {
            uVar6 = uVar6 ^ g_SecondaryClipVertexCount;
          }
          bVar4 = g_NearPlaneDistance <= (v1->projected_vertex).transformed_z;
          if (g_NearPlaneDistance <=
              g_SecondaryClipVertexBuffer[uVar6].projected_vertex.transformed_z) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            pSVar8 = g_ClippedVertexBuffer + g_ClippedVertexCount;
            iVar4 = 0x30;
            pSVar7 = v1;
            while (7 < iVar4) {
              lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
              pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
              (pSVar8->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar8->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              if (4 < iVar4) {
                (pSVar8->projected_vertex).transformed_y = (pSVar7->projected_vertex).transformed_y;
              }
            }
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (g_SecondaryClipVertexBuffer + uVar6,v1,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            break;
          case 2:
            pSVar11 = g_ClippedVertexBuffer + g_ClippedVertexCount;
            iVar4 = 0x30;
            pSVar9 = v1;
            while (7 < iVar4) {
              lVar3._0_4_ = (pSVar9->projected_vertex).transformed_x;
              lVar3._4_4_ = (pSVar9->projected_vertex).transformed_y;
              pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              (pSVar11->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
              if (4 < iVar4) {
                (pSVar11->projected_vertex).transformed_y = (pSVar9->projected_vertex).transformed_y
                ;
              }
            }
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
            engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                      (v1,g_SecondaryClipVertexBuffer + uVar6,
                       g_ClippedVertexBuffer + g_ClippedVertexCount);
            g_ClippedVertexCount = g_ClippedVertexCount + 1;
          }
          iVar6 = iVar6 + 1;
          v1 = v1 + 1;
        } while (iVar6 < g_SecondaryClipVertexCount);
      }
    }
  }
  return;
}
