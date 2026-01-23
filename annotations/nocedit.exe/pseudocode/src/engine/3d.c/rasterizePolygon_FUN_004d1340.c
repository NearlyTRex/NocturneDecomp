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
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  SRenderVertex **local_24;
  int local_20;
  SHardwareEdge *local_18;
  SHardwareEdge *local_14;
  
  g_EdgeCount = 0;
  g_EdgeListMinY = g_WindowHeight;
  g_EdgeListMaxY = 0;
  local_20 = 0;
  if (0 < vertex_count) {
    local_24 = vertices;
    iVar7 = g_EdgeCount;
    do {
      iVar3 = local_20 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar9 = vertices[iVar3];
      pSVar1 = *local_24;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar1->projected_vertex).screen_y >> 0x10;
      g_EdgeCount = iVar7;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar6 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar6 = pSVar9;
          pSVar9 = pSVar1;
        }
        g_HardwareEdgeTable[iVar7].y_min = iVar3;
        iVar4 = g_EdgeListMinY;
        g_HardwareEdgeTable[iVar7].y_max = iVar5;
        if (iVar3 < iVar4) {
          g_EdgeListMinY = iVar3;
        }
        if (g_EdgeListMaxY < iVar5) {
          g_EdgeListMaxY = iVar5;
        }
        g_HardwareEdgeTable[iVar7].x_current = (pSVar6->projected_vertex).screen_x;
        g_HardwareEdgeTable[iVar7].u_current = (int)pSVar6->u;
        g_HardwareEdgeTable[iVar7].v_current = (int)pSVar6->v;
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
        g_HardwareEdgeTable[iVar7].x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->u - (int)pSVar6->u);
        g_HardwareEdgeTable[iVar7].u_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->v - (int)pSVar6->v);
        g_HardwareEdgeTable[iVar7].v_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar7].x_gradient;
        g_HardwareEdgeTable[iVar7].x_current =
             g_HardwareEdgeTable[iVar7].x_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar7].u_gradient;
        iVar3 = g_HardwareEdgeTable[iVar7].v_gradient;
        g_HardwareEdgeTable[iVar7].u_current =
             g_HardwareEdgeTable[iVar7].u_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)iVar3;
        g_EdgeCount = g_EdgeCount + 1;
        g_HardwareEdgeTable[iVar7].v_current =
             g_HardwareEdgeTable[iVar7].v_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      iVar7 = g_EdgeCount;
    } while (local_20 < vertex_count);
  }
  iVar7 = g_EdgeListMinY;
  local_18 = g_HardwareEdgeTable;
  iVar3 = 0;
  if (0 < g_EdgeCount) {
    do {
      if ((g_EdgeListMinY == local_18->y_min) && (local_18 != (SHardwareEdge *)0x0))
      goto LAB_004d13e0;
      iVar3 = iVar3 + 1;
      local_18 = local_18 + 1;
    } while (iVar3 < g_EdgeCount);
  }
  local_18 = (SHardwareEdge *)0x0;
LAB_004d13e0:
  if (local_18 != (SHardwareEdge *)0x0) {
    iVar3 = 0;
    local_14 = g_HardwareEdgeTable;
    if (0 < g_EdgeCount) {
      do {
        if ((g_EdgeListMinY == local_14->y_min) && (local_14 != local_18)) goto LAB_004d1419;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 1;
      } while (iVar3 < g_EdgeCount);
    }
    local_14 = (SHardwareEdge *)0x0;
LAB_004d1419:
    if (local_14 != (SHardwareEdge *)0x0) {
      do {
        if (local_18->y_max <= iVar7) {
          local_18->y_min = -1;
          local_18 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar7 == local_18->y_min) && (local_18 != local_14)) goto LAB_004d1472;
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
        if (local_14->y_max <= iVar7) {
          local_14->y_min = -1;
          local_14 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar7 == local_14->y_min) && (local_14 != local_18)) goto LAB_004d14c2;
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
        wincore_windll_cpp_renderScanline_FUN_005b5710(local_14,local_18,iVar7);
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
        *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
        local_18->x_current = local_18->x_current + local_18->x_gradient;
        local_18->u_current = local_18->u_current + local_18->u_gradient;
        local_18->v_current = local_18->v_current + local_18->v_gradient;
      } while( true );
    }
  }
  return;
}
