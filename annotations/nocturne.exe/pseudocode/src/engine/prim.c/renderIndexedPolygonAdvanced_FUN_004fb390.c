// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390
// Address: 004fb390
// Address Range: [[004fb390, 004fbb31]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *left;
  int iVar4;
  uint uVar5;
  int iVar6;
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
  
  if (g_INT_006b0280 != 0) {
    if (vertex_count < 4) {
      iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        (g_SRenderVertex_ARRAY_005c5014 + *vertex_indices,
                         g_SRenderVertex_ARRAY_005c5014 + vertex_indices[1],
                         g_SRenderVertex_ARRAY_005c5014 + vertex_indices[2]);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      iVar6 = vertex_count + -2;
      iVar9 = 0;
      iVar11 = 0;
      piVar7 = vertex_indices;
      if (0 < iVar6) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            (g_SRenderVertex_ARRAY_005c5014 + *piVar7,
                             g_SRenderVertex_ARRAY_005c5014 + piVar7[1],
                             g_SRenderVertex_ARRAY_005c5014 + piVar7[2]);
          if (iVar2 == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < iVar6);
      }
      if (iVar11 == iVar6) {
        return;
      }
    }
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    switch(g_VertexPreprocessMode) {
    case 1:
      iVar6 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar6 = iVar6 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_004f9870(g_SRenderVertex_ARRAY_005c5014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar6 < vertex_count);
      }
      break;
    case 2:
      iVar6 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_004f98e0
                    (g_SRenderVertex_ARRAY_005c5014 + *piVar7,1);
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < vertex_count);
      }
      break;
    case 3:
      iVar6 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar6 = iVar6 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960
                    (g_SRenderVertex_ARRAY_005c5014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar6 < vertex_count);
      }
      break;
    case 5:
      iVar6 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_004f98e0
                    (g_SRenderVertex_ARRAY_005c5014 + *piVar7,1);
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < vertex_count);
      }
      break;
    case 6:
      iVar6 = 0;
      piVar7 = vertex_indices;
      if (0 < vertex_count) {
        do {
          iVar6 = iVar6 + 1;
          engine_prim_c_replaceWWithDepth_FUN_004f99d0(g_SRenderVertex_ARRAY_005c5014 + *piVar7,1);
          piVar7 = piVar7 + 1;
        } while (iVar6 < vertex_count);
      }
    }
    g_INT_01e53384 = 0;
    g_INT_01e52efc = 0;
    local_1c = 0;
    g_INT_01e53380 = GAME_SCREEN_MAX_HEIGHT;
    if (0 < vertex_count) {
      local_24 = vertex_indices;
      do {
        iVar6 = g_INT_01e52efc;
        iVar9 = local_1c + 1;
        if (vertex_count <= iVar9) {
          iVar9 = 0;
        }
        iVar9 = vertex_indices[iVar9];
        iVar11 = *local_24;
        iVar2 = g_SRenderVertex_ARRAY_005c5014[iVar9].projected_vertex.screen_y >> 0x10;
        iVar3 = g_SRenderVertex_ARRAY_005c5014[iVar11].projected_vertex.screen_y >> 0x10;
        if (iVar3 != iVar2) {
          iVar4 = iVar3;
          pSVar8 = g_SRenderVertex_ARRAY_005c5014 + iVar11;
          pSVar12 = g_SRenderVertex_ARRAY_005c5014 + iVar9;
          if (g_SRenderVertex_ARRAY_005c5014[iVar9].projected_vertex.screen_y <
              g_SRenderVertex_ARRAY_005c5014[iVar11].projected_vertex.screen_y) {
            iVar4 = iVar2;
            iVar2 = iVar3;
            pSVar8 = g_SRenderVertex_ARRAY_005c5014 + iVar9;
            pSVar12 = g_SRenderVertex_ARRAY_005c5014 + iVar11;
          }
          g_SSoftwareEdge_ARRAY_01e52f00[g_INT_01e52efc].base.y_min = iVar4;
          iVar9 = g_INT_01e53380;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.y_max = iVar2;
          if (iVar4 < iVar9) {
            g_INT_01e53380 = iVar4;
          }
          if (g_INT_01e53384 < iVar2) {
            g_INT_01e53384 = iVar2;
          }
          uVar5 = (pSVar12->projected_vertex).screen_y - (pSVar8->projected_vertex).screen_y;
          if (uVar5 < 0x10000) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)(0xffffffff / (ulonglong)uVar5);
          }
          uVar10 = (uint)(ushort)((ushort)(pSVar8->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar9 *
                  (longlong)
                  ((pSVar12->projected_vertex).screen_x - (pSVar8->projected_vertex).screen_x);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.x_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.x_current =
               (pSVar8->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->u - pSVar8->u);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.u_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.u_current =
               pSVar8->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->v - pSVar8->v);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.v_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.v_current =
               pSVar8->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->r - pSVar8->r);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.red_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.red_current =
               pSVar8->r + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->a - pSVar8->a);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.alpha_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.alpha_current =
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
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.depth_gradient = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.depth_current =
                 local_20 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar9 *
                    (longlong)
                    ((pSVar12->projected_vertex).transformed_z -
                    (pSVar8->projected_vertex).transformed_z);
            uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.depth_gradient = uVar5;
            lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
            g_SSoftwareEdge_ARRAY_01e52f00[iVar6].base.depth_current =
                 (pSVar8->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->g - pSVar8->g);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].green_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].green_current = pSVar8->g + local_28;
          lVar1 = (longlong)iVar9 * (longlong)(pSVar12->b - pSVar8->b);
          uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].blue_gradient = uVar5;
          lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar5;
          g_SSoftwareEdge_ARRAY_01e52f00[iVar6].blue_current =
               pSVar8->b + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          g_INT_01e52efc = g_INT_01e52efc + 1;
        }
        local_24 = local_24 + 1;
        local_1c = local_1c + 1;
      } while (local_1c < vertex_count);
    }
    local_14 = g_SSoftwareEdge_ARRAY_01e52f00;
    iVar6 = 0;
    if (0 < g_INT_01e52efc) {
      do {
        if ((g_INT_01e53380 == (local_14->base).y_min) && (local_14 != (SSoftwareEdge *)0x0))
        goto LAB_004fb6af;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
      } while (iVar6 < g_INT_01e52efc);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004fb6af:
    if (local_14 != (SSoftwareEdge *)0x0) {
      iVar6 = 0;
      left = g_SSoftwareEdge_ARRAY_01e52f00;
      if (0 < g_INT_01e52efc) {
        do {
          if ((g_INT_01e53380 == (left->base).y_min) && (left != local_14)) goto LAB_004fb6ee;
          iVar6 = iVar6 + 1;
          left = left + 1;
        } while (iVar6 < g_INT_01e52efc);
      }
      left = (SSoftwareEdge *)0x0;
LAB_004fb6ee:
      if (left != (SSoftwareEdge *)0x0) {
        local_18 = g_INT_01e53380;
        do {
          iVar6 = g_INT_01e52efc;
          if ((local_14->base).y_max <= local_18) {
            (local_14->base).y_min = -1;
            local_14 = g_SSoftwareEdge_ARRAY_01e52f00;
            iVar9 = 0;
            if (0 < iVar6) {
              do {
                if ((local_18 == (local_14->base).y_min) && (local_14 != left)) goto LAB_004fb743;
                iVar9 = iVar9 + 1;
                local_14 = local_14 + 1;
              } while (iVar9 < g_INT_01e52efc);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_004fb743:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((left->base).y_max <= local_18) {
            (left->base).y_min = -1;
            iVar6 = 0;
            left = g_SSoftwareEdge_ARRAY_01e52f00;
            if (0 < g_INT_01e52efc) {
              do {
                if ((local_18 == (left->base).y_min) && (left != local_14)) goto LAB_004fb790;
                iVar6 = iVar6 + 1;
                left = left + 1;
              } while (iVar6 < g_INT_01e52efc);
            }
            left = (SSoftwareEdge *)0x0;
LAB_004fb790:
            if (left == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          local_68[0] = (SRenderVertex *)0x4fb7a9;
          engine_special_cpp_renderScanline_FUN_00530710(left,local_14,local_18);
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
          iVar6 = left->green_current;
          iVar9 = left->blue_current;
          iVar11 = (left->base).alpha_current;
          (left->base).depth_current = (left->base).depth_current + (left->base).depth_gradient;
          local_1c = local_1c + 1;
          iVar2 = left->green_gradient;
          (left->base).red_current = (left->base).red_current + (left->base).red_gradient;
          left->green_current = iVar6 + iVar2;
          iVar6 = (left->base).alpha_gradient;
          left->blue_current = iVar9 + left->blue_gradient;
          (left->base).alpha_current = iVar11 + iVar6;
        } while( true );
      }
    }
  }
  else {
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar11 = iVar6 + 1;
        vertex_indices = vertex_indices + 1;
        local_68[iVar6] = g_SRenderVertex_ARRAY_005c5014 + iVar9;
        iVar6 = iVar11;
      } while (iVar11 < vertex_count);
    }
    engine_special_cpp_drawPolygon2_FUN_00532650(local_68,vertex_count,g_RenderStateFlags.dword);
  }
  return;
}
