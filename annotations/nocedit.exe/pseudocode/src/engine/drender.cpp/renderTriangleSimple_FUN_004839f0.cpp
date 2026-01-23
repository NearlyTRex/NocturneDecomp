// Name: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// Address: 004839f0
// Address Range: [[004839f0, 00483ee0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(CVector3i * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleSimple_FUN_004839f0(CVector3i *vertex_indices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  CVector3i *pCVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *local_74 [16];
  uint local_34;
  CVector3i *local_30;
  int local_2c;
  SRenderVertex *local_28;
  SRenderVertex *local_24;
  SRenderVertex *local_20;
  int local_1c;
  SEdgeData *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + vertex_indices->x,
                         g_RenderVertexBuffer + vertex_indices->y,
                         g_RenderVertexBuffer + vertex_indices->z), iVar5 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    if (g_RenderStateFlag2 != 0) {
      if ((uint)g_RenderStateFlag2 < 2) {
        iVar5 = 0;
        pCVar9 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar5 = iVar5 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + pCVar9->x,1);
            pCVar9 = (CVector3i *)&pCVar9->y;
          } while (iVar5 < vertex_count);
        }
      }
      else if ((g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) &&
              (iVar5 = 0, pCVar9 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar5 = iVar5 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + pCVar9->x,1);
          pCVar9 = (CVector3i *)&pCVar9->y;
        } while (iVar5 < vertex_count);
      }
    }
    g_RenderTriangleEdgeCount = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_2c = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      iVar5 = g_RenderTriangleEdgeCount;
      do {
        iVar10 = local_2c + 1;
        if (vertex_count <= iVar10) {
          iVar10 = 0;
        }
        iVar10 = (&vertex_indices->x)[iVar10];
        local_20 = g_RenderVertexBuffer + iVar10;
        iVar1 = local_30->x;
        local_24 = g_RenderVertexBuffer + iVar1;
        iVar4 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        iVar8 = g_RenderVertexBuffer[iVar10].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar5;
        local_28 = local_20;
        if (iVar4 != iVar8) {
          iVar6 = iVar4;
          pSVar11 = local_24;
          if (g_RenderVertexBuffer[iVar10].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar6 = iVar8;
            iVar8 = iVar4;
            pSVar11 = local_20;
            local_28 = local_24;
          }
          g_EdgeInterpolationArray[iVar5].y_start = iVar6;
          iVar10 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar5].y_end = iVar8;
          if (iVar6 < iVar10) {
            g_RenderTriangleMinScanlineY = iVar6;
          }
          if (g_RenderTriangleMaxScanlineY < iVar8) {
            g_RenderTriangleMaxScanlineY = iVar8;
          }
          uVar7 = (local_28->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          lVar2 = (longlong)iVar10 *
                  (longlong)
                  ((local_28->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
          g_EdgeInterpolationArray[iVar5].x_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)iVar10 *
                  (longlong)
                  (((local_28->projected_vertex).transformed_z -
                   (pSVar11->projected_vertex).transformed_z) * 0x100);
          g_EdgeInterpolationArray[iVar5].z_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar5].x_delta;
          local_34 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar5].x_current =
               (pSVar11->projected_vertex).screen_x + local_34;
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar5].z_delta;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_EdgeInterpolationArray[iVar5].z_current =
               ((pSVar11->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
        local_30 = (CVector3i *)&local_30->y;
        local_2c = local_2c + 1;
        iVar5 = g_RenderTriangleEdgeCount;
      } while (local_2c < vertex_count);
    }
    iVar5 = 0;
    g_RenderAbortFlag = 0;
    local_14 = g_EdgeInterpolationArray;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != (SEdgeData *)0x0))
        goto LAB_00483be4;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_00483be4:
    if (local_14 != (SEdgeData *)0x0) {
      local_18 = g_EdgeInterpolationArray;
      iVar5 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_18->y_start) && (local_18 != local_14))
          goto LAB_00483c1d;
          iVar5 = iVar5 + 1;
          local_18 = local_18 + 1;
        } while (iVar5 < g_RenderTriangleEdgeCount);
      }
      local_18 = (SEdgeData *)0x0;
LAB_00483c1d:
      local_1c = g_RenderTriangleMinScanlineY;
      if (local_18 != (SEdgeData *)0x0) {
        do {
          if (local_14->y_end <= local_1c) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar5 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if (((byte *)local_1c == (byte *)local_14->y_start) &&
                   (local_14 != local_18)) goto LAB_00483c78;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 1;
              } while (iVar5 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483c78:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_18->y_end <= local_1c) {
            local_18->y_start = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar5 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if (((byte *)local_1c == (byte *)local_18->y_start) &&
                   (local_18 != local_14)) goto LAB_00483cc8;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 1;
              } while (iVar5 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SEdgeData *)0x0;
LAB_00483cc8:
            if (local_18 == (SEdgeData *)0x0) {
              return;
            }
          }
          local_74[0] = (SRenderVertex *)0x483ceb;
          wincore_windll_cpp_renderScanline_FUN_005b5710(local_18,local_14,local_1c);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          local_18->x_current = local_18->x_current + local_18->x_delta;
          local_18->z_current = local_18->z_current + local_18->z_delta;
          *(int *)(local_1c + 8) = *(int *)(local_1c + 8) + *(int *)(local_1c + 0xc);
          *(int *)(local_1c + 0x28) = *(int *)(local_1c + 0x28) + *(int *)(local_1c + 0x2c);
          local_1c = (int)((int)&(local_20->projected_vertex).transformed_x + 1);
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar5 = 0;
      do {
        piVar3 = &vertex_indices->x;
        iVar10 = iVar5 + 1;
        vertex_indices = (CVector3i *)&vertex_indices->y;
        local_74[iVar5] = g_RenderVertexBuffer + *piVar3;
        iVar5 = iVar10;
      } while (iVar10 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_74,vertex_count,g_RenderStateFlags);
  }
  return;
}
