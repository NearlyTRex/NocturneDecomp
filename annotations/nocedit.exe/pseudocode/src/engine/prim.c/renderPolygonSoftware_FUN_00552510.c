// Name: engine_prim.c_renderPolygonSoftware_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 00552a30]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderPolygonSoftware_FUN_00552510(SRenderVertex * vertices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  SRenderVertex *pSVar8;
  void *pvVar9;
  int unaff_ESI;
  int iVar10;
  uint uVar11;
  int unaff_EDI;
  SRenderVertex *pSVar12;
  bool bVar13;
  void *in_stack_ffffffdc;
  void *in_stack_ffffffe0;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar10 = 0, pSVar4 = vertices, 0 < vertex_count)) {
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
      iVar10 = iVar10 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar10 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar12 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar12,pSVar4);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      in_stack_ffffffe0 = (void *)(vertex_count + -2);
      iVar10 = 0;
      pvVar9 = (void *)0x0;
      if (0 < (int)in_stack_ffffffe0) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar12,pSVar4);
          if (iVar2 == 0) {
            pvVar9 = (void *)((int)pvVar9 + 1);
          }
          pSVar12 = pSVar12 + 1;
          iVar10 = iVar10 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar10 < (int)in_stack_ffffffe0);
      }
      if (pvVar9 == in_stack_ffffffe0) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertices,vertex_count,g_RenderStateFlags);
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
  iVar10 = 0;
  g_SoftwareMinScanline = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = g_SoftwareEdgeCount;
      iVar3 = iVar10 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar4 = vertices + iVar3;
      pSVar12 = vertices + iVar10;
      iVar5 = (pSVar12->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar5 != iVar3) {
        iVar6 = iVar5;
        pSVar8 = pSVar12;
        if ((pSVar4->projected_vertex).screen_y < (pSVar12->projected_vertex).screen_y) {
          iVar6 = iVar3;
          pSVar8 = pSVar4;
          iVar3 = iVar5;
          pSVar4 = pSVar12;
        }
        g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar6;
        iVar5 = g_SoftwareMinScanline;
        g_SoftwareEdgeBuffer[iVar2].y_max = iVar3;
        if (iVar6 < iVar5) {
          g_SoftwareMinScanline = iVar6;
        }
        if (g_SoftwareMaxScanline < iVar3) {
          g_SoftwareMaxScanline = iVar3;
        }
        uVar7 = (pSVar4->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar11 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar3 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].x_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar2].x_current =
             (pSVar8->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar4->u - (int)pSVar8->u);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].u_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar2].u_current =
             (int)pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar4->v - (int)pSVar8->v);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].v_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        in_stack_ffffffdc = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeBuffer[iVar2].v_current = (int)pSVar8->v + (int)in_stack_ffffffdc;
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar4->light - (int)pSVar8->light);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].z_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar2].z_current =
             (int)pSVar8->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar4->w_recip - (int)pSVar8->w_recip);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].fog_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar2].fog_current =
             (int)pSVar8->w_recip + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar8->projected_vertex).transformed_z
                );
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar2].w_current =
             (pSVar8->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < vertex_count);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
     iVar2 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
    iVar3 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar13 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar13 != iVar3 < 0) {
      if (edge_ptr->y_max <= iVar2) {
        edge_ptr->y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar2,local_14);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if (local_14->y_max <= iVar2) {
        local_14->y_min = -1;
        local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar2,edge_ptr);
        if (local_14 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffdc,in_stack_ffffffe0,iVar10);
      edge_ptr->x_current = edge_ptr->x_current + edge_ptr->x_gradient;
      edge_ptr->u_current = edge_ptr->u_current + edge_ptr->u_gradient;
      edge_ptr->v_current = edge_ptr->v_current + edge_ptr->v_gradient;
      edge_ptr->z_current = edge_ptr->z_current + edge_ptr->z_gradient;
      edge_ptr->w_current = edge_ptr->w_current + edge_ptr->w_gradient;
      edge_ptr->fog_current = edge_ptr->fog_current + edge_ptr->fog_gradient;
      *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
      *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
      *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
      unaff_EDI = unaff_EDI + 1;
      *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0x14);
      iVar5 = g_MaxViewportScanline;
      *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
      *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_ESI + 0x34);
      iVar3 = unaff_EDI - iVar5;
      bVar13 = SBORROW4(unaff_EDI,iVar5);
    }
  }
  return;
}
