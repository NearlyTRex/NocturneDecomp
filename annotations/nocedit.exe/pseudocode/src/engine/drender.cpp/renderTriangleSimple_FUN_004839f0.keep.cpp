// Name: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// Address: 004839f0
// MANUAL RECONSTRUCTION
// Address Range: [[004839f0, 00483ee0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004839f0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004839f0(CVector3i *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *scanline_y;
  int iVar6;
  uint uVar7;
  uint uVar4;
  int iVar8;
  int iVar7;
  CVector3i *pCVar8;
  CVector3i *pCVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *local_74 [16];
  CVector3i *local_30;
  int local_2c;
  SRenderVertex *local_28;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  int *piVar3;
  int iVar1;
  longlong lVar2;
  
  if ((g_CullingMode != 0) &&
     (iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + vertex_indices->x,
                         g_RenderVertexBuffer + vertex_indices->y,
                         g_RenderVertexBuffer + vertex_indices->z), iVar7 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    if (g_VertexPreprocessMode != 0) {
      if ((uint)g_VertexPreprocessMode < 2) {
        iVar7 = 0;
        pCVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar7 = iVar7 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + pCVar8->x,1);
            pCVar8 = (CVector3i *)&pCVar8->y;
          } while (iVar7 < vertex_count);
        }
      }
      else if ((g_VertexPreprocessMode == PREPROCESS_W_DEPTH_REPLACEMENT) &&
              (iVar7 = 0, pCVar9 = vertex_indices, 0 < vertex_count)) {
        do {
          piVar2 = &pCVar9->x;
          pCVar9 = (CVector3i *)&pCVar9->y;
          iVar7 = iVar7 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar2,1);
        } while (iVar7 < vertex_count);
      }
    }
    g_RenderTriangleEdgeCount = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_2c = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      iVar7 = g_RenderTriangleEdgeCount;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar3 = (&vertex_indices->x)[iVar3];
        local_20 = g_RenderVertexBuffer + iVar3;
        iVar1 = local_30->x;
        iVar4 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        iVar8 = g_RenderVertexBuffer[iVar3].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar7;
        if (iVar4 != iVar8) {
          iVar6 = iVar4;
          pSVar11 = g_RenderVertexBuffer + iVar1;
          local_28 = local_20;
          if (g_RenderVertexBuffer[iVar3].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar6 = iVar8;
            iVar8 = iVar4;
            pSVar11 = local_20;
            local_28 = g_RenderVertexBuffer + iVar1;
          }
          g_EdgeInterpolationArray[iVar7].base.y_min = iVar6;
          iVar3 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar7].base.y_max = iVar8;
          if (iVar6 < iVar3) {
            g_RenderTriangleMinScanlineY = iVar6;
          }
          if (g_RenderTriangleMaxScanlineY < iVar8) {
            g_RenderTriangleMaxScanlineY = iVar8;
          }
          uVar7 = (local_28->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          lVar2 = (longlong)iVar3 *
                  (longlong)
                  ((local_28->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
          g_EdgeInterpolationArray[iVar7].base.x_gradient =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar1 = (longlong)iVar3 *
                  (longlong)
                  (((local_28->projected_vertex).transformed_z -
                   (pSVar11->projected_vertex).transformed_z) * 0x100);
          g_EdgeInterpolationArray[iVar7].base.depth_gradient =
               (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          uVar4 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)(int)uVar4 * (longlong)g_EdgeInterpolationArray[iVar7].base.x_gradient;
          g_EdgeInterpolationArray[iVar7].base.x_current =
               (pSVar11->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)uVar4 *
                  (longlong)g_EdgeInterpolationArray[iVar7].base.depth_gradient;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_EdgeInterpolationArray[iVar7].base.depth_current =
               ((pSVar11->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
        iVar7 = g_RenderTriangleEdgeCount;
      } while (local_2c < vertex_count);
    }
    iVar5 = 0;
    g_RenderAbortFlag = 0;
    local_14 = g_EdgeInterpolationArray;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == (local_14->base).y_min) &&
           (local_14 != (SSoftwareEdge *)0x0)) goto LAB_00483be4;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00483be4:
    if (local_14 != (SSoftwareEdge *)0x0) {
      local_18 = g_EdgeInterpolationArray;
      iVar7 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == (local_18->base).y_min) && (local_18 != local_14))
          goto LAB_00483c1d;
          iVar7 = iVar7 + 1;
          local_18 = local_18 + 1;
        } while (iVar7 < g_RenderTriangleEdgeCount);
      }
      local_18 = (SSoftwareEdge *)0x0;
LAB_00483c1d:
      scanline_y = (byte *)g_RenderTriangleMinScanlineY;
      if (local_18 != (SSoftwareEdge *)0x0) {
        do {
          if ((local_14->base).y_max <= (int)scanline_y) {
            (local_14->base).y_min = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar7 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((scanline_y == (byte *)(local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00483c78;
                iVar7 = iVar7 + 1;
                local_14 = local_14 + 1;
              } while (iVar7 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00483c78:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_18->base).y_max <= (int)scanline_y) {
            (local_18->base).y_min = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar7 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((scanline_y == (byte *)(local_18->base).y_min) && (local_18 != local_14))
                goto LAB_00483cc8;
                iVar7 = iVar7 + 1;
                local_18 = local_18 + 1;
              } while (iVar7 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_00483cc8:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_74[0] = (SRenderVertex *)0x483ceb;
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (local_18,local_14,(int)scanline_y);
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
  }
  else {
    if (0 < vertex_count) {
      iVar7 = 0;
      do {
        piVar3 = &vertex_indices->x;
        iVar10 = iVar7 + 1;
        vertex_indices = (CVector3i *)&vertex_indices->y;
        local_74[iVar7] = g_RenderVertexBuffer + *piVar3;
        iVar7 = iVar10;
      } while (iVar10 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_74,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
