// Name: FUN_00515e80
// Address: 00515e80
// Address Range: [[00515e80, 005163a0]]
// Convention: unknown
// Signature: void FUN_00515e80(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515e80(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  uint *local_14;
  
  if ((DAT_005fba40 != 0) && (iVar9 = 0, piVar5 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar5 + 0x13) & 0x80) != 0) {
        piVar5[3] = (int)(0x7fffffff / (longlong)piVar5[2]);
        piVar5[4] = (int)(((longlong)*piVar5 * (longlong)_DAT_01c6b598) / (longlong)piVar5[2]) +
                    _DAT_01c6b5a0;
        piVar5[5] = (int)(((longlong)piVar5[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar5[2]) +
                    _DAT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      piVar5 = piVar5 + 0xc;
    } while (iVar9 < param_2);
  }
  if (DAT_007303fc != 0) {
    piVar11 = param_1 + 0xc;
    piVar5 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar9 = FUN_00515ac0(param_1,piVar11,piVar5);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      iVar9 = param_2 + -2;
      iVar6 = 0;
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          iVar2 = FUN_00515ac0(param_1,piVar11,piVar5);
          if (iVar2 == 0) {
            iVar8 = iVar8 + 1;
          }
          piVar11 = piVar11 + 0xc;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0xc;
        } while (iVar6 < iVar9);
      }
      if (iVar8 == iVar9) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    _DAT_01ed3198 = _DAT_01ed3198 + param_2 + -2;
    FUN_00565c10(param_1,param_2,_DAT_01c6e2b4);
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  switch(_DAT_01c6e2b8) {
  case 1:
    FUN_00515920(param_1,param_2);
    break;
  case 2:
    FUN_00515990(param_1,param_2);
    break;
  case 3:
    FUN_00515a10(param_1,param_2);
    break;
  case 5:
    FUN_00515990(param_1,param_2);
    break;
  case 6:
    FUN_00515a80(param_1,param_2);
  }
  _DAT_01ed3190 = 0;
  _DAT_01ed2c88 = 0;
  local_1c = 0;
  _DAT_01ed318c = 0x4b0;
  if (0 < param_2) {
    do {
      iVar9 = local_1c + 1;
      if (param_2 <= iVar9) {
        iVar9 = 0;
      }
      piVar5 = param_1 + iVar9 * 0xc;
      piVar11 = param_1 + local_1c * 0xc;
      iVar6 = piVar11[5] >> 0x10;
      iVar9 = piVar5[5] >> 0x10;
      if (iVar6 != iVar9) {
        iVar8 = iVar6;
        piVar7 = piVar11;
        if (piVar5[5] < piVar11[5]) {
          iVar8 = iVar9;
          piVar7 = piVar5;
          iVar9 = iVar6;
          piVar5 = piVar11;
        }
        iVar2 = _DAT_01ed2c88 * 0x50;
        *(int *)(&DAT_01ed2c8c + iVar2) = iVar8;
        iVar6 = _DAT_01ed318c;
        *(int *)(iVar2 + 0x1ed2c90) = iVar9;
        if (iVar8 < iVar6) {
          _DAT_01ed318c = iVar8;
        }
        if (_DAT_01ed3190 < iVar9) {
          _DAT_01ed3190 = iVar9;
        }
        if ((uint)(piVar5[5] - piVar7[5]) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)(uint)(piVar5[5] - piVar7[5]));
        }
        uVar10 = (uint)(ushort)((ushort)piVar7[5] ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[4] - piVar7[4]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2c98) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2c94) =
             piVar7[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[6] - piVar7[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2ca8) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2ca4) =
             piVar7[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[7] - piVar7[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2cb0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2cac) =
             piVar7[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[8] - piVar7[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2ca0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2c9c) =
             piVar7[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[0xb] - piVar7[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2cc0) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2cbc) =
             piVar7[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(piVar5[2] - piVar7[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed2cb8) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed2cb4) =
             piVar7[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01ed2c88 = _DAT_01ed2c88 + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  puVar3 = (uint *)FUN_005158e0(_DAT_01ed318c,0);
  if ((puVar3 != (uint *)0x0) &&
     (local_14 = (uint *)FUN_005158e0(_DAT_01ed318c,puVar3), local_14 != (uint *)0x0)) {
    local_18 = _DAT_01ed318c;
    iVar9 = _DAT_01ed318c - 0x000004B0;
    bVar12 = SBORROW4(_DAT_01ed318c,0x000004B0);
    while (bVar12 != iVar9 < 0) {
      if ((int)puVar3[1] <= local_18) {
        *puVar3 = 0xffffffff;
        puVar3 = (uint *)FUN_005158e0(local_18,local_14);
        if (puVar3 == (uint *)0x0) {
          return;
        }
      }
      if ((int)local_14[1] <= local_18) {
        *local_14 = 0xffffffff;
        local_14 = (uint *)FUN_005158e0(local_18,puVar3);
        if (local_14 == (uint *)0x0) {
          return;
        }
      }
      FUN_00563257();
      puVar3[2] = puVar3[2] + puVar3[3];
      puVar3[6] = puVar3[6] + puVar3[7];
      puVar3[8] = puVar3[8] + puVar3[9];
      puVar3[4] = puVar3[4] + puVar3[5];
      puVar3[10] = puVar3[10] + puVar3[0xb];
      puVar3[0xc] = puVar3[0xc] + puVar3[0xd];
      local_14[2] = local_14[2] + local_14[3];
      local_14[6] = local_14[6] + local_14[7];
      local_14[8] = local_14[8] + local_14[9];
      local_18 = local_18 + 1;
      local_14[4] = local_14[4] + local_14[5];
      iVar6 = 0x000004B0;
      local_14[10] = local_14[10] + local_14[0xb];
      local_14[0xc] = local_14[0xc] + local_14[0xd];
      iVar9 = local_18 - iVar6;
      bVar12 = SBORROW4(local_18,iVar6);
    }
  }
  return;
}
