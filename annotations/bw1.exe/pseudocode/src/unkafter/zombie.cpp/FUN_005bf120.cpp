// Name: unkafter_zombie.cpp_FUN_005bf120
// Address: 005bf120
// Address Range: [[005bf120, 005bf617]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_zombie_cpp_FUN_005bf120(SRenderVertex *vertex_buffer,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_zombie_cpp_FUN_005bf120(SRenderVertex *vertex_buffer,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *local_20;
  int *local_18;
  int *local_14;
  
  if ((DAT_0061b4c0 != 0) && (iVar9 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((_DAT_01c51d18 & 6) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((_DAT_01c51d18 & 1) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)_DAT_01c4eff8) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c4f000;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)_DAT_01c4effc) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c4f004;
      }
      iVar9 = iVar9 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((DAT_00713a7c != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar9 == 0)) {
    return;
  }
  _DAT_01e7dac8 = _DAT_01e7dac8 + 1;
  if ((_DAT_01c50948 != 0) && (DAT_00713a74 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00582340(vertex_buffer,vertex_count,_DAT_01c51d14);
    return;
  }
  if (_DAT_01c51d18 != 0) {
    if (_DAT_01c51d18 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(vertex_buffer,vertex_count);
    }
    else if (_DAT_01c51d18 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_0053dd20(vertex_buffer,vertex_count);
    }
  }
  _DAT_02c9eb34 = 0;
  iVar9 = 0;
  _DAT_02c9f03c = 0;
  _DAT_02c9f038 = 0x4b0;
  if (0 < vertex_count) {
    do {
      iVar2 = iVar9 + 1;
      if (vertex_count <= iVar2) {
        iVar2 = 0;
      }
      local_20 = vertex_buffer + iVar2;
      pSVar6 = vertex_buffer + iVar9;
      iVar2 = (pSVar6->projected_vertex).screen_y >> 0x10;
      iVar3 = (local_20->projected_vertex).screen_y >> 0x10;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        pSVar10 = pSVar6;
        if ((local_20->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          iVar4 = iVar2;
          iVar2 = iVar3;
          pSVar10 = local_20;
          local_20 = pSVar6;
        }
        iVar8 = _DAT_02c9eb34 * 0x50;
        *(int *)(&DAT_02c9eb38 + iVar8) = iVar2;
        iVar3 = _DAT_02c9f038;
        *(int *)(iVar8 + 0x2c9eb3c) = iVar4;
        if (iVar2 < iVar3) {
          _DAT_02c9f038 = iVar2;
        }
        if (_DAT_02c9f03c < iVar4) {
          _DAT_02c9f03c = iVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar7 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar2 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2c9eb44) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar8 + 0x2c9eb40) =
             (pSVar10->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar10->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2c9eb64) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_02c9eb34 = _DAT_02c9eb34 + 1;
        *(uint *)(iVar8 + 0x2c9eb60) =
             ((pSVar10->projected_vertex).transformed_z * 0x100 - _DAT_01bc0cd0) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < vertex_count);
  }
  local_14 = (int *)&DAT_02c9eb38;
  iVar9 = 0;
  _DAT_01bc123c = 0;
  if (0 < _DAT_02c9eb34) {
    do {
      if ((_DAT_02c9f038 == *local_14) && (local_14 != (int *)0x0)) goto LAB_005bf2c8;
      iVar9 = iVar9 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar9 < _DAT_02c9eb34);
  }
  local_14 = (int *)0x0;
LAB_005bf2c8:
  if (local_14 != (int *)0x0) {
    local_18 = (int *)&DAT_02c9eb38;
    iVar9 = 0;
    if (0 < _DAT_02c9eb34) {
      do {
        if ((_DAT_02c9f038 == *local_18) && (local_18 != local_14)) goto LAB_005bf301;
        iVar9 = iVar9 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar9 < _DAT_02c9eb34);
    }
    local_18 = (int *)0x0;
LAB_005bf301:
    iVar9 = _DAT_02c9f038;
    if (local_18 != (int *)0x0) {
      do {
        if (local_14[1] <= iVar9) {
          *local_14 = -1;
          local_14 = (int *)&DAT_02c9eb38;
          iVar2 = 0;
          if (0 < _DAT_02c9eb34) {
            do {
              if ((iVar9 == *local_14) && (local_14 != local_18)) goto LAB_005bf35c;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar2 < _DAT_02c9eb34);
          }
          local_14 = (int *)0x0;
LAB_005bf35c:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (local_18[1] <= iVar9) {
          *local_18 = -1;
          local_18 = (int *)&DAT_02c9eb38;
          iVar2 = 0;
          if (0 < _DAT_02c9eb34) {
            do {
              if ((iVar9 == *local_18) && (local_18 != local_14)) goto LAB_005bf3ac;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0x14;
            } while (iVar2 < _DAT_02c9eb34);
          }
          local_18 = (int *)0x0;
LAB_005bf3ac:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00580127();
        if (_DAT_01bc123c != 0) {
          return;
        }
        local_14[2] = local_14[2] + local_14[3];
        local_14[10] = local_14[10] + local_14[0xb];
        local_18[2] = local_18[2] + local_18[3];
        local_18[10] = local_18[10] + local_18[0xb];
        iVar9 = iVar9 + 1;
      } while( true );
    }
  }
  return;
}
