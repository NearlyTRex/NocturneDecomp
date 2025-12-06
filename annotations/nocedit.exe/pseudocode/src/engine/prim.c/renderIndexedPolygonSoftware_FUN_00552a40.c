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
  SSoftwareEdge *edge_ptr_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  uint uVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  bool bVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  void *in_stack_ffffffa8;
  void *in_stack_ffffffac;
  int in_stack_ffffffb0;
  int *local_1c;
  int local_18;
  
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
      iVar8 = 0;
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *vertex_indices,
                             g_RenderVertexBuffer + vertex_indices[1],
                             g_RenderVertexBuffer + vertex_indices[2]);
          if (iVar2 == 0) {
            iVar10 = iVar10 + 1;
          }
          iVar8 = iVar8 + 1;
          vertex_indices = vertex_indices + 1;
        } while (iVar8 < iVar3);
      }
      if (iVar10 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_SoftwareMaxScanline = 0;
    g_SoftwareEdgeCount = 0;
    local_18 = 0;
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    g_SoftwareMinScanline = 0x4b0;
    if (0 < in_stack_0000000c) {
      local_1c = (int *)vertex_count;
      do {
        iVar3 = g_SoftwareEdgeCount;
        iVar8 = local_18 + 1;
        if (in_stack_0000000c <= iVar8) {
          iVar8 = 0;
        }
        iVar10 = *local_1c;
        iVar8 = *(int *)(iVar8 * 4 + vertex_count);
        iVar4 = g_RenderVertexBuffer[iVar10].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar8].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar2) {
          iVar5 = iVar4;
          pSVar7 = g_RenderVertexBuffer + iVar10;
          pSVar11 = g_RenderVertexBuffer + iVar8;
          if (g_RenderVertexBuffer[iVar8].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar10].projected_vertex.screen_y) {
            iVar5 = iVar2;
            pSVar7 = g_RenderVertexBuffer + iVar8;
            iVar2 = iVar4;
            pSVar11 = g_RenderVertexBuffer + iVar10;
          }
          g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar5;
          iVar8 = g_SoftwareMinScanline;
          g_SoftwareEdgeBuffer[iVar3].y_max = iVar2;
          if (iVar5 < iVar8) {
            g_SoftwareMinScanline = iVar5;
          }
          if (g_SoftwareMaxScanline < iVar2) {
            g_SoftwareMaxScanline = iVar2;
          }
          uVar6 = (pSVar11->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar9 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar8 *
                  (longlong)
                  ((pSVar11->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].x_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].x_current =
               (pSVar7->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->u - (int)pSVar7->u);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].u_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].u_current =
               (int)pSVar7->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->v - (int)pSVar7->v);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].v_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].v_current =
               (int)pSVar7->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->light - (int)pSVar7->light);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].z_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].z_current =
               (int)pSVar7->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->w_recip - (int)pSVar7->w_recip);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].fog_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].fog_current =
               (int)pSVar7->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              iVar10 = (pSVar11->projected_vertex).inv_z;
              iVar2 = (pSVar7->projected_vertex).inv_z;
            }
            else {
              iVar2 = 0x7fffffff - (pSVar7->projected_vertex).transformed_z;
              iVar10 = 0x7fffffff - (pSVar11->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar8 * (longlong)(iVar10 - iVar2);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
          else {
            lVar1 = (longlong)iVar8 *
                    (longlong)
                    ((pSVar11->projected_vertex).transformed_z -
                    (pSVar7->projected_vertex).transformed_z);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 (pSVar7->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
        }
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
      } while (local_18 < in_stack_0000000c);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70
                         (g_SoftwareMinScanline,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
       iVar3 = g_SoftwareMinScanline, edge_ptr_00 != (SSoftwareEdge *)0x0)) {
      iVar8 = g_SoftwareMinScanline - g_MaxViewportScanline;
      bVar12 = SBORROW /* signed borrow */4(g_SoftwareMinScanline,g_MaxViewportScanline);
      while (bVar12 != iVar8 < 0) {
        if (edge_ptr->y_max <= iVar3) {
          edge_ptr->y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,edge_ptr_00);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (edge_ptr_00->y_max <= iVar3) {
          edge_ptr_00->y_min = -1;
          edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,edge_ptr);
          if (edge_ptr_00 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0);
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
        *(int *)(in_stack_00000014 + 0x10) =
             *(int *)(in_stack_00000014 + 0x10) + *(int *)(in_stack_00000014 + 0x14);
        *(int *)(in_stack_00000014 + 0x28) =
             *(int *)(in_stack_00000014 + 0x28) + *(int *)(in_stack_00000014 + 0x2c);
        in_stack_00000010 = in_stack_00000010 + 1;
        *(int *)(in_stack_00000014 + 0x30) =
             *(int *)(in_stack_00000014 + 0x30) + *(int *)(in_stack_00000014 + 0x34);
        iVar8 = in_stack_00000010 - g_MaxViewportScanline;
        bVar12 = SBORROW /* signed borrow */4(in_stack_00000010,g_MaxViewportScanline);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar8 = *(int *)vertex_count;
        iVar3 = iVar3 + 1;
        vertex_count = vertex_count + 4;
        *(SRenderVertex **)(&stack0xffffff9c + iVar3 * 4) = g_RenderVertexBuffer + iVar8;
      } while (iVar3 < in_stack_0000000c);
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffffa0,in_stack_0000000c,g_RenderStateFlags);
  }
  return;
}
