// Name: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 00553ae9]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *right;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  SSoftwareEdge *local_14;
  
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
    pSVar4 = vertices + 1;
    pSVar6 = vertices + 2;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar4,pSVar6);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar10 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar4,pSVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar4 = pSVar4 + 1;
          iVar10 = iVar10 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar10 < iVar9);
      }
      if (iVar8 == iVar9) {
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
  switch(g_RenderStateFlag2) {
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
      iVar9 = g_ActiveEdgeCount;
      iVar8 = local_1c + 1;
      if (vertex_count <= iVar8) {
        iVar8 = 0;
      }
      pSVar4 = vertices + iVar8;
      pSVar6 = vertices + local_1c;
      iVar8 = (pSVar6->projected_vertex).screen_y >> 0x10;
      iVar10 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar10) {
        iVar3 = iVar10;
        pSVar7 = pSVar6;
        if ((pSVar4->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar3 = iVar8;
          iVar8 = iVar10;
          pSVar7 = pSVar4;
          pSVar4 = pSVar6;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar8;
        iVar10 = g_MinScanline;
        g_SoftwareEdgeTable[iVar9].base.y_max = iVar3;
        if (iVar8 < iVar10) {
          g_MinScanline = iVar8;
        }
        if (g_MaxScanline < iVar3) {
          g_MaxScanline = iVar3;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar11 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.x_current =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->u - pSVar7->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.u_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.u_current =
             pSVar7->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->v - pSVar7->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.v_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.v_current =
             pSVar7->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->r - pSVar7->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.z_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.z_current =
             pSVar7->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->a - pSVar7->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.fog_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.fog_current =
             pSVar7->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].base.w_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].base.w_current =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->g - pSVar7->g);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].color_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].color_current =
             pSVar7->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->b - pSVar7->b);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar9].alpha_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SoftwareEdgeTable[iVar9].alpha_current =
             pSVar7->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar9 = g_MinScanline;
  right = g_SoftwareEdgeTable;
  iVar8 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_0055361f;
      iVar8 = iVar8 + 1;
      right = right + 1;
    } while (iVar8 < g_ActiveEdgeCount);
  }
  right = (SSoftwareEdge *)0x0;
LAB_0055361f:
  if (right != (SSoftwareEdge *)0x0) {
    iVar8 = 0;
    local_14 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == (local_14->base).y_min) && (local_14 != right)) goto LAB_0055365c;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
      } while (iVar8 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar8 = g_ActiveEdgeCount;
        if ((right->base).y_max <= iVar9) {
          (right->base).y_min = -1;
          iVar10 = 0;
          right = g_SoftwareEdgeTable;
          if (0 < iVar8) {
            do {
              if ((iVar9 == (right->base).y_min) && (right != local_14)) goto LAB_005536b2;
              iVar10 = iVar10 + 1;
              right = right + 1;
            } while (iVar10 < g_ActiveEdgeCount);
          }
          right = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar8 = g_ActiveEdgeCount;
        if ((local_14->base).y_max <= iVar9) {
          (local_14->base).y_min = -1;
          local_14 = g_SoftwareEdgeTable;
          iVar10 = 0;
          if (iVar8 < 1) {
            return;
          }
          while ((iVar9 != (local_14->base).y_min || (local_14 == right))) {
            iVar10 = iVar10 + 1;
            local_14 = local_14 + 1;
            if (g_ActiveEdgeCount <= iVar10) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(&local_14->base,&right->base,iVar9);
        (right->base).x_current = (right->base).x_current + (right->base).x_gradient;
        (right->base).u_current = (right->base).u_current + (right->base).u_gradient;
        (right->base).v_current = (right->base).v_current + (right->base).v_gradient;
        iVar8 = right->color_current;
        iVar10 = right->alpha_current;
        iVar3 = (right->base).fog_current;
        (right->base).w_current = (right->base).w_current + (right->base).w_gradient;
        iVar1 = right->color_gradient;
        (right->base).z_current = (right->base).z_current + (right->base).z_gradient;
        right->color_current = iVar8 + iVar1;
        iVar8 = (right->base).fog_gradient;
        right->alpha_current = iVar10 + right->alpha_gradient;
        (right->base).fog_current = iVar3 + iVar8;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(iVar9 + 0xc);
        *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x1c);
        *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + *(int *)(iVar9 + 0x24);
        *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + *(int *)(iVar9 + 0x2c);
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x14);
        *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + *(int *)(iVar9 + 0x3c);
        *(int *)(iVar9 + 0x40) = *(int *)(iVar9 + 0x40) + *(int *)(iVar9 + 0x44);
        *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + *(int *)(iVar9 + 0x34);
      } while( true );
    }
  }
  return;
}
