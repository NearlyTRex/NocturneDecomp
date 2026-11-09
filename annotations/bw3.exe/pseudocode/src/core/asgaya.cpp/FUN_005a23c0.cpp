// Name: core_asgaya.cpp_FUN_005a23c0
// Address: 005a23c0
// Address Range: [[005a23c0, 005a2865]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a23c0(int *param_1,int param_2,code *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_asgaya_cpp_FUN_005a23c0(int *param_1,int param_2,code *param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int local_18;
  int local_14;
  
  iVar9 = 0;
  piVar3 = param_1;
  if (0 < param_2) {
    do {
      if ((*(byte *)((int)piVar3 + 0x13) & 0x80) != 0) {
        piVar3[3] = (int)(0x7fffffff / (longlong)piVar3[2]);
        piVar3[4] = (int)(((longlong)*piVar3 * (longlong)_DAT_01c6b598) / (longlong)piVar3[2]) +
                    _DAT_01c6b5a0;
        piVar3[5] = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar3[2]) +
                    _DAT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar9 < param_2);
  }
  if ((DAT_007303fc != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                        (param_1,param_1 + 0xc,param_1 + 0x18), iVar9 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  switch(_DAT_01c6e2b8) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00515920(param_1,param_2);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(param_1,param_2);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_00515a10(param_1,param_2);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00515990(param_1,param_2);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00515a80(param_1,param_2);
  }
  _DAT_02d24d80 = 0;
  _DAT_02d25288 = 0;
  local_18 = 0;
  _DAT_02d25284 = 0x4b0;
  if (0 < param_2) {
    do {
      iVar9 = local_18 + 1;
      if (param_2 <= iVar9) {
        iVar9 = 0;
      }
      piVar4 = param_1 + iVar9 * 0xc;
      piVar3 = param_1 + local_18 * 0xc;
      iVar2 = piVar4[5] >> 0x10;
      iVar9 = piVar3[5] >> 0x10;
      if (iVar9 != iVar2) {
        iVar5 = iVar2;
        piVar8 = piVar4;
        if (piVar4[5] < piVar3[5]) {
          iVar5 = iVar9;
          iVar9 = iVar2;
          piVar8 = piVar3;
          piVar3 = piVar4;
        }
        iVar6 = _DAT_02d24d80 * 0x50;
        *(int *)(&DAT_02d24d84 + iVar6) = iVar9;
        iVar2 = _DAT_02d25284;
        *(int *)(iVar6 + 0x2d24d88) = iVar5;
        if (iVar9 < iVar2) {
          _DAT_02d25284 = iVar9;
        }
        if (_DAT_02d25288 < iVar5) {
          _DAT_02d25288 = iVar5;
        }
        *(int *)(iVar6 + 0x2d24d8c) = piVar3[4];
        *(int *)(iVar6 + 0x2d24dac) = piVar3[2] << 8;
        *(int *)(iVar6 + 0x2d24d94) = piVar3[8];
        if ((uint)(piVar8[5] - piVar3[5]) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)(uint)(piVar8[5] - piVar3[5]));
        }
        lVar1 = (longlong)iVar9 * (longlong)(piVar8[4] - piVar3[4]);
        *(uint *)(iVar6 + 0x2d24d90) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)((piVar8[2] - piVar3[2]) * 0x100);
        *(uint *)(iVar6 + 0x2d24db0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)(piVar8[8] - piVar3[8]);
        *(uint *)(iVar6 + 0x2d24d98) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)piVar3[5] ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x2d24d90);
        *(int *)(iVar6 + 0x2d24d8c) =
             *(int *)(iVar6 + 0x2d24d8c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x2d24db0);
        *(uint *)(iVar6 + 0x2d24dac) =
             *(int *)(iVar6 + 0x2d24dac) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x2d24d98);
        _DAT_02d24d80 = _DAT_02d24d80 + 1;
        *(uint *)(iVar6 + 0x2d24d94) =
             *(int *)(iVar6 + 0x2d24d94) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_2);
  }
  piVar3 = (int *)&DAT_02d24d84;
  iVar9 = 0;
  if (0 < _DAT_02d24d80) {
    do {
      if ((_DAT_02d25284 == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_005a24d3;
      iVar9 = iVar9 + 1;
      piVar3 = piVar3 + 0x14;
    } while (iVar9 < _DAT_02d24d80);
  }
  piVar3 = (int *)0x0;
LAB_005a24d3:
  if (piVar3 != (int *)0x0) {
    iVar9 = 0;
    piVar4 = (int *)&DAT_02d24d84;
    if (0 < _DAT_02d24d80) {
      do {
        if ((_DAT_02d25284 == *piVar4) && (piVar4 != piVar3)) goto LAB_005a250a;
        iVar9 = iVar9 + 1;
        piVar4 = piVar4 + 0x14;
      } while (iVar9 < _DAT_02d24d80);
    }
    piVar4 = (int *)0x0;
LAB_005a250a:
    if (piVar4 != (int *)0x0) {
      local_14 = _DAT_02d25284;
      do {
        if (piVar3[1] <= local_14) {
          *piVar3 = -1;
          iVar9 = 0;
          piVar3 = (int *)&DAT_02d24d84;
          if (0 < _DAT_02d24d80) {
            do {
              if ((local_14 == *piVar3) && (piVar3 != piVar4)) goto LAB_005a255c;
              iVar9 = iVar9 + 1;
              piVar3 = piVar3 + 0x14;
            } while (iVar9 < _DAT_02d24d80);
          }
          piVar3 = (int *)0x0;
LAB_005a255c:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        if (piVar4[1] <= local_14) {
          *piVar4 = -1;
          iVar9 = 0;
          piVar4 = (int *)&DAT_02d24d84;
          if (0 < _DAT_02d24d80) {
            do {
              if ((local_14 == *piVar4) && (piVar4 != piVar3)) goto LAB_005a25a4;
              iVar9 = iVar9 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar9 < _DAT_02d24d80);
          }
          piVar4 = (int *)0x0;
LAB_005a25a4:
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        (*param_3)(local_14,piVar3,piVar4);
        piVar3[2] = piVar3[2] + piVar3[3];
        piVar3[10] = piVar3[10] + piVar3[0xb];
        piVar3[4] = piVar3[4] + piVar3[5];
        piVar4[2] = piVar4[2] + piVar4[3];
        local_14 = local_14 + 1;
        piVar4[10] = piVar4[10] + piVar4[0xb];
        piVar4[4] = piVar4[4] + piVar4[5];
      } while( true );
    }
  }
  return;
}
