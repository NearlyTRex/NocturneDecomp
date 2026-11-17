// Name: engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0
// Address: 004abdd0
// Address Range: [[004abdd0, 004ac133]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0(SRenderVertex **vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004abdd0(SRenderVertex **vertices,int vertex_count)

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
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  g_INT_01cb0258 = 0;
  g_INT_01cb05dc = g_INT_006141bc;
  g_INT_01cb05e0 = 0;
  local_20 = 0;
  if (0 < vertex_count) {
    local_24 = vertices;
    iVar7 = g_INT_01cb0258;
    do {
      iVar3 = local_20 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar9 = vertices[iVar3];
      pSVar1 = *local_24;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar1->projected_vertex).screen_y >> 0x10;
      g_INT_01cb0258 = iVar7;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar6 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar6 = pSVar9;
          pSVar9 = pSVar1;
        }
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].y_min = iVar3;
        iVar4 = g_INT_01cb05dc;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].y_max = iVar5;
        if (iVar3 < iVar4) {
          g_INT_01cb05dc = iVar3;
        }
        if (g_INT_01cb05e0 < iVar5) {
          g_INT_01cb05e0 = iVar5;
        }
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].x_current = (pSVar6->projected_vertex).screen_x;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].u_current = pSVar6->u;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].v_current = pSVar6->v;
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
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->u - pSVar6->u);
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].u_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->v - pSVar6->v);
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].v_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar6->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_SHardwareEdge_ARRAY_01cb025c[iVar7].x_gradient;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].x_current =
             g_SHardwareEdge_ARRAY_01cb025c[iVar7].x_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_SHardwareEdge_ARRAY_01cb025c[iVar7].u_gradient;
        iVar3 = g_SHardwareEdge_ARRAY_01cb025c[iVar7].v_gradient;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].u_current =
             g_SHardwareEdge_ARRAY_01cb025c[iVar7].u_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)iVar3;
        g_INT_01cb0258 = g_INT_01cb0258 + 1;
        g_SHardwareEdge_ARRAY_01cb025c[iVar7].v_current =
             g_SHardwareEdge_ARRAY_01cb025c[iVar7].v_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      iVar7 = g_INT_01cb0258;
    } while (local_20 < vertex_count);
  }
  iVar7 = g_INT_01cb05dc;
  local_18 = (SSoftwareEdge *)g_SHardwareEdge_ARRAY_01cb025c;
  iVar3 = 0;
  if (0 < g_INT_01cb0258) {
    do {
      if ((g_INT_01cb05dc == (local_18->base).y_min) && (local_18 != (SSoftwareEdge *)0x0))
      goto LAB_004abe70;
      iVar3 = iVar3 + 1;
      local_18 = (SSoftwareEdge *)&local_18->green_current;
    } while (iVar3 < g_INT_01cb0258);
  }
  local_18 = (SSoftwareEdge *)0x0;
LAB_004abe70:
  if (local_18 != (SSoftwareEdge *)0x0) {
    iVar3 = 0;
    local_14 = (SSoftwareEdge *)g_SHardwareEdge_ARRAY_01cb025c;
    if (0 < g_INT_01cb0258) {
      do {
        if ((g_INT_01cb05dc == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_004abea9;
        iVar3 = iVar3 + 1;
        local_14 = (SSoftwareEdge *)&local_14->green_current;
      } while (iVar3 < g_INT_01cb0258);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_004abea9:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_18->base).y_max <= iVar7) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)g_SHardwareEdge_ARRAY_01cb025c;
          iVar3 = 0;
          if (0 < g_INT_01cb0258) {
            do {
              if ((iVar7 == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_004abf02;
              iVar3 = iVar3 + 1;
              local_18 = (SSoftwareEdge *)&local_18->green_current;
            } while (iVar3 < g_INT_01cb0258);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_004abf02:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_14->base).y_max <= iVar7) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)g_SHardwareEdge_ARRAY_01cb025c;
          iVar3 = 0;
          if (0 < g_INT_01cb0258) {
            do {
              if ((iVar7 == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_004abf52;
              iVar3 = iVar3 + 1;
              local_14 = (SSoftwareEdge *)&local_14->green_current;
            } while (iVar3 < g_INT_01cb0258);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_004abf52:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_0055d6d7(local_14,local_18,iVar7);
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
        *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
        (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
      } while( true );
    }
  }
  return;
}
