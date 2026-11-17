// Name: core_asgaya.cpp_rasterizePolygonCustom_FUN_005a23c0
// Address: 005a23c0
// Address Range: [[005a23c0, 005a2865]]
// Convention: __cdecl
// Signature: void __cdecl core_asgaya_cpp_rasterizePolygonCustom_FUN_005a23c0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

#include "nocturne.h"

void __cdecl core_asgaya_cpp_rasterizePolygonCustom_FUN_005a23c0(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *right;
  SSoftwareEdge *left;
  int iVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  int local_18;
  int local_14;
  
  iVar10 = 0;
  pSVar6 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar6->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)g_INT_01c6b598) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c6b5a0;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)g_INT_01c6b59c) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_INT_01c6b5a4;
      }
      iVar10 = iVar10 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar10 < vertex_count);
  }
  if ((g_INT_007303fc != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar10 == 0)) {
    return;
  }
  g_INT_01ed3198 = g_INT_01ed3198 + 1;
  switch(g_INT_01c6e2b8) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00515920(vertex_buffer,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertex_buffer,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(vertex_buffer,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertex_buffer,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00515a80(vertex_buffer,vertex_count);
  }
  g_INT_02d24d80 = 0;
  g_INT_02d25288 = 0;
  local_18 = 0;
  g_INT_02d25284 = 0x4b0;
  iVar10 = g_INT_02d24d80;
  if (0 < vertex_count) {
    do {
      iVar3 = local_18 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar7 = vertex_buffer + iVar3;
      pSVar6 = vertex_buffer + local_18;
      iVar4 = (pSVar7->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar6->projected_vertex).screen_y >> 0x10;
      g_INT_02d24d80 = iVar10;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar9 = pSVar7;
        if ((pSVar7->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar9 = pSVar6;
          pSVar6 = pSVar7;
        }
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.y_min = iVar3;
        iVar4 = g_INT_02d25284;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.y_max = iVar5;
        if (iVar3 < iVar4) {
          g_INT_02d25284 = iVar3;
        }
        if (g_INT_02d25288 < iVar5) {
          g_INT_02d25288 = iVar5;
        }
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.x_current = (pSVar6->projected_vertex).screen_x;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.depth_current =
             (pSVar6->projected_vertex).transformed_z << 8;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.red_current = pSVar6->r;
        uVar8 = (pSVar9->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar2 = (longlong)iVar3 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 *
                (longlong)
                (((pSVar9->projected_vertex).transformed_z -
                 (pSVar6->projected_vertex).transformed_z) * 0x100);
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.depth_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->r - pSVar6->r);
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.red_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 *
                (longlong)g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.x_gradient;
        piVar1 = &g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.x_current;
        *piVar1 = *piVar1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 *
                (longlong)g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.depth_gradient;
        iVar3 = g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.red_gradient;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.depth_current =
             g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.depth_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)iVar3;
        g_INT_02d24d80 = g_INT_02d24d80 + 1;
        g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.red_current =
             g_SSoftwareEdge_ARRAY_02d24d84[iVar10].base.red_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
      iVar10 = g_INT_02d24d80;
    } while (local_18 < vertex_count);
  }
  right = g_SSoftwareEdge_ARRAY_02d24d84;
  iVar10 = 0;
  if (0 < g_INT_02d24d80) {
    do {
      if ((g_INT_02d25284 == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_005a24d3;
      iVar10 = iVar10 + 1;
      right = right + 1;
    } while (iVar10 < g_INT_02d24d80);
  }
  right = (SSoftwareEdge *)0x0;
LAB_005a24d3:
  if (right != (SSoftwareEdge *)0x0) {
    iVar10 = 0;
    left = g_SSoftwareEdge_ARRAY_02d24d84;
    if (0 < g_INT_02d24d80) {
      do {
        if ((g_INT_02d25284 == (left->base).y_min) && (left != right)) goto LAB_005a250a;
        iVar10 = iVar10 + 1;
        left = left + 1;
      } while (iVar10 < g_INT_02d24d80);
    }
    left = (SSoftwareEdge *)0x0;
LAB_005a250a:
    if (left != (SSoftwareEdge *)0x0) {
      local_14 = g_INT_02d25284;
      do {
        if ((right->base).y_max <= local_14) {
          (right->base).y_min = -1;
          iVar10 = 0;
          right = g_SSoftwareEdge_ARRAY_02d24d84;
          if (0 < g_INT_02d24d80) {
            do {
              if ((local_14 == (right->base).y_min) && (right != left)) goto LAB_005a255c;
              iVar10 = iVar10 + 1;
              right = right + 1;
            } while (iVar10 < g_INT_02d24d80);
          }
          right = (SSoftwareEdge *)0x0;
LAB_005a255c:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((left->base).y_max <= local_14) {
          (left->base).y_min = -1;
          iVar10 = 0;
          left = g_SSoftwareEdge_ARRAY_02d24d84;
          if (0 < g_INT_02d24d80) {
            do {
              if ((local_14 == (left->base).y_min) && (left != right)) goto LAB_005a25a4;
              iVar10 = iVar10 + 1;
              left = left + 1;
            } while (iVar10 < g_INT_02d24d80);
          }
          left = (SSoftwareEdge *)0x0;
LAB_005a25a4:
          if (left == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        (*scanline_renderer)(local_14,right,left);
        piVar1 = &(right->base).x_current;
        *piVar1 = *piVar1 + (right->base).x_gradient;
        (right->base).depth_current = (right->base).depth_current + (right->base).depth_gradient;
        (right->base).red_current = (right->base).red_current + (right->base).red_gradient;
        (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
        local_14 = local_14 + 1;
        (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
        (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
      } while( true );
    }
  }
  return;
}
