// Name: engine_prim.c_renderScanlinePolygon_FUN_004fad00
// Address: 004fad00
// Address Range: [[004fad00, 004fb369]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_renderScanlinePolygon_FUN_004fad00(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_renderScanlinePolygon_FUN_004fad00(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_1c;
  int *local_14;
  
  if ((DAT_005b7644 != 0) && (iVar7 = 0, piVar3 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar3 + 0x13) & 0x80) != 0) {
        piVar3[3] = (int)(0x7fffffff / (longlong)piVar3[2]);
        piVar3[4] = (int)(((longlong)*piVar3 * (longlong)_DAT_01c00c48) / (longlong)piVar3[2]) +
                    _DAT_01c00c50;
        piVar3[5] = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c00c4c) / (longlong)piVar3[2]) +
                    _DAT_01c00c54;
      }
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar7 < param_2);
  }
  if (DAT_006b0280 != 0) {
    piVar3 = param_1 + 0xc;
    piVar8 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,piVar3,piVar8);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      iVar7 = param_2 + -2;
      iVar10 = 0;
      iVar6 = 0;
      if (0 < iVar7) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10(param_1,piVar3,piVar8);
          if (iVar2 == 0) {
            iVar6 = iVar6 + 1;
          }
          piVar3 = piVar3 + 0xc;
          iVar10 = iVar10 + 1;
          piVar8 = piVar8 + 0xc;
        } while (iVar10 < iVar7);
      }
      if (iVar6 == iVar7) {
        return;
      }
    }
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
  if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_00532620(param_1,param_2,_DAT_01c039a0);
    return;
  }
  switch(_DAT_01c039a4) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_004f9870(param_1,param_2);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(param_1,param_2);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_004f9960(param_1,param_2);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_004f98e0(param_1,param_2);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_004f99d0(param_1,param_2);
  }
  _DAT_01e53384 = 0;
  _DAT_01e52efc = 0;
  local_1c = 0;
  _DAT_01e53380 = 0x4b0;
  if (0 < param_2) {
    do {
      iVar7 = local_1c + 1;
      if (param_2 <= iVar7) {
        iVar7 = 0;
      }
      piVar3 = param_1 + iVar7 * 0xc;
      piVar8 = param_1 + local_1c * 0xc;
      iVar7 = piVar8[5] >> 0x10;
      iVar6 = piVar3[5] >> 0x10;
      if (iVar7 != iVar6) {
        iVar10 = iVar6;
        piVar5 = piVar8;
        if (piVar3[5] < piVar8[5]) {
          iVar10 = iVar7;
          iVar7 = iVar6;
          piVar5 = piVar3;
          piVar3 = piVar8;
        }
        iVar2 = _DAT_01e52efc * 0x48;
        *(int *)(&DAT_01e52f00 + iVar2) = iVar7;
        iVar6 = _DAT_01e53380;
        *(int *)(iVar2 + 0x1e52f04) = iVar10;
        if (iVar7 < iVar6) {
          _DAT_01e53380 = iVar7;
        }
        if (_DAT_01e53384 < iVar10) {
          _DAT_01e53384 = iVar10;
        }
        if ((uint)(piVar3[5] - piVar5[5]) < 0x10000) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(0xffffffff / (ulonglong)(uint)(piVar3[5] - piVar5[5]));
        }
        uVar9 = (uint)(ushort)((ushort)piVar5[5] ^ 0xffff);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[4] - piVar5[4]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f0c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f08) =
             piVar5[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[6] - piVar5[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f1c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f18) =
             piVar5[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[7] - piVar5[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f24) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f20) =
             piVar5[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[8] - piVar5[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f14) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f10) =
             piVar5[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[0xb] - piVar5[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f34) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f30) =
             piVar5[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[2] - piVar5[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f2c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f28) =
             piVar5[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[9] - piVar5[9]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f3c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f38) =
             piVar5[9] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[10] - piVar5[10]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e52f44) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e52f40) =
             piVar5[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e52efc = _DAT_01e52efc + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  iVar7 = _DAT_01e53380;
  piVar3 = (int *)&DAT_01e52f00;
  iVar6 = 0;
  if (0 < _DAT_01e52efc) {
    do {
      if ((_DAT_01e53380 == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_004faeb0;
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 0x12;
    } while (iVar6 < _DAT_01e52efc);
  }
  piVar3 = (int *)0x0;
LAB_004faeb0:
  if (piVar3 != (int *)0x0) {
    iVar6 = 0;
    local_14 = (int *)&DAT_01e52f00;
    if (0 < _DAT_01e52efc) {
      do {
        if ((_DAT_01e53380 == *local_14) && (local_14 != piVar3)) goto LAB_004faeed;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x12;
      } while (iVar6 < _DAT_01e52efc);
    }
    local_14 = (int *)0x0;
LAB_004faeed:
    if (local_14 != (int *)0x0) {
      do {
        iVar6 = _DAT_01e52efc;
        if (piVar3[1] <= iVar7) {
          *piVar3 = -1;
          iVar10 = 0;
          piVar3 = (int *)&DAT_01e52f00;
          if (0 < iVar6) {
            do {
              if ((iVar7 == *piVar3) && (piVar3 != local_14)) goto LAB_004faf43;
              iVar10 = iVar10 + 1;
              piVar3 = piVar3 + 0x12;
            } while (iVar10 < _DAT_01e52efc);
          }
          piVar3 = (int *)0x0;
LAB_004faf43:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        iVar6 = _DAT_01e52efc;
        if (local_14[1] <= iVar7) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01e52f00;
          iVar10 = 0;
          if (iVar6 < 1) {
            return;
          }
          while ((iVar7 != *local_14 || (local_14 == piVar3))) {
            iVar10 = iVar10 + 1;
            local_14 = local_14 + 0x12;
            if (_DAT_01e52efc <= iVar10) {
              return;
            }
          }
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_00530710(local_14,piVar3,iVar7);
        piVar3[2] = piVar3[2] + piVar3[3];
        piVar3[6] = piVar3[6] + piVar3[7];
        piVar3[8] = piVar3[8] + piVar3[9];
        piVar3[10] = piVar3[10] + piVar3[0xb];
        piVar3[4] = piVar3[4] + piVar3[5];
        piVar3[0xe] = piVar3[0xe] + piVar3[0xf];
        piVar3[0x10] = piVar3[0x10] + piVar3[0x11];
        piVar3[0xc] = piVar3[0xc] + piVar3[0xd];
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0xc);
        *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x1c);
        *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24);
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + *(int *)(iVar7 + 0x2c);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14);
        *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + *(int *)(iVar7 + 0x3c);
        *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + *(int *)(iVar7 + 0x44);
        *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x34);
      } while( true );
    }
  }
  return;
}
