// Name: FUN_005a1ea0
// Address: 005a1ea0
// Address Range: [[005a1ea0, 005a2397]]
// Convention: unknown
// Signature: void FUN_005a1ea0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a1ea0(int *param_1,int param_2)

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
  
  if ((DAT_005fba40 != 0) && (iVar9 = 0, piVar7 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar7 + 0x13) & 0x80) != 0) {
        if ((_DAT_01c6e2b8 & 6) != 0) {
          piVar7[3] = (int)(0x7fffffff / (longlong)piVar7[2]);
        }
        if ((_DAT_01c6e2b8 & 1) != 0) {
          piVar7[3] = (int)(0x7fffffff / (longlong)piVar7[2]);
        }
        piVar7[4] = (int)(((longlong)*piVar7 * (longlong)_DAT_01c6b598) / (longlong)piVar7[2]) +
                    _DAT_01c6b5a0;
        piVar7[5] = (int)(((longlong)piVar7[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar7[2]) +
                    _DAT_01c6b5a4;
      }
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 0xc;
    } while (iVar9 < param_2);
  }
  if ((DAT_007303fc != 0) &&
     (iVar9 = FUN_00515ac0(param_1,param_1 + 0xc,param_1 + 0x18), iVar9 == 0)) {
    return;
  }
  _DAT_01ed3198 = _DAT_01ed3198 + 1;
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    FUN_00565c10(param_1,param_2,_DAT_01c6e2b4);
    return;
  }
  if (_DAT_01c6e2b8 != 0) {
    if (_DAT_01c6e2b8 < 2) {
      FUN_00515920(param_1,param_2);
    }
    else if (_DAT_01c6e2b8 == 6) {
      FUN_00515a80(param_1,param_2);
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
        if ((uint)(local_20[5] - piVar10[5]) < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)(uint)(local_20[5] - piVar10[5]));
        }
        uVar5 = (uint)(ushort)((ushort)piVar10[5] ^ 0xffff);
        lVar1 = (longlong)iVar2 * (longlong)(local_20[4] - piVar10[4]);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2d24d90) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        *(uint *)(iVar8 + 0x2d24d8c) =
             piVar10[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar2 * (longlong)((local_20[2] - piVar10[2]) * 0x100);
        uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar8 + 0x2d24db0) = uVar6;
        lVar1 = (longlong)(int)uVar5 * (longlong)(int)uVar6;
        _DAT_02d24d80 = _DAT_02d24d80 + 1;
        *(uint *)(iVar8 + 0x2d24dac) =
             (piVar10[2] * 0x100 - _DAT_01bdd520) +
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
        FUN_00563257();
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
