// Name: engine_drender.cpp_renderTriangleTextured_FUN_00466d50
// Address: 00466d50
// Address Range: [[00466d50, 004673c1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00466d50(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00466d50(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  SRenderVertex *local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (g_SRenderVertex_ARRAY_0060b014 + *vertex_indices,
                         g_SRenderVertex_ARRAY_0060b014 + vertex_indices[1],
                         g_SRenderVertex_ARRAY_0060b014 + vertex_indices[2]), iVar6 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_INT_01c6cee8 == 0) || (g_TexturesDisabled != 0)) {
    iVar6 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_24 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar6;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar7 = local_24 + 1;
        if (vertex_count <= iVar7) {
          iVar7 = 0;
        }
        iVar7 = vertex_indices[iVar7];
        iVar4 = *local_28;
        local_1c = g_SRenderVertex_ARRAY_0060b014 + iVar7;
        iVar5 = g_SRenderVertex_ARRAY_0060b014[iVar7].projected_vertex.screen_y >> 0x10;
        iVar2 = g_SRenderVertex_ARRAY_0060b014[iVar4].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar5) {
          iVar3 = iVar2;
          pSVar9 = g_SRenderVertex_ARRAY_0060b014 + iVar4;
          if (g_SRenderVertex_ARRAY_0060b014[iVar7].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_0060b014[iVar4].projected_vertex.screen_y) {
            iVar3 = iVar5;
            iVar5 = iVar2;
            pSVar9 = local_1c;
            local_1c = g_SRenderVertex_ARRAY_0060b014 + iVar4;
          }
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.y_min = iVar3;
          iVar7 = g_RenderTriangleMinScanlineY;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.y_max = iVar5;
          if (iVar3 < iVar7) {
            g_RenderTriangleMinScanlineY = iVar3;
          }
          if (g_RenderTriangleMaxScanlineY < iVar5) {
            g_RenderTriangleMaxScanlineY = iVar5;
          }
          uVar8 = (local_1c->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
          if (uVar8 < 0x10000) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)(0xffffffff / (ulonglong)uVar8);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar7 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar6;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.x_gradient = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.x_current =
               (pSVar9->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar7 * (longlong)(local_1c->u - pSVar9->u);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.u_gradient = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.u_current =
               pSVar9->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar7 * (longlong)(local_1c->v - pSVar9->v);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.v_gradient = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.v_current =
               pSVar9->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar7 * (longlong)(local_1c->r - pSVar9->r);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.red_gradient = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.red_current =
               pSVar9->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar7 * (longlong)(local_1c->a - pSVar9->a);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.alpha_gradient = uVar8;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.alpha_current =
               pSVar9->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar1 = (longlong)iVar7 *
                    (longlong)
                    ((local_1c->projected_vertex).inv_z - (pSVar9->projected_vertex).inv_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.depth_gradient = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar4 = (pSVar9->projected_vertex).inv_z;
          }
          else {
            lVar1 = (longlong)iVar7 *
                    (longlong)
                    ((local_1c->projected_vertex).transformed_z -
                    (pSVar9->projected_vertex).transformed_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.depth_gradient = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar4 = (pSVar9->projected_vertex).transformed_z;
          }
          g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].base.depth_current = iVar4 + local_2c;
          if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
            lVar1 = (longlong)iVar7 * (longlong)(local_1c->g - pSVar9->g);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].green_gradient = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].green_current = pSVar9->g + local_2c;
            lVar1 = (longlong)iVar7 * (longlong)(local_1c->b - pSVar9->b);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].blue_gradient = uVar8;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_SSoftwareEdge_ARRAY_01bdcfd8[iVar6].blue_current =
                 pSVar9->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          iVar6 = g_RenderTriangleEdgeCount + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        g_RenderTriangleEdgeCount = iVar6;
      } while (local_24 < vertex_count);
    }
    local_18 = g_SSoftwareEdge_ARRAY_01bdcfd8;
    iVar6 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == (local_18->base).y_min) &&
           (local_18 != (SSoftwareEdge *)0x0)) goto LAB_00466f04;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 1;
      } while (iVar6 < g_RenderTriangleEdgeCount);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_00466f04:
    if (local_18 != (SSoftwareEdge *)0x0) {
      local_14 = g_SSoftwareEdge_ARRAY_01bdcfd8;
      iVar6 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == (local_14->base).y_min) && (local_14 != local_18))
          goto LAB_00466f3b;
          iVar6 = iVar6 + 1;
          local_14 = local_14 + 1;
        } while (iVar6 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SSoftwareEdge *)0x0;
LAB_00466f3b:
      if (local_14 != (SSoftwareEdge *)0x0) {
        local_20 = g_RenderTriangleMinScanlineY;
        do {
          if ((local_18->base).y_max <= local_20) {
            (local_18->base).y_min = -1;
            local_18 = g_SSoftwareEdge_ARRAY_01bdcfd8;
            iVar6 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == (local_18->base).y_min) && (local_18 != local_14))
                goto LAB_00466f96;
                iVar6 = iVar6 + 1;
                local_18 = local_18 + 1;
              } while (iVar6 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_00466f96:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_14->base).y_max <= local_20) {
            (local_14->base).y_min = -1;
            local_14 = g_SSoftwareEdge_ARRAY_01bdcfd8;
            iVar6 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((local_20 == (local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00466fe6;
                iVar6 = iVar6 + 1;
                local_14 = local_14 + 1;
              } while (iVar6 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00466fe6:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_6c[0] = (SRenderVertex *)0x467009;
          engine_special_cpp_renderScanline_FUN_00563257(local_14,local_18,local_20);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          iVar6 = local_1c->u;
          iVar7 = local_1c->v;
          (local_1c->projected_vertex).transformed_z =
               (local_1c->projected_vertex).transformed_z + (local_1c->projected_vertex).inv_z;
          local_1c->u = iVar6 + iVar7;
          iVar6 = (local_1c->projected_vertex).screen_x;
          iVar7 = local_1c->b;
          iVar4 = local_1c[1].projected_vertex.transformed_x;
          iVar5 = (local_1c->projected_vertex).screen_y;
          local_1c->r = local_1c->r + local_1c->g;
          iVar2 = local_1c->a;
          (local_1c->projected_vertex).screen_x = iVar6 + iVar5;
          iVar6 = local_1c[1].projected_vertex.transformed_y;
          local_1c->b = iVar7 + iVar2;
          local_1c[1].projected_vertex.transformed_x = iVar4 + iVar6;
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
          (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
          (local_18->base).red_current =
               (local_18->base).red_current + (local_18->base).red_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          (local_18->base).alpha_current =
               (local_18->base).alpha_current + (local_18->base).alpha_gradient;
          if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) == 0) {
            local_24 = local_24 + 1;
          }
          else {
            iVar6 = local_1c[1].projected_vertex.screen_x;
            iVar7 = local_1c[1].projected_vertex.screen_y;
            local_1c[1].projected_vertex.transformed_z =
                 local_1c[1].projected_vertex.transformed_z + local_1c[1].projected_vertex.inv_z;
            local_1c[1].projected_vertex.screen_x = iVar6 + iVar7;
            local_18->green_current = local_18->green_current + local_18->green_gradient;
            local_18->blue_current = local_18->blue_current + local_18->blue_gradient;
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar7 = iVar6 + 1;
        local_6c[iVar6] = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
        vertex_indices = vertex_indices + 1;
        iVar6 = iVar7;
      } while (iVar7 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00565c40(local_6c,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
