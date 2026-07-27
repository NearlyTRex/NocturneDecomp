// Name: engine_3d.c_rasterizeTriangle_FUN_005628c0
// Address: 005628c0
// Address Range: [[005628c0, 00562db7]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_rasterizeTriangle_FUN_005628c0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_rasterizeTriangle_FUN_005628c0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *local_20;
  int *local_18;
  int *local_14;
  
  if ((DAT_005b7644 != 0) && (iVar9 = 0, piVar7 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar7 + 0x13) & 0x80) != 0) {
        if ((_DAT_01c039a4 & 6) != 0) {
          piVar7[3] = (int)(0x7fffffff / (longlong)piVar7[2]);
        }
        if ((_DAT_01c039a4 & 1) != 0) {
          piVar7[3] = (int)(0x7fffffff / (longlong)piVar7[2]);
        }
        piVar7[4] = (int)(((longlong)*piVar7 * (longlong)_DAT_01c00c48) / (longlong)piVar7[2]) +
                    _DAT_01c00c50;
        piVar7[5] = (int)(((longlong)piVar7[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar7[2]) +
                    _DAT_01c00c54;
      }
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 0xc;
    } while (iVar9 < param_2);
  }
  if ((DAT_006b0280 != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                        (param_1,param_1 + 0xc,param_1 + 0x18), iVar9 == 0)) {
    return;
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
    engine_special_cpp_drawPolygon_FUN_00532620(param_1,param_2,_DAT_01c039a0);
    return;
  }
  if (_DAT_01c039a4 != 0) {
    if (_DAT_01c039a4 < 2) {
      engine_prim_c_prepareDepthBuffer_FUN_004f9870(param_1,param_2);
    }
    else if (_DAT_01c039a4 == 6) {
      engine_prim_c_replaceWWithDepth_FUN_004f99d0(param_1,param_2);
    }
  }
  _DAT_02de497c = 0;
  iVar9 = 0;
  _DAT_02de4e04 = 0;
  _DAT_02de4e00 = 0x4b0;
  if (0 < param_2) {
    do {
      iVar2 = iVar9 + 1;
      if (param_2 <= iVar2) {
        iVar2 = 0;
      }
      local_20 = param_1 + iVar2 * 0xc;
      piVar7 = param_1 + iVar9 * 0xc;
      iVar2 = piVar7[5] >> 0x10;
      iVar3 = local_20[5] >> 0x10;
      if (iVar2 != iVar3) {
        iVar4 = iVar3;
        piVar10 = piVar7;
        if (local_20[5] < piVar7[5]) {
          iVar4 = iVar2;
          iVar2 = iVar3;
          piVar10 = local_20;
          local_20 = piVar7;
        }
        iVar8 = _DAT_02de497c * 0x48;
        *(int *)(&DAT_02de4980 + iVar8) = iVar2;
        iVar3 = _DAT_02de4e00;
        *(int *)(iVar8 + 0x2de4984) = iVar4;
        if (iVar2 < iVar3) {
          _DAT_02de4e00 = iVar2;
        }
        if (_DAT_02de4e04 < iVar4) {
          _DAT_02de4e04 = iVar4;
        }
        if ((uint)(local_20[5] - piVar10[5]) < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)(uint)(local_20[5] - piVar10[5]));
        }
        uVar5 = (uint)(ushort)((ushort)piVar10[5] ^ 0xffff);
        lVar1 = (longlong)iVar2 * (longlong)(local_20[4] - piVar10[4]);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2de498c) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        *(uint *)(iVar8 + 0x2de4988) =
             piVar10[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)((local_20[2] - piVar10[2]) * 0x100);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2de49ac) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        _DAT_02de497c = _DAT_02de497c + 1;
        *(uint *)(iVar8 + 0x2de49a8) =
             (piVar10[2] * 0x100 - _DAT_01b4d1fc) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2);
  }
  local_14 = (int *)&DAT_02de4980;
  iVar9 = 0;
  _DAT_01b4d768 = 0;
  if (0 < _DAT_02de497c) {
    do {
      if ((_DAT_02de4e00 == *local_14) && (local_14 != (int *)0x0)) goto LAB_00562a68;
      iVar9 = iVar9 + 1;
      local_14 = local_14 + 0x12;
    } while (iVar9 < _DAT_02de497c);
  }
  local_14 = (int *)0x0;
LAB_00562a68:
  if (local_14 != (int *)0x0) {
    local_18 = (int *)&DAT_02de4980;
    iVar9 = 0;
    if (0 < _DAT_02de497c) {
      do {
        if ((_DAT_02de4e00 == *local_18) && (local_18 != local_14)) goto LAB_00562aa1;
        iVar9 = iVar9 + 1;
        local_18 = local_18 + 0x12;
      } while (iVar9 < _DAT_02de497c);
    }
    local_18 = (int *)0x0;
LAB_00562aa1:
    iVar9 = _DAT_02de4e00;
    if (local_18 != (int *)0x0) {
      do {
        if (local_14[1] <= iVar9) {
          *local_14 = -1;
          local_14 = (int *)&DAT_02de4980;
          iVar2 = 0;
          if (0 < _DAT_02de497c) {
            do {
              if ((iVar9 == *local_14) && (local_14 != local_18)) goto LAB_00562afc;
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0x12;
            } while (iVar2 < _DAT_02de497c);
          }
          local_14 = (int *)0x0;
LAB_00562afc:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (local_18[1] <= iVar9) {
          *local_18 = -1;
          local_18 = (int *)&DAT_02de4980;
          iVar2 = 0;
          if (0 < _DAT_02de497c) {
            do {
              if ((iVar9 == *local_18) && (local_18 != local_14)) goto LAB_00562b4c;
              iVar2 = iVar2 + 1;
              local_18 = local_18 + 0x12;
            } while (iVar2 < _DAT_02de497c);
          }
          local_18 = (int *)0x0;
LAB_00562b4c:
          if (local_18 == (int *)0x0) {
            return;
          }
        }
        engine_special_cpp_renderScanline_FUN_00530710(local_18,local_14,iVar9);
        if (_DAT_01b4d768 != 0) {
          return;
        }
        local_18[2] = local_18[2] + local_18[3];
        local_18[10] = local_18[10] + local_18[0xb];
        *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + *(int *)(iVar9 + 0xc);
        *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + *(int *)(iVar9 + 0x2c);
        iVar9 = (int)local_20 + 1;
      } while( true );
    }
  }
  return;
}
