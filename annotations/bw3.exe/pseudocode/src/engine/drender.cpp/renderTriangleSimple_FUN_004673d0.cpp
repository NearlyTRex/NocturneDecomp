// Name: engine_drender.cpp_renderTriangleSimple_FUN_004673d0
// Address: 004673d0
// Address Range: [[004673d0, 004678c0]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004673d0(CVector3i *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004673d0(CVector3i *vertex_indices,int vertex_count)

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
  byte *local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (g_SRenderVertex_ARRAY_0060b014 + vertex_indices->x,
                         g_SRenderVertex_ARRAY_0060b014 + vertex_indices->y,
                         g_SRenderVertex_ARRAY_0060b014 + vertex_indices->z), iVar5 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_INT_01c6cee8 == 0) || (g_TexturesDisabled != 0)) {
    if (g_VertexPreprocessMode != 0) {
      if ((uint)g_VertexPreprocessMode < 2) {
        iVar5 = 0;
        pCVar9 = vertex_indices;
        if (0 < vertex_count) {
          do {
            iVar5 = iVar5 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00515920
                      (g_SRenderVertex_ARRAY_0060b014 + pCVar9->x,1);
            pCVar9 = (CVector3i *)&pCVar9->y;
          } while (iVar5 < vertex_count);
        }
      }
      else if ((g_VertexPreprocessMode == 6) &&
              (iVar5 = 0, pCVar9 = vertex_indices, 0 < vertex_count)) {
        do {
          iVar5 = iVar5 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00515a80(g_SRenderVertex_ARRAY_0060b014 + pCVar9->x,1)
          ;
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
        local_20 = g_SRenderVertex_ARRAY_0060b014 + iVar10;
        iVar1 = local_30->x;
        local_24 = g_SRenderVertex_ARRAY_0060b014 + iVar1;
        iVar4 = g_SRenderVertex_ARRAY_0060b014[iVar1].projected_vertex.screen_y >> 0x10;
        iVar8 = g_SRenderVertex_ARRAY_0060b014[iVar10].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar5;
        local_28 = local_20;
        if (iVar4 != iVar8) {
          iVar6 = iVar4;
          pSVar11 = local_24;
          if (g_SRenderVertex_ARRAY_0060b014[iVar10].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_0060b014[iVar1].projected_vertex.screen_y) {
            iVar6 = iVar8;
            iVar8 = iVar4;
            pSVar11 = local_20;
            local_28 = local_24;
          }
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.y_min = iVar6;
          iVar10 = g_RenderTriangleMinScanlineY;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.y_max = iVar8;
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
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.x_gradient =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)iVar10 *
                  (longlong)
                  (((local_28->projected_vertex).transformed_z -
                   (pSVar11->projected_vertex).transformed_z) * 0x100);
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.depth_gradient =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)(int)uVar7 *
                  (longlong)g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.x_gradient;
          local_34 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.x_current =
               (pSVar11->projected_vertex).screen_x + local_34;
          lVar2 = (longlong)(int)uVar7 *
                  (longlong)g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.depth_gradient;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar5].base.depth_current =
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
    local_14 = g_SSoftwareEdge_ARRAY_01bdcfd8;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == (local_14->base).y_min) &&
           (local_14 != (SSoftwareEdge *)0x0)) goto LAB_004675c4;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004675c4:
    if (local_14 != (SSoftwareEdge *)0x0) {
      local_18 = g_SSoftwareEdge_ARRAY_01bdcfd8;
      iVar5 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == (local_18->base).y_min) && (local_18 != local_14))
          goto LAB_004675fd;
          iVar5 = iVar5 + 1;
          local_18 = local_18 + 1;
        } while (iVar5 < g_RenderTriangleEdgeCount);
      }
      local_18 = (SSoftwareEdge *)0x0;
LAB_004675fd:
      local_1c = (byte *)g_RenderTriangleMinScanlineY;
      if (local_18 != (SSoftwareEdge *)0x0) {
        do {
          if ((local_14->base).y_max <= (int)local_1c) {
            (local_14->base).y_min = -1;
            local_14 = g_SSoftwareEdge_ARRAY_01bdcfd8;
            iVar5 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_1c == (byte *)(local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00467658;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 1;
              } while (iVar5 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00467658:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_18->base).y_max <= (int)local_1c) {
            (local_18->base).y_min = -1;
            local_18 = g_SSoftwareEdge_ARRAY_01bdcfd8;
            iVar5 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_1c == (byte *)(local_18->base).y_min) && (local_18 != local_14))
                goto LAB_004676a8;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 1;
              } while (iVar5 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_004676a8:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_74[0] = (SRenderVertex *)0x4676cb;
          engine_special_cpp_renderScanline_FUN_00563257(local_18,local_14,(int)local_1c);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          *(int *)(local_1c + 8) = *(int *)(local_1c + 8) + *(int *)(local_1c + 0xc);
          *(int *)(local_1c + 0x28) = *(int *)(local_1c + 0x28) + *(int *)(local_1c + 0x2c);
          local_1c = (byte *)((int)&(local_20->projected_vertex).transformed_x + 1);
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
        local_74[iVar5] = g_SRenderVertex_ARRAY_0060b014 + *piVar3;
        iVar5 = iVar10;
      } while (iVar10 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_74,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
