// Name: engine_prim.c_renderPolygonSoftware_FUN_0051cb20
// Address: 0051cb20
// Address Range: [[0051cb20, 0051d040]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderPolygonSoftware_FUN_0051cb20(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderPolygonSoftware_FUN_0051cb20(SRenderVertex *vertices,int vertex_count)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SRenderVertex *pSVar4;
  uint uVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *pSVar11;
  bool bVar12;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar9 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)g_INT_01c35e38) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_INT_01c35e40;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)g_INT_01c35e3c) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_INT_01c35e44;
      }
      iVar9 = iVar9 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar9 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar11 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar11,pSVar4);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar6 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760(vertices,pSVar11,pSVar4);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar11 = pSVar11 + 1;
          iVar6 = iVar6 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar6 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((g_INT_01c37788 != 0) && (g_TexturesDisabled == 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertices,vertex_count,g_RenderStateFlags.dword);
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_VertexPreprocessMode) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_0051c6b0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_0051c630(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_0051c720(vertices,vertex_count);
  }
  g_SoftwareMaxScanline = 0;
  g_SoftwareEdgeCount = 0;
  local_1c = 0;
  g_SoftwareMinScanline = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = g_SoftwareEdgeCount;
      iVar6 = local_1c + 1;
      if (vertex_count <= iVar6) {
        iVar6 = 0;
      }
      pSVar4 = vertices + iVar6;
      pSVar11 = vertices + local_1c;
      iVar8 = (pSVar11->projected_vertex).screen_y >> 0x10;
      iVar6 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar6) {
        iVar3 = iVar8;
        pSVar7 = pSVar11;
        if ((pSVar4->projected_vertex).screen_y < (pSVar11->projected_vertex).screen_y) {
          iVar3 = iVar6;
          pSVar7 = pSVar4;
          iVar6 = iVar8;
          pSVar4 = pSVar11;
        }
        g_SSoftwareEdge_ARRAY_01e6164c[g_SoftwareEdgeCount].base.y_min = iVar3;
        iVar8 = g_SoftwareMinScanline;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.y_max = iVar6;
        if (iVar3 < iVar8) {
          g_SoftwareMinScanline = iVar3;
        }
        if (g_SoftwareMaxScanline < iVar6) {
          g_SoftwareMaxScanline = iVar6;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar6 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.x_current =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->u - pSVar7->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.u_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.u_current =
             pSVar7->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->v - pSVar7->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.v_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.v_current =
             pSVar7->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->r - pSVar7->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.red_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.red_current =
             pSVar7->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->a - pSVar7->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.alpha_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.alpha_current =
             pSVar7->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.depth_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01e6164c[iVar9].base.depth_current =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0051c580(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_0051c580(g_SoftwareMinScanline,edge_ptr),
     iVar9 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
    iVar6 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar12 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar12 != iVar6 < 0) {
      if ((edge_ptr->base).y_max <= iVar9) {
        (edge_ptr->base).y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0051c580(iVar9,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if ((local_14->base).y_max <= iVar9) {
        (local_14->base).y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_0051c580(iVar9,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      engine_special_cpp_renderScanline_FUN_0055d6d7(local_14,edge_ptr,iVar9);
      piVar1 = &(edge_ptr->base).x_current;
      *piVar1 = *piVar1 + (edge_ptr->base).x_gradient;
      (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
      (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
      (edge_ptr->base).red_current = (edge_ptr->base).red_current + (edge_ptr->base).red_gradient;
      (edge_ptr->base).depth_current =
           (edge_ptr->base).depth_current + (edge_ptr->base).depth_gradient;
      (edge_ptr->base).alpha_current =
           (edge_ptr->base).alpha_current + (edge_ptr->base).alpha_gradient;
      *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(iVar9 + 0xc);
      *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x1c);
      *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + *(int *)(iVar9 + 0x24);
      local_1c = local_1c + 1;
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x14);
      iVar8 = g_MaxViewportScanline;
      *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + *(int *)(iVar9 + 0x2c);
      *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + *(int *)(iVar9 + 0x34);
      iVar6 = local_1c - iVar8;
      bVar12 = SBORROW4(local_1c,iVar8);
    }
  }
  return;
}
