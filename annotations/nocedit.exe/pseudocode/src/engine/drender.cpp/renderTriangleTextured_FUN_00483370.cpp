// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  SRenderVertex *pSVar10;
  uint uVar11;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
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
        iVar8 = local_24 + 1;
        if (vertex_count <= iVar8) {
          iVar8 = 0;
        }
        iVar8 = vertex_indices[iVar8];
        iVar5 = *local_28;
        local_1c = g_RenderVertexBuffer + iVar8;
        iVar6 = g_RenderVertexBuffer[iVar8].projected_vertex.screen_y >> 0x10;
        iVar3 = g_RenderVertexBuffer[iVar5].projected_vertex.screen_y >> 0x10;
        if (iVar3 != iVar6) {
          iVar4 = iVar3;
          pSVar10 = g_RenderVertexBuffer + iVar5;
          if (g_RenderVertexBuffer[iVar8].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar5].projected_vertex.screen_y) {
            iVar4 = iVar6;
            iVar6 = iVar3;
            pSVar10 = local_1c;
            local_1c = g_RenderVertexBuffer + iVar5;
          }
          g_EdgeInterpolationArray[iVar7].y_start = iVar4;
          iVar8 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar7].y_end = iVar6;
          if (iVar4 < iVar8) {
            g_RenderTriangleMinScanlineY = iVar4;
          }
          if (g_RenderTriangleMaxScanlineY < iVar6) {
            g_RenderTriangleMaxScanlineY = iVar6;
          }
          uVar9 = (local_1c->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar9 < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)uVar9);
          }
          uVar11 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)iVar8 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar7;
          g_EdgeInterpolationArray[iVar7].x_delta = uVar9;
          lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar7].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar8 * (longlong)(local_1c->u - pSVar10->u);
          uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].u_delta = uVar9;
          lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar7].u_current =
               pSVar10->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar8 * (longlong)(local_1c->v - pSVar10->v);
          uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].v_delta = uVar9;
          lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar7].v_current =
               pSVar10->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar8 * (longlong)(local_1c->light - pSVar10->light);
          uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].light_delta = uVar9;
          lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar7].light_current =
               pSVar10->light + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar8 * (longlong)((int)local_1c->w_recip - (int)pSVar10->w_recip);
          uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar7].w_recip_delta = uVar9;
          lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar7].w_recip_current =
               (int)pSVar10->w_recip +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar2 = (longlong)iVar8 *
                    (longlong)
                    ((local_1c->projected_vertex).inv_z - (pSVar10->projected_vertex).inv_z);
            uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].z_delta = uVar9;
            lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_2c = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            iVar5 = (pSVar10->projected_vertex).inv_z;
          }
          else {
            lVar2 = (longlong)iVar8 *
                    (longlong)
                    ((local_1c->projected_vertex).transformed_z -
                    (pSVar10->projected_vertex).transformed_z);
            uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].z_delta = uVar9;
            lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_2c = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            iVar5 = (pSVar10->projected_vertex).transformed_z;
          }
          g_EdgeInterpolationArray[iVar7].z_current = iVar5 + local_2c;
          if ((g_RenderStateFlags.dword & 0x200) != 0) {
            lVar2 = (longlong)iVar8 * (longlong)(local_1c->color - pSVar10->color);
            uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].color_delta = uVar9;
            lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_2c = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].color_current = pSVar10->color + local_2c;
            lVar2 = (longlong)iVar8 * (longlong)(local_1c->fog - pSVar10->fog);
            uVar9 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar7].fog_delta = uVar9;
            lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            g_EdgeInterpolationArray[iVar7].fog_current =
                 pSVar10->fog + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          }
          iVar7 = g_RenderTriangleEdgeCount + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        g_RenderTriangleEdgeCount = iVar7;
      } while (local_24 < vertex_count);
    }
    local_18 = g_EdgeInterpolationArray;
    iVar7 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_18->y_start) && (local_18 != (SEdgeData *)0x0))
        goto LAB_00483524;
        iVar7 = iVar7 + 1;
        local_18 = local_18 + 1;
      } while (iVar7 < g_RenderTriangleEdgeCount);
    }
    local_18 = (SEdgeData *)0x0;
LAB_00483524:
    if (local_18 != (SEdgeData *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar7 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != local_18))
          goto LAB_0048355b;
          iVar7 = iVar7 + 1;
          local_14 = local_14 + 1;
        } while (iVar7 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SEdgeData *)0x0;
LAB_0048355b:
      if (local_14 != (SEdgeData *)0x0) {
        local_20 = g_RenderTriangleMinScanlineY;
        do {
          if (local_18->y_end <= local_20) {
            local_18->y_start = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar7 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == local_18->y_start) && (local_18 != local_14)) goto LAB_004835b6;
                iVar7 = iVar7 + 1;
                local_18 = local_18 + 1;
              } while (iVar7 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SEdgeData *)0x0;
LAB_004835b6:
            if (local_18 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_14->y_end <= local_20) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar7 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == local_14->y_start) && (local_14 != local_18)) goto LAB_00483606;
                iVar7 = iVar7 + 1;
                local_14 = local_14 + 1;
              } while (iVar7 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483606:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          local_6c[0] = (SRenderVertex *)0x483629;
          wincore_windll_cpp_renderScanline_FUN_005b5710(local_14,local_18,local_20);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          iVar7 = local_1c->u;
          iVar8 = local_1c->v;
          (local_1c->projected_vertex).transformed_z =
               (local_1c->projected_vertex).transformed_z + (local_1c->projected_vertex).inv_z;
          local_1c->u = iVar7 + iVar8;
          iVar7 = (local_1c->projected_vertex).screen_x;
          iVar8 = local_1c->fog;
          iVar5 = local_1c[1].projected_vertex.transformed_x;
          iVar6 = (local_1c->projected_vertex).screen_y;
          local_1c->light = local_1c->light + local_1c->color;
          fVar1 = local_1c->w_recip;
          (local_1c->projected_vertex).screen_x = iVar7 + iVar6;
          iVar7 = local_1c[1].projected_vertex.transformed_y;
          local_1c->fog = iVar8 + (int)fVar1;
          local_1c[1].projected_vertex.transformed_x = iVar5 + iVar7;
          local_18->x_current = local_18->x_current + local_18->x_delta;
          local_18->u_current = local_18->u_current + local_18->u_delta;
          local_18->v_current = local_18->v_current + local_18->v_delta;
          local_18->light_current = local_18->light_current + local_18->light_delta;
          local_18->z_current = local_18->z_current + local_18->z_delta;
          local_18->w_recip_current = local_18->w_recip_current + local_18->w_recip_delta;
          if ((g_RenderStateFlags.dword & 0x200) == 0) {
            local_24 = local_24 + 1;
          }
          else {
            iVar7 = local_1c[1].projected_vertex.screen_x;
            iVar8 = local_1c[1].projected_vertex.screen_y;
            local_1c[1].projected_vertex.transformed_z =
                 local_1c[1].projected_vertex.transformed_z + local_1c[1].projected_vertex.inv_z;
            local_1c[1].projected_vertex.screen_x = iVar7 + iVar8;
            local_18->color_current = local_18->color_current + local_18->color_delta;
            local_18->fog_current = local_18->fog_current + local_18->fog_delta;
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar7 = 0;
    if (0 < vertex_count) {
      do {
        iVar8 = iVar7 + 1;
        local_6c[iVar7] = g_RenderVertexBuffer + *vertex_indices;
        vertex_indices = vertex_indices + 1;
        iVar7 = iVar8;
      } while (iVar8 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_6c,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
