// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
// Address: 00552a40
// Address Range: [[00552a40, 00552f62]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int *vertex_indices,int vertex_count)

{
  int *piVar1;
  longlong lVar2;
  int iVar2;
  int iVar3;
  int iVar6;
  int iVar7;
  SSoftwareEdge *edge_ptr;
  uint uVar8;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar10;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar12;
  uint uVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  bool bVar13;
  SRenderVertex *local_64 [16];
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  longlong lVar1;
  
  if (g_CullingMode != 0) {
    if (vertex_count < 4) {
      iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      iVar7 = vertex_count + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar7 = vertex_indices;
      if (0 < iVar7) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *piVar7,g_RenderVertexBuffer + piVar7[1],
                             g_RenderVertexBuffer + piVar7[2]);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < iVar7);
      }
      if (iVar11 == iVar7) {
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
        iVar7 = g_SoftwareEdgeCount;
        iVar6 = local_1c + 1;
        if (vertex_count <= iVar6) {
          iVar6 = 0;
        }
        iVar10 = *local_20;
        iVar6 = vertex_indices[iVar6];
        iVar4 = g_RenderVertexBuffer[iVar10].projected_vertex.screen_y >> 0x10;
        iVar12 = g_RenderVertexBuffer[iVar6].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar12) {
          iVar5 = iVar4;
          pSVar8 = g_RenderVertexBuffer + iVar10;
          pSVar12 = g_RenderVertexBuffer + iVar6;
          if (g_RenderVertexBuffer[iVar6].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar10].projected_vertex.screen_y) {
            iVar5 = iVar12;
            pSVar8 = g_RenderVertexBuffer + iVar6;
            iVar12 = iVar4;
            pSVar12 = g_RenderVertexBuffer + iVar10;
          }
          g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].base.y_min = iVar5;
          iVar6 = g_SoftwareMinScanline;
          g_SoftwareEdgeBuffer[iVar7].base.y_max = iVar12;
          if (iVar5 < iVar6) {
            g_SoftwareMinScanline = iVar5;
          }
          if (g_SoftwareMaxScanline < iVar12) {
            g_SoftwareMaxScanline = iVar12;
          }
          uVar6 = (pSVar12->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar10._0_2_ = (ushort)(pSVar8->projected_vertex).screen_y;
          uVar10._0_2_ = (ushort)uVar10 ^ 0xffff;
          uVar10 = (uint)(ushort)uVar10;
          lVar1 = (longlong)iVar6 *
                  (longlong)
                  ((pSVar12->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar7].base.x_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeBuffer[iVar7].base.x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->u - pSVar8->u);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar7].base.u_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeBuffer[iVar7].base.u_current =
               pSVar8->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->v - pSVar8->v);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar7].base.v_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeBuffer[iVar7].base.v_current =
               pSVar8->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->r - pSVar8->r);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar7].base.z_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeBuffer[iVar7].base.z_current =
               pSVar8->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->a - pSVar8->a);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar7].base.fog_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeBuffer[iVar7].base.fog_current =
               pSVar8->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              iVar10 = (pSVar12->projected_vertex).inv_z;
              iVar12 = (pSVar8->projected_vertex).inv_z;
            }
            else {
              iVar12 = 0x7fffffff - (pSVar8->projected_vertex).transformed_z;
              iVar10 = 0x7fffffff - (pSVar12->projected_vertex).transformed_z;
            }
            lVar2 = (longlong)iVar6 * (longlong)(iVar10 - iVar12);
            uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar7].base.w_gradient = uVar8;
            lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_SoftwareEdgeBuffer[iVar7].base.w_current =
                 iVar12 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
          else {
            lVar2 = (longlong)iVar6 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar7].base.w_gradient = uVar8;
            lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_SoftwareEdgeBuffer[iVar7].base.w_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
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
       iVar7 = g_SoftwareMinScanline, local_14 != (SSoftwareEdge *)0x0)) {
      iVar6 = g_SoftwareMinScanline - g_MaxViewportScanline;
      bVar13 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
      while (bVar13 != iVar6 < 0) {
        if ((edge_ptr->base).y_max <= iVar7) {
          (edge_ptr->base).y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar7,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_14->base).y_max <= iVar7) {
          (local_14->base).y_min = -1;
          local_14 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar7,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        local_64[0] = (SRenderVertex *)0x552cbb;
        wincore_windll_cpp_renderScanline_FUN_005b5710(&local_14->base,&edge_ptr->base,iVar7);
        piVar1 = &(edge_ptr->base).x_current;
        *piVar1 = *piVar1 + (edge_ptr->base).x_gradient;
        (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
        (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
        (edge_ptr->base).z_current = (edge_ptr->base).z_current + (edge_ptr->base).z_gradient;
        (edge_ptr->base).w_current = (edge_ptr->base).w_current + (edge_ptr->base).w_gradient;
        (edge_ptr->base).fog_current = (edge_ptr->base).fog_current + (edge_ptr->base).fog_gradient;
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
        *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + *(int *)(iVar7 + 0x2c);
        local_1c = local_1c + 1;
        *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x34);
        iVar6 = local_1c - g_MaxViewportScanline;
        bVar13 = SBORROW4(local_1c,g_MaxViewportScanline);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar7 = *vertex_indices;
        iVar6 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        local_64[iVar3] = g_RenderVertexBuffer + iVar7;
        iVar3 = iVar6;
      } while (iVar6 < vertex_count);
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_64,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
