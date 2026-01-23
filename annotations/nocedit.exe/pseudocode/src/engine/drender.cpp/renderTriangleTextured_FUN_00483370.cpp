// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  uint uVar12;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  SRenderVertex *local_1c;
  SEdgeData *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar8 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    iVar8 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_24 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar8;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar9 = local_24 + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar9 = vertex_indices[iVar9];
        iVar6 = *local_28;
        local_1c = g_RenderVertexBuffer + iVar9;
        iVar7 = g_RenderVertexBuffer[iVar9].projected_vertex.screen_y >> 0x10;
        iVar4 = g_RenderVertexBuffer[iVar6].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar7) {
          iVar5 = iVar4;
          pSVar11 = g_RenderVertexBuffer + iVar6;
          if (g_RenderVertexBuffer[iVar9].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar6].projected_vertex.screen_y) {
            iVar5 = iVar7;
            iVar7 = iVar4;
            pSVar11 = local_1c;
            local_1c = g_RenderVertexBuffer + iVar6;
          }
          g_EdgeInterpolationArray[iVar8].y_start = iVar5;
          iVar9 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar8].y_end = iVar7;
          if (iVar5 < iVar9) {
            g_RenderTriangleMinScanlineY = iVar5;
          }
          if (g_RenderTriangleMaxScanlineY < iVar7) {
            g_RenderTriangleMaxScanlineY = iVar7;
          }
          uVar10 = (local_1c->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
          if (uVar10 < 0x10000) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)(0xffffffff / (ulonglong)uVar10);
          }
          uVar12 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar3 = (longlong)iVar9 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
          uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar8;
          g_EdgeInterpolationArray[iVar8].x_delta = uVar10;
          lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
          g_EdgeInterpolationArray[iVar8].x_current =
               (pSVar11->projected_vertex).screen_x +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar3 = (longlong)iVar9 * (longlong)((int)local_1c->u - (int)pSVar11->u);
          uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].u_delta = uVar10;
          lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
          g_EdgeInterpolationArray[iVar8].u_current =
               (int)pSVar11->u + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar3 = (longlong)iVar9 * (longlong)((int)local_1c->v - (int)pSVar11->v);
          uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].v_delta = uVar10;
          lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
          g_EdgeInterpolationArray[iVar8].v_current =
               (int)pSVar11->v + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          lVar3 = (longlong)iVar9 * (longlong)((int)local_1c->light - (int)pSVar11->light);
          uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].light_delta = uVar10;
          lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
          g_EdgeInterpolationArray[iVar8].light_current =
               (int)pSVar11->light + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10)
          ;
          lVar3 = (longlong)iVar9 * (longlong)((int)local_1c->w_recip - (int)pSVar11->w_recip);
          uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].w_recip_delta = uVar10;
          lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
          g_EdgeInterpolationArray[iVar8].w_recip_current =
               (int)pSVar11->w_recip +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar3 = (longlong)iVar9 *
                    (longlong)
                    ((local_1c->projected_vertex).inv_z - (pSVar11->projected_vertex).inv_z);
            uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar10;
            lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
            local_2c = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            iVar6 = (pSVar11->projected_vertex).inv_z;
          }
          else {
            lVar3 = (longlong)iVar9 *
                    (longlong)
                    ((local_1c->projected_vertex).transformed_z -
                    (pSVar11->projected_vertex).transformed_z);
            uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar10;
            lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
            local_2c = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            iVar6 = (pSVar11->projected_vertex).transformed_z;
          }
          g_EdgeInterpolationArray[iVar8].z_current = iVar6 + local_2c;
          if ((g_RenderStateFlags & 0x200U) != 0) {
            lVar3 = (longlong)iVar9 * (longlong)(local_1c->color - pSVar11->color);
            uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].color_delta = uVar10;
            lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
            local_2c = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].color_current = pSVar11->color + local_2c;
            lVar3 = (longlong)iVar9 * (longlong)((int)local_1c->fog - (int)pSVar11->fog);
            uVar10 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].fog_delta = uVar10;
            lVar3 = (longlong)(int)uVar12 * (longlong)(int)uVar10;
            g_EdgeInterpolationArray[iVar8].fog_current =
                 (int)pSVar11->fog + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10)
            ;
          }
          iVar8 = g_RenderTriangleEdgeCount + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        g_RenderTriangleEdgeCount = iVar8;
      } while (local_24 < vertex_count);
    }
    local_18 = g_EdgeInterpolationArray;
    iVar8 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_18->y_start) && (local_18 != (SEdgeData *)0x0))
        goto LAB_00483524;
        iVar8 = iVar8 + 1;
        local_18 = local_18 + 1;
      } while (iVar8 < g_RenderTriangleEdgeCount);
    }
    local_18 = (SEdgeData *)0x0;
LAB_00483524:
    if (local_18 != (SEdgeData *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar8 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != local_18))
          goto LAB_0048355b;
          iVar8 = iVar8 + 1;
          local_14 = local_14 + 1;
        } while (iVar8 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SEdgeData *)0x0;
LAB_0048355b:
      if (local_14 != (SEdgeData *)0x0) {
        local_20 = g_RenderTriangleMinScanlineY;
        do {
          if (local_18->y_end <= local_20) {
            local_18->y_start = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar8 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == local_18->y_start) && (local_18 != local_14)) goto LAB_004835b6;
                iVar8 = iVar8 + 1;
                local_18 = local_18 + 1;
              } while (iVar8 < g_RenderTriangleEdgeCount);
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
            iVar8 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == local_14->y_start) && (local_14 != local_18)) goto LAB_00483606;
                iVar8 = iVar8 + 1;
                local_14 = local_14 + 1;
              } while (iVar8 < g_RenderTriangleEdgeCount);
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
          fVar1 = local_1c->u;
          fVar2 = local_1c->v;
          (local_1c->projected_vertex).transformed_z =
               (local_1c->projected_vertex).transformed_z + (local_1c->projected_vertex).inv_z;
          local_1c->u = (float)((int)fVar1 + (int)fVar2);
          iVar8 = (local_1c->projected_vertex).screen_x;
          fVar1 = local_1c->fog;
          iVar9 = local_1c[1].projected_vertex.transformed_x;
          iVar6 = (local_1c->projected_vertex).screen_y;
          local_1c->light = (float)((int)local_1c->light + local_1c->color);
          fVar2 = local_1c->w_recip;
          (local_1c->projected_vertex).screen_x = iVar8 + iVar6;
          iVar8 = local_1c[1].projected_vertex.transformed_y;
          local_1c->fog = (float)((int)fVar1 + (int)fVar2);
          local_1c[1].projected_vertex.transformed_x = iVar9 + iVar8;
          local_18->x_current = local_18->x_current + local_18->x_delta;
          local_18->u_current = local_18->u_current + local_18->u_delta;
          local_18->v_current = local_18->v_current + local_18->v_delta;
          local_18->light_current = local_18->light_current + local_18->light_delta;
          local_18->z_current = local_18->z_current + local_18->z_delta;
          local_18->w_recip_current = local_18->w_recip_current + local_18->w_recip_delta;
          if ((g_RenderStateFlags & 0x200U) == 0) {
            local_24 = local_24 + 1;
          }
          else {
            iVar8 = local_1c[1].projected_vertex.screen_x;
            iVar9 = local_1c[1].projected_vertex.screen_y;
            local_1c[1].projected_vertex.transformed_z =
                 local_1c[1].projected_vertex.transformed_z + local_1c[1].projected_vertex.inv_z;
            local_1c[1].projected_vertex.screen_x = iVar8 + iVar9;
            local_18->color_current = local_18->color_current + local_18->color_delta;
            local_18->fog_current = local_18->fog_current + local_18->fog_delta;
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = iVar8 + 1;
        local_6c[iVar8] = g_RenderVertexBuffer + *vertex_indices;
        vertex_indices = vertex_indices + 1;
        iVar8 = iVar9;
      } while (iVar9 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_6c,vertex_count,g_RenderStateFlags);
  }
  return;
}
