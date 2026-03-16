// Name: engine_3d.c_rasterizePolygonHardware_FUN_004d1340
// Address: 004d1340
// Address Range: [[004d1340, 004d16a3]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_004d1340(SRenderVertex **vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_004d1340(SRenderVertex **vertices,int vertex_count)

{
  longlong lVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar6;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  SRenderVertex **local_24;
  int local_20;
  SHardwareEdge *local_18;
  SHardwareEdge *local_14;
  longlong lVar2;
  SRenderVertex *pSVar1;
  
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
      iVar2 = (pSVar1->projected_vertex).screen_y >> 0x10;
      g_EdgeCount = iVar7;
      if (iVar2 != iVar4) {
        iVar5 = iVar4;
        pSVar6 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar2;
          iVar2 = iVar4;
          pSVar6 = pSVar9;
          pSVar9 = pSVar1;
        }
        g_HardwareEdgeTable[iVar7].y_min = iVar2;
        iVar6 = g_EdgeListMinY;
        g_HardwareEdgeTable[iVar7].y_max = iVar5;
        if (iVar2 < iVar6) {
          g_EdgeListMinY = iVar2;
        }
        if (g_EdgeListMaxY < iVar5) {
          g_EdgeListMaxY = iVar5;
        }
        g_HardwareEdgeTable[iVar7].x_current = (pSVar6->projected_vertex).screen_x;
        g_HardwareEdgeTable[iVar7].u_current = pSVar6->u;
        g_HardwareEdgeTable[iVar7].v_current = pSVar6->v;
        uVar8 = (pSVar9->projected_vertex).screen_y - (pSVar6->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar2 = (longlong)iVar2 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar6->projected_vertex).screen_x);
        g_HardwareEdgeTable[iVar7].x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->u - pSVar6->u);
        g_HardwareEdgeTable[iVar7].u_gradient =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)(pSVar9->v - pSVar6->v);
        g_HardwareEdgeTable[iVar7].v_gradient =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        uVar7 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)g_HardwareEdgeTable[iVar7].x_gradient;
        g_HardwareEdgeTable[iVar7].x_current =
             g_HardwareEdgeTable[iVar7].x_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)g_HardwareEdgeTable[iVar7].u_gradient;
        iVar2 = g_HardwareEdgeTable[iVar7].v_gradient;
        g_HardwareEdgeTable[iVar7].u_current =
             g_HardwareEdgeTable[iVar7].u_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)iVar2;
        g_EdgeCount = g_EdgeCount + 1;
        g_HardwareEdgeTable[iVar7].v_current =
             g_HardwareEdgeTable[iVar7].v_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      iVar7 = g_EdgeCount;
    } while (local_20 < vertex_count);
  }
  iVar2 = g_EdgeListMinY;
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
    if (local_14 != (SHardwareEdge *)0x0) {
      do {
        if (local_18->y_max <= iVar2) {
          local_18->y_min = -1;
          local_18 = g_HardwareEdgeTable;
          iVar6 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar2 == local_18->y_min) && (local_18 != local_14)) goto LAB_004d1472;
              iVar6 = iVar6 + 1;
              local_18 = local_18 + 1;
            } while (iVar6 < g_EdgeCount);
          }
          local_18 = (SHardwareEdge *)0x0;
LAB_004d1472:
          if (local_18 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        if (local_14->y_max <= iVar2) {
          local_14->y_min = -1;
          local_14 = g_HardwareEdgeTable;
          iVar6 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar2 == local_14->y_min) && (local_14 != local_18)) goto LAB_004d14c2;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 1;
            } while (iVar6 < g_EdgeCount);
          }
          local_14 = (SHardwareEdge *)0x0;
LAB_004d14c2:
          if (local_14 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(local_14,local_18,iVar2);
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc);
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x1c);
        *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + *(int *)(iVar2 + 0x24);
        local_18->x_current = local_18->x_current + local_18->x_gradient;
        local_18->u_current = local_18->u_current + local_18->u_gradient;
        local_18->v_current = local_18->v_current + local_18->v_gradient;
      } while( true );
    }
  }
  return;
}
