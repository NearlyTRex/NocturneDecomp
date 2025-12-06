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
  SSoftwareEdge *edge_ptr_00;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  uint uVar11;
  SRenderVertex *v1;
  bool bVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_ffffffe4;
  void *left_data;
  void *in_stack_ffffffec;
  
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
    v1 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,v1,pSVar4);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      iVar10 = 0;
      iVar9 = 0;
      if (0 < vertex_count + -2) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            ((SRenderVertex *)vertex_count,v1,pSVar4);
          if (iVar2 == 0) {
            iVar9 = iVar9 + 1;
          }
          v1 = v1 + 1;
          iVar10 = iVar10 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar10 < in_stack_ffffffe4);
      }
      if (iVar9 == in_stack_ffffffe4) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,in_stack_0000000c,g_RenderStateFlags);
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110((SRenderVertex *)vertex_count,in_stack_0000000c);
  }
  g_SoftwareMaxScanline = 0;
  g_SoftwareEdgeCount = 0;
  left_data = (void *)0x0;
  g_SoftwareMinScanline = 0x4b0;
  if (0 < in_stack_0000000c) {
    do {
      iVar10 = g_SoftwareEdgeCount;
      iVar9 = (int)left_data + 1;
      if (in_stack_0000000c <= iVar9) {
        iVar9 = 0;
      }
      iVar2 = vertex_count + iVar9 * 0x30;
      iVar3 = (int)left_data * 0x30 + vertex_count;
      iVar5 = *(int *)(iVar3 + 0x14) >> 0x10;
      iVar9 = *(int *)(iVar2 + 0x14) >> 0x10;
      if (iVar5 != iVar9) {
        iVar6 = iVar5;
        iVar8 = iVar3;
        if (*(int *)(iVar2 + 0x14) < *(int *)(iVar3 + 0x14)) {
          iVar6 = iVar9;
          iVar8 = iVar2;
          iVar9 = iVar5;
          iVar2 = iVar3;
        }
        g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar6;
        iVar3 = g_SoftwareMinScanline;
        g_SoftwareEdgeBuffer[iVar10].y_max = iVar9;
        if (iVar6 < iVar3) {
          g_SoftwareMinScanline = iVar6;
        }
        if (g_SoftwareMaxScanline < iVar9) {
          g_SoftwareMaxScanline = iVar9;
        }
        uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar8 + 0x14);
        if (uVar7 < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar11 = (uint)(ushort)((ushort)*(uint *)(iVar8 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar8 + 0x10));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].x_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].x_current =
             *(int *)(iVar8 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar8 + 0x18));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].u_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].u_current =
             *(int *)(iVar8 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar8 + 0x1c));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].v_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].v_current =
             *(int *)(iVar8 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x20) - *(int *)(iVar8 + 0x20));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].z_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].z_current =
             *(int *)(iVar8 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x2c) - *(int *)(iVar8 + 0x2c));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].fog_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].fog_current =
             *(int *)(iVar8 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar8 + 8));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].w_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].w_current =
             *(int *)(iVar8 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      left_data = (void *)((int)left_data + 1);
    } while ((int)left_data < in_stack_0000000c);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
     iVar10 = g_SoftwareMinScanline, edge_ptr_00 != (SSoftwareEdge *)0x0)) {
    iVar9 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar12 = SBORROW /* signed borrow */4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar12 != iVar9 < 0) {
      if (edge_ptr->y_max <= iVar10) {
        edge_ptr->y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar10,edge_ptr_00);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if (edge_ptr_00->y_max <= iVar10) {
        edge_ptr_00->y_min = -1;
        edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar10,edge_ptr);
        if (edge_ptr_00 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      wincore_windll_cpp_renderScanline_FUN_005b5710(left_data,in_stack_ffffffec,unaff_EBP);
      edge_ptr->x_current = edge_ptr->x_current + edge_ptr->x_gradient;
      edge_ptr->u_current = edge_ptr->u_current + edge_ptr->u_gradient;
      edge_ptr->v_current = edge_ptr->v_current + edge_ptr->v_gradient;
      edge_ptr->z_current = edge_ptr->z_current + edge_ptr->z_gradient;
      edge_ptr->w_current = edge_ptr->w_current + edge_ptr->w_gradient;
      edge_ptr->fog_current = edge_ptr->fog_current + edge_ptr->fog_gradient;
      *(int *)(in_stack_00000014 + 8) =
           *(int *)(in_stack_00000014 + 8) + *(int *)(in_stack_00000014 + 0xc);
      *(int *)(in_stack_00000014 + 0x18) =
           *(int *)(in_stack_00000014 + 0x18) + *(int *)(in_stack_00000014 + 0x1c);
      *(int *)(in_stack_00000014 + 0x20) =
           *(int *)(in_stack_00000014 + 0x20) + *(int *)(in_stack_00000014 + 0x24);
      in_stack_00000010 = in_stack_00000010 + 1;
      *(int *)(in_stack_00000014 + 0x10) =
           *(int *)(in_stack_00000014 + 0x10) + *(int *)(in_stack_00000014 + 0x14);
      iVar2 = g_MaxViewportScanline;
      *(int *)(in_stack_00000014 + 0x28) =
           *(int *)(in_stack_00000014 + 0x28) + *(int *)(in_stack_00000014 + 0x2c);
      *(int *)(in_stack_00000014 + 0x30) =
           *(int *)(in_stack_00000014 + 0x30) + *(int *)(in_stack_00000014 + 0x34);
      iVar9 = in_stack_00000010 - iVar2;
      bVar12 = SBORROW /* signed borrow */4(in_stack_00000010,iVar2);
    }
  }
  return;
}
