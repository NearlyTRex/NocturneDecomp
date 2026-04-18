// Name: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 00553ae9]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  SSoftwareEdge *right;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar4;
  uint uVar5;
  int iVar7;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  SRenderVertex *pSVar8;
  uint uVar11;
  SRenderVertex *pSVar9;
  int local_1c;
  SSoftwareEdge *local_14;
  longlong lVar2;
  int iVar1;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar9 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar9 = iVar9 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar9 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar9 = vertices + 1;
    pSVar6 = vertices + 2;
    if (vertex_count < 4) {
      iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar9,pSVar6);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      iVar7 = vertex_count + -2;
      iVar10 = 0;
      iVar8 = 0;
      if (0 < iVar7) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar9,pSVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar9 = pSVar9 + 1;
          iVar10 = iVar10 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar10 < iVar7);
      }
      if (iVar8 == iVar7) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertices,vertex_count,g_RenderStateFlags.dword);
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_VertexPreprocessMode) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,vertex_count);
  }
  g_MaxScanline = 0;
  g_ActiveEdgeCount = 0;
  local_1c = 0;
  g_MinScanline = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar7 = g_ActiveEdgeCount;
      iVar2 = local_1c + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      pSVar9 = vertices + iVar2;
      pSVar8 = vertices + local_1c;
      iVar2 = (pSVar8->projected_vertex).screen_y >> 0x10;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      if (iVar2 != iVar4) {
        iVar5 = iVar4;
        pSVar7 = pSVar8;
        if ((pSVar9->projected_vertex).screen_y < (pSVar8->projected_vertex).screen_y) {
          iVar5 = iVar2;
          iVar2 = iVar4;
          pSVar7 = pSVar9;
          pSVar9 = pSVar8;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar2;
        iVar4 = g_MinScanline;
        g_SoftwareEdgeTable[iVar7].base.y_max = iVar5;
        if (iVar2 < iVar4) {
          g_MinScanline = iVar2;
        }
        if (g_MaxScanline < iVar5) {
          g_MaxScanline = iVar5;
        }
        uVar5 = (pSVar9->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar11._0_2_ = (ushort)(pSVar7->projected_vertex).screen_y;
        uVar11._0_2_ = (ushort)uVar11 ^ 0xffff;
        uVar11 = (uint)(ushort)uVar11;
        lVar2 = (longlong)iVar2 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        uVar6 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.x_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.x_current =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->u - pSVar7->u);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.u_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.u_current =
             pSVar7->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->v - pSVar7->v);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.v_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.v_current =
             pSVar7->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->r - pSVar7->r);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.red_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.red_current =
             pSVar7->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->a - pSVar7->a);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.alpha_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.alpha_current =
             pSVar7->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)
                ((pSVar9->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].base.depth_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].base.depth_current =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->g - pSVar7->g);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].green_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].green_current =
             pSVar7->g + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->b - pSVar7->b);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar7].blue_gradient = uVar6;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar6;
        g_SoftwareEdgeTable[iVar7].blue_current =
             pSVar7->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar7 = g_MinScanline;
  right = g_SoftwareEdgeTable;
  iVar2 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_0055361f;
      iVar2 = iVar2 + 1;
      right = right + 1;
    } while (iVar2 < g_ActiveEdgeCount);
  }
  right = (SSoftwareEdge *)0x0;
LAB_0055361f:
  if (right != (SSoftwareEdge *)0x0) {
    iVar2 = 0;
    local_14 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == (local_14->base).y_min) && (local_14 != right)) goto LAB_0055365c;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 1;
      } while (iVar2 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar2 = g_ActiveEdgeCount;
        if ((right->base).y_max <= iVar7) {
          (right->base).y_min = -1;
          iVar4 = 0;
          right = g_SoftwareEdgeTable;
          if (0 < iVar2) {
            do {
              if ((iVar7 == (right->base).y_min) && (right != local_14)) goto LAB_005536b2;
              iVar4 = iVar4 + 1;
              right = right + 1;
            } while (iVar4 < g_ActiveEdgeCount);
          }
          right = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar2 = g_ActiveEdgeCount;
        if ((local_14->base).y_max <= iVar7) {
          (local_14->base).y_min = -1;
          local_14 = g_SoftwareEdgeTable;
          iVar4 = 0;
          if (iVar2 < 1) {
            return;
          }
          while ((iVar7 != (local_14->base).y_min || (local_14 == right))) {
            iVar4 = iVar4 + 1;
            local_14 = local_14 + 1;
            if (g_ActiveEdgeCount <= iVar4) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(&local_14->base,&right->base,iVar7);
        (right->base).x_current = (right->base).x_current + (right->base).x_gradient;
        (right->base).u_current = (right->base).u_current + (right->base).u_gradient;
        (right->base).v_current = (right->base).v_current + (right->base).v_gradient;
        iVar2 = right->green_current;
        iVar4 = right->blue_current;
        iVar5 = (right->base).alpha_current;
        (right->base).depth_current = (right->base).depth_current + (right->base).depth_gradient;
        iVar1 = right->green_gradient;
        (right->base).red_current = (right->base).red_current + (right->base).red_gradient;
        right->green_current = iVar2 + iVar1;
        iVar2 = (right->base).alpha_gradient;
        right->blue_current = iVar4 + right->blue_gradient;
        (right->base).alpha_current = iVar5 + iVar2;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
        *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + *(int *)(iVar7 + 0x2c);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14);
        *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + *(int *)(iVar7 + 0x3c);
        *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + *(int *)(iVar7 + 0x44);
        *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x34);
      } while( true );
    }
  }
  return;
}
