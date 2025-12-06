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
  SSoftwareEdge *pSVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *v2;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int in_stack_0000000c;
  void *in_stack_ffffffe0;
  void *in_stack_ffffffe4;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar13 = 0, pSVar8 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar8->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar8->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar8->projected_vertex).transformed_z);
        (pSVar8->projected_vertex).screen_x =
             (int)(((longlong)(pSVar8->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar8->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar8->projected_vertex).screen_y =
             (int)(((longlong)(pSVar8->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar8->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar13 = iVar13 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar13 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar8 = vertices + 1;
    v2 = vertices + 2;
    if (vertex_count < 4) {
      iVar13 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar8,v2);
      if (iVar13 == 0) {
        return;
      }
    }
    else {
      in_stack_ffffffe0 = (void *)(vertex_count - 2);
      iVar13 = 0;
      pvVar12 = (void *)0x0;
      if (0 < (int)in_stack_ffffffe0) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            ((SRenderVertex *)vertex_count,pSVar8,v2);
          if (iVar2 == 0) {
            pvVar12 = (void *)((int)pvVar12 + 1);
          }
          pSVar8 = pSVar8 + 1;
          iVar13 = iVar13 + 1;
          v2 = v2 + 1;
        } while (iVar13 < (int)in_stack_ffffffe4);
      }
      if (pvVar12 == in_stack_ffffffe4) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,in_stack_0000000c,g_RenderStateFlags);
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110((SRenderVertex *)vertex_count,in_stack_0000000c);
  }
  g_MaxScanline = 0;
  g_ActiveEdgeCount = 0;
  iVar13 = 0;
  g_MinScanline = 0x4b0;
  if (0 < in_stack_0000000c) {
    do {
      iVar2 = g_ActiveEdgeCount;
      iVar3 = iVar13 + 1;
      if (in_stack_0000000c <= iVar3) {
        iVar3 = 0;
      }
      iVar9 = vertex_count + iVar3 * 0x30;
      iVar14 = iVar13 * 0x30 + vertex_count;
      iVar3 = *(int *)(iVar14 + 0x14) >> 0x10;
      iVar4 = *(int *)(iVar9 + 0x14) >> 0x10;
      if (iVar3 != iVar4) {
        iVar7 = iVar4;
        iVar11 = iVar14;
        if (*(int *)(iVar9 + 0x14) < *(int *)(iVar14 + 0x14)) {
          iVar7 = iVar3;
          iVar3 = iVar4;
          iVar11 = iVar9;
          iVar9 = iVar14;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar3;
        iVar4 = g_MinScanline;
        g_SoftwareEdgeTable[iVar2].y_max = iVar7;
        if (iVar3 < iVar4) {
          g_MinScanline = iVar3;
        }
        if (g_MaxScanline < iVar7) {
          g_MaxScanline = iVar7;
        }
        uVar10 = *(int *)(iVar9 + 0x14) - *(int *)(iVar11 + 0x14);
        if (uVar10 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar10);
        }
        uVar15 = (uint)(ushort)((ushort)*(uint *)(iVar11 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x10) - *(int *)(iVar11 + 0x10));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].x_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].x_current =
             *(int *)(iVar11 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x18) - *(int *)(iVar11 + 0x18));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].u_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].u_current =
             *(int *)(iVar11 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x1c) - *(int *)(iVar11 + 0x1c));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].v_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].v_current =
             *(int *)(iVar11 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x20) - *(int *)(iVar11 + 0x20));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].z_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].z_current =
             *(int *)(iVar11 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x2c) - *(int *)(iVar11 + 0x2c));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].fog_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].fog_current =
             *(int *)(iVar11 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 8) - *(int *)(iVar11 + 8));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].w_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].w_current =
             *(int *)(iVar11 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x24) - *(int *)(iVar11 + 0x24));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].r_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        in_stack_ffffffe0 = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeTable[iVar2].r_current = *(int *)(iVar11 + 0x24) + (int)in_stack_ffffffe0;
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x28) - *(int *)(iVar11 + 0x28));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].g_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].g_current =
             *(int *)(iVar11 + 0x28) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < in_stack_0000000c);
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
    pSVar6 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_0055365c;
        iVar3 = iVar3 + 1;
        pSVar6 = pSVar6 + 1;
      } while (iVar3 < g_ActiveEdgeCount);
    }
    pSVar6 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (pSVar6 != (SSoftwareEdge *)0x0) {
      do {
        iVar3 = g_ActiveEdgeCount;
        if (pSVar5->y_max <= iVar2) {
          pSVar5->y_min = -1;
          iVar9 = 0;
          pSVar5 = g_SoftwareEdgeTable;
          if (0 < iVar3) {
            do {
              if ((iVar2 == pSVar5->y_min) && (pSVar5 != pSVar6)) goto LAB_005536b2;
              iVar9 = iVar9 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar9 < g_ActiveEdgeCount);
          }
          pSVar5 = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (pSVar5 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar3 = g_ActiveEdgeCount;
        if (pSVar6->y_max <= iVar2) {
          pSVar6->y_min = -1;
          pSVar6 = g_SoftwareEdgeTable;
          iVar9 = 0;
          if (iVar3 < 1) {
            return;
          }
          while ((iVar2 != pSVar6->y_min || (pSVar6 == pSVar5))) {
            iVar9 = iVar9 + 1;
            pSVar6 = pSVar6 + 1;
            if (g_ActiveEdgeCount <= iVar9) {
              return;
            }
          }
          if (pSVar6 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffe0,in_stack_ffffffe4,iVar13);
        pSVar5->x_current = pSVar5->x_current + pSVar5->x_gradient;
        pSVar5->u_current = pSVar5->u_current + pSVar5->u_gradient;
        pSVar5->v_current = pSVar5->v_current + pSVar5->v_gradient;
        pSVar5->w_current = pSVar5->w_current + pSVar5->w_gradient;
        pSVar5->z_current = pSVar5->z_current + pSVar5->z_gradient;
        pSVar5->r_current = pSVar5->r_current + pSVar5->r_gradient;
        pSVar5->g_current = pSVar5->g_current + pSVar5->g_gradient;
        pSVar5->fog_current = pSVar5->fog_current + pSVar5->fog_gradient;
        *(int *)(in_stack_0000000c + 8) =
             *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
        *(int *)(in_stack_0000000c + 0x18) =
             *(int *)(in_stack_0000000c + 0x18) + *(int *)(in_stack_0000000c + 0x1c);
        *(int *)(in_stack_0000000c + 0x20) =
             *(int *)(in_stack_0000000c + 0x20) + *(int *)(in_stack_0000000c + 0x24);
        *(int *)(in_stack_0000000c + 0x28) =
             *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
        *(int *)(in_stack_0000000c + 0x10) =
             *(int *)(in_stack_0000000c + 0x10) + *(int *)(in_stack_0000000c + 0x14);
        *(int *)(in_stack_0000000c + 0x38) =
             *(int *)(in_stack_0000000c + 0x38) + *(int *)(in_stack_0000000c + 0x3c);
        *(int *)(in_stack_0000000c + 0x40) =
             *(int *)(in_stack_0000000c + 0x40) + *(int *)(in_stack_0000000c + 0x44);
        *(int *)(in_stack_0000000c + 0x30) =
             *(int *)(in_stack_0000000c + 0x30) + *(int *)(in_stack_0000000c + 0x34);
      } while( true );
    }
  }
  return;
}
