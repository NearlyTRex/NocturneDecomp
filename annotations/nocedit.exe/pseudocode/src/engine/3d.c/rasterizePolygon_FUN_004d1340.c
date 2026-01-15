// Name: engine_3d.c_rasterizePolygon_FUN_004d1340
// Address: 004d1340
// Address Range: [[004d1340, 004d16a3]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizePolygon_FUN_004d1340(SRenderVertex * * vertices, int vertex_count)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygon_FUN_004d1340(SRenderVertex **vertices,int vertex_count)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int unaff_ESI;
  uint uVar8;
  int unaff_EDI;
  SRenderVertex *pSVar9;
  SRenderVertex **in_stack_ffffffdc;
  SRenderVertex **ppSVar10;
  void *right_data;
  SHardwareEdge *local_18;
  SHardwareEdge *local_14;
  
  g_EdgeCount = 0;
  g_EdgeListMinY = g_WindowHeight;
  g_EdgeListMaxY = 0;
  right_data = (void *)0x0;
  iVar6 = g_EdgeCount;
  ppSVar10 = vertices;
  if (0 < vertex_count) {
    do {
      iVar3 = (int)right_data + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar9 = vertices[iVar3];
      pSVar1 = *ppSVar10;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar1->projected_vertex).screen_y >> 0x10;
      g_EdgeCount = iVar6;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar7 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar7 = pSVar9;
          pSVar9 = pSVar1;
        }
        g_HardwareEdgeTable[iVar6].y_min = iVar3;
        iVar4 = g_EdgeListMinY;
        g_HardwareEdgeTable[iVar6].y_max = iVar5;
        if (iVar3 < iVar4) {
          g_EdgeListMinY = iVar3;
        }
        if (g_EdgeListMaxY < iVar5) {
          g_EdgeListMaxY = iVar5;
        }
        g_HardwareEdgeTable[iVar6].x_current = (pSVar7->projected_vertex).screen_x;
        g_HardwareEdgeTable[iVar6].u_current = (int)pSVar7->u;
        g_HardwareEdgeTable[iVar6].v_current = (int)pSVar7->v;
        uVar8 = (pSVar9->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar2 = (longlong)iVar3 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        g_HardwareEdgeTable[iVar6].x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->u - (int)pSVar7->u);
        g_HardwareEdgeTable[iVar6].u_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->v - (int)pSVar7->v);
        g_HardwareEdgeTable[iVar6].v_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar6].x_gradient;
        g_HardwareEdgeTable[iVar6].x_current =
             g_HardwareEdgeTable[iVar6].x_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar6].u_gradient;
        iVar3 = g_HardwareEdgeTable[iVar6].v_gradient;
        g_HardwareEdgeTable[iVar6].u_current =
             g_HardwareEdgeTable[iVar6].u_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)iVar3;
        g_EdgeCount = g_EdgeCount + 1;
        g_HardwareEdgeTable[iVar6].v_current =
             g_HardwareEdgeTable[iVar6].v_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      in_stack_ffffffdc = ppSVar10 + 1;
      right_data = (void *)((int)right_data + 1);
      iVar6 = g_EdgeCount;
      ppSVar10 = in_stack_ffffffdc;
    } while ((int)right_data < vertex_count);
  }
  local_18 = g_HardwareEdgeTable;
  iVar6 = 0;
  if (0 < g_EdgeCount) {
    do {
      if ((g_EdgeListMinY == local_18->y_min) && (local_18 != (SHardwareEdge *)0x0))
      goto LAB_004d13e0;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 1;
    } while (iVar6 < g_EdgeCount);
  }
  local_18 = (SHardwareEdge *)0x0;
LAB_004d13e0:
  if (local_18 != (SHardwareEdge *)0x0) {
    iVar6 = 0;
    local_14 = g_HardwareEdgeTable;
    if (0 < g_EdgeCount) {
      do {
        if ((g_EdgeListMinY == local_14->y_min) && (local_14 != local_18)) goto LAB_004d1419;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
      } while (iVar6 < g_EdgeCount);
    }
    local_14 = (SHardwareEdge *)0x0;
LAB_004d1419:
    iVar6 = g_EdgeListMinY;
    if (local_14 != (SHardwareEdge *)0x0) {
      do {
        if (local_18->y_max <= iVar6) {
          local_18->y_min = -1;
          local_18 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar6 == local_18->y_min) && (local_18 != local_14)) goto LAB_004d1472;
              iVar3 = iVar3 + 1;
              local_18 = local_18 + 1;
            } while (iVar3 < g_EdgeCount);
          }
          local_18 = (SHardwareEdge *)0x0;
LAB_004d1472:
          if (local_18 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        if (local_14->y_max <= iVar6) {
          local_14->y_min = -1;
          local_14 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar6 == local_14->y_min) && (local_14 != local_18)) goto LAB_004d14c2;
              iVar3 = iVar3 + 1;
              local_14 = local_14 + 1;
            } while (iVar3 < g_EdgeCount);
          }
          local_14 = (SHardwareEdge *)0x0;
LAB_004d14c2:
          if (local_14 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffdc,right_data,iVar6);
        *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + *(int *)(unaff_EDI + 0xc);
        *(int *)(unaff_EDI + 0x18) = *(int *)(unaff_EDI + 0x18) + *(int *)(unaff_EDI + 0x1c);
        *(int *)(unaff_EDI + 0x20) = *(int *)(unaff_EDI + 0x20) + *(int *)(unaff_EDI + 0x24);
        *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + *(int *)(unaff_ESI + 0xc);
        *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c);
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + *(int *)(unaff_ESI + 0x24);
      } while( true );
    }
  }
  return;
}
