// Name: engine_prim.c_renderPolygonSoftware_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 00552a30]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  SSoftwareEdge *edge_ptr;
  SRenderVertex *pSVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  SRenderVertex *pSVar10;
  bool bVar11;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar3 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar3->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar3->projected_vertex).transformed_z);
        (pSVar3->projected_vertex).screen_x =
             (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar3->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar3->projected_vertex).screen_y =
             (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar3->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar8 = iVar8 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar8 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar10 = vertices + 1;
    pSVar3 = vertices + 2;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar10,pSVar3);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar5 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar10,pSVar3);
          if (iVar2 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar10 = pSVar10 + 1;
          iVar5 = iVar5 + 1;
          pSVar3 = pSVar3 + 1;
        } while (iVar5 < iVar8);
      }
      if (iVar7 == iVar8) {
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
      iVar8 = g_SoftwareEdgeCount;
      iVar5 = local_1c + 1;
      if (vertex_count <= iVar5) {
        iVar5 = 0;
      }
      pSVar3 = vertices + iVar5;
      pSVar10 = vertices + local_1c;
      iVar7 = (pSVar10->projected_vertex).screen_y >> 0x10;
      iVar5 = (pSVar3->projected_vertex).screen_y >> 0x10;
      if (iVar7 != iVar5) {
        iVar2 = iVar7;
        pSVar6 = pSVar10;
        if ((pSVar3->projected_vertex).screen_y < (pSVar10->projected_vertex).screen_y) {
          iVar2 = iVar5;
          pSVar6 = pSVar3;
          iVar5 = iVar7;
          pSVar3 = pSVar10;
        }
        g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar2;
        iVar7 = g_SoftwareMinScanline;
        g_SoftwareEdgeBuffer[iVar8].y_max = iVar5;
        if (iVar2 < iVar7) {
          g_SoftwareMinScanline = iVar2;
        }
        if (g_SoftwareMaxScanline < iVar5) {
          g_SoftwareMaxScanline = iVar5;
        }
        uVar4 = (pSVar3->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar4 < 0x10000) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(0xffffffff / (ulonglong)uVar4);
        }
        uVar9 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar5 *
                (longlong)
                ((pSVar3->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].x_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].x_current =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar5 * (longlong)(pSVar3->u - pSVar6->u);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].u_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].u_current =
             pSVar6->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar5 * (longlong)(pSVar3->v - pSVar6->v);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].v_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].v_current =
             pSVar6->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar5 * (longlong)(pSVar3->light - pSVar6->light);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].z_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].z_current =
             pSVar6->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar5 * (longlong)((int)pSVar3->w_recip - (int)pSVar6->w_recip);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].fog_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].fog_current =
             (int)pSVar6->w_recip + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar5 *
                (longlong)
                ((pSVar3->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar8].w_gradient = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        g_SoftwareEdgeBuffer[iVar8].w_current =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
     iVar8 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
    iVar5 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar11 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar11 != iVar5 < 0) {
      if (edge_ptr->y_max <= iVar8) {
        edge_ptr->y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar8,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if (local_14->y_max <= iVar8) {
        local_14->y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar8,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      wincore_windll_cpp_renderScanline_FUN_005b5710(local_14,edge_ptr,iVar8);
      edge_ptr->x_current = edge_ptr->x_current + edge_ptr->x_gradient;
      edge_ptr->u_current = edge_ptr->u_current + edge_ptr->u_gradient;
      edge_ptr->v_current = edge_ptr->v_current + edge_ptr->v_gradient;
      edge_ptr->z_current = edge_ptr->z_current + edge_ptr->z_gradient;
      edge_ptr->w_current = edge_ptr->w_current + edge_ptr->w_gradient;
      edge_ptr->fog_current = edge_ptr->fog_current + edge_ptr->fog_gradient;
      *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0xc);
      *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c);
      *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24);
      local_1c = local_1c + 1;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x14);
      iVar7 = g_MaxViewportScanline;
      *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
      *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x34);
      iVar5 = local_1c - iVar7;
      bVar11 = SBORROW4(local_1c,iVar7);
    }
  }
  return;
}
