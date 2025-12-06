// Name: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// Address: 005fd4e0
// Address Range: [[005fd4e0, 005fd985]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizePolygon_FUN_005fd4e0(SRenderVertex * vertex_buffer, int vertex_count, RenderScanlineFunc * scanline_renderer)

#include "nocturne.h"

void __cdecl
engine_3d_c_rasterizePolygon_FUN_005fd4e0
          (SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SEdgeData *pSVar4;
  SEdgeData *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *in_stack_00000010;
  int local_14;
  
  iVar12 = 0;
  pSVar7 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if ((int)((pSVar7->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar7->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar7->projected_vertex).transformed_z);
        (pSVar7->projected_vertex).screen_x =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar7->projected_vertex).screen_y =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar12 = iVar12 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar12 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar12 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar12 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
  }
  g_RasterizerEdgeCount = 0;
  g_RasterizerMaxY = 0;
  local_14 = 0;
  g_RasterizerMinY = 0x4b0;
  iVar12 = g_RasterizerEdgeCount;
  if (0 < (int)scanline_renderer) {
    do {
      iVar2 = local_14 + 1;
      if ((int)scanline_renderer <= iVar2) {
        iVar2 = 0;
      }
      iVar8 = vertex_count + iVar2 * 0x30;
      iVar9 = vertex_count + local_14 * 0x30;
      iVar3 = *(int *)(iVar8 + 0x14) >> 0x10;
      iVar2 = *(int *)(iVar9 + 0x14) >> 0x10;
      g_RasterizerEdgeCount = iVar12;
      if (iVar2 != iVar3) {
        iVar6 = iVar3;
        iVar11 = iVar8;
        if (*(int *)(iVar8 + 0x14) < *(int *)(iVar9 + 0x14)) {
          iVar6 = iVar2;
          iVar2 = iVar3;
          iVar11 = iVar9;
          iVar9 = iVar8;
        }
        g_RasterizerEdgeArray[iVar12].y_start = iVar2;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar12].y_end = iVar6;
        if (iVar2 < iVar3) {
          g_RasterizerMinY = iVar2;
        }
        if (g_RasterizerMaxY < iVar6) {
          g_RasterizerMaxY = iVar6;
        }
        g_RasterizerEdgeArray[iVar12].x_current = *(int *)(iVar9 + 0x10);
        g_RasterizerEdgeArray[iVar12].z_current = *(int *)(iVar9 + 8) << 8;
        g_RasterizerEdgeArray[iVar12].light_current = *(int *)(iVar9 + 0x20);
        uVar10 = *(int *)(iVar11 + 0x14) - *(int *)(iVar9 + 0x14);
        if (uVar10 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar10);
        }
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(iVar11 + 0x10) - *(int *)(iVar9 + 0x10));
        g_RasterizerEdgeArray[iVar12].x_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)((*(int *)(iVar11 + 8) - *(int *)(iVar9 + 8)) * 0x100);
        g_RasterizerEdgeArray[iVar12].z_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(iVar11 + 0x20) - *(int *)(iVar9 + 0x20));
        g_RasterizerEdgeArray[iVar12].light_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        uVar10 = (uint)(ushort)((ushort)*(uint *)(iVar9 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[iVar12].x_delta;
        g_RasterizerEdgeArray[iVar12].x_current =
             g_RasterizerEdgeArray[iVar12].x_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[iVar12].z_delta;
        iVar2 = g_RasterizerEdgeArray[iVar12].light_delta;
        g_RasterizerEdgeArray[iVar12].z_current =
             g_RasterizerEdgeArray[iVar12].z_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)iVar2;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar12].light_current =
             g_RasterizerEdgeArray[iVar12].light_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_14 = local_14 + 1;
      iVar12 = g_RasterizerEdgeCount;
    } while (local_14 < (int)scanline_renderer);
  }
  iVar12 = g_RasterizerMinY;
  pSVar4 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == pSVar4->y_start) && (pSVar4 != (SEdgeData *)0x0)) goto LAB_005fd5f3;
      iVar2 = iVar2 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  pSVar4 = (SEdgeData *)0x0;
LAB_005fd5f3:
  if (pSVar4 != (SEdgeData *)0x0) {
    iVar2 = 0;
    pSVar5 = g_RasterizerEdgeArray;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd62a;
        iVar2 = iVar2 + 1;
        pSVar5 = pSVar5 + 1;
      } while (iVar2 < g_RasterizerEdgeCount);
    }
    pSVar5 = (SEdgeData *)0x0;
LAB_005fd62a:
    if (pSVar5 != (SEdgeData *)0x0) {
      do {
        if (pSVar4->y_end <= iVar12) {
          pSVar4->y_start = -1;
          iVar2 = 0;
          pSVar4 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == pSVar4->y_start) && (pSVar4 != pSVar5)) goto LAB_005fd67c;
              iVar2 = iVar2 + 1;
              pSVar4 = pSVar4 + 1;
            } while (iVar2 < g_RasterizerEdgeCount);
          }
          pSVar4 = (SEdgeData *)0x0;
LAB_005fd67c:
          if (pSVar4 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (pSVar5->y_end <= iVar12) {
          pSVar5->y_start = -1;
          iVar2 = 0;
          pSVar5 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd6c4;
              iVar2 = iVar2 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar2 < g_RasterizerEdgeCount);
          }
          pSVar5 = (SEdgeData *)0x0;
LAB_005fd6c4:
          if (pSVar5 == (SEdgeData *)0x0) {
            return;
          }
        }
        (*in_stack_00000010)((void *)iVar12,pSVar4,(int)pSVar5);
        pSVar4->x_current = pSVar4->x_current + pSVar4->x_delta;
        pSVar4->z_current = pSVar4->z_current + pSVar4->z_delta;
        pSVar4->light_current = pSVar4->light_current + pSVar4->light_delta;
        pSVar5->x_current = pSVar5->x_current + pSVar5->x_delta;
        pSVar5->z_current = pSVar5->z_current + pSVar5->z_delta;
        pSVar5->light_current = pSVar5->light_current + pSVar5->light_delta;
      } while( true );
    }
  }
  return;
}
