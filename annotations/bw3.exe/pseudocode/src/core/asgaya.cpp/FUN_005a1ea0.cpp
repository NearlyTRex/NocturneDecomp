// Name: core_asgaya.cpp_FUN_005a1ea0
// Address: 005a1ea0
// Address Range: [[005a1ea0, 005a2397]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a1ea0(SRenderVertex *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_asgaya_cpp_FUN_005a1ea0(SRenderVertex *param_1,int param_2)

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
  
  if ((DAT_005fba40 != 0) && (iVar9 = 0, pSVar6 = param_1, 0 < param_2)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((_DAT_01c6e2b8 & 6) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((_DAT_01c6e2b8 & 1) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x * (longlong)_DAT_01c6b598) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c6b5a0;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y * (longlong)_DAT_01c6b59c) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + _DAT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar9 < param_2);
  }
  if ((DAT_007303fc != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (param_1,param_1 + 1,param_1 + 2), iVar9 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00565c10(param_1,param_2,_DAT_01c6e2b4);
    return;
  }
  if (_DAT_01c6e2b8 != 0) {
    if (_DAT_01c6e2b8 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_00515920(param_1,param_2);
    }
    else if (_DAT_01c6e2b8 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_00515a80(param_1,param_2);
    }
  }
  _DAT_02d24d80 = 0;
  iVar9 = 0;
  _DAT_02d25288 = 0;
  _DAT_02d25284 = 0x4b0;
  if (0 < param_2) {
    do {
      iVar2 = iVar9 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      local_20 = param_1 + iVar2;
      pSVar6 = param_1 + iVar9;
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
        iVar8 = _DAT_02d24d80 * 0x50;
        *(int *)(&DAT_02d24d84 + iVar8) = iVar2;
        iVar3 = _DAT_02d25284;
        *(int *)(iVar8 + 0x2d24d88) = iVar4;
        if (iVar2 < iVar3) {
          _DAT_02d25284 = iVar2;
        }
        if (_DAT_02d25288 < iVar4) {
          _DAT_02d25288 = iVar4;
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
        *(uint *)(iVar8 + 0x2d24d90) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar8 + 0x2d24d8c) =
             (pSVar10->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar10->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2d24db0) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_02d24d80 = _DAT_02d24d80 + 1;
        *(uint *)(iVar8 + 0x2d24dac) =
             ((pSVar10->projected_vertex).transformed_z * 0x100 - _DAT_01bdd520) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2);
  }
  local_14 = (int *)&DAT_02d24d84;
  iVar9 = 0;
  _DAT_01bdd814 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((_DAT_02d25284 == *local_14) && (local_14 != (int *)0x0)) goto LAB_005a2048;
      iVar9 = iVar9 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar9 < _DAT_02d24d80);
  }
  local_14 = (int *)0x0;
LAB_005a2048:
  if (local_14 != (int *)0x0) {
    local_18 = (int *)&DAT_02d24d84;
    iVar9 = 0;
    if (0 < _DAT_02d24d80) {
      do {
        if ((_DAT_02d25284 == *local_18) && (local_18 != local_14)) goto LAB_005a2081;
        iVar9 = iVar9 + 1;
        local_18 = local_18 + 0x14;
      } while (iVar9 < _DAT_02d24d80);
    }
    local_18 = (int *)0x0;
LAB_005a2081:
    iVar9 = _DAT_02d25284;
    if (local_18 != (int *)0x0) {
      do {
        if (local_14[1] <= iVar9) {
          *local_14 = -1;
          local_14 = (int *)&DAT_02d24d84;
          iVar2 = 0;
          if (0 < _DAT_02d24d80) {
            do {
              if ((iVar9 == *local_14) && (local_14 != local_18)) goto LAB_005a20dc;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar2 < _DAT_02d24d80);
          }
          local_14 = (int *)0x0;
LAB_005a20dc:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (local_18[1] <= iVar9) {
          *local_18 = -1;
          local_18 = (int *)&DAT_02d24d84;
          iVar2 = 0;
          if (0 < _DAT_02d24d80) {
            do {
              if ((iVar9 == *local_18) && (local_18 != local_14)) goto LAB_005a212c;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0x14;
            } while (iVar2 < _DAT_02d24d80);
          }
          local_18 = (int *)0x0;
LAB_005a212c:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_FUN_00563257();
        if (_DAT_01bdd814 != 0) {
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
