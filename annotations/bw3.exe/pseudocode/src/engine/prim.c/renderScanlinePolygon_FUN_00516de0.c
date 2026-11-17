// Name: engine_prim.c_renderScanlinePolygon_FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00517459]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00516de0(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00516de0(SRenderVertex *vertices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  SSoftwareEdge *right;
  SRenderVertex *pSVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((g_UINT_005fba40 != 0) && (iVar9 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x * (longlong)g_INT_01c6b598) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_INT_01c6b5a0;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y * (longlong)g_INT_01c6b59c) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_INT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar9 < vertex_count);
  }
  if (g_INT_007303fc != 0) {
    pSVar4 = vertices + 1;
    pSVar6 = vertices + 2;
    if (vertex_count < 4) {
      iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar4,pSVar6);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = vertex_count + -2;
      iVar10 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0(vertices,pSVar4,pSVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
          }
          pSVar4 = pSVar4 + 1;
          iVar10 = iVar10 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar10 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((g_INT_01c6cee8 != 0) && (g_INT_007303f4 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00565c10
              (vertices,vertex_count,g_BIT_INTEGER32_01c6e2b4.dword);
    g_INT_01ed3198 = g_INT_01ed3198 + vertex_count + -2;
    return;
  }
  g_INT_01ed3198 = g_INT_01ed3198 + 1;
  switch(g_INT_01c6e2b8) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00515920(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00515a80(vertices,vertex_count);
  }
  g_INT_01ed36a4 = 0;
  g_INT_01ed319c = 0;
  local_1c = 0;
  g_INT_01ed36a0 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar9 = g_INT_01ed319c;
      iVar8 = local_1c + 1;
      if (vertex_count <= iVar8) {
        iVar8 = 0;
      }
      pSVar4 = vertices + iVar8;
      pSVar6 = vertices + local_1c;
      iVar8 = (pSVar6->projected_vertex).screen_y >> 0x10;
      iVar10 = (pSVar4->projected_vertex).screen_y >> 0x10;
      if (iVar8 != iVar10) {
        iVar3 = iVar10;
        pSVar7 = pSVar6;
        if ((pSVar4->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar3 = iVar8;
          iVar8 = iVar10;
          pSVar7 = pSVar4;
          pSVar4 = pSVar6;
        }
        g_SSoftwareEdge_ARRAY_01ed31a0[g_INT_01ed319c].base.y_min = iVar8;
        iVar10 = g_INT_01ed36a0;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.y_max = iVar3;
        if (iVar8 < iVar10) {
          g_INT_01ed36a0 = iVar8;
        }
        if (g_INT_01ed36a4 < iVar3) {
          g_INT_01ed36a4 = iVar3;
        }
        uVar5 = (pSVar4->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar5 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar5);
        }
        uVar11 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.x_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.x_current =
             (pSVar7->projected_vertex).screen_x +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->u - pSVar7->u);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.u_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.u_current =
             pSVar7->u + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->v - pSVar7->v);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.v_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.v_current =
             pSVar7->v + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->r - pSVar7->r);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.red_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.red_current =
             pSVar7->r + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->a - pSVar7->a);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.alpha_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.alpha_current =
             pSVar7->a + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 *
                (longlong)
                ((pSVar4->projected_vertex).transformed_z - (pSVar7->projected_vertex).transformed_z
                );
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.depth_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].base.depth_current =
             (pSVar7->projected_vertex).transformed_z +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->g - pSVar7->g);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].green_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].green_current =
             pSVar7->g + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)iVar8 * (longlong)(pSVar4->b - pSVar7->b);
        uVar5 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].blue_gradient = uVar5;
        lVar2 = (longlong)(int)uVar11 * (longlong)(int)uVar5;
        g_SSoftwareEdge_ARRAY_01ed31a0[iVar9].blue_current =
             pSVar7->b + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        g_INT_01ed319c = g_INT_01ed319c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar9 = g_INT_01ed36a0;
  right = g_SSoftwareEdge_ARRAY_01ed31a0;
  iVar8 = 0;
  if (0 < g_INT_01ed319c) {
    do {
      if ((g_INT_01ed36a0 == (right->base).y_min) && (right != (SSoftwareEdge *)0x0))
      goto LAB_00516f8f;
      iVar8 = iVar8 + 1;
      right = right + 1;
    } while (iVar8 < g_INT_01ed319c);
  }
  right = (SSoftwareEdge *)0x0;
LAB_00516f8f:
  if (right != (SSoftwareEdge *)0x0) {
    iVar8 = 0;
    local_14 = g_SSoftwareEdge_ARRAY_01ed31a0;
    if (0 < g_INT_01ed319c) {
      do {
        if ((g_INT_01ed36a0 == (local_14->base).y_min) && (local_14 != right)) goto LAB_00516fcc;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
      } while (iVar8 < g_INT_01ed319c);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00516fcc:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar8 = g_INT_01ed319c;
        if ((right->base).y_max <= iVar9) {
          (right->base).y_min = -1;
          iVar10 = 0;
          right = g_SSoftwareEdge_ARRAY_01ed31a0;
          if (0 < iVar8) {
            do {
              if ((iVar9 == (right->base).y_min) && (right != local_14)) goto LAB_00517022;
              iVar10 = iVar10 + 1;
              right = right + 1;
            } while (iVar10 < g_INT_01ed319c);
          }
          right = (SSoftwareEdge *)0x0;
LAB_00517022:
          if (right == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar8 = g_INT_01ed319c;
        if ((local_14->base).y_max <= iVar9) {
          (local_14->base).y_min = -1;
          local_14 = g_SSoftwareEdge_ARRAY_01ed31a0;
          iVar10 = 0;
          if (iVar8 < 1) {
            return;
          }
          while ((iVar9 != (local_14->base).y_min || (local_14 == right))) {
            iVar10 = iVar10 + 1;
            local_14 = local_14 + 1;
            if (g_INT_01ed319c <= iVar10) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00563257(local_14,right,iVar9);
        (right->base).x_current = (right->base).x_current + (right->base).x_gradient;
        (right->base).u_current = (right->base).u_current + (right->base).u_gradient;
        (right->base).v_current = (right->base).v_current + (right->base).v_gradient;
        iVar8 = right->green_current;
        iVar10 = right->blue_current;
        iVar3 = (right->base).alpha_current;
        (right->base).depth_current = (right->base).depth_current + (right->base).depth_gradient;
        iVar1 = right->green_gradient;
        (right->base).red_current = (right->base).red_current + (right->base).red_gradient;
        right->green_current = iVar8 + iVar1;
        iVar8 = (right->base).alpha_gradient;
        right->blue_current = iVar10 + right->blue_gradient;
        (right->base).alpha_current = iVar3 + iVar8;
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(iVar9 + 0xc);
        *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0x1c);
        *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + *(int *)(iVar9 + 0x24);
        *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + *(int *)(iVar9 + 0x2c);
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x14);
        *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + *(int *)(iVar9 + 0x3c);
        *(int *)(iVar9 + 0x40) = *(int *)(iVar9 + 0x40) + *(int *)(iVar9 + 0x44);
        *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + *(int *)(iVar9 + 0x34);
      } while( true );
    }
  }
  return;
}
