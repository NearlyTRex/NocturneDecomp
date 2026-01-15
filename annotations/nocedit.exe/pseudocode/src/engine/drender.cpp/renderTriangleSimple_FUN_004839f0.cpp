// Name: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// Address: 004839f0
// Address Range: [[004839f0, 00483ee0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleSimple_FUN_004839f0(int *vertex_indices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int unaff_EBP;
  int unaff_ESI;
  int iVar9;
  SRenderVertex *pSVar10;
  int unaff_EDI;
  SRenderVertex *in_stack_ffffff8c;
  void *in_stack_ffffff90;
  int in_stack_ffffff94;
  int *local_30;
  int local_2c;
  SRenderVertex *local_28;
  SEdgeData *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar9 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    if (g_RenderStateFlag2 != 0) {
      if ((uint)g_RenderStateFlag2 < 2) {
        iVar9 = 0;
        piVar8 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar9 = iVar9 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar8,1);
            piVar8 = piVar8 + 1;
          } while (iVar9 < vertex_count);
        }
      }
      else if ((g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) &&
              (iVar9 = 0, piVar8 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar9 = iVar9 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar8,1);
          piVar8 = piVar8 + 1;
        } while (iVar9 < vertex_count);
      }
    }
    g_RenderTriangleEdgeCount = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_2c = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    if (0 < vertex_count) {
      local_30 = vertex_indices;
      iVar9 = g_RenderTriangleEdgeCount;
      do {
        iVar3 = local_2c + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar3 = vertex_indices[iVar3];
        iVar1 = *local_30;
        iVar4 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        iVar7 = g_RenderVertexBuffer[iVar3].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar9;
        if (iVar4 != iVar7) {
          iVar5 = iVar4;
          pSVar10 = g_RenderVertexBuffer + iVar1;
          local_28 = g_RenderVertexBuffer + iVar3;
          if (g_RenderVertexBuffer[iVar3].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar5 = iVar7;
            iVar7 = iVar4;
            pSVar10 = g_RenderVertexBuffer + iVar3;
            local_28 = g_RenderVertexBuffer + iVar1;
          }
          g_EdgeInterpolationArray[iVar9].y_start = iVar5;
          iVar3 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar9].y_end = iVar7;
          if (iVar5 < iVar3) {
            g_RenderTriangleMinScanlineY = iVar5;
          }
          if (g_RenderTriangleMaxScanlineY < iVar7) {
            g_RenderTriangleMaxScanlineY = iVar7;
          }
          uVar6 = (local_28->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar3 = 0;
          }
          else {
            iVar3 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          lVar2 = (longlong)iVar3 *
                  (longlong)
                  ((local_28->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          g_EdgeInterpolationArray[iVar9].x_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)iVar3 *
                  (longlong)
                  (((local_28->projected_vertex).transformed_z -
                   (pSVar10->projected_vertex).transformed_z) * 0x100);
          g_EdgeInterpolationArray[iVar9].z_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          uVar6 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)(int)uVar6 * (longlong)g_EdgeInterpolationArray[iVar9].x_delta;
          g_EdgeInterpolationArray[iVar9].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)uVar6 * (longlong)g_EdgeInterpolationArray[iVar9].z_delta;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_EdgeInterpolationArray[iVar9].z_current =
               ((pSVar10->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
        iVar9 = g_RenderTriangleEdgeCount;
      } while (local_2c < vertex_count);
    }
    iVar9 = 0;
    g_RenderAbortFlag = 0;
    local_14 = g_EdgeInterpolationArray;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != (SEdgeData *)0x0))
        goto LAB_00483be4;
        iVar9 = iVar9 + 1;
        local_14 = local_14 + 1;
      } while (iVar9 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_00483be4:
    if (local_14 != (SEdgeData *)0x0) {
      local_18 = g_EdgeInterpolationArray;
      iVar9 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_18->y_start) && (local_18 != local_14))
          goto LAB_00483c1d;
          iVar9 = iVar9 + 1;
          local_18 = local_18 + 1;
        } while (iVar9 < g_RenderTriangleEdgeCount);
      }
      local_18 = (SEdgeData *)0x0;
LAB_00483c1d:
      iVar9 = g_RenderTriangleMinScanlineY;
      if (local_18 != (SEdgeData *)0x0) {
        do {
          if (local_14->y_end <= iVar9) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar3 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == local_14->y_start) && (local_14 != local_18)) goto LAB_00483c78;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 1;
              } while (iVar3 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483c78:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_18->y_end <= iVar9) {
            local_18->y_start = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar3 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == local_18->y_start) && (local_18 != local_14)) goto LAB_00483cc8;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 1;
              } while (iVar3 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SEdgeData *)0x0;
LAB_00483cc8:
            if (local_18 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
          *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
          *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + *(int *)(unaff_EDI + 0xc);
          *(int *)(unaff_EDI + 0x28) = *(int *)(unaff_EDI + 0x28) + *(int *)(unaff_EDI + 0x2c);
          iVar9 = unaff_EBP + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar9 = 0;
      do {
        iVar3 = *vertex_indices;
        iVar9 = iVar9 + 1;
        vertex_indices = vertex_indices + 1;
        *(SRenderVertex **)(&stack0xffffff88 + iVar9 * 4) = g_RenderVertexBuffer + iVar3;
      } while (iVar9 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff8c,vertex_count,g_RenderStateFlags);
  }
  return;
}
