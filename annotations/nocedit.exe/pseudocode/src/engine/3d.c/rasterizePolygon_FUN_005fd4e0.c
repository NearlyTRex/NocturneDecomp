// Name: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// Address: 005fd4e0
// Address Range: [[005fd4e0, 005fd985]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

{
  longlong lVar1;
  byte *puVar2;
  int iVar3;
  SEdgeData *pSVar4;
  SEdgeData *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SEdgeData *pSVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  void *pvVar12;
  void *pvVar13;
  void *extraout_ESI;
  int iVar14;
  SEdgeData *extraout_EDI;
  SEdgeData *local_18;
  
  iVar14 = 0;
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
      iVar14 = iVar14 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar14 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar14 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar14 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0(vertex_buffer,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertex_buffer,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(vertex_buffer,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertex_buffer,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertex_buffer,vertex_count);
  }
  pvVar12 = (void *)0x0;
  g_RasterizerMaxY = 0;
  local_18 = (SEdgeData *)0x0;
  g_RasterizerMinY = 0x4b0;
  pvVar13 = pvVar12;
  if (0 < vertex_count) {
    do {
      puVar2 = (byte *)((int)&local_18->y_start + 1);
      if (vertex_count <= (int)puVar2) {
        puVar2 = (byte *)0x0;
      }
      pSVar8 = vertex_buffer + (int)puVar2;
      pSVar7 = vertex_buffer + (int)local_18;
      iVar3 = (pSVar8->projected_vertex).screen_y >> 0x10;
      iVar14 = (pSVar7->projected_vertex).screen_y >> 0x10;
      pvVar12 = pvVar13;
      if (iVar14 != iVar3) {
        iVar6 = iVar3;
        pSVar11 = pSVar8;
        if ((pSVar8->projected_vertex).screen_y < (pSVar7->projected_vertex).screen_y) {
          iVar6 = iVar14;
          iVar14 = iVar3;
          pSVar11 = pSVar7;
          pSVar7 = pSVar8;
        }
        g_RasterizerEdgeArray[(int)pvVar13].y_start = iVar14;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[(int)pvVar13].y_end = iVar6;
        if (iVar14 < iVar3) {
          g_RasterizerMinY = iVar14;
        }
        if (g_RasterizerMaxY < iVar6) {
          g_RasterizerMaxY = iVar6;
        }
        g_RasterizerEdgeArray[(int)pvVar13].x_current = (pSVar7->projected_vertex).screen_x;
        g_RasterizerEdgeArray[(int)pvVar13].z_current =
             (pSVar7->projected_vertex).transformed_z << 8;
        g_RasterizerEdgeArray[(int)pvVar13].light_current = pSVar7->z;
        uVar10 = (pSVar11->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar10 < 0x10000) {
          iVar14 = 0;
        }
        else {
          iVar14 = (int)(0xffffffff / (ulonglong)uVar10);
        }
        lVar1 = (longlong)iVar14 *
                (longlong)
                ((pSVar11->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        g_RasterizerEdgeCount = (int)pvVar13;
        g_RasterizerEdgeArray[(int)pvVar13].x_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar14 *
                (longlong)
                (((pSVar11->projected_vertex).transformed_z -
                 (pSVar7->projected_vertex).transformed_z) * 0x100);
        g_RasterizerEdgeArray[(int)pvVar13].z_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar14 * (longlong)(pSVar11->z - pSVar7->z);
        g_RasterizerEdgeArray[(int)pvVar13].light_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        uVar10 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[(int)pvVar13].x_delta;
        g_RasterizerEdgeArray[(int)pvVar13].x_current =
             g_RasterizerEdgeArray[(int)pvVar13].x_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[(int)pvVar13].z_delta;
        iVar14 = g_RasterizerEdgeArray[(int)pvVar13].light_delta;
        g_RasterizerEdgeArray[(int)pvVar13].z_current =
             g_RasterizerEdgeArray[(int)pvVar13].z_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)iVar14;
        pvVar12 = (void *)(g_RasterizerEdgeCount + 1);
        g_RasterizerEdgeArray[(int)pvVar13].light_current =
             g_RasterizerEdgeArray[(int)pvVar13].light_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_18 = (SEdgeData *)((int)&local_18->y_start + 1);
      pvVar13 = pvVar12;
    } while ((int)local_18 < vertex_count);
  }
  iVar14 = g_RasterizerMinY;
  pSVar4 = g_RasterizerEdgeArray;
  iVar3 = 0;
  if (0 < (int)pvVar12) {
    do {
      if ((g_RasterizerMinY == pSVar4->y_start) && (pSVar4 != (SEdgeData *)0x0)) goto LAB_005fd5f3;
      iVar3 = iVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar3 < (int)pvVar12);
  }
  pSVar4 = (SEdgeData *)0x0;
LAB_005fd5f3:
  if (pSVar4 != (SEdgeData *)0x0) {
    iVar3 = 0;
    pSVar5 = g_RasterizerEdgeArray;
    if (0 < (int)pvVar12) {
      do {
        if ((g_RasterizerMinY == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd62a;
        iVar3 = iVar3 + 1;
        pSVar5 = pSVar5 + 1;
      } while (iVar3 < (int)pvVar12);
    }
    pSVar5 = (SEdgeData *)0x0;
LAB_005fd62a:
    pSVar9 = (SEdgeData *)g_RasterizerMinY;
    g_RasterizerEdgeCount = (int)pvVar12;
    if (pSVar5 != (SEdgeData *)0x0) {
      do {
        if (pSVar4->y_end <= iVar14) {
          pSVar4->y_start = -1;
          iVar3 = 0;
          pSVar4 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar14 == pSVar4->y_start) && (pSVar4 != pSVar5)) goto LAB_005fd67c;
              iVar3 = iVar3 + 1;
              pSVar4 = pSVar4 + 1;
            } while (iVar3 < g_RasterizerEdgeCount);
          }
          pSVar4 = (SEdgeData *)0x0;
LAB_005fd67c:
          pSVar9 = (SEdgeData *)iVar14;
          pvVar12 = (void *)g_RasterizerEdgeCount;
          if (pSVar4 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (pSVar5->y_end <= iVar14) {
          pSVar5->y_start = -1;
          iVar3 = 0;
          pSVar5 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar14 == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd6c4;
              iVar3 = iVar3 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar3 < g_RasterizerEdgeCount);
          }
          pSVar5 = (SEdgeData *)0x0;
LAB_005fd6c4:
          pSVar9 = pSVar4;
          pvVar12 = (void *)g_RasterizerEdgeCount;
          if (pSVar5 == (SEdgeData *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(pSVar5,pvVar12,(int)pSVar9);
        pSVar4->x_current = pSVar4->x_current + pSVar4->x_delta;
        pSVar4->z_current = pSVar4->z_current + pSVar4->z_delta;
        pSVar4->light_current = pSVar4->light_current + pSVar4->light_delta;
        extraout_EDI->x_current = extraout_EDI->x_current + extraout_EDI->x_delta;
        local_18 = (SEdgeData *)((int)&local_18->y_start + 1);
        extraout_EDI->z_current = extraout_EDI->z_current + extraout_EDI->z_delta;
        extraout_EDI->light_current = extraout_EDI->light_current + extraout_EDI->light_delta;
        pSVar9 = local_18;
        pvVar12 = extraout_ESI;
        pSVar5 = extraout_EDI;
      } while( true );
    }
  }
  g_RasterizerEdgeCount = (int)pvVar12;
  return;
}
