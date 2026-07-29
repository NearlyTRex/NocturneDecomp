// Name: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
// Address: 005fcfc0
// MANUAL RECONSTRUCTION
// Address Range: [[005fcfc0, 005fd4b7]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex *vertex_buffer,int vertex_count)

{
  longlong lVar2;
  int iVar5;
  int iVar2;
  int iVar3;
  int iVar6;
  int scanline_y;
  int iVar4;
  uint uVar8;
  uint uVar5;
  uint uVar9;
  SRenderVertex *pSVar6;
  uint uVar7;
  SRenderVertex *pSVar10;
  int iVar11;
  int iVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  longlong lVar1;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_VertexPreprocessMode & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_VertexPreprocessMode & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x *
                   (longlong)g_Projection.half_width_fixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_Projection.center_x_fixed;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y *
                   (longlong)g_Projection.neg_half_height_fixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_Projection.center_y_fixed;
      }
      iVar8 = iVar8 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar6 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    engine_special_cpp_drawPolygon_FUN_005b75e0(vertex_buffer,vertex_count,g_RenderStateFlags.dword)
    ;
    return;
  }
  if (g_VertexPreprocessMode != 0) {
    if ((uint)g_VertexPreprocessMode < PREPROCESS_TEXTURE_COORD_NORMALIZE) {
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0(vertex_buffer,vertex_count);
    }
    else if (g_VertexPreprocessMode == PREPROCESS_W_DEPTH_REPLACEMENT) {
      engine_prim_c_replaceWWithDepth_FUN_00552110(vertex_buffer,vertex_count);
    }
  }
  g_RasterizerEdgeCount = 0;
  iVar10 = 0;
  g_RasterizerMaxY = 0;
  g_RasterizerMinY = 0x4b0;
  iVar6 = g_RasterizerEdgeCount;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar10 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      pSVar10 = vertex_buffer + iVar10;
      iVar11 = (pSVar10->projected_vertex).screen_y >> 0x10;
      iVar3 = (local_20->projected_vertex).screen_y >> 0x10;
      g_RasterizerEdgeCount = iVar6;
      if (iVar11 != iVar3) {
        iVar4 = iVar3;
        pSVar9 = pSVar10;
        if ((local_20->projected_vertex).screen_y < (pSVar10->projected_vertex).screen_y) {
          iVar4 = iVar11;
          iVar11 = iVar3;
          pSVar9 = local_20;
          local_20 = pSVar10;
        }
        g_RasterizerEdgeArray[iVar6].base.y_min = iVar11;
        iVar5 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar6].base.y_max = iVar4;
        if (iVar11 < iVar5) {
          g_RasterizerMinY = iVar11;
        }
        if (g_RasterizerMaxY < iVar4) {
          g_RasterizerMaxY = iVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar11 = 0;
        }
        else {
          iVar11 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar8 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar11 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar6].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
        g_RasterizerEdgeArray[iVar6].base.x_current =
             (pSVar9->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar11 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar9->projected_vertex).transformed_z) * 0x100);
        uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar6].base.depth_gradient = uVar9;
        lVar2 = (longlong)(int)uVar8 * (longlong)(int)uVar9;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar6].base.depth_current =
             ((pSVar9->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
      iVar6 = g_RasterizerEdgeCount;
    } while (iVar10 < vertex_count);
  }
  local_14 = g_RasterizerEdgeArray;
  iVar6 = 0;
  g_RenderAbortFlag = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_005fd168;
      iVar6 = iVar6 + 1;
      local_14 = local_14 + 1;
    } while (iVar6 < g_RasterizerEdgeCount);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_005fd168:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = g_RasterizerEdgeArray;
    iVar6 = 0;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == (local_18->base).y_min) && (local_18 != local_14))
        goto LAB_005fd1a1;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 1;
      } while (iVar6 < g_RasterizerEdgeCount);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_005fd1a1:
    scanline_y = g_RasterizerMinY;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= scanline_y) {
          (local_14->base).y_min = -1;
          local_14 = g_RasterizerEdgeArray;
          iVar6 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((scanline_y == (local_14->base).y_min) && (local_14 != local_18))
              goto LAB_005fd1fc;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 1;
            } while (iVar6 < g_RasterizerEdgeCount);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_005fd1fc:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= scanline_y) {
          (local_18->base).y_min = -1;
          local_18 = g_RasterizerEdgeArray;
          iVar6 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((scanline_y == (local_18->base).y_min) && (local_18 != local_14))
              goto LAB_005fd24c;
              iVar6 = iVar6 + 1;
              local_18 = local_18 + 1;
            } while (iVar6 < g_RasterizerEdgeCount);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_005fd24c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_005b5710(local_18,local_14,scanline_y);
        if (g_RenderAbortFlag != 0) {
          return;
        }
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).depth_current =
             (local_18->base).depth_current + (local_18->base).depth_gradient;
        (local_14->base).x_current = (local_14->base).x_current + (local_14->base).x_gradient;
        (local_14->base).depth_current =
             (local_14->base).depth_current + (local_14->base).depth_gradient;
        scanline_y = scanline_y + 1;
      } while( true );
    }
  }
  return;
}
