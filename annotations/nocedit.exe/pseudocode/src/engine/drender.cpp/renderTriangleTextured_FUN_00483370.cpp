// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_ESI;
  SRenderVertex *pSVar9;
  int unaff_EDI;
  uint uVar10;
  SRenderVertex *in_stack_ffffff94;
  void *in_stack_ffffff98;
  int in_stack_ffffff9c;
  uint local_2c;
  int *local_28;
  int local_24;
  SRenderVertex *local_1c;
  SEdgeData *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar7 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    iVar7 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_24 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar7;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar2 = local_24 + 1;
        if (vertex_count <= iVar2) {
          iVar2 = 0;
        }
        iVar2 = vertex_indices[iVar2];
        iVar5 = *local_28;
        iVar6 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_y >> 0x10;
        iVar3 = g_RenderVertexBuffer[iVar5].projected_vertex.screen_y >> 0x10;
        if (iVar3 != iVar6) {
          iVar4 = iVar3;
          pSVar9 = g_RenderVertexBuffer + iVar5;
          local_1c = g_RenderVertexBuffer + iVar2;
          if (g_RenderVertexBuffer[iVar2].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar5].projected_vertex.screen_y) {
            iVar4 = iVar6;
            iVar6 = iVar3;
            pSVar9 = g_RenderVertexBuffer + iVar2;
            local_1c = g_RenderVertexBuffer + iVar5;
          }
          g_EdgeInterpolationArray[iVar7].y_start = iVar4;
          iVar2 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar7].y_end = iVar6;
          if (iVar4 < iVar2) {
            g_RenderTriangleMinScanlineY = iVar4;
          }
          if (g_RenderTriangleMaxScanlineY < iVar6) {
            g_RenderTriangleMaxScanlineY = iVar6;
          }
          uVar8 = (local_1c->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
          if (uVar8 < 0x10000) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)(0xffffffff / (ulonglong)uVar8);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar2 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar7;
          g_EdgeInterpolationArray[iVar7].x_delta = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_EdgeInterpolationArray[iVar7].x_current =
               (pSVar9->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_1c->u - (int)pSVar9->u);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].u_delta = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_EdgeInterpolationArray[iVar7].u_current =
               (int)pSVar9->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_1c->v - (int)pSVar9->v);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].v_delta = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_EdgeInterpolationArray[iVar7].v_current =
               (int)pSVar9->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_1c->light - (int)pSVar9->light);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].light_delta = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_EdgeInterpolationArray[iVar7].light_current =
               (int)pSVar9->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_1c->w_recip - (int)pSVar9->w_recip);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].w_recip_delta = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_EdgeInterpolationArray[iVar7].w_recip_current =
               (int)pSVar9->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_1c->projected_vertex).inv_z - (pSVar9->projected_vertex).inv_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].z_delta = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar5 = (pSVar9->projected_vertex).inv_z;
          }
          else {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_1c->projected_vertex).transformed_z -
                    (pSVar9->projected_vertex).transformed_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].z_delta = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar5 = (pSVar9->projected_vertex).transformed_z;
          }
          g_EdgeInterpolationArray[iVar7].z_current = iVar5 + local_2c;
          if ((g_RenderStateFlags & 0x200U) != 0) {
            lVar1 = (longlong)iVar2 * (longlong)(local_1c->color - pSVar9->color);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].color_delta = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_EdgeInterpolationArray[iVar7].color_current =
                 pSVar9->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            lVar1 = (longlong)iVar2 * (longlong)((int)local_1c->fog - (int)pSVar9->fog);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].fog_delta = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_EdgeInterpolationArray[iVar7].fog_current =
                 (int)pSVar9->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          iVar7 = g_RenderTriangleEdgeCount + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        g_RenderTriangleEdgeCount = iVar7;
      } while (local_24 < vertex_count);
    }
    iVar7 = g_RenderTriangleMinScanlineY;
    local_18 = g_EdgeInterpolationArray;
    iVar2 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_18->y_start) && (local_18 != (SEdgeData *)0x0))
        goto LAB_00483524;
        iVar2 = iVar2 + 1;
        local_18 = local_18 + 1;
      } while (iVar2 < g_RenderTriangleEdgeCount);
    }
    local_18 = (SEdgeData *)0x0;
LAB_00483524:
    if (local_18 != (SEdgeData *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar2 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != local_18))
          goto LAB_0048355b;
          iVar2 = iVar2 + 1;
          local_14 = local_14 + 1;
        } while (iVar2 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SEdgeData *)0x0;
LAB_0048355b:
      if (local_14 != (SEdgeData *)0x0) {
        do {
          if (local_18->y_end <= iVar7) {
            local_18->y_start = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar7 == local_18->y_start) && (local_18 != local_14)) goto LAB_004835b6;
                iVar2 = iVar2 + 1;
                local_18 = local_18 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SEdgeData *)0x0;
LAB_004835b6:
            if (local_18 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_14->y_end <= iVar7) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar7 == local_14->y_start) && (local_14 != local_18)) goto LAB_00483606;
                iVar2 = iVar2 + 1;
                local_14 = local_14 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483606:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff94,in_stack_ffffff98,in_stack_ffffff9c);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + *(int *)(unaff_EDI + 0xc);
          *(int *)(unaff_EDI + 0x18) = *(int *)(unaff_EDI + 0x18) + *(int *)(unaff_EDI + 0x1c);
          *(int *)(unaff_EDI + 0x20) = *(int *)(unaff_EDI + 0x20) + *(int *)(unaff_EDI + 0x24);
          *(int *)(unaff_EDI + 0x10) = *(int *)(unaff_EDI + 0x10) + *(int *)(unaff_EDI + 0x14);
          *(int *)(unaff_EDI + 0x28) = *(int *)(unaff_EDI + 0x28) + *(int *)(unaff_EDI + 0x2c);
          *(int *)(unaff_EDI + 0x30) = *(int *)(unaff_EDI + 0x30) + *(int *)(unaff_EDI + 0x34);
          *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
          *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
          *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
          *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0x14);
          *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
          *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_ESI + 0x34);
          if ((g_RenderStateFlags & 0x200U) == 0) {
            local_14 = (SEdgeData *)((int)&local_14->y_start + 1);
          }
          else {
            *(int *)(unaff_EDI + 0x38) = *(int *)(unaff_EDI + 0x38) + *(int *)(unaff_EDI + 0x3c);
            *(int *)(unaff_EDI + 0x40) = *(int *)(unaff_EDI + 0x40) + *(int *)(unaff_EDI + 0x44);
            *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
            *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x40) + *(int *)(unaff_ESI + 0x44);
            local_14 = (SEdgeData *)((int)&local_14->y_start + 1);
          }
        } while( true );
      }
    }
  }
  else {
    iVar7 = 0;
    if (0 < vertex_count) {
      do {
        iVar7 = iVar7 + 1;
        *(SRenderVertex **)(&stack0xffffff90 + iVar7 * 4) = g_RenderVertexBuffer + *vertex_indices;
        vertex_indices = vertex_indices + 1;
      } while (iVar7 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff94,vertex_count,g_RenderStateFlags);
  }
  return;
}
