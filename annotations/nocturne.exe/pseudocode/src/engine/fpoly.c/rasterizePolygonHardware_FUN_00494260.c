// Name: engine_fpoly.c_rasterizePolygonHardware_FUN_00494260
// Address: 00494260
// Address Range: [[00494260, 004945c3]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_00494260(SRenderVertex **vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_00494260(SRenderVertex **vertices,int vertex_count)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  SRenderVertex **local_24;
  int local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  _DAT_01c70f78 = 0;
  _DAT_01c712fc = g_WindowHeight;
  _DAT_01c71300 = 0;
  local_20 = 0;
  if (0 < vertex_count) {
    local_24 = vertices;
    do {
      iVar3 = local_20 + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar9 = vertices[iVar3];
      pSVar1 = *local_24;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar1->projected_vertex).screen_y >> 0x10;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar7 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar7 = pSVar9;
          pSVar9 = pSVar1;
        }
        iVar6 = _DAT_01c70f78 * 0x38;
        *(int *)(&DAT_01c70f7c + iVar6) = iVar3;
        iVar4 = _DAT_01c712fc;
        *(int *)(iVar6 + 0x1c70f80) = iVar5;
        if (iVar3 < iVar4) {
          _DAT_01c712fc = iVar3;
        }
        if (_DAT_01c71300 < iVar5) {
          _DAT_01c71300 = iVar5;
        }
        *(int *)(iVar6 + 0x1c70f84) = (pSVar7->projected_vertex).screen_x;
        *(int *)(iVar6 + 0x1c70f94) = pSVar7->u;
        *(int *)(iVar6 + 0x1c70f9c) = pSVar7->v;
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
        *(uint *)(iVar6 + 0x1c70f88) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->u - pSVar7->u);
        *(uint *)(iVar6 + 0x1c70f98) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->v - pSVar7->v);
        *(uint *)(iVar6 + 0x1c70fa0) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        uVar8 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1c70f88);
        *(int *)(iVar6 + 0x1c70f84) =
             *(int *)(iVar6 + 0x1c70f84) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1c70f98);
        *(uint *)(iVar6 + 0x1c70f94) =
             *(int *)(iVar6 + 0x1c70f94) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1c70fa0);
        _DAT_01c70f78 = _DAT_01c70f78 + 1;
        *(uint *)(iVar6 + 0x1c70f9c) =
             *(int *)(iVar6 + 0x1c70f9c) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < vertex_count);
  }
  iVar3 = _DAT_01c712fc;
  local_18 = (SSoftwareEdge *)&DAT_01c70f7c;
  iVar4 = 0;
  if (0 < _DAT_01c70f78) {
    do {
      if ((_DAT_01c712fc == (local_18->base).y_min) && (local_18 != (SSoftwareEdge *)0x0))
      goto LAB_00494300;
      iVar4 = iVar4 + 1;
      local_18 = (SSoftwareEdge *)&local_18->green_current;
    } while (iVar4 < _DAT_01c70f78);
  }
  local_18 = (SSoftwareEdge *)0x0;
LAB_00494300:
  if (local_18 != (SSoftwareEdge *)0x0) {
    iVar4 = 0;
    local_14 = (SSoftwareEdge *)&DAT_01c70f7c;
    if (0 < _DAT_01c70f78) {
      do {
        if ((_DAT_01c712fc == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_00494339;
        iVar4 = iVar4 + 1;
        local_14 = (SSoftwareEdge *)&local_14->green_current;
      } while (iVar4 < _DAT_01c70f78);
    }
    local_14 = (SSoftwareEdge *)0x0;
LAB_00494339:
    if (local_14 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_18->base).y_max <= iVar3) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_01c70f7c;
          iVar4 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((iVar3 == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_00494392;
              iVar4 = iVar4 + 1;
              local_18 = (SSoftwareEdge *)&local_18->green_current;
            } while (iVar4 < _DAT_01c70f78);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_00494392:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_14->base).y_max <= iVar3) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_01c70f7c;
          iVar4 = 0;
          if (0 < _DAT_01c70f78) {
            do {
              if ((iVar3 == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_004943e2;
              iVar4 = iVar4 + 1;
              local_14 = (SSoftwareEdge *)&local_14->green_current;
            } while (iVar4 < _DAT_01c70f78);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_004943e2:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00530710(local_14,local_18,iVar3);
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc);
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x1c);
        *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24);
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
        (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
      } while( true );
    }
  }
  return;
}
