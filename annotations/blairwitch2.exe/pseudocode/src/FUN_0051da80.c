// Name: FUN_0051da80
// Address: 0051da80
// Address Range: [[0051da80, 0051e10d]]
// Convention: unknown
// Signature: void FUN_0051da80(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051da80(int *param_1,int param_2)

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
  int local_18;
  int *local_14;
  
  if ((DAT_006141e0 != 0) && (iVar7 = 0, piVar3 = param_1, 0 < param_2)) {
    do {
      if ((*(byte *)((int)piVar3 + 0x13) & 0x80) != 0) {
        piVar3[3] = (int)(0x7fffffff / (longlong)piVar3[2]);
        piVar3[4] = (int)(((longlong)*piVar3 * (longlong)_DAT_01c35e38) / (longlong)piVar3[2]) +
                    _DAT_01c35e40;
        piVar3[5] = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c35e3c) / (longlong)piVar3[2]) +
                    _DAT_01c35e44;
      }
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar7 < param_2);
  }
  if (DAT_0070ca7c != 0) {
    piVar3 = param_1 + 0xc;
    piVar8 = param_1 + 0x18;
    if (param_2 < 4) {
      iVar7 = FUN_0051c760(param_1,piVar3,piVar8);
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
          iVar2 = FUN_0051c760(param_1,piVar3,piVar8);
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
  if ((_DAT_01c37788 != 0) && (DAT_0070ca74 == 0)) {
    FUN_0055f8f0(param_1,param_2,_DAT_01c38b54);
    _DAT_01e61b58 = _DAT_01e61b58 + param_2 + -2;
    return;
  }
  _DAT_01e61b58 = _DAT_01e61b58 + 1;
  switch(_DAT_01c38b58) {
  case 1:
    FUN_0051c5c0(param_1,param_2);
    break;
  case 2:
    FUN_0051c630(param_1,param_2);
    break;
  case 3:
    FUN_0051c6b0(param_1,param_2);
    break;
  case 5:
    FUN_0051c630(param_1,param_2);
    break;
  case 6:
    FUN_0051c720(param_1,param_2);
  }
  _DAT_01e62064 = 0;
  _DAT_01e61b5c = 0;
  local_1c = 0;
  _DAT_01e62060 = 0x4b0;
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
        iVar2 = _DAT_01e61b5c * 0x50;
        *(int *)(&DAT_01e61b60 + iVar2) = iVar7;
        iVar6 = _DAT_01e62060;
        *(int *)(iVar2 + 0x1e61b64) = iVar10;
        if (iVar7 < iVar6) {
          _DAT_01e62060 = iVar7;
        }
        if (_DAT_01e62064 < iVar10) {
          _DAT_01e62064 = iVar10;
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
        *(uint *)(iVar2 + 0x1e61b6c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b68) =
             piVar5[4] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[6] - piVar5[6]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b7c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b78) =
             piVar5[6] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[7] - piVar5[7]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b84) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b80) =
             piVar5[7] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[8] - piVar5[8]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b74) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b70) =
             piVar5[8] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[0xb] - piVar5[0xb]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b94) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b90) =
             piVar5[0xb] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[2] - piVar5[2]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b8c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b88) =
             piVar5[2] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[9] - piVar5[9]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61b9c) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61b98) =
             piVar5[9] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar7 * (longlong)(piVar3[10] - piVar5[10]);
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        *(uint *)(iVar2 + 0x1e61ba4) = uVar4;
        lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar4;
        *(uint *)(iVar2 + 0x1e61ba0) =
             piVar5[10] + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        _DAT_01e61b5c = _DAT_01e61b5c + 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c < param_2);
  }
  local_14 = (int *)&DAT_01e61b60;
  iVar7 = 0;
  if (0 < _DAT_01e61b5c) {
    do {
      if ((_DAT_01e62060 == *local_14) && (local_14 != (int *)0x0)) goto LAB_0051dc42;
      iVar7 = iVar7 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar7 < _DAT_01e61b5c);
  }
  local_14 = (int *)0x0;
LAB_0051dc42:
  if (local_14 != (int *)0x0) {
    iVar7 = 0;
    piVar3 = (int *)&DAT_01e61b60;
    if (0 < _DAT_01e61b5c) {
      do {
        if ((_DAT_01e62060 == *piVar3) && (piVar3 != local_14)) goto LAB_0051dc81;
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 0x14;
      } while (iVar7 < _DAT_01e61b5c);
    }
    piVar3 = (int *)0x0;
LAB_0051dc81:
    if (piVar3 != (int *)0x0) {
      local_18 = _DAT_01e62060;
      do {
        iVar7 = _DAT_01e61b5c;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01e61b60;
          iVar6 = 0;
          if (0 < iVar7) {
            do {
              if ((local_18 == *local_14) && (local_14 != piVar3)) goto LAB_0051dcd6;
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar6 < _DAT_01e61b5c);
          }
          local_14 = (int *)0x0;
LAB_0051dcd6:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        iVar7 = _DAT_01e61b5c;
        if (piVar3[1] <= local_18) {
          *piVar3 = -1;
          iVar6 = 0;
          piVar3 = (int *)&DAT_01e61b60;
          if (iVar7 < 1) {
            return;
          }
          while ((local_18 != *piVar3 || (piVar3 == local_14))) {
            iVar6 = iVar6 + 1;
            piVar3 = piVar3 + 0x14;
            if (_DAT_01e61b5c <= iVar6) {
              return;
            }
          }
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        FUN_0055d6d7();
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
        piVar3[2] = piVar3[2] + piVar3[3];
        piVar3[6] = piVar3[6] + piVar3[7];
        piVar3[8] = piVar3[8] + piVar3[9];
        piVar3[10] = piVar3[10] + piVar3[0xb];
        local_18 = local_18 + 1;
        piVar3[4] = piVar3[4] + piVar3[5];
        piVar3[0xe] = piVar3[0xe] + piVar3[0xf];
        piVar3[0x10] = piVar3[0x10] + piVar3[0x11];
        piVar3[0xc] = piVar3[0xc] + piVar3[0xd];
      } while( true );
    }
  }
  return;
}
