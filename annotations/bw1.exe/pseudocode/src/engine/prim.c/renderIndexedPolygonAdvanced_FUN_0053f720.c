// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720
// Address: 0053f720
// Address Range: [[0053f720, 0053febe]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_0053f720(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_0053f720(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *left;
  int iVar5;
  uint uVar6;
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
  
  if (g_CullingMode != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                        (g_SRenderVertex_ARRAY_00629014 + *vertex_indices,
                         g_SRenderVertex_ARRAY_00629014 + vertex_indices[1],
                         g_SRenderVertex_ARRAY_00629014 + vertex_indices[2]);
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
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                            (g_SRenderVertex_ARRAY_00629014 + *piVar7,
                             g_SRenderVertex_ARRAY_00629014 + piVar7[1],
                             g_SRenderVertex_ARRAY_00629014 + piVar7[2]);
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
  if ((g_INT_01c50948 == 0) || (g_TexturesDisabled != 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    switch(g_VertexPreprocessMode) {
    case 1:
      iVar3 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(g_SRenderVertex_ARRAY_00629014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_0053dc30
                    (g_SRenderVertex_ARRAY_00629014 + *piVar7,1);
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_0053dcb0
                    (g_SRenderVertex_ARRAY_00629014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_0053dc30
                    (g_SRenderVertex_ARRAY_00629014 + *piVar7,1);
          iVar3 = iVar3 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar3 < vertex_count);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_0053dd20(g_SRenderVertex_ARRAY_00629014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar3 < vertex_count);
      }
    }
    g_MaxScanline = 0;
    g_ActiveEdgeCount = 0;
    local_1c = 0;
    g_MinScanline = 0x4b0;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar3 = g_ActiveEdgeCount;
        iVar9 = local_1c + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar9 = vertex_indices[iVar9];
        iVar11 = *local_24;
        iVar4 = g_SRenderVertex_ARRAY_00629014[iVar9].projected_vertex.screen_y >> 0x10;
        iVar2 = g_SRenderVertex_ARRAY_00629014[iVar11].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar4) {
          iVar5 = iVar4;
          pSVar8 = g_SRenderVertex_ARRAY_00629014 + iVar11;
          pSVar12 = g_SRenderVertex_ARRAY_00629014 + iVar9;
          if (g_SRenderVertex_ARRAY_00629014[iVar9].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_00629014[iVar11].projected_vertex.screen_y) {
            iVar5 = iVar2;
            iVar2 = iVar4;
            pSVar8 = g_SRenderVertex_ARRAY_00629014 + iVar9;
            pSVar12 = g_SRenderVertex_ARRAY_00629014 + iVar11;
          }
          g_SSoftwareEdge_ARRAY_01e7dad0[g_ActiveEdgeCount].base.y_min = iVar2;
          iVar9 = g_MinScanline;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.y_max = iVar5;
          if (iVar2 < iVar9) {
            g_MinScanline = iVar2;
          }
          if (g_MaxScanline < iVar5) {
            g_MaxScanline = iVar5;
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
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.x_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->u - pSVar8->u);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.u_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.u_current =
               pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->v - pSVar8->v);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.v_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.v_current =
               pSVar8->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->r - pSVar8->r);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.red_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.red_current =
               pSVar8->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->a - pSVar8->a);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.alpha_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.alpha_current =
               pSVar8->a + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_VertexPreprocessMode == 1) {
            if (g_ProcessorType == 0) {
              local_20 = (pSVar8->projected_vertex).inv_z;
              iVar11 = (pSVar12->projected_vertex).inv_z;
            }
            else {
              local_20 = 0x7fffffff - (pSVar8->projected_vertex).transformed_z;
              iVar11 = 0x7fffffff - (pSVar12->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar9 * (longlong)(iVar11 - local_20);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.depth_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.depth_current =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar9 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.depth_gradient = uVar6;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
            g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].base.depth_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->g - pSVar8->g);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].green_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].green_current = pSVar8->g + local_28;
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->b - pSVar8->b);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].blue_gradient = uVar6;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar6;
          g_SSoftwareEdge_ARRAY_01e7dad0[iVar3].blue_current =
               pSVar8->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = g_SSoftwareEdge_ARRAY_01e7dad0;
    iVar3 = 0;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_0053fa2f;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0053fa2f:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar3 = 0;
      left = g_SSoftwareEdge_ARRAY_01e7dad0;
      if (0 < g_ActiveEdgeCount) {
        do {
          if ((g_MinScanline == (left->base).y_min) && (left != local_14)) goto LAB_0053fa6e;
          iVar3 = iVar3 + 1;
          left = left + 1;
        } while (iVar3 < g_ActiveEdgeCount);
      }
      left = (SSoftwareEdge *)0x0;
LAB_0053fa6e:
      if (left != (SSoftwareEdge *)0x0) {
        local_18 = g_MinScanline;
        do {
          iVar3 = g_ActiveEdgeCount;
          if ((local_14->base).y_max <= local_18) {
            (local_14->base).y_min = -1;
            local_14 = g_SSoftwareEdge_ARRAY_01e7dad0;
            iVar9 = 0;
            if (0 < iVar3) {
              do {
                if ((local_18 == (local_14->base).y_min) && (local_14 != left)) goto LAB_0053fac3;
                iVar9 = iVar9 + 1;
                local_14 = local_14 + 1;
              } while (iVar9 < g_ActiveEdgeCount);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_0053fac3:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((left->base).y_max <= local_18) {
            (left->base).y_min = -1;
            iVar3 = 0;
            left = g_SSoftwareEdge_ARRAY_01e7dad0;
            if (0 < g_ActiveEdgeCount) {
              do {
                if ((local_18 == (left->base).y_min) && (left != local_14)) goto LAB_0053fb10;
                iVar3 = iVar3 + 1;
                left = left + 1;
              } while (iVar3 < g_ActiveEdgeCount);
            }
            left = (SSoftwareEdge *)0x0;
LAB_0053fb10:
            if (left == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_68[0] = (SRenderVertex *)0x53fb29;
          engine_special_cpp_renderScanline_FUN_00580127(left,local_14,local_18);
          *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + *(int *)(local_18 + 0xc);
          *(int *)(local_18 + 0x18) = *(int *)(local_18 + 0x18) + *(int *)(local_18 + 0x1c);
          *(int *)(local_18 + 0x20) = *(int *)(local_18 + 0x20) + *(int *)(local_18 + 0x24);
          *(int *)(local_18 + 0x28) = *(int *)(local_18 + 0x28) + *(int *)(local_18 + 0x2c);
          *(int *)(local_18 + 0x10) = *(int *)(local_18 + 0x10) + *(int *)(local_18 + 0x14);
          *(int *)(local_18 + 0x38) = *(int *)(local_18 + 0x38) + *(int *)(local_18 + 0x3c);
          *(int *)(local_18 + 0x40) = *(int *)(local_18 + 0x40) + *(int *)(local_18 + 0x44);
          *(int *)(local_18 + 0x30) = *(int *)(local_18 + 0x30) + *(int *)(local_18 + 0x34);
          (left->base).x_current = (left->base).x_current + (left->base).x_gradient;
          (left->base).u_current = (left->base).u_current + (left->base).u_gradient;
          (left->base).v_current = (left->base).v_current + (left->base).v_gradient;
          iVar3 = left->green_current;
          iVar9 = left->blue_current;
          iVar11 = (left->base).alpha_current;
          (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
          local_1c = local_1c + 1;
          iVar2 = left->green_gradient;
          (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
          left->green_current = iVar3 + iVar2;
          iVar3 = (left->base).alpha_gradient;
          left->blue_current = iVar9 + left->blue_gradient;
          (left->base).alpha_current = iVar11 + iVar3;
        } while( true );
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
        local_68[iVar3] = g_SRenderVertex_ARRAY_00629014 + iVar9;
        iVar3 = iVar11;
      } while (iVar11 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00582370(local_68,vertex_count,g_RenderStateFlags.dword);
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
  }
  return;
}
