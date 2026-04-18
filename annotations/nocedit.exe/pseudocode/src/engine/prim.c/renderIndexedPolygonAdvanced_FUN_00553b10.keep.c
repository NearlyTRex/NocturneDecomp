// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
// Address: 00553b10
// MANUAL RECONSTRUCTION
// Address Range: [[00553b10, 005542ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int *vertex_indices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar2;
  int iVar3;
  int iVar6;
  int iVar7;
  int iVar4;
  SSoftwareEdge *left;
  int iVar5;
  uint uVar8;
  uint uVar6;
  int iVar10;
  int iVar12;
  int *piVar13;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *local_68 [16];
  uint local_28;
  int *local_24;
  int local_20;
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
      piVar13 = vertex_indices;
      if (0 < iVar7) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *piVar13,g_RenderVertexBuffer + piVar13[1],
                             g_RenderVertexBuffer + piVar13[2]);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar9 < iVar7);
      }
      if (iVar11 == iVar7) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    switch(g_VertexPreprocessMode) {
    case 1:
      iVar7 = 0;
      piVar13 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar7 = iVar7 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar13,1);
          piVar13 = piVar13 + 1;
        } while (iVar7 < vertex_count);
      }
      break;
    case 2:
      iVar7 = 0;
      piVar13 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar13,1);
          iVar7 = iVar7 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar7 < vertex_count);
      }
      break;
    case 3:
      iVar7 = 0;
      piVar13 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar7 = iVar7 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(g_RenderVertexBuffer + *piVar13,1)
          ;
          piVar13 = piVar13 + 1;
        } while (iVar7 < vertex_count);
      }
      break;
    case 5:
      iVar7 = 0;
      piVar13 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar13,1);
          iVar7 = iVar7 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar7 < vertex_count);
      }
      break;
    case 6:
      iVar7 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar6 = *piVar7;
          piVar7 = piVar7 + 1;
          iVar7 = iVar7 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + iVar6,1);
        } while (iVar7 < vertex_count);
      }
    }
    g_MaxScanline = 0;
    g_ActiveEdgeCount = 0;
    local_1c = 0;
    g_MinScanline = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar7 = g_ActiveEdgeCount;
        iVar6 = local_1c + 1;
        if (vertex_count <= iVar6) {
          iVar6 = 0;
        }
        iVar6 = vertex_indices[iVar6];
        iVar12 = *local_24;
        iVar4 = g_RenderVertexBuffer[iVar6].projected_vertex.screen_y >> 0x10;
        iVar10 = g_RenderVertexBuffer[iVar12].projected_vertex.screen_y >> 0x10;
        if (iVar10 != iVar4) {
          iVar5 = iVar4;
          pSVar8 = g_RenderVertexBuffer + iVar12;
          pSVar12 = g_RenderVertexBuffer + iVar6;
          if (g_RenderVertexBuffer[iVar6].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar12].projected_vertex.screen_y) {
            iVar5 = iVar10;
            iVar10 = iVar4;
            pSVar8 = g_RenderVertexBuffer + iVar6;
            pSVar12 = g_RenderVertexBuffer + iVar12;
          }
          g_SoftwareEdgeTable[g_ActiveEdgeCount].base.y_min = iVar10;
          iVar6 = g_MinScanline;
          g_SoftwareEdgeTable[iVar7].base.y_max = iVar5;
          if (iVar10 < iVar6) {
            g_MinScanline = iVar10;
          }
          if (g_MaxScanline < iVar5) {
            g_MaxScanline = iVar5;
          }
          uVar6 = (pSVar12->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar6 *
                  (longlong)
                  ((pSVar12->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].base.x_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].base.x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->u - pSVar8->u);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].base.u_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].base.u_current =
               pSVar8->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->v - pSVar8->v);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].base.v_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].base.v_current =
               pSVar8->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->r - pSVar8->r);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].base.red_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].base.red_current =
               pSVar8->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->a - pSVar8->a);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].base.alpha_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].base.alpha_current =
               pSVar8->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          if (g_VertexPreprocessMode == 1) {
            if (g_ProcessorType == 0) {
              local_20 = (pSVar8->projected_vertex).inv_z;
              iVar12 = (pSVar12->projected_vertex).inv_z;
            }
            else {
              local_20 = 0x7fffffff - (pSVar8->projected_vertex).transformed_z;
              iVar12 = 0x7fffffff - (pSVar12->projected_vertex).transformed_z;
            }
            lVar2 = (longlong)iVar6 * (longlong)(iVar12 - local_20);
            uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar7].base.depth_gradient = uVar8;
            lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar7].base.depth_current =
                 local_20 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          }
          else {
            lVar2 = (longlong)iVar6 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar7].base.depth_gradient = uVar8;
            lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar7].base.depth_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          }
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->g - pSVar8->g);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].green_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].green_current =
               pSVar8->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)iVar6 * (longlong)(pSVar12->b - pSVar8->b);
          uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar7].blue_gradient = uVar8;
          lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar7].blue_current =
               pSVar8->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    iVar7 = g_MinScanline;
    local_14 = g_SoftwareEdgeTable;
    iVar6 = 0;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_00553e1f;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
      } while (iVar6 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00553e1f:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar6 = 0;
      left = g_SoftwareEdgeTable;
      if (0 < g_ActiveEdgeCount) {
        do {
          if ((g_MinScanline == (left->base).y_min) && (left != local_14)) goto LAB_00553e5e;
          iVar6 = iVar6 + 1;
          left = left + 1;
        } while (iVar6 < g_ActiveEdgeCount);
      }
      left = (SSoftwareEdge *)0x0;
LAB_00553e5e:
      if (left != (SSoftwareEdge *)0x0) {
        do {
          iVar6 = g_ActiveEdgeCount;
          if ((local_14->base).y_max <= iVar7) {
            (local_14->base).y_min = -1;
            local_14 = g_SoftwareEdgeTable;
            iVar12 = 0;
            if (0 < iVar6) {
              do {
                if ((iVar7 == (local_14->base).y_min) && (local_14 != left)) goto LAB_00553eb3;
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
          if ((left->base).y_max <= iVar7) {
            (left->base).y_min = -1;
            iVar6 = 0;
            left = g_SoftwareEdgeTable;
            if (0 < g_ActiveEdgeCount) {
              do {
                if ((iVar7 == (left->base).y_min) && (left != local_14)) goto LAB_00553f00;
                iVar6 = iVar6 + 1;
                left = left + 1;
              } while (iVar6 < g_ActiveEdgeCount);
            }
            left = (SSoftwareEdge *)0x0;
LAB_00553f00:
            if (left == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_68[0] = (SRenderVertex *)0x553f19;
          wincore_windll_cpp_renderScanline_FUN_005b5710(&left->base,&local_14->base,iVar7);
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
          *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
          *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
          *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + *(int *)(iVar7 + 0x2c);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14);
          *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + *(int *)(iVar7 + 0x3c);
          *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + *(int *)(iVar7 + 0x44);
          *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x34);
          (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
          (left->base).u_current = (left->base).u_current + (left->base).u_gradient;
          (left->base).v_current = (left->base).v_current + (left->base).v_gradient;
          iVar6 = left->green_current;
          iVar12 = left->blue_current;
          iVar10 = (left->base).alpha_current;
          (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
          iVar1 = left->green_gradient;
          (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
          left->green_current = iVar6 + iVar1;
          iVar6 = (left->base).alpha_gradient;
          left->blue_current = iVar12 + left->blue_gradient;
          (left->base).alpha_current = iVar10 + iVar6;
        } while( true );
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
        local_68[iVar3] = g_RenderVertexBuffer + iVar7;
        iVar3 = iVar6;
      } while (iVar6 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610(local_68,vertex_count,g_RenderStateFlags.dword);
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
  }
  return;
}
