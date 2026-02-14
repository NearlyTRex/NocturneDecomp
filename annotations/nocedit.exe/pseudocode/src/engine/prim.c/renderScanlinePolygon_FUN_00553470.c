// Name: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 00553ae9]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  SSoftwareEdge *right_data;
  SRenderVertex *pSVar3;
  uint uVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_1c;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar3 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar3->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar3->projected_vertex).transformed_z);
        (pSVar3->projected_vertex).screen_x =
             (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar3->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar3->projected_vertex).screen_y =
             (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar3->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar8 = iVar8 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar8 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar3 = vertices + 1;
    pSVar5 = vertices + 2;
    if (vertex_count < 4) {
      iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar3,pSVar5);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = vertex_count + -2;
      iVar9 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar3,pSVar5);
          if (iVar2 == 0) {
            iVar7 = iVar7 + 1;
          }
          pSVar3 = pSVar3 + 1;
          iVar9 = iVar9 + 1;
          pSVar5 = pSVar5 + 1;
        } while (iVar9 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertices,vertex_count,g_RenderStateFlags.dword);
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0(vertices,vertex_count);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertices,vertex_count);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(vertices,vertex_count);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020(vertices,vertex_count);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,vertex_count);
  }
  g_MaxScanline = 0;
  g_ActiveEdgeCount = 0;
  local_1c = 0;
  g_MinScanline = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar8 = g_ActiveEdgeCount;
      iVar7 = local_1c + 1;
      if (vertex_count <= iVar7) {
        iVar7 = 0;
      }
      pSVar3 = vertices + iVar7;
      pSVar5 = vertices + local_1c;
      iVar7 = (pSVar5->projected_vertex).screen_y >> 0x10;
      iVar9 = (pSVar3->projected_vertex).screen_y >> 0x10;
      if (iVar7 != iVar9) {
        iVar2 = iVar9;
        pSVar6 = pSVar5;
        if ((pSVar3->projected_vertex).screen_y < (pSVar5->projected_vertex).screen_y) {
          iVar2 = iVar7;
          iVar7 = iVar9;
          pSVar6 = pSVar3;
          pSVar3 = pSVar5;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar7;
        iVar9 = g_MinScanline;
        g_SoftwareEdgeTable[iVar8].y_max = iVar2;
        if (iVar7 < iVar9) {
          g_MinScanline = iVar7;
        }
        if (g_MaxScanline < iVar2) {
          g_MaxScanline = iVar2;
        }
        uVar4 = (pSVar3->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar4 < 0x10000) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(0xffffffff / (ulonglong)uVar4);
        }
        uVar10 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar7 *
                (longlong)
                ((pSVar3->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].x_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].x_current =
             (pSVar6->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(pSVar3->u - pSVar6->u);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].u_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].u_current =
             pSVar6->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(pSVar3->v - pSVar6->v);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].v_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].v_current =
             pSVar6->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(pSVar3->light - pSVar6->light);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].z_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].z_current =
             pSVar6->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)((int)pSVar3->w_recip - (int)pSVar6->w_recip);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].fog_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].fog_current =
             (int)pSVar6->w_recip + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 *
                (longlong)
                ((pSVar3->projected_vertex).transformed_z - (pSVar6->projected_vertex).transformed_z
                );
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].w_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].w_current =
             (pSVar6->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(pSVar3->color - pSVar6->color);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].r_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].r_current =
             pSVar6->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(pSVar3->fog - pSVar6->fog);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar8].g_gradient = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        g_SoftwareEdgeTable[iVar8].g_current =
             pSVar6->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < vertex_count);
  }
  iVar8 = g_MinScanline;
  right_data = g_SoftwareEdgeTable;
  iVar7 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == right_data->y_min) && (right_data != (SSoftwareEdge *)0x0))
      goto LAB_0055361f;
      iVar7 = iVar7 + 1;
      right_data = right_data + 1;
    } while (iVar7 < g_ActiveEdgeCount);
  }
  right_data = (SSoftwareEdge *)0x0;
LAB_0055361f:
  if (right_data != (SSoftwareEdge *)0x0) {
    iVar7 = 0;
    local_14 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == local_14->y_min) && (local_14 != right_data)) goto LAB_0055365c;
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 1;
      } while (iVar7 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar7 = g_ActiveEdgeCount;
        if (right_data->y_max <= iVar8) {
          right_data->y_min = -1;
          iVar9 = 0;
          right_data = g_SoftwareEdgeTable;
          if (0 < iVar7) {
            do {
              if ((iVar8 == right_data->y_min) && (right_data != local_14)) goto LAB_005536b2;
              iVar9 = iVar9 + 1;
              right_data = right_data + 1;
            } while (iVar9 < g_ActiveEdgeCount);
          }
          right_data = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (right_data == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar7 = g_ActiveEdgeCount;
        if (local_14->y_max <= iVar8) {
          local_14->y_min = -1;
          local_14 = g_SoftwareEdgeTable;
          iVar9 = 0;
          if (iVar7 < 1) {
            return;
          }
          while ((iVar8 != local_14->y_min || (local_14 == right_data))) {
            iVar9 = iVar9 + 1;
            local_14 = local_14 + 1;
            if (g_ActiveEdgeCount <= iVar9) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(local_14,right_data,iVar8);
        right_data->x_current = right_data->x_current + right_data->x_gradient;
        right_data->u_current = right_data->u_current + right_data->u_gradient;
        right_data->v_current = right_data->v_current + right_data->v_gradient;
        right_data->w_current = right_data->w_current + right_data->w_gradient;
        right_data->z_current = right_data->z_current + right_data->z_gradient;
        right_data->r_current = right_data->r_current + right_data->r_gradient;
        right_data->g_current = right_data->g_current + right_data->g_gradient;
        right_data->fog_current = right_data->fog_current + right_data->fog_gradient;
        *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *(int *)(iVar8 + 0xc);
        *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x1c);
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24);
        *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x14);
        *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + *(int *)(iVar8 + 0x3c);
        *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + *(int *)(iVar8 + 0x44);
        *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + *(int *)(iVar8 + 0x34);
      } while( true );
    }
  }
  return;
}
