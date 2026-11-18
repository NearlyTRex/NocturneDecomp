// Name: engine_prim.c_renderScanlinePolygon_FUN_004fad00
// Address: 004fad00
// Address Range: [[004fad00, 004fb369]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_004fad00(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_004fad00(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *right;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  int iVar11;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x *
                   (longlong)g_Projection.half_width_fixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_Projection.center_x_fixed;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y *
                   (longlong)g_Projection.neg_half_height_fixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_Projection.center_y_fixed;
      }
      iVar8 = iVar8 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar8 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar4 = vertices + 1;
    pSVar9 = vertices + 2;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(vertices,pSVar4,pSVar9);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar11 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(vertices,pSVar4,pSVar9);
          if (iVar3 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar4 = pSVar4 + 1;
          iVar11 = iVar11 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar11 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    engine_special_cpp_drawPolygon_FUN_00532620(vertices,vertex_count,g_RenderStateFlags.dword);
    return;
  }
  switch(g_VertexPreprocessMode) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_004f9870(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_004f99d0(vertices,vertex_count);
  }
  g_MaxScanline = 0;
  g_ActiveEdgeCount = 0;
  local_1c = 0;
  g_MinScanline = GAME_SCREEN_MAX_HEIGHT;
  if (0 < vertex_count) {
    do {
      iVar8 = g_ActiveEdgeCount;
      iVar7 = local_1c + 1;
      if (vertex_count <= iVar7) {
        iVar7 = 0;
      }
      pSVar4 = vertices + iVar7;
      pSVar9 = vertices + local_1c;
      iVar7 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar11 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar7 != iVar11) {
        iVar3 = iVar11;
        pSVar6 = pSVar9;
        if ((pSVar4->projected_vertex).screen_y < (pSVar9->projected_vertex).screen_y) {
          iVar3 = iVar7;
          iVar7 = iVar11;
          pSVar6 = pSVar4;
          pSVar4 = pSVar9;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar7;
        iVar11 = g_MinScanline;
        g_SoftwareEdgeTable[iVar8].base.y_max = iVar3;
        if (iVar7 < iVar11) {
          g_MinScanline = iVar7;
        }
        if (g_MaxScanline < iVar3) {
          g_MaxScanline = iVar3;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar7 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.x_current =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->u - pSVar6->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.u_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.u_current =
             pSVar6->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->v - pSVar6->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.v_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.v_current =
             pSVar6->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->r - pSVar6->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.red_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.red_current =
             pSVar6->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->a - pSVar6->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.alpha_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.alpha_current =
             pSVar6->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].base.depth_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].base.depth_current =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->g - pSVar6->g);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].green_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].green_current =
             pSVar6->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar7 * (longlong)(pSVar4->b - pSVar6->b);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].blue_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar8].blue_current =
             pSVar6->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar8 = g_MinScanline;
  right = g_SoftwareEdgeTable;
  iVar7 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_004faeb0;
      iVar7 = iVar7 + 1;
      right = right + 1;
    } while (iVar7 < g_ActiveEdgeCount);
  }
  right = (SSoftwareEdge *)0x0;
LAB_004faeb0:
  if (right != (SSoftwareEdge *)0x0) {
    iVar7 = 0;
    local_14 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == (local_14->base).y_min) && (local_14 != right)) goto LAB_004faeed;
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 1;
      } while (iVar7 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004faeed:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar7 = g_ActiveEdgeCount;
        if ((right->base).y_max <= iVar8) {
          (right->base).y_min = -1;
          iVar11 = 0;
          right = g_SoftwareEdgeTable;
          if (0 < iVar7) {
            do {
              if ((iVar8 == (right->base).y_min) && (right != local_14)) goto LAB_004faf43;
              iVar11 = iVar11 + 1;
              right = right + 1;
            } while (iVar11 < g_ActiveEdgeCount);
          }
          right = (SSoftwareEdge *)0x0;
LAB_004faf43:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar7 = g_ActiveEdgeCount;
        if ((local_14->base).y_max <= iVar8) {
          (local_14->base).y_min = -1;
          local_14 = g_SoftwareEdgeTable;
          iVar11 = 0;
          if (iVar7 < 1) {
            return;
          }
          while ((iVar8 != (local_14->base).y_min || (local_14 == right))) {
            iVar11 = iVar11 + 1;
            local_14 = local_14 + 1;
            if (g_ActiveEdgeCount <= iVar11) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00530710(local_14,right,iVar8);
        (right->base).x_current = (right->base).x_current + (right->base).x_gradient;
        (right->base).u_current = (right->base).u_current + (right->base).u_gradient;
        (right->base).v_current = (right->base).v_current + (right->base).v_gradient;
        iVar7 = right->green_current;
        iVar11 = right->blue_current;
        iVar3 = (right->base).alpha_current;
        (right->base).depth_current = (right->base).depth_current + (right->base).depth_gradient;
        iVar1 = right->green_gradient;
        (right->base).red_current = (right->base).red_current + (right->base).red_gradient;
        right->green_current = iVar7 + iVar1;
        iVar7 = (right->base).alpha_gradient;
        right->blue_current = iVar11 + right->blue_gradient;
        (right->base).alpha_current = iVar3 + iVar7;
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0xc);
        *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c);
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24);
        *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x14);
        *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + *(int *)(iVar8 + 0x3c);
        *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + *(int *)(iVar8 + 0x44);
        *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x34);
      } while( true );
    }
  }
  return;
}
