// Name: engine_zraster.c_rasterizeTriangle_FUN_005a1ea0
// Address: 005a1ea0
// Address Range: [[005a1ea0, 005a2397]]
// Convention: __cdecl
// Signature: void __cdecl engine_zraster_c_rasterizeTriangle_FUN_005a1ea0(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

void __cdecl engine_zraster_c_rasterizeTriangle_FUN_005a1ea0(SRenderVertex *vertex_buffer,int vertex_count)

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
  SRenderVertex *pSVar9;
  int iVar10;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((g_UINT_005fba40 != 0) && (iVar8 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_INT_01c6e2b8 & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_INT_01c6e2b8 & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)g_INT_01c6b598) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c6b5a0;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)g_INT_01c6b59c) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c6b5a4;
      }
      iVar8 = iVar8 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((g_INT_007303fc != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar8 == 0)) {
    return;
  }
  g_INT_01ed3198 = g_INT_01ed3198 + 1;
  if ((g_INT_01c6cee8 != 0) && (g_INT_007303f4 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00565c10
              (vertex_buffer,vertex_count,g_BIT_INTEGER32_01c6e2b4.dword);
    return;
  }
  if (g_INT_01c6e2b8 != 0) {
    if ((uint)g_INT_01c6e2b8 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_00515920(vertex_buffer,vertex_count);
    }
    else if (g_INT_01c6e2b8 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_00515a80(vertex_buffer,vertex_count);
    }
  }
  g_INT_02d24d80 = 0;
  iVar10 = 0;
  g_INT_02d25288 = 0;
  g_INT_02d25284 = 0x4b0;
  iVar8 = g_INT_02d24d80;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar10 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      pSVar6 = vertex_buffer + iVar10;
      iVar2 = (pSVar6->projected_vertex).screen_y >> 0x10;
      iVar3 = (local_20->projected_vertex).screen_y >> 0x10;
      g_INT_02d24d80 = iVar8;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        pSVar9 = pSVar6;
        if ((local_20->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar4 = iVar2;
          iVar2 = iVar3;
          pSVar9 = local_20;
          local_20 = pSVar6;
        }
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.y_min = iVar2;
        iVar3 = g_INT_02d25284;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.y_max = iVar4;
        if (iVar2 < iVar3) {
          g_INT_02d25284 = iVar2;
        }
        if (g_INT_02d25288 < iVar4) {
          g_INT_02d25288 = iVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar9->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar7 = (uint)(ushort)((ushort)(pSVar9->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar2 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar9->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.x_gradient = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.x_current =
             (pSVar9->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar9->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.depth_gradient = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        g_INT_02d24d80 = g_INT_02d24d80 + 1;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar8].base.depth_current =
             ((pSVar9->projected_vertex).transformed_z * 0x100 - g_INT_01bdd520) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
      iVar8 = g_INT_02d24d80;
    } while (iVar10 < vertex_count);
  }
  local_14 = g_SSoftwareEdge_ARRAY_02d24d84;
  iVar8 = 0;
  g_INT_01bdd814 = 0;
  if (0 < g_INT_02d24d80) {
    do {
      if ((g_INT_02d25284 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
      goto LAB_005a2048;
      iVar8 = iVar8 + 1;
      local_14 = local_14 + 1;
    } while (iVar8 < g_INT_02d24d80);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_005a2048:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = g_SSoftwareEdge_ARRAY_02d24d84;
    iVar8 = 0;
    if (0 < g_INT_02d24d80) {
      do {
        if ((g_INT_02d25284 == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_005a2081;
        iVar8 = iVar8 + 1;
        local_18 = local_18 + 1;
      } while (iVar8 < g_INT_02d24d80);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_005a2081:
    scanline_y = (byte *)g_INT_02d25284;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)scanline_y) {
          (local_14->base).y_min = -1;
          local_14 = g_SSoftwareEdge_ARRAY_02d24d84;
          iVar8 = 0;
          if (0 < g_INT_02d24d80) {
            do {
              if ((scanline_y == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_005a20dc;
              iVar8 = iVar8 + 1;
              local_14 = local_14 + 1;
            } while (iVar8 < g_INT_02d24d80);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_005a20dc:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)scanline_y) {
          (local_18->base).y_min = -1;
          local_18 = g_SSoftwareEdge_ARRAY_02d24d84;
          iVar8 = 0;
          if (0 < g_INT_02d24d80) {
            do {
              if ((scanline_y == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_005a212c;
              iVar8 = iVar8 + 1;
              local_18 = local_18 + 1;
            } while (iVar8 < g_INT_02d24d80);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_005a212c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00563257(local_18,local_14,(int)scanline_y);
        if (g_INT_01bdd814 != 0) {
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
