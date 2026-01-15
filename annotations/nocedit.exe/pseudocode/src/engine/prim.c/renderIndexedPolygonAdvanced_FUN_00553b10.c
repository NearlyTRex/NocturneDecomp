// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
// Address: 00553b10
// Address Range: [[00553b10, 005542ae]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  SRenderVertex *pSVar9;
  int unaff_ESI;
  int iVar10;
  uint uVar11;
  int iVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *in_stack_ffffff98;
  void *in_stack_ffffff9c;
  int in_stack_ffffffa0;
  int *local_24;
  int local_20;
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
      iVar10 = 0;
      iVar12 = 0;
      piVar8 = vertex_indices;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *piVar8,g_RenderVertexBuffer + piVar8[1],
                             g_RenderVertexBuffer + piVar8[2]);
          if (iVar2 == 0) {
            iVar12 = iVar12 + 1;
          }
          iVar10 = iVar10 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar10 < iVar3);
      }
      if (iVar12 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    switch(g_RenderStateFlag2) {
    case 1:
      iVar3 = 0;
      piVar8 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar8,1);
          piVar8 = piVar8 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar8 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar8,1);
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar8 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(g_RenderVertexBuffer + *piVar8,1);
          piVar8 = piVar8 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar8 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar8,1);
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar8 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar8,1);
          piVar8 = piVar8 + 1;
        } while (iVar3 < vertex_count);
      }
    }
    g_MaxScanline = 0;
    g_ActiveEdgeCount = 0;
    local_1c = 0;
    g_MinScanline = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar3 = g_ActiveEdgeCount;
        iVar10 = local_1c + 1;
        if (vertex_count <= iVar10) {
          iVar10 = 0;
        }
        iVar10 = vertex_indices[iVar10];
        iVar12 = *local_24;
        iVar4 = g_RenderVertexBuffer[iVar10].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar12].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar4) {
          iVar6 = iVar4;
          pSVar9 = g_RenderVertexBuffer + iVar12;
          pSVar13 = g_RenderVertexBuffer + iVar10;
          if (g_RenderVertexBuffer[iVar10].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar12].projected_vertex.screen_y) {
            iVar6 = iVar2;
            iVar2 = iVar4;
            pSVar9 = g_RenderVertexBuffer + iVar10;
            pSVar13 = g_RenderVertexBuffer + iVar12;
          }
          g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar2;
          iVar10 = g_MinScanline;
          g_SoftwareEdgeTable[iVar3].y_max = iVar6;
          if (iVar2 < iVar10) {
            g_MinScanline = iVar2;
          }
          if (g_MaxScanline < iVar6) {
            g_MaxScanline = iVar6;
          }
          uVar7 = (pSVar13->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          uVar11 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar10 *
                  (longlong)
                  ((pSVar13->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].x_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].x_current =
               (pSVar9->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar10 * (longlong)((int)pSVar13->u - (int)pSVar9->u);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].u_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].u_current =
               (int)pSVar9->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar10 * (longlong)((int)pSVar13->v - (int)pSVar9->v);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].v_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].v_current =
               (int)pSVar9->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar10 * (longlong)((int)pSVar13->light - (int)pSVar9->light);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].z_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].z_current =
               (int)pSVar9->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar10 * (longlong)((int)pSVar13->w_recip - (int)pSVar9->w_recip);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].fog_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].fog_current =
               (int)pSVar9->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              local_20 = (pSVar9->projected_vertex).inv_z;
              iVar12 = (pSVar13->projected_vertex).inv_z;
            }
            else {
              local_20 = 0x7fffffff - (pSVar9->projected_vertex).transformed_z;
              iVar12 = 0x7fffffff - (pSVar13->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar10 * (longlong)(iVar12 - local_20);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar7;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
            g_SoftwareEdgeTable[iVar3].w_current =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar10 *
                    (longlong)
                    ((pSVar13->projected_vertex).transformed_z -
                    (pSVar9->projected_vertex).transformed_z);
            uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar7;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
            g_SoftwareEdgeTable[iVar3].w_current =
                 (pSVar9->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar10 * (longlong)(pSVar13->color - pSVar9->color);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].r_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].r_current =
               pSVar9->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar10 * (longlong)((int)pSVar13->fog - (int)pSVar9->fog);
          uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].g_gradient = uVar7;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
          g_SoftwareEdgeTable[iVar3].g_current =
               (int)pSVar9->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    iVar3 = g_MinScanline;
    local_14 = g_SoftwareEdgeTable;
    iVar10 = 0;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == local_14->y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_00553e1f;
        iVar10 = iVar10 + 1;
        local_14 = local_14 + 1;
      } while (iVar10 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00553e1f:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar10 = 0;
      pSVar5 = g_SoftwareEdgeTable;
      if (0 < g_ActiveEdgeCount) {
        do {
          if ((g_MinScanline == pSVar5->y_min) && (pSVar5 != local_14)) goto LAB_00553e5e;
          iVar10 = iVar10 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar10 < g_ActiveEdgeCount);
      }
      pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553e5e:
      if (pSVar5 != (SSoftwareEdge *)0x0) {
        do {
          iVar10 = g_ActiveEdgeCount;
          if (local_14->y_max <= iVar3) {
            local_14->y_min = -1;
            local_14 = g_SoftwareEdgeTable;
            iVar12 = 0;
            if (0 < iVar10) {
              do {
                if ((iVar3 == local_14->y_min) && (local_14 != pSVar5)) goto LAB_00553eb3;
                iVar12 = iVar12 + 1;
                local_14 = local_14 + 1;
              } while (iVar12 < g_ActiveEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_00553eb3:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if (pSVar5->y_max <= iVar3) {
            pSVar5->y_min = -1;
            iVar10 = 0;
            pSVar5 = g_SoftwareEdgeTable;
            if (0 < g_ActiveEdgeCount) {
              do {
                if ((iVar3 == pSVar5->y_min) && (pSVar5 != local_14)) goto LAB_00553f00;
                iVar10 = iVar10 + 1;
                pSVar5 = pSVar5 + 1;
              } while (iVar10 < g_ActiveEdgeCount);
            }
            pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553f00:
            if (pSVar5 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff98,in_stack_ffffff9c,in_stack_ffffffa0);
          *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
          *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
          *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
          *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
          *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0x14);
          *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
          *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x40) + *(int *)(unaff_ESI + 0x44);
          *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_ESI + 0x34);
          pSVar5->x_current = pSVar5->x_current + pSVar5->x_gradient;
          pSVar5->u_current = pSVar5->u_current + pSVar5->u_gradient;
          pSVar5->v_current = pSVar5->v_current + pSVar5->v_gradient;
          pSVar5->w_current = pSVar5->w_current + pSVar5->w_gradient;
          pSVar5->z_current = pSVar5->z_current + pSVar5->z_gradient;
          pSVar5->r_current = pSVar5->r_current + pSVar5->r_gradient;
          pSVar5->g_current = pSVar5->g_current + pSVar5->g_gradient;
          pSVar5->fog_current = pSVar5->fog_current + pSVar5->fog_gradient;
        } while( true );
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar3 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        *(SRenderVertex **)(&stack0xffffff94 + iVar3 * 4) = g_RenderVertexBuffer + iVar10;
      } while (iVar3 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff98,vertex_count,g_RenderStateFlags);
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
  }
  return;
}
