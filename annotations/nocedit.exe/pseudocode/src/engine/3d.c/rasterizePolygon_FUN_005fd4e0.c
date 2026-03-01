// Name: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// Address: 005fd4e0
// Address Range: [[005fd4e0, 005fd985]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

{
  int *piVar1;
  longlong lVar2;
  byte *puVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  SSoftwareEdge *left;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SSoftwareEdge *scanline_y;
  uint uVar9;
  SRenderVertex *pSVar10;
  SHardwareEdge *right;
  SHardwareEdge *pSVar11;
  SHardwareEdge *extraout_ESI;
  int iVar12;
  SSoftwareEdge *extraout_EDI;
  SSoftwareEdge *local_18;
  
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
  right = (SHardwareEdge *)0x0;
  g_RasterizerMaxY = 0;
  local_18 = (SSoftwareEdge *)0x0;
  g_RasterizerMinY = 0x4b0;
  pSVar11 = right;
  if (0 < vertex_count) {
    do {
      puVar3 = (byte *)((int)&(local_18->base).y_min + 1);
      if (vertex_count <= (int)puVar3) {
        puVar3 = (byte *)0x0;
      }
      pSVar8 = vertex_buffer + (int)puVar3;
      pSVar7 = vertex_buffer + (int)local_18;
      iVar4 = (pSVar8->projected_vertex).screen_y >> 0x10;
      iVar12 = (pSVar7->projected_vertex).screen_y >> 0x10;
      right = pSVar11;
      if (iVar12 != iVar4) {
        iVar6 = iVar4;
        pSVar10 = pSVar8;
        if ((pSVar8->projected_vertex).screen_y < (pSVar7->projected_vertex).screen_y) {
          iVar6 = iVar12;
          iVar12 = iVar4;
          pSVar10 = pSVar7;
          pSVar7 = pSVar8;
        }
        g_RasterizerEdgeArray[(int)pSVar11].base.y_min = iVar12;
        iVar4 = g_RasterizerMinY;
        g_RasterizerEdgeArray[(int)pSVar11].base.y_max = iVar6;
        if (iVar12 < iVar4) {
          g_RasterizerMinY = iVar12;
        }
        if (g_RasterizerMaxY < iVar6) {
          g_RasterizerMaxY = iVar6;
        }
        g_RasterizerEdgeArray[(int)pSVar11].base.x_current = (pSVar7->projected_vertex).screen_x;
        g_RasterizerEdgeArray[(int)pSVar11].base.w_current =
             (pSVar7->projected_vertex).transformed_z << 8;
        g_RasterizerEdgeArray[(int)pSVar11].base.z_current = pSVar7->z;
        uVar9 = (pSVar10->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar9 < 0x10000) {
          iVar12 = 0;
        }
        else {
          iVar12 = (int)(0xffffffff / (ulonglong)uVar9);
        }
        lVar2 = (longlong)iVar12 *
                (longlong)
                ((pSVar10->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        g_RasterizerEdgeCount = (int)pSVar11;
        g_RasterizerEdgeArray[(int)pSVar11].base.x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar12 *
                (longlong)
                (((pSVar10->projected_vertex).transformed_z -
                 (pSVar7->projected_vertex).transformed_z) * 0x100);
        g_RasterizerEdgeArray[(int)pSVar11].base.w_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar12 * (longlong)(pSVar10->z - pSVar7->z);
        g_RasterizerEdgeArray[(int)pSVar11].base.z_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar9 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar9 * (longlong)g_RasterizerEdgeArray[(int)pSVar11].base.x_gradient
        ;
        piVar1 = &g_RasterizerEdgeArray[(int)pSVar11].base.x_current;
        *piVar1 = *piVar1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar9 * (longlong)g_RasterizerEdgeArray[(int)pSVar11].base.w_gradient
        ;
        iVar12 = g_RasterizerEdgeArray[(int)pSVar11].base.z_gradient;
        g_RasterizerEdgeArray[(int)pSVar11].base.w_current =
             g_RasterizerEdgeArray[(int)pSVar11].base.w_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar9 * (longlong)iVar12;
        right = (SHardwareEdge *)(g_RasterizerEdgeCount + 1);
        g_RasterizerEdgeArray[(int)pSVar11].base.z_current =
             g_RasterizerEdgeArray[(int)pSVar11].base.z_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_18 = (SSoftwareEdge *)((int)&(local_18->base).y_min + 1);
      pSVar11 = right;
    } while ((int)local_18 < vertex_count);
  }
  iVar12 = g_RasterizerMinY;
  pSVar5 = g_RasterizerEdgeArray;
  iVar4 = 0;
  if (0 < (int)right) {
    do {
      if ((g_RasterizerMinY == (pSVar5->base).y_min) && (pSVar5 != (SSoftwareEdge *)0x0))
      goto LAB_005fd5f3;
      iVar4 = iVar4 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar4 < (int)right);
  }
  pSVar5 = (SSoftwareEdge *)0x0;
LAB_005fd5f3:
  if (pSVar5 != (SSoftwareEdge *)0x0) {
    iVar4 = 0;
    left = g_RasterizerEdgeArray;
    if (0 < (int)right) {
      do {
        if ((g_RasterizerMinY == (left->base).y_min) && (left != pSVar5)) goto LAB_005fd62a;
        iVar4 = iVar4 + 1;
        left = left + 1;
      } while (iVar4 < (int)right);
    }
    left = (SSoftwareEdge *)0x0;
LAB_005fd62a:
    scanline_y = (SSoftwareEdge *)g_RasterizerMinY;
    g_RasterizerEdgeCount = (int)right;
    if (left != (SSoftwareEdge *)0x0) {
      do {
        if ((pSVar5->base).y_max <= iVar12) {
          (pSVar5->base).y_min = -1;
          iVar4 = 0;
          pSVar5 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == (pSVar5->base).y_min) && (pSVar5 != left)) goto LAB_005fd67c;
              iVar4 = iVar4 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar4 < g_RasterizerEdgeCount);
          }
          pSVar5 = (SSoftwareEdge *)0x0;
LAB_005fd67c:
          scanline_y = (SSoftwareEdge *)iVar12;
          right = (SHardwareEdge *)g_RasterizerEdgeCount;
          if (pSVar5 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left->base).y_max <= iVar12) {
          (left->base).y_min = -1;
          iVar4 = 0;
          left = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == (left->base).y_min) && (left != pSVar5)) goto LAB_005fd6c4;
              iVar4 = iVar4 + 1;
              left = left + 1;
            } while (iVar4 < g_RasterizerEdgeCount);
          }
          left = (SSoftwareEdge *)0x0;
LAB_005fd6c4:
          scanline_y = pSVar5;
          right = (SHardwareEdge *)g_RasterizerEdgeCount;
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(&left->base,right,(int)scanline_y);
        piVar1 = &(pSVar5->base).x_current;
        *piVar1 = *piVar1 + (pSVar5->base).x_gradient;
        (pSVar5->base).w_current = (pSVar5->base).w_current + (pSVar5->base).w_gradient;
        (pSVar5->base).z_current = (pSVar5->base).z_current + (pSVar5->base).z_gradient;
        (extraout_EDI->base).x_current =
             (extraout_EDI->base).x_current + (extraout_EDI->base).x_gradient;
        local_18 = (SSoftwareEdge *)((int)&(local_18->base).y_min + 1);
        (extraout_EDI->base).w_current =
             (extraout_EDI->base).w_current + (extraout_EDI->base).w_gradient;
        (extraout_EDI->base).z_current =
             (extraout_EDI->base).z_current + (extraout_EDI->base).z_gradient;
        scanline_y = local_18;
        right = extraout_ESI;
        left = extraout_EDI;
      } while( true );
    }
  }
  g_RasterizerEdgeCount = (int)right;
  return;
}
