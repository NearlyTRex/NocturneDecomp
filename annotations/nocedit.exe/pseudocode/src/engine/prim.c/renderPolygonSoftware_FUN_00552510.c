// Name: engine_prim.c_renderPolygonSoftware_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 00552a30]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

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
    pSVar11 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar11,pSVar4);
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
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar11,pSVar4);
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
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertices,vertex_count,g_RenderStateFlags.dword);
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
        g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].base.y_min = iVar3;
        iVar8 = g_SoftwareMinScanline;
        g_SoftwareEdgeBuffer[iVar9].base.y_max = iVar6;
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
        g_SoftwareEdgeBuffer[iVar9].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.x_current =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->u - pSVar7->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar9].base.u_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.u_current =
             pSVar7->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->v - pSVar7->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar9].base.v_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.v_current =
             pSVar7->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->r - pSVar7->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar9].base.z_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.z_current =
             pSVar7->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 * (longlong)(pSVar4->a - pSVar7->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar9].base.fog_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.fog_current =
             pSVar7->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar6 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar9].base.w_gradient = uVar5;
        lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
        g_SoftwareEdgeBuffer[iVar9].base.w_current =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
     iVar9 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
    iVar6 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar12 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar12 != iVar6 < 0) {
      if ((edge_ptr->base).y_max <= iVar9) {
        (edge_ptr->base).y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar9,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if ((local_14->base).y_max <= iVar9) {
        (local_14->base).y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar9,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      wincore_windll_cpp_renderScanline_FUN_005b5710(&local_14->base,&edge_ptr->base,iVar9);
      piVar1 = &(edge_ptr->base).x_current;
      *piVar1 = *piVar1 + (edge_ptr->base).x_gradient;
      (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
      (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
      (edge_ptr->base).z_current = (edge_ptr->base).z_current + (edge_ptr->base).z_gradient;
      (edge_ptr->base).w_current = (edge_ptr->base).w_current + (edge_ptr->base).w_gradient;
      (edge_ptr->base).fog_current = (edge_ptr->base).fog_current + (edge_ptr->base).fog_gradient;
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
