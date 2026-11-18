// Name: engine_zraster.c_rasterizeTriangle_FUN_0059a0b0
// Address: 0059a0b0
// Address Range: [[0059a0b0, 0059a5a7]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_rasterizeTriangle_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

void __cdecl engine_zraster_c_rasterizeTriangle_FUN_0059a0b0(SRenderVertex *vertex_buffer,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte *scanline_y;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar9 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_VertexPreprocessMode & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_VertexPreprocessMode & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)g_INT_01c35e38) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c35e40;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)g_INT_01c35e3c) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c35e44;
      }
      iVar9 = iVar9 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar9 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_INT_01c37788 != 0) && (g_TexturesDisabled == 0)) {
    engine_special_cpp_drawPolygon_FUN_0055f8f0(vertex_buffer,vertex_count,g_RenderStateFlags.dword)
    ;
    return;
  }
  if (g_VertexPreprocessMode != 0) {
    if ((uint)g_VertexPreprocessMode < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(vertex_buffer,vertex_count);
    }
    else if (g_VertexPreprocessMode == 6) {
      engine_prim_c_replaceWWithDepth_FUN_0051c720(vertex_buffer,vertex_count);
    }
  }
  g_INT_026672a8 = 0;
  iVar9 = 0;
  g_INT_026677b0 = 0;
  g_INT_026677ac = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar9 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      pSVar6 = vertex_buffer + iVar9;
      iVar2 = (pSVar6->projected_vertex).screen_y >> 0x10;
      iVar3 = (local_20->projected_vertex).screen_y >> 0x10;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        pSVar10 = pSVar6;
        if ((local_20->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar4 = iVar2;
          iVar2 = iVar3;
          pSVar10 = local_20;
          local_20 = pSVar6;
        }
        iVar8 = g_INT_026672a8 * 0x50;
        *(int *)(&DAT_026672ac + iVar8) = iVar2;
        iVar3 = g_INT_026677ac;
        *(int *)(iVar8 + 0x26672b0) = iVar4;
        if (iVar2 < iVar3) {
          g_INT_026677ac = iVar2;
        }
        if (g_INT_026677b0 < iVar4) {
          g_INT_026677b0 = iVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar7 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar2 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x26672b8) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar8 + 0x26672b4) =
             (pSVar10->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar10->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x26672d8) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        g_INT_026672a8 = g_INT_026672a8 + 1;
        *(uint *)(iVar8 + 0x26672d4) =
             ((pSVar10->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < vertex_count);
  }
  local_14 = (SSoftwareEdge *)&DAT_026672ac;
  iVar9 = 0;
  g_RenderAbortFlag = 0;
  if (0 < g_INT_026672a8) {
    do {
      if ((g_INT_026677ac == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_0059a258;
      iVar9 = iVar9 + 1;
      local_14 = local_14 + 1;
    } while (iVar9 < g_INT_026672a8);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_0059a258:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = (SSoftwareEdge *)&DAT_026672ac;
    iVar9 = 0;
    if (0 < g_INT_026672a8) {
      do {
        if ((g_INT_026677ac == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_0059a291;
        iVar9 = iVar9 + 1;
        local_18 = local_18 + 1;
      } while (iVar9 < g_INT_026672a8);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_0059a291:
    scanline_y = (byte *)g_INT_026677ac;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)scanline_y) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_026672ac;
          iVar9 = 0;
          if (0 < g_INT_026672a8) {
            do {
              if ((scanline_y == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_0059a2ec;
              iVar9 = iVar9 + 1;
              local_14 = local_14 + 1;
            } while (iVar9 < g_INT_026672a8);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_0059a2ec:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)scanline_y) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_026672ac;
          iVar9 = 0;
          if (0 < g_INT_026672a8) {
            do {
              if ((scanline_y == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_0059a33c;
              iVar9 = iVar9 + 1;
              local_18 = local_18 + 1;
            } while (iVar9 < g_INT_026672a8);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_0059a33c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_0055d6d7(local_18,local_14,(int)scanline_y);
        if (g_RenderAbortFlag != 0) {
          return;
        }
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).depth_current =
             (local_18->base).depth_current + (local_18->base).depth_gradient;
        *(int *)(scanline_y + 8) = *(int *)(scanline_y + 8) + *(int *)(scanline_y + 0xc);
        *(int *)(scanline_y + 0x28) = *(int *)(scanline_y + 0x28) + *(int *)(scanline_y + 0x2c);
        scanline_y = (byte *)((int)&(local_20->projected_vertex).transformed_x + 1);
      } while( true );
    }
  }
  return;
}
