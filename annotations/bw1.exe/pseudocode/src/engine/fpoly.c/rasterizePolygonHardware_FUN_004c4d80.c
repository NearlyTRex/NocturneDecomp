// Name: engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80
// Address: 004c4d80
// Address Range: [[004c4d80, 004c50e3]]
// Convention: __cdecl
// Signature: void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80(SRenderVertex **vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004c4d80(SRenderVertex **vertices,int vertex_count)

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
  int local_1c;
  int *local_18;
  int *local_14;
  
  _DAT_01cc8ce8 = 0;
  _DAT_01cc906c = DAT_0061b49c;
  _DAT_01cc9070 = 0;
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
        iVar6 = _DAT_01cc8ce8 * 0x38;
        *(int *)(&DAT_01cc8cec + iVar6) = iVar3;
        iVar4 = _DAT_01cc906c;
        *(int *)(iVar6 + 0x1cc8cf0) = iVar5;
        if (iVar3 < iVar4) {
          _DAT_01cc906c = iVar3;
        }
        if (_DAT_01cc9070 < iVar5) {
          _DAT_01cc9070 = iVar5;
        }
        *(int *)(iVar6 + 0x1cc8cf4) = (pSVar7->projected_vertex).screen_x;
        *(int *)(iVar6 + 0x1cc8d04) = pSVar7->u;
        *(int *)(iVar6 + 0x1cc8d0c) = pSVar7->v;
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
        *(uint *)(iVar6 + 0x1cc8cf8) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->u - pSVar7->u);
        *(uint *)(iVar6 + 0x1cc8d08) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        lVar2 = (longlong)iVar3 * (longlong)(pSVar9->v - pSVar7->v);
        *(uint *)(iVar6 + 0x1cc8d10) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10
        ;
        uVar8 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1cc8cf8);
        *(int *)(iVar6 + 0x1cc8cf4) =
             *(int *)(iVar6 + 0x1cc8cf4) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1cc8d08);
        *(uint *)(iVar6 + 0x1cc8d04) =
             *(int *)(iVar6 + 0x1cc8d04) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)*(int *)(iVar6 + 0x1cc8d10);
        _DAT_01cc8ce8 = _DAT_01cc8ce8 + 1;
        *(uint *)(iVar6 + 0x1cc8d0c) =
             *(int *)(iVar6 + 0x1cc8d0c) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < vertex_count);
  }
  local_18 = (int *)&DAT_01cc8cec;
  iVar3 = 0;
  if (0 < _DAT_01cc8ce8) {
    do {
      if ((_DAT_01cc906c == *local_18) && (local_18 != (int *)0x0)) goto LAB_004c4e20;
      iVar3 = iVar3 + 1;
      local_18 = local_18 + 0xe;
    } while (iVar3 < _DAT_01cc8ce8);
  }
  local_18 = (int *)0x0;
LAB_004c4e20:
  if (local_18 != (int *)0x0) {
    iVar3 = 0;
    local_14 = (int *)&DAT_01cc8cec;
    if (0 < _DAT_01cc8ce8) {
      do {
        if ((_DAT_01cc906c == *local_14) && (local_14 != local_18)) goto LAB_004c4e59;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 0xe;
      } while (iVar3 < _DAT_01cc8ce8);
    }
    local_14 = (int *)0x0;
LAB_004c4e59:
    if (local_14 != (int *)0x0) {
      local_1c = _DAT_01cc906c;
      do {
        if (local_18[1] <= local_1c) {
          *local_18 = -1;
          local_18 = (int *)&DAT_01cc8cec;
          iVar3 = 0;
          if (0 < _DAT_01cc8ce8) {
            do {
              if ((local_1c == *local_18) && (local_18 != local_14)) goto LAB_004c4eb2;
              iVar3 = iVar3 + 1;
              local_18 = local_18 + 0xe;
            } while (iVar3 < _DAT_01cc8ce8);
          }
          local_18 = (int *)0x0;
LAB_004c4eb2:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        if (local_14[1] <= local_1c) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01cc8cec;
          iVar3 = 0;
          if (0 < _DAT_01cc8ce8) {
            do {
              if ((local_1c == *local_14) && (local_14 != local_18)) goto LAB_004c4f02;
              iVar3 = iVar3 + 1;
              local_14 = local_14 + 0xe;
            } while (iVar3 < _DAT_01cc8ce8);
          }
          local_14 = (int *)0x0;
LAB_004c4f02:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00580127();
        local_18[2] = local_18[2] + local_18[3];
        local_18[6] = local_18[6] + local_18[7];
        local_18[8] = local_18[8] + local_18[9];
        local_1c = local_1c + 1;
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
      } while( true );
    }
  }
  return;
}
