// Name: FUN_00516de0
// Address: 00516de0
// Address Range: [[00516de0, 00517459]]
// Convention: unknown
// Signature: void FUN_00516de0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516de0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_1c;
  int local_18;
  int *local_14;
  
  if ((DAT_005fba40 != 0) && (iVar8 = 0, piVar3 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar3 + 0x13) & 0x80) != 0) {
        piVar3[3] = (int)(0x7fffffff / (longlong)piVar3[2]);
        piVar3[4] = (int)(((longlong)*piVar3 * (longlong)_DAT_01c6b598) / (longlong)piVar3[2]) +
                    _DAT_01c6b5a0;
        piVar3[5] = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c6b59c) / (longlong)piVar3[2]) +
                    _DAT_01c6b5a4;
      }
      iVar8 = iVar8 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar8 < param_2);
  }
  if (DAT_007303fc != 0) {
    piVar3 = param_1 + 0xc;
    piVar5 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar8 = FUN_00515ac0(param_1,piVar3,piVar5);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      iVar8 = param_2 + -2;
      iVar9 = 0;
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar2 = FUN_00515ac0(param_1,piVar3,piVar5);
          if (iVar2 == 0) {
            iVar7 = iVar7 + 1;
          }
          piVar3 = piVar3 + 0xc;
          iVar9 = iVar9 + 1;
          piVar5 = piVar5 + 0xc;
        } while (iVar9 < iVar8);
      }
      if (iVar7 == iVar8) {
        return;
      }
    }
  }
  if ((_DAT_01c6cee8 != 0) && (DAT_007303f4 == 0)) {
    FUN_00565c10(param_1,param_2,_DAT_01c6e2b4);
    _DAT_01ed3198 = _DAT_01ed3198 + param_2 + -2;
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
  _DAT_01ed36a4 = 0;
  _DAT_01ed319c = 0;
  local_1c = 0;
  _DAT_01ed36a0 = 0x4b0;
  if (0 < param_2) {
    do {
      iVar8 = local_1c + 1;
      if (param_2 <= iVar8) {
        iVar8 = 0;
      }
      piVar3 = param_1 + iVar8 * 0xc;
      piVar5 = param_1 + local_1c * 0xc;
      iVar8 = piVar5[5] >> 0x10;
      iVar7 = piVar3[5] >> 0x10;
      if (iVar8 != iVar7) {
        iVar9 = iVar7;
        piVar6 = piVar5;
        if (piVar3[5] < piVar5[5]) {
          iVar9 = iVar8;
          iVar8 = iVar7;
          piVar6 = piVar3;
          piVar3 = piVar5;
        }
        iVar2 = _DAT_01ed319c * 0x50;
        *(int *)(&DAT_01ed31a0 + iVar2) = iVar8;
        iVar7 = _DAT_01ed36a0;
        *(int *)(iVar2 + 0x1ed31a4) = iVar9;
        if (iVar8 < iVar7) {
          _DAT_01ed36a0 = iVar8;
        }
        if (_DAT_01ed36a4 < iVar9) {
          _DAT_01ed36a4 = iVar9;
        }
        if ((uint)(piVar3[5] - piVar6[5]) < 0x10000) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffffff / (ulonglong)(uint)(piVar3[5] - piVar6[5]));
        }
        uVar10 = (uint)(ushort)((ushort)piVar6[5] ^ 0xffff);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[4] - piVar6[4]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31ac) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31a8) =
             piVar6[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[6] - piVar6[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31bc) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31b8) =
             piVar6[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[7] - piVar6[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31c4) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31c0) =
             piVar6[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[8] - piVar6[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31b4) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31b0) =
             piVar6[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[0xb] - piVar6[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31d4) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31d0) =
             piVar6[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[2] - piVar6[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31cc) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31c8) =
             piVar6[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[9] - piVar6[9]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31dc) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31d8) =
             piVar6[9] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar8 * (longlong)(piVar3[10] - piVar6[10]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1ed31e4) = uVar4;
        lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1ed31e0) =
             piVar6[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01ed319c = _DAT_01ed319c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  piVar3 = (int *)&DAT_01ed31a0;
  iVar8 = 0;
  if (0 < _DAT_01ed319c) {
    do {
      if ((_DAT_01ed36a0 == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_00516f8f;
      iVar8 = iVar8 + 1;
      piVar3 = piVar3 + 0x14;
    } while (iVar8 < _DAT_01ed319c);
  }
  piVar3 = (int *)0x0;
LAB_00516f8f:
  if (piVar3 != (int *)0x0) {
    iVar8 = 0;
    local_14 = (int *)&DAT_01ed31a0;
    if (0 < _DAT_01ed319c) {
      do {
        if ((_DAT_01ed36a0 == *local_14) && (local_14 != piVar3)) goto LAB_00516fcc;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 0x14;
      } while (iVar8 < _DAT_01ed319c);
    }
    local_14 = (int *)0x0;
LAB_00516fcc:
    if (local_14 != (int *)0x0) {
      local_18 = _DAT_01ed36a0;
      do {
        iVar8 = _DAT_01ed319c;
        if (piVar3[1] <= local_18) {
          *piVar3 = -1;
          iVar7 = 0;
          piVar3 = (int *)&DAT_01ed31a0;
          if (0 < iVar8) {
            do {
              if ((local_18 == *piVar3) && (piVar3 != local_14)) goto LAB_00517022;
              iVar7 = iVar7 + 1;
              piVar3 = piVar3 + 0x14;
            } while (iVar7 < _DAT_01ed319c);
          }
          piVar3 = (int *)0x0;
LAB_00517022:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        iVar8 = _DAT_01ed319c;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01ed31a0;
          iVar7 = 0;
          if (iVar8 < 1) {
            return;
          }
          while ((local_18 != *local_14 || (local_14 == piVar3))) {
            iVar7 = iVar7 + 1;
            local_14 = local_14 + 0x14;
            if (_DAT_01ed319c <= iVar7) {
              return;
            }
          }
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        FUN_00563257();
        piVar3[2] = piVar3[2] + piVar3[3];
        piVar3[6] = piVar3[6] + piVar3[7];
        piVar3[8] = piVar3[8] + piVar3[9];
        piVar3[10] = piVar3[10] + piVar3[0xb];
        piVar3[4] = piVar3[4] + piVar3[5];
        piVar3[0xe] = piVar3[0xe] + piVar3[0xf];
        piVar3[0x10] = piVar3[0x10] + piVar3[0x11];
        piVar3[0xc] = piVar3[0xc] + piVar3[0xd];
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_18 = local_18 + 1;
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
      } while( true );
    }
  }
  return;
}
