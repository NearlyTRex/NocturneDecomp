// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050
// Address: 0051d050
// Address Range: [[0051d050, 0051d572]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_0051d050(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderIndexedPolygonSoftware_FUN_0051d050(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  bool bVar13;
  SRenderVertex *local_64 [16];
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  SSoftwareEdge *local_14;
  
  if (g_INT_0070ca7c != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                        (g_SRenderVertex_ARRAY_00622014 + *vertex_indices,
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices[1],
                         g_SRenderVertex_ARRAY_00622014 + vertex_indices[2]);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = vertex_count + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar7 = vertex_indices;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                            (g_SRenderVertex_ARRAY_00622014 + *piVar7,
                             g_SRenderVertex_ARRAY_00622014 + piVar7[1],
                             g_SRenderVertex_ARRAY_00622014 + piVar7[2]);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < iVar3);
      }
      if (iVar11 == iVar3) {
        return;
      }
    }
  }
  if ((g_INT_01c37788 == 0) || (g_INT_0070ca74 != 0)) {
    g_INT_01e61b50 = 0;
    g_INT_01e61648 = 0;
    local_1c = 0;
    g_INT_01e61b58 = g_INT_01e61b58 + 1;
    g_INT_01e61b4c = 0x4b0;
    if (0 < vertex_count) {
      local_20 = vertex_indices;
      do {
        iVar3 = g_INT_01e61648;
        iVar9 = local_1c + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar11 = *local_20;
        iVar9 = vertex_indices[iVar9];
        iVar4 = g_SRenderVertex_ARRAY_00622014[iVar11].projected_vertex.screen_y >> 0x10;
        iVar2 = g_SRenderVertex_ARRAY_00622014[iVar9].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar2) {
          iVar5 = iVar4;
          pSVar8 = g_SRenderVertex_ARRAY_00622014 + iVar11;
          pSVar12 = g_SRenderVertex_ARRAY_00622014 + iVar9;
          if (g_SRenderVertex_ARRAY_00622014[iVar9].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_00622014[iVar11].projected_vertex.screen_y) {
            iVar5 = iVar2;
            pSVar8 = g_SRenderVertex_ARRAY_00622014 + iVar9;
            iVar2 = iVar4;
            pSVar12 = g_SRenderVertex_ARRAY_00622014 + iVar11;
          }
          g_SSoftwareEdge_ARRAY_01e6164c[g_INT_01e61648].base.y_min = iVar5;
          iVar9 = g_INT_01e61b4c;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.y_max = iVar2;
          if (iVar5 < iVar9) {
            g_INT_01e61b4c = iVar5;
          }
          if (g_INT_01e61b50 < iVar2) {
            g_INT_01e61b50 = iVar2;
          }
          uVar6 = (pSVar12->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar9 *
                  (longlong)
                  ((pSVar12->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.x_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->u - pSVar8->u);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.u_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.u_current =
               pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->v - pSVar8->v);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.v_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.v_current =
               pSVar8->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->r - pSVar8->r);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.red_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.red_current =
               pSVar8->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->a - pSVar8->a);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.alpha_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.alpha_current = pSVar8->a + local_24;
          if (g_INT_01c38b58 == 1) {
            if (g_INT_01c38b50 == 0) {
              iVar11 = (pSVar12->projected_vertex).inv_z;
              iVar2 = (pSVar8->projected_vertex).inv_z;
            }
            else {
              iVar2 = 0x7fffffff - (pSVar8->projected_vertex).transformed_z;
              iVar11 = 0x7fffffff - (pSVar12->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar9 * (longlong)(iVar11 - iVar2);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.depth_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.depth_current =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_INT_01e61648 = g_INT_01e61648 + 1;
          }
          else {
            lVar1 = (longlong)iVar9 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.depth_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SSoftwareEdge_ARRAY_01e6164c[iVar3].base.depth_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_INT_01e61648 = g_INT_01e61648 + 1;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0051c580(g_INT_01e61b4c,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (local_14 = engine_prim_c_findEdgeInBuffer_FUN_0051c580(g_INT_01e61b4c,edge_ptr),
       local_14 != (SSoftwareEdge *)0x0)) {
      local_18 = g_INT_01e61b4c;
      iVar3 = g_INT_01e61b4c - g_INT_0061b424;
      bVar13 = SBORROW4(g_INT_01e61b4c,g_INT_0061b424);
      while (bVar13 != iVar3 < 0) {
        if ((edge_ptr->base).y_max <= local_18) {
          (edge_ptr->base).y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_0051c580(local_18,local_14);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_14->base).y_max <= local_18) {
          (local_14->base).y_min = -1;
          local_14 = engine_prim_c_findEdgeInBuffer_FUN_0051c580(local_18,edge_ptr);
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        local_64[0] = (SRenderVertex *)0x51d2cb;
        engine_special_cpp_renderScanline_FUN_0055d6d7(local_14,edge_ptr,local_18);
        piVar7 = &(edge_ptr->base).x_current;
        *piVar7 = *piVar7 + (edge_ptr->base).x_gradient;
        (edge_ptr->base).u_current = (edge_ptr->base).u_current + (edge_ptr->base).u_gradient;
        (edge_ptr->base).v_current = (edge_ptr->base).v_current + (edge_ptr->base).v_gradient;
        (edge_ptr->base).red_current = (edge_ptr->base).red_current + (edge_ptr->base).red_gradient;
        (edge_ptr->base).depth_current =
             (edge_ptr->base).depth_current + (edge_ptr->base).depth_gradient;
        (edge_ptr->base).alpha_current =
             (edge_ptr->base).alpha_current + (edge_ptr->base).alpha_gradient;
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + *(int *)(local_18 + 0xc);
        *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
        *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + *(int *)(local_18 + 0x24);
        *(int *)(local_18 + 0x10) = *(int *)(local_18 + 0x10) + *(int *)(local_18 + 0x14);
        *(int *)(local_18 + 0x28) = *(int *)(local_18 + 0x28) + *(int *)(local_18 + 0x2c);
        local_1c = local_1c + 1;
        *(int *)(local_18 + 0x30) = *(int *)(local_18 + 0x30) + *(int *)(local_18 + 0x34);
        iVar3 = local_1c - g_INT_0061b424;
        bVar13 = SBORROW4(local_1c,g_INT_0061b424);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar11 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        local_64[iVar3] = g_SRenderVertex_ARRAY_00622014 + iVar9;
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    g_INT_01e61b58 = g_INT_01e61b58 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_0055f920
              (local_64,vertex_count,g_BIT_INTEGER32_01c38b54.dword);
  }
  return;
}
