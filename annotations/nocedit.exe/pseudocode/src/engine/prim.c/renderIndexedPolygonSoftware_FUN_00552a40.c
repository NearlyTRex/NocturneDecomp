// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
// Address: 00552a40
// Address Range: [[00552a40, 00552f62]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  int unaff_ESI;
  int iVar9;
  uint uVar10;
  int unaff_EDI;
  int iVar11;
  SRenderVertex *pSVar12;
  bool bVar13;
  SRenderVertex *in_stack_ffffff9c;
  void *in_stack_ffffffa0;
  int in_stack_ffffffa4;
  int *local_20;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if (g_CullingMode != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = vertex_count + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar7 = vertex_indices;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *piVar7,g_RenderVertexBuffer + piVar7[1],
                             g_RenderVertexBuffer + piVar7[2]);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < iVar3);
      }
      if (iVar11 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_SoftwareMaxScanline = 0;
    g_SoftwareEdgeCount = 0;
    local_1c = 0;
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    g_SoftwareMinScanline = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = g_SoftwareEdgeCount;
        iVar9 = local_1c + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar11 = *local_20;
        iVar9 = vertex_indices[iVar9];
        iVar4 = g_RenderVertexBuffer[iVar11].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar9].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar2) {
          iVar5 = iVar4;
          pSVar8 = g_RenderVertexBuffer + iVar11;
          pSVar12 = g_RenderVertexBuffer + iVar9;
          if (g_RenderVertexBuffer[iVar9].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar11].projected_vertex.screen_y) {
            iVar5 = iVar2;
            pSVar8 = g_RenderVertexBuffer + iVar9;
            iVar2 = iVar4;
            pSVar12 = g_RenderVertexBuffer + iVar11;
          }
          g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar5;
          iVar9 = g_SoftwareMinScanline;
          g_SoftwareEdgeBuffer[iVar3].y_max = iVar2;
          if (iVar5 < iVar9) {
            g_SoftwareMinScanline = iVar5;
          }
          if (g_SoftwareMaxScanline < iVar2) {
            g_SoftwareMaxScanline = iVar2;
          }
          uVar6 = (pSVar12->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar9 *
                  (longlong)
                  ((pSVar12->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].x_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)((int)pSVar12->u - (int)pSVar8->u);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].u_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].u_current =
               (int)pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)((int)pSVar12->v - (int)pSVar8->v);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].v_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].v_current =
               (int)pSVar8->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)((int)pSVar12->light - (int)pSVar8->light);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].z_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].z_current =
               (int)pSVar8->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)((int)pSVar12->w_recip - (int)pSVar8->w_recip);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].fog_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].fog_current =
               (int)pSVar8->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              iVar11 = (pSVar12->projected_vertex).inv_z;
              iVar2 = (pSVar8->projected_vertex).inv_z;
            }
            else {
              iVar2 = 0x7fffffff - (pSVar8->projected_vertex).transformed_z;
              iVar11 = 0x7fffffff - (pSVar12->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar9 * (longlong)(iVar11 - iVar2);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
          else {
            lVar1 = (longlong)iVar9 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70
                         (g_SoftwareMinScanline,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
       iVar3 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
      iVar9 = g_SoftwareMinScanline - g_MaxViewportScanline;
      bVar13 = SBORROW /* signed borrow */4(g_SoftwareMinScanline,g_MaxViewportScanline);
      while (bVar13 != iVar9 < 0) {
        if (edge_ptr->y_max <= iVar3) {
          edge_ptr->y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (local_14->y_max <= iVar3) {
          local_14->y_min = -1;
          local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4);
        edge_ptr->x_current = edge_ptr->x_current + edge_ptr->x_gradient;
        edge_ptr->u_current = edge_ptr->u_current + edge_ptr->u_gradient;
        edge_ptr->v_current = edge_ptr->v_current + edge_ptr->v_gradient;
        edge_ptr->z_current = edge_ptr->z_current + edge_ptr->z_gradient;
        edge_ptr->w_current = edge_ptr->w_current + edge_ptr->w_gradient;
        edge_ptr->fog_current = edge_ptr->fog_current + edge_ptr->fog_gradient;
        *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
        *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
        *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0x14);
        *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
        unaff_EDI = unaff_EDI + 1;
        *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_ESI + 0x34);
        iVar9 = unaff_EDI - g_MaxViewportScanline;
        bVar13 = SBORROW /* signed borrow */4(unaff_EDI,g_MaxViewportScanline);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar3 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        *(SRenderVertex **)(&stack0xffffff98 + iVar3 * 4) = g_RenderVertexBuffer + iVar9;
      } while (iVar3 < vertex_count);
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff9c,vertex_count,g_RenderStateFlags);
  }
  return;
}
