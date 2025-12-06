// Name: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
// Address: 005fcfc0
// Address Range: [[005fcfc0, 005fd4b7]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count)

#include "nocturne.h"

void __cdecl
engine_3d_c_rasterizeTriangle_FUN_005fcfc0
          (SRenderVertex *vertex_buffer,int vertex_count,int triangle_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  SEdgeData *pSVar9;
  int iVar10;
  int iVar11;
  void *in_stack_ffffffd4;
  void *in_stack_ffffffd8;
  int in_stack_ffffffdc;
  int local_1c;
  SEdgeData *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_RenderStateFlag2 & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_RenderStateFlag2 & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar8 = iVar8 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar8 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,triangle_count,g_RenderStateFlags);
    return;
  }
  if (g_RenderStateFlag2 != 0) {
    if ((uint)g_RenderStateFlag2 < PREPROCESS_TEXTURE_COORD_NORMALIZE) {
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0((SRenderVertex *)vertex_count,triangle_count);
    }
    else if (g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) {
      engine_prim_c_replaceWWithDepth_FUN_00552110((SRenderVertex *)vertex_count,triangle_count);
    }
  }
  g_RasterizerEdgeCount = 0;
  iVar11 = 0;
  g_RasterizerMaxY = 0;
  g_RasterizerMinY = 0x4b0;
  iVar8 = g_RasterizerEdgeCount;
  if (0 < triangle_count) {
    do {
      iVar2 = iVar11 + 1;
      if (triangle_count <= iVar2) {
        iVar2 = 0;
      }
      local_1c = vertex_count + iVar2 * 0x30;
      in_stack_ffffffdc = vertex_count + iVar11 * 0x30;
      iVar2 = *(int *)(in_stack_ffffffdc + 0x14) >> 0x10;
      iVar3 = *(int *)(local_1c + 0x14) >> 0x10;
      g_RasterizerEdgeCount = iVar8;
      if (iVar2 != iVar3) {
        iVar5 = iVar3;
        iVar10 = in_stack_ffffffdc;
        if (*(int *)(local_1c + 0x14) < *(int *)(in_stack_ffffffdc + 0x14)) {
          iVar5 = iVar2;
          iVar2 = iVar3;
          iVar10 = local_1c;
          local_1c = in_stack_ffffffdc;
        }
        g_RasterizerEdgeArray[iVar8].y_start = iVar2;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar8].y_end = iVar5;
        if (iVar2 < iVar3) {
          g_RasterizerMinY = iVar2;
        }
        if (g_RasterizerMaxY < iVar5) {
          g_RasterizerMaxY = iVar5;
        }
        uVar7 = *(int *)(local_1c + 0x14) - *(int *)(iVar10 + 0x14);
        if (uVar7 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        in_stack_ffffffd4 = (void *)(uint)(ushort)((ushort)*(uint *)(iVar10 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(local_1c + 0x10) - *(int *)(iVar10 + 0x10));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar8].x_delta = uVar7;
        lVar1 = (longlong)(int)in_stack_ffffffd4 * (longlong)(int)uVar7;
        in_stack_ffffffd8 = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_RasterizerEdgeArray[iVar8].x_current = *(int *)(iVar10 + 0x10) + (int)in_stack_ffffffd8;
        lVar1 = (longlong)iVar2 *
                (longlong)((*(int *)(local_1c + 8) - *(int *)(iVar10 + 8)) * 0x100);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar8].z_delta = uVar7;
        lVar1 = (longlong)(int)in_stack_ffffffd4 * (longlong)(int)uVar7;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar8].z_current =
             (*(int *)(iVar10 + 8) * 0x100 - g_RasterizerDepthBias) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar11 = iVar11 + 1;
      iVar8 = g_RasterizerEdgeCount;
    } while (iVar11 < triangle_count);
  }
  pSVar9 = g_RasterizerEdgeArray;
  iVar8 = 0;
  g_RenderAbortFlag = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == pSVar9->y_start) && (pSVar9 != (SEdgeData *)0x0)) goto LAB_005fd168;
      iVar8 = iVar8 + 1;
      pSVar9 = pSVar9 + 1;
    } while (iVar8 < g_RasterizerEdgeCount);
  }
  pSVar9 = (SEdgeData *)0x0;
LAB_005fd168:
  if (pSVar9 != (SEdgeData *)0x0) {
    local_14 = g_RasterizerEdgeArray;
    iVar8 = 0;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == local_14->y_start) && (local_14 != pSVar9)) goto LAB_005fd1a1;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
      } while (iVar8 < g_RasterizerEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_005fd1a1:
    puVar4 = (byte *)g_RasterizerMinY;
    if (local_14 != (SEdgeData *)0x0) {
      do {
        if (pSVar9->y_end <= (int)puVar4) {
          pSVar9->y_start = -1;
          pSVar9 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((puVar4 == (byte *)pSVar9->y_start) && (pSVar9 != local_14))
              goto LAB_005fd1fc;
              iVar8 = iVar8 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          pSVar9 = (SEdgeData *)0x0;
LAB_005fd1fc:
          if (pSVar9 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (local_14->y_end <= (int)puVar4) {
          local_14->y_start = -1;
          local_14 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((puVar4 == (byte *)local_14->y_start) && (local_14 != pSVar9))
              goto LAB_005fd24c;
              iVar8 = iVar8 + 1;
              local_14 = local_14 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          local_14 = (SEdgeData *)0x0;
LAB_005fd24c:
          if (local_14 == (SEdgeData *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc);
        if (g_RenderAbortFlag != 0) {
          return;
        }
        *(int *)(triangle_count + 8) = *(int *)(triangle_count + 8) + *(int *)(triangle_count + 0xc)
        ;
        *(int *)(triangle_count + 0x28) =
             *(int *)(triangle_count + 0x28) + *(int *)(triangle_count + 0x2c);
        *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
        *(int *)(vertex_count + 0x28) =
             *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
        puVar4 = (byte *)((int)&(vertex_buffer->projected_vertex).transformed_x + 1);
      } while( true );
    }
  }
  return;
}
