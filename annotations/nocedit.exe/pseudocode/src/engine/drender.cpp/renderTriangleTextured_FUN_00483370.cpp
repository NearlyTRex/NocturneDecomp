// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SEdgeData *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar10;
  uint uVar11;
  int in_stack_0000000c;
  SRenderVertex *in_stack_ffffff98;
  void *in_stack_ffffff9c;
  int in_stack_ffffffa0;
  uint local_28;
  int *local_24;
  int local_20;
  SRenderVertex *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar8 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    iVar8 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_20 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar8;
    if (0 < in_stack_0000000c) {
      local_24 = (int *)vertex_count;
      do {
        iVar2 = local_20 + 1;
        if (in_stack_0000000c <= iVar2) {
          iVar2 = 0;
        }
        iVar2 = *(int *)(iVar2 * 4 + vertex_count);
        iVar6 = *local_24;
        iVar7 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_y >> 0x10;
        iVar3 = g_RenderVertexBuffer[iVar6].projected_vertex.screen_y >> 0x10;
        if (iVar3 != iVar7) {
          iVar5 = iVar3;
          pSVar10 = g_RenderVertexBuffer + iVar6;
          local_18 = g_RenderVertexBuffer + iVar2;
          if (g_RenderVertexBuffer[iVar2].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar6].projected_vertex.screen_y) {
            iVar5 = iVar7;
            iVar7 = iVar3;
            pSVar10 = g_RenderVertexBuffer + iVar2;
            local_18 = g_RenderVertexBuffer + iVar6;
          }
          g_EdgeInterpolationArray[iVar8].y_start = iVar5;
          iVar2 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar8].y_end = iVar7;
          if (iVar5 < iVar2) {
            g_RenderTriangleMinScanlineY = iVar5;
          }
          if (g_RenderTriangleMaxScanlineY < iVar7) {
            g_RenderTriangleMaxScanlineY = iVar7;
          }
          uVar9 = (local_18->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar9 < 0x10000) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)(0xffffffff / (ulonglong)uVar9);
          }
          uVar11 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar2 *
                  (longlong)
                  ((local_18->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar8;
          g_EdgeInterpolationArray[iVar8].x_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->u - (int)pSVar10->u);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].u_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].u_current =
               (int)pSVar10->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->v - (int)pSVar10->v);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].v_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].v_current =
               (int)pSVar10->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->light - (int)pSVar10->light);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].light_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].light_current =
               (int)pSVar10->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
          ;
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->w_recip - (int)pSVar10->w_recip);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].w_recip_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].w_recip_current =
               (int)pSVar10->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_18->projected_vertex).inv_z - (pSVar10->projected_vertex).inv_z);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = (pSVar10->projected_vertex).inv_z;
          }
          else {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_18->projected_vertex).transformed_z -
                    (pSVar10->projected_vertex).transformed_z);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = (pSVar10->projected_vertex).transformed_z;
          }
          g_EdgeInterpolationArray[iVar8].z_current = iVar6 + local_28;
          if ((g_RenderStateFlags & 0x200U) != 0) {
            lVar1 = (longlong)iVar2 * (longlong)(local_18->color - pSVar10->color);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].color_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            g_EdgeInterpolationArray[iVar8].color_current =
                 pSVar10->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            lVar1 = (longlong)iVar2 * (longlong)((int)local_18->fog - (int)pSVar10->fog);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].fog_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            g_EdgeInterpolationArray[iVar8].fog_current =
                 (int)pSVar10->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
            ;
          }
          iVar8 = g_RenderTriangleEdgeCount + 1;
        }
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
        g_RenderTriangleEdgeCount = iVar8;
      } while (local_20 < in_stack_0000000c);
    }
    iVar8 = g_RenderTriangleMinScanlineY;
    local_14 = g_EdgeInterpolationArray;
    iVar2 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != (SEdgeData *)0x0))
        goto LAB_00483524;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 1;
      } while (iVar2 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_00483524:
    if (local_14 != (SEdgeData *)0x0) {
      pSVar4 = g_EdgeInterpolationArray;
      iVar2 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == pSVar4->y_start) && (pSVar4 != local_14))
          goto LAB_0048355b;
          iVar2 = iVar2 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar2 < g_RenderTriangleEdgeCount);
      }
      pSVar4 = (SEdgeData *)0x0;
LAB_0048355b:
      if (pSVar4 != (SEdgeData *)0x0) {
        do {
          if (local_14->y_end <= iVar8) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar8 == local_14->y_start) && (local_14 != pSVar4)) goto LAB_004835b6;
                iVar2 = iVar2 + 1;
                local_14 = local_14 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_004835b6:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (pSVar4->y_end <= iVar8) {
            pSVar4->y_start = -1;
            pSVar4 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar8 == pSVar4->y_start) && (pSVar4 != local_14)) goto LAB_00483606;
                iVar2 = iVar2 + 1;
                pSVar4 = pSVar4 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            pSVar4 = (SEdgeData *)0x0;
LAB_00483606:
            if (pSVar4 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff98,in_stack_ffffff9c,in_stack_ffffffa0);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
          *(int *)(vertex_count + 0x18) =
               *(int *)(vertex_count + 0x18) + *(int *)(vertex_count + 0x1c);
          *(int *)(vertex_count + 0x20) =
               *(int *)(vertex_count + 0x20) + *(int *)(vertex_count + 0x24);
          *(int *)(vertex_count + 0x10) =
               *(int *)(vertex_count + 0x10) + *(int *)(vertex_count + 0x14);
          *(int *)(vertex_count + 0x28) =
               *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
          *(int *)(vertex_count + 0x30) =
               *(int *)(vertex_count + 0x30) + *(int *)(vertex_count + 0x34);
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x18) =
               *(int *)(in_stack_0000000c + 0x18) + *(int *)(in_stack_0000000c + 0x1c);
          *(int *)(in_stack_0000000c + 0x20) =
               *(int *)(in_stack_0000000c + 0x20) + *(int *)(in_stack_0000000c + 0x24);
          *(int *)(in_stack_0000000c + 0x10) =
               *(int *)(in_stack_0000000c + 0x10) + *(int *)(in_stack_0000000c + 0x14);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(in_stack_0000000c + 0x30) =
               *(int *)(in_stack_0000000c + 0x30) + *(int *)(in_stack_0000000c + 0x34);
          if ((g_RenderStateFlags & 0x200U) != 0) {
            *(int *)(vertex_count + 0x38) =
                 *(int *)(vertex_count + 0x38) + *(int *)(vertex_count + 0x3c);
            *(int *)(vertex_count + 0x40) =
                 *(int *)(vertex_count + 0x40) + *(int *)(vertex_count + 0x44);
            *(int *)(in_stack_0000000c + 0x38) =
                 *(int *)(in_stack_0000000c + 0x38) + *(int *)(in_stack_0000000c + 0x3c);
            *(int *)(in_stack_0000000c + 0x40) =
                 *(int *)(in_stack_0000000c + 0x40) + *(int *)(in_stack_0000000c + 0x44);
          }
        } while( true );
      }
    }
  }
  else {
    iVar8 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar8 = iVar8 + 1;
        *(SRenderVertex **)(&stack0xffffff94 + iVar8 * 4) =
             g_RenderVertexBuffer + *(int *)vertex_count;
        vertex_count = vertex_count + 4;
      } while (iVar8 < in_stack_0000000c);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff98,in_stack_0000000c,g_RenderStateFlags);
  }
  return;
}
