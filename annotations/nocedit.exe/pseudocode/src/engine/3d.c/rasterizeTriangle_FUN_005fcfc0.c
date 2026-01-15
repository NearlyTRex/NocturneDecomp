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
  int iVar4;
  SRenderVertex *pSVar5;
  uint uVar6;
  int unaff_EBP;
  int unaff_ESI;
  int iVar7;
  int unaff_EDI;
  int iVar8;
  void *in_stack_ffffffd0;
  void *in_stack_ffffffd4;
  SRenderVertex *in_stack_ffffffd8;
  SRenderVertex *local_20;
  SEdgeData *local_18;
  SEdgeData *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar7 = 0, pSVar5 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar5->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_RenderStateFlag2 & 6U) != 0) {
          (pSVar5->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar5->projected_vertex).transformed_z);
        }
        if ((g_RenderStateFlag2 & 1U) != 0) {
          (pSVar5->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar5->projected_vertex).transformed_z);
        }
        (pSVar5->projected_vertex).screen_x =
             (int)(((longlong)(pSVar5->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar5->projected_vertex).screen_y =
             (int)(((longlong)(pSVar5->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar5->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar7 = iVar7 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar7 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar7 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertex_buffer,vertex_count,g_RenderStateFlags);
    return;
  }
  if (g_RenderStateFlag2 != 0) {
    if ((uint)g_RenderStateFlag2 < PREPROCESS_TEXTURE_COORD_NORMALIZE) {
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0(vertex_buffer,vertex_count);
    }
    else if (g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) {
      engine_prim_c_replaceWWithDepth_FUN_00552110(vertex_buffer,vertex_count);
    }
  }
  g_RasterizerEdgeCount = 0;
  iVar8 = 0;
  g_RasterizerMaxY = 0;
  g_RasterizerMinY = 0x4b0;
  iVar7 = g_RasterizerEdgeCount;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar8 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      in_stack_ffffffd8 = vertex_buffer + iVar8;
      iVar2 = (in_stack_ffffffd8->projected_vertex).screen_y >> 0x10;
      iVar3 = (local_20->projected_vertex).screen_y >> 0x10;
      g_RasterizerEdgeCount = iVar7;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        pSVar5 = in_stack_ffffffd8;
        if ((local_20->projected_vertex).screen_y < (in_stack_ffffffd8->projected_vertex).screen_y)
        {
          iVar4 = iVar2;
          iVar2 = iVar3;
          pSVar5 = local_20;
          local_20 = in_stack_ffffffd8;
        }
        g_RasterizerEdgeArray[iVar7].y_start = iVar2;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar7].y_end = iVar4;
        if (iVar2 < iVar3) {
          g_RasterizerMinY = iVar2;
        }
        if (g_RasterizerMaxY < iVar4) {
          g_RasterizerMaxY = iVar4;
        }
        uVar6 = (local_20->projected_vertex).screen_y - (pSVar5->projected_vertex).screen_y;
        if (uVar6 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar6);
        }
        in_stack_ffffffd0 =
             (void *)(uint)(ushort)((ushort)(pSVar5->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar2 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar5->projected_vertex).screen_x);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar7].x_delta = uVar6;
        lVar1 = (longlong)(int)in_stack_ffffffd0 * (longlong)(int)uVar6;
        in_stack_ffffffd4 = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_RasterizerEdgeArray[iVar7].x_current =
             (pSVar5->projected_vertex).screen_x + (int)in_stack_ffffffd4;
        lVar1 = (longlong)iVar2 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar5->projected_vertex).transformed_z) * 0x100);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar7].z_delta = uVar6;
        lVar1 = (longlong)(int)in_stack_ffffffd0 * (longlong)(int)uVar6;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar7].z_current =
             ((pSVar5->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar8 = iVar8 + 1;
      iVar7 = g_RasterizerEdgeCount;
    } while (iVar8 < vertex_count);
  }
  local_14 = g_RasterizerEdgeArray;
  iVar7 = 0;
  g_RenderAbortFlag = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == local_14->y_start) && (local_14 != (SEdgeData *)0x0))
      goto LAB_005fd168;
      iVar7 = iVar7 + 1;
      local_14 = local_14 + 1;
    } while (iVar7 < g_RasterizerEdgeCount);
  }
  local_14 = (SEdgeData *)0x0;
LAB_005fd168:
  if (local_14 != (SEdgeData *)0x0) {
    local_18 = g_RasterizerEdgeArray;
    iVar7 = 0;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == local_18->y_start) && (local_18 != local_14)) goto LAB_005fd1a1;
        iVar7 = iVar7 + 1;
        local_18 = local_18 + 1;
      } while (iVar7 < g_RasterizerEdgeCount);
    }
    local_18 = (SEdgeData *)0x0;
LAB_005fd1a1:
    iVar7 = g_RasterizerMinY;
    if (local_18 != (SEdgeData *)0x0) {
      do {
        if (local_14->y_end <= iVar7) {
          local_14->y_start = -1;
          local_14 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar7 == local_14->y_start) && (local_14 != local_18)) goto LAB_005fd1fc;
              iVar8 = iVar8 + 1;
              local_14 = local_14 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          local_14 = (SEdgeData *)0x0;
LAB_005fd1fc:
          if (local_14 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (local_18->y_end <= iVar7) {
          local_18->y_start = -1;
          local_18 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar7 == local_18->y_start) && (local_18 != local_14)) goto LAB_005fd24c;
              iVar8 = iVar8 + 1;
              local_18 = local_18 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          local_18 = (SEdgeData *)0x0;
LAB_005fd24c:
          if (local_18 == (SEdgeData *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffffd0,in_stack_ffffffd4,(int)in_stack_ffffffd8);
        if (g_RenderAbortFlag != 0) {
          return;
        }
        *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
        *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
        *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + *(int *)(unaff_EDI + 0xc);
        *(int *)(unaff_EDI + 0x28) = *(int *)(unaff_EDI + 0x28) + *(int *)(unaff_EDI + 0x2c);
        iVar7 = unaff_EBP + 1;
      } while( true );
    }
  }
  return;
}
