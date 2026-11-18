// Name: engine_drender.cpp_renderTriangleTextured_FUN_00461f70
// Address: 00461f70
// Address Range: [[00461f70, 004625e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00461f70(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00461f70(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  SRenderVertex *pSVar8;
  uint uVar9;
  SRenderVertex *local_6c [16];
  uint local_2c;
  int *local_28;
  int local_24;
  int local_20;
  SRenderVertex *local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (g_SRenderVertex_ARRAY_00622014 + *vertex_indices,
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices[1],
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices[2]), iVar5 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_INT_01c37788 == 0) || (g_TexturesDisabled != 0)) {
    g_INT_01ba51c8 = 0;
    g_INT_01ba56d0 = 0;
    local_24 = 0;
    g_INT_01ba56cc = 0x4b0;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar5 = local_24 + 1;
        if (vertex_count <= iVar5) {
          iVar5 = 0;
        }
        iVar5 = vertex_indices[iVar5];
        iVar6 = *local_28;
        local_1c = g_SRenderVertex_ARRAY_00622014 + iVar5;
        iVar4 = g_SRenderVertex_ARRAY_00622014[iVar5].projected_vertex.screen_y >> 0x10;
        iVar2 = g_SRenderVertex_ARRAY_00622014[iVar6].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar4) {
          iVar3 = iVar2;
          pSVar8 = g_SRenderVertex_ARRAY_00622014 + iVar6;
          if (g_SRenderVertex_ARRAY_00622014[iVar5].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_00622014[iVar6].projected_vertex.screen_y) {
            iVar3 = iVar4;
            iVar4 = iVar2;
            pSVar8 = local_1c;
            local_1c = g_SRenderVertex_ARRAY_00622014 + iVar6;
          }
          iVar6 = g_INT_01ba51c8 * 0x50;
          *(int *)(&DAT_01ba51cc + iVar6) = iVar3;
          iVar5 = g_INT_01ba56cc;
          *(int *)(iVar6 + 0x1ba51d0) = iVar4;
          if (iVar3 < iVar5) {
            g_INT_01ba56cc = iVar3;
          }
          if (g_INT_01ba56d0 < iVar4) {
            g_INT_01ba56d0 = iVar4;
          }
          uVar7 = (local_1c->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          uVar9 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar5 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar6 + 0x1ba51d8) = uVar7;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
          *(uint *)(iVar6 + 0x1ba51d4) =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(local_1c->u - pSVar8->u);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar6 + 0x1ba51e8) = uVar7;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
          *(uint *)(iVar6 + 0x1ba51e4) =
               pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(local_1c->v - pSVar8->v);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar6 + 0x1ba51f0) = uVar7;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
          *(uint *)(iVar6 + 0x1ba51ec) =
               pSVar8->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(local_1c->r - pSVar8->r);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar6 + 0x1ba51e0) = uVar7;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
          *(uint *)(iVar6 + 0x1ba51dc) =
               pSVar8->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar5 * (longlong)(local_1c->a - pSVar8->a);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          *(uint *)(iVar6 + 0x1ba5200) = uVar7;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
          *(uint *)(iVar6 + 0x1ba51fc) =
               pSVar8->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar1 = (longlong)iVar5 *
                    (longlong)
                    ((local_1c->projected_vertex).inv_z - (pSVar8->projected_vertex).inv_z);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar6 + 0x1ba51f8) = uVar7;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar4 = (pSVar8->projected_vertex).inv_z;
          }
          else {
            lVar1 = (longlong)iVar5 *
                    (longlong)
                    ((local_1c->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar6 + 0x1ba51f8) = uVar7;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar4 = (pSVar8->projected_vertex).transformed_z;
          }
          *(uint *)(iVar6 + 0x1ba51f4) = iVar4 + local_2c;
          if ((g_RenderStateFlags.dword & RENDER_COLOR_FROM_VERTEX) != 0) {
            lVar1 = (longlong)iVar5 * (longlong)(local_1c->g - pSVar8->g);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar6 + 0x1ba5208) = uVar7;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
            local_2c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar6 + 0x1ba5204) = pSVar8->g + local_2c;
            lVar1 = (longlong)iVar5 * (longlong)(local_1c->b - pSVar8->b);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            *(uint *)(iVar6 + 0x1ba5210) = uVar7;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar7;
            *(uint *)(iVar6 + 0x1ba520c) =
                 pSVar8->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          g_INT_01ba51c8 = g_INT_01ba51c8 + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
      } while (local_24 < vertex_count);
    }
    local_18 = (SSoftwareEdge *)&DAT_01ba51cc;
    iVar5 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_INT_01ba51c8) {
      do {
        if ((g_INT_01ba56cc == (local_18->base).y_min) && (local_18 != (SSoftwareEdge *)0x0))
        goto LAB_00462124;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 1;
      } while (iVar5 < g_INT_01ba51c8);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_00462124:
    if (local_18 != (SSoftwareEdge *)0x0) {
      local_14 = (SSoftwareEdge *)&DAT_01ba51cc;
      iVar5 = 0;
      if (0 < g_INT_01ba51c8) {
        do {
          if ((g_INT_01ba56cc == (local_14->base).y_min) && (local_14 != local_18))
          goto LAB_0046215b;
          iVar5 = iVar5 + 1;
          local_14 = local_14 + 1;
        } while (iVar5 < g_INT_01ba51c8);
      }
      local_14 = (SSoftwareEdge *)0x0;
LAB_0046215b:
      if (local_14 != (SSoftwareEdge *)0x0) {
        local_20 = g_INT_01ba56cc;
        do {
          if ((local_18->base).y_max <= local_20) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01ba51cc;
            iVar5 = 0;
            if (0 < g_INT_01ba51c8) {
              do {
                if ((local_20 == (local_18->base).y_min) && (local_18 != local_14))
                goto LAB_004621b6;
                iVar5 = iVar5 + 1;
                local_18 = local_18 + 1;
              } while (iVar5 < g_INT_01ba51c8);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_004621b6:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_14->base).y_max <= local_20) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01ba51cc;
            iVar5 = 0;
            if (0 < g_INT_01ba51c8) {
              do {
                if ((local_20 == (local_14->base).y_min) && (local_14 != local_18))
                goto LAB_00462206;
                iVar5 = iVar5 + 1;
                local_14 = local_14 + 1;
              } while (iVar5 < g_INT_01ba51c8);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00462206:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_6c[0] = (SRenderVertex *)0x462229;
          engine_special_cpp_renderScanline_FUN_0055d6d7(local_14,local_18,local_20);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          iVar5 = local_1c->u;
          iVar6 = local_1c->v;
          (local_1c->projected_vertex).transformed_z =
               (local_1c->projected_vertex).transformed_z + (local_1c->projected_vertex).inv_z;
          local_1c->u = iVar5 + iVar6;
          iVar5 = (local_1c->projected_vertex).screen_x;
          iVar6 = local_1c->b;
          iVar4 = local_1c[1].projected_vertex.transformed_x;
          iVar2 = (local_1c->projected_vertex).screen_y;
          local_1c->r = local_1c->r + local_1c->g;
          iVar3 = local_1c->a;
          (local_1c->projected_vertex).screen_x = iVar5 + iVar2;
          iVar5 = local_1c[1].projected_vertex.transformed_y;
          local_1c->b = iVar6 + iVar3;
          local_1c[1].projected_vertex.transformed_x = iVar4 + iVar5;
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
            iVar5 = local_1c[1].projected_vertex.screen_x;
            iVar6 = local_1c[1].projected_vertex.screen_y;
            local_1c[1].projected_vertex.transformed_z =
                 local_1c[1].projected_vertex.transformed_z + local_1c[1].projected_vertex.inv_z;
            local_1c[1].projected_vertex.screen_x = iVar5 + iVar6;
            local_18->green_current = local_18->green_current + local_18->green_gradient;
            local_18->blue_current = local_18->blue_current + local_18->blue_gradient;
            local_24 = local_24 + 1;
          }
        } while( true );
      }
    }
  }
  else {
    iVar5 = 0;
    if (0 < vertex_count) {
      do {
        iVar6 = iVar5 + 1;
        local_6c[iVar5] = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
        vertex_indices = vertex_indices + 1;
        iVar5 = iVar6;
      } while (iVar6 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_0055f920(local_6c,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
