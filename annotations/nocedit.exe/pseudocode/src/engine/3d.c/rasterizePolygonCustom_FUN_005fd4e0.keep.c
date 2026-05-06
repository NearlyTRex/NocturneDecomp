// Name: engine_3d.c_rasterizePolygonCustom_FUN_005fd4e0
// Address: 005fd4e0
// MANUAL RECONSTRUCTION
// Address Range: [[005fd4e0, 005fd985]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizePolygonCustom_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygonCustom_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

{
  int *piVar2;
  longlong lVar3;
  int next_idx;
  int iVar4;
  SSoftwareEdge *pSVar5;
  SSoftwareEdge *left;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  int iVar5;
  int iVar7;
  int scanline_y;
  uint uVar9;
  uint uVar8;
  SRenderVertex *pSVar10;
  int edge_count;
  int edge_idx;
  int iVar12;
  SRenderVertex *pSVar9;
  int local_18;
  longlong lVar2;
  int *piVar1;

  iVar12 = 0;
  pSVar7 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if ((int)((pSVar7->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar7->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar7->projected_vertex).transformed_z);
        (pSVar7->projected_vertex).screen_x =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_x *
                   (longlong)g_Projection.half_width_fixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_Projection.center_x_fixed;
        (pSVar7->projected_vertex).screen_y =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_y *
                   (longlong)g_Projection.neg_half_height_fixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_Projection.center_y_fixed;
      }
      iVar12 = iVar12 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar12 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar5 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_VertexPreprocessMode) {
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
  edge_count = 0;
  g_RasterizerMaxY = 0;
  local_18 = 0;
  g_RasterizerMinY = 0x4b0;
  edge_idx = edge_count;
  if (0 < vertex_count) {
    do {
      next_idx = local_18 + 1;
      if (vertex_count <= next_idx) {
        next_idx = 0;
      }
      pSVar8 = vertex_buffer + next_idx;
      pSVar9 = vertex_buffer + local_18;
      iVar4 = (pSVar8->projected_vertex).screen_y >> 0x10;
      iVar5 = (pSVar9->projected_vertex).screen_y >> 0x10;
      edge_count = edge_idx;
      if (iVar5 != iVar4) {
        iVar6 = iVar4;
        pSVar10 = pSVar8;
        if ((pSVar8->projected_vertex).screen_y < (pSVar9->projected_vertex).screen_y) {
          iVar6 = iVar5;
          iVar5 = iVar4;
          pSVar10 = pSVar9;
          pSVar9 = pSVar8;
        }
        g_RasterizerEdgeArray[edge_idx].base.y_min = iVar5;
        iVar7 = g_RasterizerMinY;
        g_RasterizerEdgeArray[edge_idx].base.y_max = iVar6;
        if (iVar5 < iVar7) {
          g_RasterizerMinY = iVar5;
        }
        if (g_RasterizerMaxY < iVar6) {
          g_RasterizerMaxY = iVar6;
        }
        g_RasterizerEdgeArray[edge_idx].base.x_current = (pSVar9->projected_vertex).screen_x;
        g_RasterizerEdgeArray[edge_idx].base.depth_current =
             (pSVar9->projected_vertex).transformed_z << 8;
        g_RasterizerEdgeArray[edge_idx].base.red_current = pSVar9->r;
        uVar9 = (pSVar10->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
        if (uVar9 < 0x10000) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(0xffffffff / (ulonglong)uVar9);
        }
        lVar2 = (longlong)iVar5 *
                (longlong)
                ((pSVar10->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
        g_RasterizerEdgeCount = edge_idx;
        g_RasterizerEdgeArray[edge_idx].base.x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar3 = (longlong)iVar5 *
                (longlong)
                (((pSVar10->projected_vertex).transformed_z -
                 (pSVar9->projected_vertex).transformed_z) * 0x100);
        g_RasterizerEdgeArray[edge_idx].base.depth_gradient =
             (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
        lVar3 = (longlong)iVar5 * (longlong)(pSVar10->r - pSVar9->r);
        g_RasterizerEdgeArray[edge_idx].base.red_gradient =
             (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
        lVar3 = (longlong)(int)uVar8 * (longlong)g_RasterizerEdgeArray[edge_idx].base.x_gradient;
        piVar1 = &g_RasterizerEdgeArray[edge_idx].base.x_current;
        *piVar1 = *piVar1 + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        lVar3 = (longlong)(int)uVar8 *
                (longlong)g_RasterizerEdgeArray[edge_idx].base.depth_gradient;
        iVar5 = g_RasterizerEdgeArray[edge_idx].base.red_gradient;
        g_RasterizerEdgeArray[edge_idx].base.depth_current =
             g_RasterizerEdgeArray[edge_idx].base.depth_current +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        lVar3 = (longlong)(int)uVar8 * (longlong)iVar5;
        edge_count = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[edge_idx].base.red_current =
             g_RasterizerEdgeArray[edge_idx].base.red_current +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
      edge_idx = edge_count;
    } while (local_18 < vertex_count);
  }
  pSVar5 = g_RasterizerEdgeArray;
  iVar7 = 0;
  if (0 < edge_count) {
    do {
      if ((g_RasterizerMinY == (pSVar5->base).y_min) && (pSVar5 != (SSoftwareEdge *)0x0))
      goto LAB_005fd5f3;
      iVar7 = iVar7 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar7 < edge_count);
  }
  pSVar5 = (SSoftwareEdge *)0x0;
LAB_005fd5f3:
  if (pSVar5 != (SSoftwareEdge *)0x0) {
    iVar7 = 0;
    left = g_RasterizerEdgeArray;
    if (0 < edge_count) {
      do {
        if ((g_RasterizerMinY == (left->base).y_min) && (left != pSVar5)) goto LAB_005fd62a;
        iVar7 = iVar7 + 1;
        left = left + 1;
      } while (iVar7 < edge_count);
    }
    left = (SSoftwareEdge *)0x0;
LAB_005fd62a:
    scanline_y = g_RasterizerMinY;
    g_RasterizerEdgeCount = edge_count;
    if (left != (SSoftwareEdge *)0x0) {
      do {
        if ((pSVar5->base).y_max <= scanline_y) {
          (pSVar5->base).y_min = -1;
          iVar7 = 0;
          pSVar5 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((scanline_y == (pSVar5->base).y_min) && (pSVar5 != left)) goto LAB_005fd67c;
              iVar7 = iVar7 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar7 < g_RasterizerEdgeCount);
          }
          pSVar5 = (SSoftwareEdge *)0x0;
LAB_005fd67c:
          edge_count = g_RasterizerEdgeCount;
          if (pSVar5 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left->base).y_max <= scanline_y) {
          (left->base).y_min = -1;
          iVar7 = 0;
          left = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((scanline_y == (left->base).y_min) && (left != pSVar5)) goto LAB_005fd6c4;
              iVar7 = iVar7 + 1;
              left = left + 1;
            } while (iVar7 < g_RasterizerEdgeCount);
          }
          left = (SSoftwareEdge *)0x0;
LAB_005fd6c4:
          edge_count = g_RasterizerEdgeCount;
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(scanline_y,pSVar5,left);
        piVar2 = &(pSVar5->base).x_current;
        *piVar2 = *piVar2 + (pSVar5->base).x_gradient;
        (pSVar5->base).depth_current = (pSVar5->base).depth_current + (pSVar5->base).depth_gradient;
        (pSVar5->base).red_current = (pSVar5->base).red_current + (pSVar5->base).red_gradient;
        (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
        (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
        (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
        scanline_y = scanline_y + 1;
      } while( true );
    }
  }
  g_RasterizerEdgeCount = edge_count;
  return;
}
