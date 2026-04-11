// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// MANUAL RECONSTRUCTION
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  int iVar1;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar2;
  int iVar3;
  uint uVar13;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar14;
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
  longlong lVar1;
  
  if ((g_CullingMode != 0) &&
     (iVar14 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                         (g_RenderVertexBuffer + *vertex_indices,
                          g_RenderVertexBuffer + vertex_indices[1],
                          g_RenderVertexBuffer + vertex_indices[2]), iVar14 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    iVar14 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_24 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar14;
    if (0 < vertex_count) {
      local_28 = vertex_indices;
      do {
        iVar12 = local_24 + 1;
        if (vertex_count <= iVar12) {
          iVar12 = 0;
        }
        iVar12 = vertex_indices[iVar12];
        iVar1 = *local_28;
        local_1c = g_RenderVertexBuffer + iVar12;
        iVar5 = g_RenderVertexBuffer[iVar12].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar5) {
          iVar3 = iVar2;
          pSVar9 = g_RenderVertexBuffer + iVar1;
          if (g_RenderVertexBuffer[iVar12].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar3 = iVar5;
            iVar5 = iVar2;
            pSVar9 = local_1c;
            local_1c = g_RenderVertexBuffer + iVar1;
          }
          g_EdgeInterpolationArray[iVar14].base.y_min = iVar3;
          iVar12 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar14].base.y_max = iVar5;
          if (iVar3 < iVar12) {
            g_RenderTriangleMinScanlineY = iVar3;
          }
          if (g_RenderTriangleMaxScanlineY < iVar5) {
            g_RenderTriangleMaxScanlineY = iVar5;
          }
          uVar8 = (local_1c->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
          if (uVar8 < 0x10000) {
            iVar12 = 0;
          }
          else {
            iVar12 = (int)(0xffffffff / (ulonglong)uVar8);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar12 *
                  (longlong)
                  ((local_1c->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
          uVar13 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar14;
          g_EdgeInterpolationArray[iVar14].base.x_gradient = uVar13;
          lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
          g_EdgeInterpolationArray[iVar14].base.x_current =
               (pSVar9->projected_vertex).screen_x +
               ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          lVar11 = (longlong)iVar12 * (longlong)(local_1c->u - pSVar9->u);
          uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar14].base.u_gradient = uVar13;
          lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
          g_EdgeInterpolationArray[iVar14].base.u_current =
               pSVar9->u + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          lVar11 = (longlong)iVar12 * (longlong)(local_1c->v - pSVar9->v);
          uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar14].base.v_gradient = uVar13;
          lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
          g_EdgeInterpolationArray[iVar14].base.v_current =
               pSVar9->v + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          lVar11 = (longlong)iVar12 * (longlong)(local_1c->r - pSVar9->r);
          uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar14].base.z_gradient = uVar13;
          lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
          g_EdgeInterpolationArray[iVar14].base.z_current =
               pSVar9->r + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          lVar11 = (longlong)iVar12 * (longlong)(local_1c->a - pSVar9->a);
          uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar14].base.fog_gradient = uVar13;
          lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
          g_EdgeInterpolationArray[iVar14].base.fog_current =
               pSVar9->a + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar11 = (longlong)iVar12 *
                     (longlong)
                     ((local_1c->projected_vertex).inv_z - (pSVar9->projected_vertex).inv_z);
            uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar14].base.w_gradient = uVar13;
            lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
            local_2c = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            iVar4 = (pSVar9->projected_vertex).inv_z;
          }
          else {
            lVar11 = (longlong)iVar12 *
                     (longlong)
                     ((local_1c->projected_vertex).transformed_z -
                     (pSVar9->projected_vertex).transformed_z);
            uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar14].base.w_gradient = uVar13;
            lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
            local_2c = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            iVar4 = (pSVar9->projected_vertex).transformed_z;
          }
          iVar4 = iVar4 + local_2c;
          g_EdgeInterpolationArray[iVar14].base.w_current = iVar4;
          if ((g_RenderStateFlags.dword & 0x200) != 0) {
            lVar11 = (longlong)iVar12 * (longlong)(local_1c->g - pSVar9->g);
            uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar14].color_gradient = uVar13;
            lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
            g_EdgeInterpolationArray[iVar14].color_current =
                 pSVar9->g + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
            lVar11 = (longlong)iVar12 * (longlong)(local_1c->b - pSVar9->b);
            uVar13 = (uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar14].alpha_gradient = uVar13;
            lVar11 = (longlong)(int)uVar10 * (longlong)(int)uVar13;
            g_EdgeInterpolationArray[iVar14].alpha_current =
                 pSVar9->b + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10);
          }
          iVar14 = g_RenderTriangleEdgeCount + 1;
        }
        local_28 = local_28 + 1;
        local_24 = local_24 + 1;
        g_RenderTriangleEdgeCount = iVar14;
      } while (local_24 < vertex_count);
    }
    iVar14 = g_RenderTriangleMinScanlineY;
    local_18 = g_EdgeInterpolationArray;
    iVar12 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == (local_18->base).y_min) &&
           (local_18 != (SSoftwareEdge *)0x0)) goto LAB_00483524;
        iVar12 = iVar12 + 1;
        local_18 = local_18 + 1;
      } while (iVar12 < g_RenderTriangleEdgeCount);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_00483524:
    if (local_18 != (SSoftwareEdge *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar12 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == (local_14->base).y_min) && (local_14 != local_18))
          goto LAB_0048355b;
          iVar12 = iVar12 + 1;
          local_14 = local_14 + 1;
        } while (iVar12 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SSoftwareEdge *)0x0;
LAB_0048355b:
      if (local_14 != (SSoftwareEdge *)0x0) {
        do {
          if ((local_18->base).y_max <= iVar14) {
            (local_18->base).y_min = -1;
            local_18 = g_EdgeInterpolationArray;
            iVar12 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar14 == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_004835b6;
                iVar12 = iVar12 + 1;
                local_18 = local_18 + 1;
              } while (iVar12 < g_RenderTriangleEdgeCount);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_004835b6:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_14->base).y_max <= iVar14) {
            (local_14->base).y_min = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar12 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar14 == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_00483606;
                iVar12 = iVar12 + 1;
                local_14 = local_14 + 1;
              } while (iVar12 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00483606:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_6c[0] = (SRenderVertex *)0x483629;
          wincore_windll_cpp_renderScanline_FUN_005b5710(&local_14->base,&local_18->base,iVar14);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          iVar12 = local_1c->u;
          iVar1 = local_1c->v;
          (local_1c->projected_vertex).transformed_z =
               (local_1c->projected_vertex).transformed_z + (local_1c->projected_vertex).inv_z;
          local_1c->u = iVar12 + iVar1;
          iVar12 = (local_1c->projected_vertex).screen_x;
          iVar1 = local_1c->b;
          iVar8 = local_1c[1].projected_vertex.transformed_x;
          iVar9 = (local_1c->projected_vertex).screen_y;
          local_1c->r = local_1c->r + local_1c->g;
          iVar10 = local_1c->a;
          (local_1c->projected_vertex).screen_x = iVar12 + iVar9;
          iVar12 = local_1c[1].projected_vertex.transformed_y;
          local_1c->b = iVar1 + iVar10;
          local_1c[1].projected_vertex.transformed_x = iVar8 + iVar12;
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
          (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
          (local_18->base).z_current = (local_18->base).z_current + (local_18->base).z_gradient;
          (local_18->base).w_current = (local_18->base).w_current + (local_18->base).w_gradient;
          (local_18->base).fog_current =
               (local_18->base).fog_current + (local_18->base).fog_gradient;
          if ((g_RenderStateFlags.dword & 0x200) != 0) {
            iVar12 = local_1c[1].projected_vertex.screen_x;
            iVar1 = local_1c[1].projected_vertex.screen_y;
            local_1c[1].projected_vertex.transformed_z =
                 local_1c[1].projected_vertex.transformed_z + local_1c[1].projected_vertex.inv_z;
            local_1c[1].projected_vertex.screen_x = iVar12 + iVar1;
            local_18->color_current = local_18->color_current + local_18->color_gradient;
            local_18->alpha_current = local_18->alpha_current + local_18->alpha_gradient;
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
        local_6c[iVar6] = g_RenderVertexBuffer + *vertex_indices;
        vertex_indices = vertex_indices + 1;
        iVar6 = iVar7;
      } while (iVar7 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_6c,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
