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
  byte *puVar3;
  byte *puVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  byte *puVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *local_20;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((DAT_005fba40 != 0) && (iVar10 = 0, pSVar6 = param_1, 0 < param_2)) {
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
      iVar10 = iVar10 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar10 < param_2);
  }
  if ((DAT_007303fc != 0) &&
     (iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                         (param_1,param_1 + 1,param_1 + 2), iVar10 == 0)) {
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
  iVar10 = 0;
  _DAT_02d25288 = (byte *)0x0;
  _DAT_02d25284 = (byte *)0x4b0;
  if (0 < param_2) {
    do {
      iVar2 = iVar10 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      local_20 = param_1 + iVar2;
      pSVar6 = param_1 + iVar10;
      puVar9 = (byte *)((pSVar6->projected_vertex).screen_y >> 0x10);
      puVar3 = (byte *)((local_20->projected_vertex).screen_y >> 0x10);
      if (puVar9 != puVar3) {
        puVar4 = puVar3;
        pSVar11 = pSVar6;
        if ((local_20->projected_vertex).screen_y < (pSVar6->projected_vertex).screen_y) {
          puVar4 = puVar9;
          puVar9 = puVar3;
          pSVar11 = local_20;
          local_20 = pSVar6;
        }
        iVar2 = _DAT_02d24d80 * 0x50;
        *(byte **)(&DAT_02d24d84 + iVar2) = puVar9;
        puVar3 = _DAT_02d25284;
        *(byte **)(iVar2 + 0x2d24d88) = puVar4;
        if ((int)puVar9 < (int)puVar3) {
          _DAT_02d25284 = puVar9;
        }
        if ((int)_DAT_02d25288 < (int)puVar4) {
          _DAT_02d25288 = puVar4;
        }
        uVar7 = (local_20->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
        if (uVar7 < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
        lVar1 = (longlong)iVar8 *
                (longlong)
                ((local_20->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x2d24d90) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        *(uint *)(iVar2 + 0x2d24d8c) =
             (pSVar11->projected_vertex).screen_x +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 *
                (longlong)
                (((local_20->projected_vertex).transformed_z -
                 (pSVar11->projected_vertex).transformed_z) * 0x100);
        uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x2d24db0) = uVar5;
        lVar1 = (longlong)(int)uVar7 * (longlong)(int)uVar5;
        _DAT_02d24d80 = _DAT_02d24d80 + 1;
        *(uint *)(iVar2 + 0x2d24dac) =
             ((pSVar11->projected_vertex).transformed_z * 0x100 - _DAT_01bdd520) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
  }
  local_14 = (SSoftwareEdge *)&DAT_02d24d84;
  iVar10 = 0;
  _DAT_01bdd814 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((_DAT_02d25284 == (byte *)(local_14->base).y_min) &&
         (local_14 != (SSoftwareEdge *)0x0)) goto LAB_005a2048;
      iVar10 = iVar10 + 1;
      local_14 = local_14 + 1;
    } while (iVar10 < _DAT_02d24d80);
  }
  local_14 = (SSoftwareEdge *)0x0;
LAB_005a2048:
  if (local_14 != (SSoftwareEdge *)0x0) {
    local_18 = (SSoftwareEdge *)&DAT_02d24d84;
    iVar10 = 0;
    if (0 < _DAT_02d24d80) {
      do {
        if ((_DAT_02d25284 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
        goto LAB_005a2081;
        iVar10 = iVar10 + 1;
        local_18 = local_18 + 1;
      } while (iVar10 < _DAT_02d24d80);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_005a2081:
    puVar9 = _DAT_02d25284;
    if (local_18 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_14->base).y_max <= (int)puVar9) {
          (local_14->base).y_min = -1;
          local_14 = (SSoftwareEdge *)&DAT_02d24d84;
          iVar10 = 0;
          if (0 < _DAT_02d24d80) {
            do {
              if ((puVar9 == (byte *)(local_14->base).y_min) && (local_14 != local_18))
              goto LAB_005a20dc;
              iVar10 = iVar10 + 1;
              local_14 = local_14 + 1;
            } while (iVar10 < _DAT_02d24d80);
          }
          local_14 = (SSoftwareEdge *)0x0;
LAB_005a20dc:
          if (local_14 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_18->base).y_max <= (int)puVar9) {
          (local_18->base).y_min = -1;
          local_18 = (SSoftwareEdge *)&DAT_02d24d84;
          iVar10 = 0;
          if (0 < _DAT_02d24d80) {
            do {
              if ((puVar9 == (byte *)(local_18->base).y_min) && (local_18 != local_14))
              goto LAB_005a212c;
              iVar10 = iVar10 + 1;
              local_18 = local_18 + 1;
            } while (iVar10 < _DAT_02d24d80);
          }
          local_18 = (SSoftwareEdge *)0x0;
LAB_005a212c:
          if (local_18 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00563257(local_18,local_14,(int)puVar9);
        if (_DAT_01bdd814 != 0) {
          return;
        }
        (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
        (local_18->base).depth_current =
             (local_18->base).depth_current + (local_18->base).depth_gradient;
        *(int *)(puVar9 + 8) = *(int *)(puVar9 + 8) + *(int *)(puVar9 + 0xc);
        *(int *)(puVar9 + 0x28) = *(int *)(puVar9 + 0x28) + *(int *)(puVar9 + 0x2c);
        puVar9 = (byte *)((int)&(local_20->projected_vertex).transformed_x + 1);
      } while( true );
    }
  }
  return;
}
