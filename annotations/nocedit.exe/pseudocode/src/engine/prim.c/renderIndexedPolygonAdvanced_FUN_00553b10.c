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
  SSoftwareEdge *pSVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  SRenderVertex *pSVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  uint uVar12;
  int iVar13;
  SRenderVertex *pSVar14;
  int in_stack_0000000c;
  int in_stack_00000010;
  SRenderVertex *in_stack_ffffff9c;
  void *in_stack_ffffffa0;
  int in_stack_ffffffa4;
  int *local_20;
  int local_1c;
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
      iVar11 = 0;
      iVar13 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *vertex_indices,
                             g_RenderVertexBuffer + vertex_indices[1],
                             g_RenderVertexBuffer + vertex_indices[2]);
          if (iVar2 == 0) {
            iVar13 = iVar13 + 1;
          }
          iVar11 = iVar11 + 1;
          vertex_indices = vertex_indices + 1;
        } while (iVar11 < iVar3);
      }
      if (iVar13 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    switch(g_RenderStateFlag2) {
    case 1:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar9,1);
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar9,1);
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
    }
    g_MaxScanline = 0;
    g_ActiveEdgeCount = 0;
    local_18 = 0;
    g_MinScanline = 0x4b0;
    if (0 < in_stack_0000000c) {
      local_20 = (int *)vertex_count;
      do {
        iVar3 = g_ActiveEdgeCount;
        iVar11 = local_18 + 1;
        if (in_stack_0000000c <= iVar11) {
          iVar11 = 0;
        }
        iVar11 = *(int *)(iVar11 * 4 + vertex_count);
        iVar13 = *local_20;
        iVar4 = g_RenderVertexBuffer[iVar11].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar13].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar4) {
          iVar7 = iVar4;
          pSVar10 = g_RenderVertexBuffer + iVar13;
          pSVar14 = g_RenderVertexBuffer + iVar11;
          if (g_RenderVertexBuffer[iVar11].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar13].projected_vertex.screen_y) {
            iVar7 = iVar2;
            iVar2 = iVar4;
            pSVar10 = g_RenderVertexBuffer + iVar11;
            pSVar14 = g_RenderVertexBuffer + iVar13;
          }
          g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar2;
          iVar11 = g_MinScanline;
          g_SoftwareEdgeTable[iVar3].y_max = iVar7;
          if (iVar2 < iVar11) {
            g_MinScanline = iVar2;
          }
          if (g_MaxScanline < iVar7) {
            g_MaxScanline = iVar7;
          }
          uVar8 = (pSVar14->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar8 < 0x10000) {
            iVar11 = 0;
          }
          else {
            iVar11 = (int)(0xffffffff / (ulonglong)uVar8);
          }
          uVar12 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar11 *
                  (longlong)
                  ((pSVar14->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].x_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->u - (int)pSVar10->u);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].u_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].u_current =
               (int)pSVar10->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->v - (int)pSVar10->v);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].v_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].v_current =
               (int)pSVar10->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->light - (int)pSVar10->light);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].z_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].z_current =
               (int)pSVar10->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
          ;
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->w_recip - (int)pSVar10->w_recip);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].fog_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].fog_current =
               (int)pSVar10->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              local_1c = (pSVar10->projected_vertex).inv_z;
              iVar13 = (pSVar14->projected_vertex).inv_z;
            }
            else {
              local_1c = 0x7fffffff - (pSVar10->projected_vertex).transformed_z;
              iVar13 = 0x7fffffff - (pSVar14->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar11 * (longlong)(iVar13 - local_1c);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar8;
            lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar3].w_current =
                 local_1c + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar11 *
                    (longlong)
                    ((pSVar14->projected_vertex).transformed_z -
                    (pSVar10->projected_vertex).transformed_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar8;
            lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar3].w_current =
                 (pSVar10->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar11 * (longlong)(pSVar14->color - pSVar10->color);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].r_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].r_current =
               pSVar10->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->fog - (int)pSVar10->fog);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].g_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].g_current =
               (int)pSVar10->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
        }
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < in_stack_0000000c);
    }
    iVar3 = g_MinScanline;
    pSVar5 = g_SoftwareEdgeTable;
    iVar11 = 0;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == pSVar5->y_min) && (pSVar5 != (SSoftwareEdge *)0x0)) goto LAB_00553e1f;
        iVar11 = iVar11 + 1;
        pSVar5 = pSVar5 + 1;
      } while (iVar11 < g_ActiveEdgeCount);
    }
    pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553e1f:
    if (pSVar5 != (SSoftwareEdge *)0x0) {
      iVar11 = 0;
      pSVar6 = g_SoftwareEdgeTable;
      if (0 < g_ActiveEdgeCount) {
        do {
          if ((g_MinScanline == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_00553e5e;
          iVar11 = iVar11 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar11 < g_ActiveEdgeCount);
      }
      pSVar6 = (SSoftwareEdge *)0x0;
LAB_00553e5e:
      if (pSVar6 != (SSoftwareEdge *)0x0) {
        do {
          iVar11 = g_ActiveEdgeCount;
          if (pSVar5->y_max <= iVar3) {
            pSVar5->y_min = -1;
            pSVar5 = g_SoftwareEdgeTable;
            iVar13 = 0;
            if (0 < iVar11) {
              do {
                if ((iVar3 == pSVar5->y_min) && (pSVar5 != pSVar6)) goto LAB_00553eb3;
                iVar13 = iVar13 + 1;
                pSVar5 = pSVar5 + 1;
              } while (iVar13 < g_ActiveEdgeCount);
            }
            pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553eb3:
            if (pSVar5 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if (pSVar6->y_max <= iVar3) {
            pSVar6->y_min = -1;
            iVar11 = 0;
            pSVar6 = g_SoftwareEdgeTable;
            if (0 < g_ActiveEdgeCount) {
              do {
                if ((iVar3 == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_00553f00;
                iVar11 = iVar11 + 1;
                pSVar6 = pSVar6 + 1;
              } while (iVar11 < g_ActiveEdgeCount);
            }
            pSVar6 = (SSoftwareEdge *)0x0;
LAB_00553f00:
            if (pSVar6 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4);
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x18) =
               *(int *)(in_stack_0000000c + 0x18) + *(int *)(in_stack_0000000c + 0x1c);
          *(int *)(in_stack_0000000c + 0x20) =
               *(int *)(in_stack_0000000c + 0x20) + *(int *)(in_stack_0000000c + 0x24);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(in_stack_0000000c + 0x10) =
               *(int *)(in_stack_0000000c + 0x10) + *(int *)(in_stack_0000000c + 0x14);
          *(int *)(in_stack_0000000c + 0x38) =
               *(int *)(in_stack_0000000c + 0x38) + *(int *)(in_stack_0000000c + 0x3c);
          *(int *)(in_stack_0000000c + 0x40) =
               *(int *)(in_stack_0000000c + 0x40) + *(int *)(in_stack_0000000c + 0x44);
          *(int *)(in_stack_0000000c + 0x30) =
               *(int *)(in_stack_0000000c + 0x30) + *(int *)(in_stack_0000000c + 0x34);
          pSVar6->x_current = pSVar6->x_current + pSVar6->x_gradient;
          pSVar6->u_current = pSVar6->u_current + pSVar6->u_gradient;
          pSVar6->v_current = pSVar6->v_current + pSVar6->v_gradient;
          pSVar6->w_current = pSVar6->w_current + pSVar6->w_gradient;
          pSVar6->z_current = pSVar6->z_current + pSVar6->z_gradient;
          pSVar6->r_current = pSVar6->r_current + pSVar6->r_gradient;
          pSVar6->g_current = pSVar6->g_current + pSVar6->g_gradient;
          pSVar6->fog_current = pSVar6->fog_current + pSVar6->fog_gradient;
        } while( true );
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar11 = *(int *)vertex_count;
        iVar3 = iVar3 + 1;
        vertex_count = vertex_count + 4;
        *(SRenderVertex **)(&stack0xffffff98 + iVar3 * 4) = g_RenderVertexBuffer + iVar11;
      } while (iVar3 < in_stack_0000000c);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff9c,in_stack_0000000c,g_RenderStateFlags);
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_00000010 + -2;
  }
  return;
}
