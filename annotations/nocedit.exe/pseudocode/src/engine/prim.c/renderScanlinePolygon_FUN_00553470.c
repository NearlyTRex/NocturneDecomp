// Name: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 00553ae9]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderScanlinePolygon_FUN_00553470(SRenderVertex * vertices, int vertex_count)

#include "nocturne.h"

void __cdecl
engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  void *pvVar11;
  int unaff_ESI;
  int iVar12;
  uint uVar13;
  void *in_stack_ffffffdc;
  void *in_stack_ffffffe0;
  SSoftwareEdge *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar12 = 0, pSVar7 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar7->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar7->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar7->projected_vertex).transformed_z);
        (pSVar7->projected_vertex).screen_x =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar7->projected_vertex).screen_y =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar12 = iVar12 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar12 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar7 = vertices + 1;
    pSVar9 = vertices + 2;
    if (vertex_count < 4) {
      iVar12 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar7,pSVar9);
      if (iVar12 == 0) {
        return;
      }
    }
    else {
      in_stack_ffffffe0 = (void *)(vertex_count + -2);
      iVar12 = 0;
      pvVar11 = (void *)0x0;
      if (0 < (int)in_stack_ffffffe0) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar7,pSVar9);
          if (iVar2 == 0) {
            pvVar11 = (void *)((int)pvVar11 + 1);
          }
          pSVar7 = pSVar7 + 1;
          iVar12 = iVar12 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iVar12 < (int)in_stack_ffffffe0);
      }
      if (pvVar11 == in_stack_ffffffe0) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0(vertices,vertex_count,g_RenderStateFlags);
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
  iVar12 = 0;
  g_MinScanline = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = g_ActiveEdgeCount;
      iVar3 = iVar12 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar7 = vertices + iVar3;
      pSVar9 = vertices + iVar12;
      iVar3 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar4 = (pSVar7->projected_vertex).screen_y >> 0x10;
      if (iVar3 != iVar4) {
        iVar6 = iVar4;
        pSVar10 = pSVar9;
        if ((pSVar7->projected_vertex).screen_y < (pSVar9->projected_vertex).screen_y) {
          iVar6 = iVar3;
          iVar3 = iVar4;
          pSVar10 = pSVar7;
          pSVar7 = pSVar9;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar3;
        iVar4 = g_MinScanline;
        g_SoftwareEdgeTable[iVar2].y_max = iVar6;
        if (iVar3 < iVar4) {
          g_MinScanline = iVar3;
        }
        if (g_MaxScanline < iVar6) {
          g_MaxScanline = iVar6;
        }
        uVar8 = (pSVar7->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        uVar13 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar3 *
                (longlong)
                ((pSVar7->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].x_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].x_current =
             (pSVar10->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar7->u - (int)pSVar10->u);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].u_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].u_current =
             (int)pSVar10->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar7->v - (int)pSVar10->v);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].v_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].v_current =
             (int)pSVar10->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar7->light - (int)pSVar10->light);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].z_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].z_current =
             (int)pSVar10->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar7->w_recip - (int)pSVar10->w_recip);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].fog_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].fog_current =
             (int)pSVar10->w_recip + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
        ;
        lVar1 = (longlong)iVar3 *
                (longlong)
                ((pSVar7->projected_vertex).transformed_z -
                (pSVar10->projected_vertex).transformed_z);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].w_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].w_current =
             (pSVar10->projected_vertex).transformed_z +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(pSVar7->color - pSVar10->color);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].r_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        in_stack_ffffffdc = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeTable[iVar2].r_current = pSVar10->color + (int)in_stack_ffffffdc;
        lVar1 = (longlong)iVar3 * (longlong)((int)pSVar7->fog - (int)pSVar10->fog);
        uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].g_gradient = uVar8;
        lVar1 = (longlong)(int)uVar13 * (longlong)(int)uVar8;
        g_SoftwareEdgeTable[iVar2].g_current =
             (int)pSVar10->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < vertex_count);
  }
  iVar2 = g_MinScanline;
  pSVar5 = g_SoftwareEdgeTable;
  iVar3 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == pSVar5->y_min) && (pSVar5 != (SSoftwareEdge *)0x0)) goto LAB_0055361f;
      iVar3 = iVar3 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar3 < g_ActiveEdgeCount);
  }
  pSVar5 = (SSoftwareEdge *)0x0;
LAB_0055361f:
  if (pSVar5 != (SSoftwareEdge *)0x0) {
    iVar3 = 0;
    local_14 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == local_14->y_min) && (local_14 != pSVar5)) goto LAB_0055365c;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < g_ActiveEdgeCount);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        iVar3 = g_ActiveEdgeCount;
        if (pSVar5->y_max <= iVar2) {
          pSVar5->y_min = -1;
          iVar4 = 0;
          pSVar5 = g_SoftwareEdgeTable;
          if (0 < iVar3) {
            do {
              if ((iVar2 == pSVar5->y_min) && (pSVar5 != local_14)) goto LAB_005536b2;
              iVar4 = iVar4 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar4 < g_ActiveEdgeCount);
          }
          pSVar5 = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (pSVar5 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar3 = g_ActiveEdgeCount;
        if (local_14->y_max <= iVar2) {
          local_14->y_min = -1;
          local_14 = g_SoftwareEdgeTable;
          iVar4 = 0;
          if (iVar3 < 1) {
            return;
          }
          while ((iVar2 != local_14->y_min || (local_14 == pSVar5))) {
            iVar4 = iVar4 + 1;
            local_14 = local_14 + 1;
            if (g_ActiveEdgeCount <= iVar4) {
              return;
            }
          }
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffdc,in_stack_ffffffe0,iVar12);
        pSVar5->x_current = pSVar5->x_current + pSVar5->x_gradient;
        pSVar5->u_current = pSVar5->u_current + pSVar5->u_gradient;
        pSVar5->v_current = pSVar5->v_current + pSVar5->v_gradient;
        pSVar5->w_current = pSVar5->w_current + pSVar5->w_gradient;
        pSVar5->z_current = pSVar5->z_current + pSVar5->z_gradient;
        pSVar5->r_current = pSVar5->r_current + pSVar5->r_gradient;
        pSVar5->g_current = pSVar5->g_current + pSVar5->g_gradient;
        pSVar5->fog_current = pSVar5->fog_current + pSVar5->fog_gradient;
        *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
        *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
        *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c);
        *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + *(int *)(unaff_ESI + 0x14);
        *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x3c);
        *(int *)(unaff_ESI + 0x40) = *(int *)(unaff_ESI + 0x40) + *(int *)(unaff_ESI + 0x44);
        *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_ESI + 0x34);
      } while( true );
    }
  }
  return;
}
