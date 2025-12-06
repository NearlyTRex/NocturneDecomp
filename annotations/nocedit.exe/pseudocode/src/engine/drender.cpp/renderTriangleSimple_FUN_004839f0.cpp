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
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  SEdgeData *pSVar10;
  SRenderVertex *pSVar11;
  int in_stack_0000000c;
  SRenderVertex *in_stack_ffffff90;
  void *in_stack_ffffff94;
  int in_stack_ffffff98;
  int *local_2c;
  int local_28;
  SRenderVertex *local_24;
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
        piVar3 = (int *)vertex_count;
        if (0 < vertex_count) {
          do {
            iVar9 = iVar9 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar3,1);
            piVar3 = piVar3 + 1;
          } while (iVar9 < vertex_count);
        }
      }
      else if ((g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) &&
              (iVar9 = 0, piVar3 = (int *)vertex_count, 0 < vertex_count)) {
        do {
          iVar9 = iVar9 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar3,1);
          piVar3 = piVar3 + 1;
        } while (iVar9 < vertex_count);
      }
    }
    g_RenderTriangleEdgeCount = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_28 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    if (0 < vertex_count) {
      local_2c = (int *)vertex_count;
      iVar9 = g_RenderTriangleEdgeCount;
      do {
        iVar4 = local_28 + 1;
        if (vertex_count <= iVar4) {
          iVar4 = 0;
        }
        iVar4 = *(int *)(iVar4 * 4 + vertex_count);
        iVar1 = *local_2c;
        iVar5 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        iVar8 = g_RenderVertexBuffer[iVar4].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar9;
        if (iVar5 != iVar8) {
          iVar6 = iVar5;
          pSVar11 = g_RenderVertexBuffer + iVar1;
          local_24 = g_RenderVertexBuffer + iVar4;
          if (g_RenderVertexBuffer[iVar4].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar6 = iVar8;
            iVar8 = iVar5;
            pSVar11 = g_RenderVertexBuffer + iVar4;
            local_24 = g_RenderVertexBuffer + iVar1;
          }
          g_EdgeInterpolationArray[iVar9].y_start = iVar6;
          iVar4 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar9].y_end = iVar8;
          if (iVar6 < iVar4) {
            g_RenderTriangleMinScanlineY = iVar6;
          }
          if (g_RenderTriangleMaxScanlineY < iVar8) {
            g_RenderTriangleMaxScanlineY = iVar8;
          }
          uVar7 = (local_24->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          lVar2 = (longlong)iVar4 *
                  (longlong)
                  ((local_24->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
          g_EdgeInterpolationArray[iVar9].x_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)iVar4 *
                  (longlong)
                  (((local_24->projected_vertex).transformed_z -
                   (pSVar11->projected_vertex).transformed_z) * 0x100);
          g_EdgeInterpolationArray[iVar9].z_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar9].x_delta;
          g_EdgeInterpolationArray[iVar9].x_current =
               (pSVar11->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar9].z_delta;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_EdgeInterpolationArray[iVar9].z_current =
               ((pSVar11->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
        local_2c = local_2c + 1;
        local_28 = local_28 + 1;
        iVar9 = g_RenderTriangleEdgeCount;
      } while (local_28 < vertex_count);
    }
    iVar9 = 0;
    g_RenderAbortFlag = 0;
    pSVar10 = g_EdgeInterpolationArray;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == pSVar10->y_start) && (pSVar10 != (SEdgeData *)0x0))
        goto LAB_00483be4;
        iVar9 = iVar9 + 1;
        pSVar10 = pSVar10 + 1;
      } while (iVar9 < g_RenderTriangleEdgeCount);
    }
    pSVar10 = (SEdgeData *)0x0;
LAB_00483be4:
    if (pSVar10 != (SEdgeData *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar9 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != pSVar10))
          goto LAB_00483c1d;
          iVar9 = iVar9 + 1;
          local_14 = local_14 + 1;
        } while (iVar9 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SEdgeData *)0x0;
LAB_00483c1d:
      iVar9 = g_RenderTriangleMinScanlineY;
      if (local_14 != (SEdgeData *)0x0) {
        do {
          if (pSVar10->y_end <= iVar9) {
            pSVar10->y_start = -1;
            pSVar10 = g_EdgeInterpolationArray;
            iVar4 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == pSVar10->y_start) && (pSVar10 != local_14)) goto LAB_00483c78;
                iVar4 = iVar4 + 1;
                pSVar10 = pSVar10 + 1;
              } while (iVar4 < g_RenderTriangleEdgeCount);
            }
            pSVar10 = (SEdgeData *)0x0;
LAB_00483c78:
            if (pSVar10 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_14->y_end <= iVar9) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar4 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == local_14->y_start) && (local_14 != pSVar10)) goto LAB_00483cc8;
                iVar4 = iVar4 + 1;
                local_14 = local_14 + 1;
              } while (iVar4 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483cc8:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
          *(int *)(vertex_count + 0x28) =
               *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
          iVar9 = (int)vertex_indices + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar9 = 0;
      piVar3 = (int *)vertex_count;
      do {
        iVar4 = *piVar3;
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
        *(SRenderVertex **)(&stack0xffffff8c + iVar9 * 4) = g_RenderVertexBuffer + iVar4;
      } while (iVar9 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff90,vertex_count,g_RenderStateFlags);
  }
  return;
}
