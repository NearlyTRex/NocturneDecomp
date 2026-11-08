// Name: FUN_0059a5d0
// Address: 0059a5d0
// Address Range: [[0059a5d0, 0059aa75]]
// Convention: unknown
// Signature: void FUN_0059a5d0(int *param_1,int param_2,code *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a5d0(int *param_1,int param_2,code *param_3)

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
        piVar3[4] = (int)(((longlong)*piVar3 * (longlong)_DAT_01c35e38) / (longlong)piVar3[2]) +
                    _DAT_01c35e40;
        piVar3[5] = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c35e3c) / (longlong)piVar3[2]) +
                    _DAT_01c35e44;
      }
      iVar9 = iVar9 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar9 < param_2);
  }
  if ((DAT_0070ca7c != 0) &&
     (iVar9 = FUN_0051c760(param_1,param_1 + 0xc,param_1 + 0x18), iVar9 == 0)) {
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
  _DAT_026672a8 = 0;
  _DAT_026677b0 = 0;
  local_18 = 0;
  _DAT_026677ac = 0x4b0;
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
        iVar6 = _DAT_026672a8 * 0x50;
        *(int *)(&DAT_026672ac + iVar6) = iVar9;
        iVar2 = _DAT_026677ac;
        *(int *)(iVar6 + 0x26672b0) = iVar5;
        if (iVar9 < iVar2) {
          _DAT_026677ac = iVar9;
        }
        if (_DAT_026677b0 < iVar5) {
          _DAT_026677b0 = iVar5;
        }
        *(int *)(iVar6 + 0x26672b4) = piVar3[4];
        *(int *)(iVar6 + 0x26672d4) = piVar3[2] << 8;
        *(int *)(iVar6 + 0x26672bc) = piVar3[8];
        if ((uint)(piVar8[5] - piVar3[5]) < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)(uint)(piVar8[5] - piVar3[5]));
        }
        lVar1 = (longlong)iVar9 * (longlong)(piVar8[4] - piVar3[4]);
        *(uint *)(iVar6 + 0x26672b8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)((piVar8[2] - piVar3[2]) * 0x100);
        *(uint *)(iVar6 + 0x26672d8) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        lVar1 = (longlong)iVar9 * (longlong)(piVar8[8] - piVar3[8]);
        *(uint *)(iVar6 + 0x26672c0) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10
        ;
        uVar7 = (uint)(ushort)((ushort)piVar3[5] ^ 0xffff);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x26672b8);
        *(int *)(iVar6 + 0x26672b4) =
             *(int *)(iVar6 + 0x26672b4) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x26672d8);
        *(uint *)(iVar6 + 0x26672d4) =
             *(int *)(iVar6 + 0x26672d4) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar7 * (longlong)*(int *)(iVar6 + 0x26672c0);
        _DAT_026672a8 = _DAT_026672a8 + 1;
        *(uint *)(iVar6 + 0x26672bc) =
             *(int *)(iVar6 + 0x26672bc) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_2);
  }
  piVar3 = (int *)&DAT_026672ac;
  iVar9 = 0;
  if (0 < _DAT_026672a8) {
    do {
      if ((_DAT_026677ac == *piVar3) && (piVar3 != (int *)0x0)) goto LAB_0059a6e3;
      iVar9 = iVar9 + 1;
      piVar3 = piVar3 + 0x14;
    } while (iVar9 < _DAT_026672a8);
  }
  piVar3 = (int *)0x0;
LAB_0059a6e3:
  if (piVar3 != (int *)0x0) {
    iVar9 = 0;
    piVar4 = (int *)&DAT_026672ac;
    if (0 < _DAT_026672a8) {
      do {
        if ((_DAT_026677ac == *piVar4) && (piVar4 != piVar3)) goto LAB_0059a71a;
        iVar9 = iVar9 + 1;
        piVar4 = piVar4 + 0x14;
      } while (iVar9 < _DAT_026672a8);
    }
    piVar4 = (int *)0x0;
LAB_0059a71a:
    if (piVar4 != (int *)0x0) {
      local_14 = _DAT_026677ac;
      do {
        if (piVar3[1] <= local_14) {
          *piVar3 = -1;
          iVar9 = 0;
          piVar3 = (int *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == *piVar3) && (piVar3 != piVar4)) goto LAB_0059a76c;
              iVar9 = iVar9 + 1;
              piVar3 = piVar3 + 0x14;
            } while (iVar9 < _DAT_026672a8);
          }
          piVar3 = (int *)0x0;
LAB_0059a76c:
          if (piVar3 == (int *)0x0) {
            return;
          }
        }
        if (piVar4[1] <= local_14) {
          *piVar4 = -1;
          iVar9 = 0;
          piVar4 = (int *)&DAT_026672ac;
          if (0 < _DAT_026672a8) {
            do {
              if ((local_14 == *piVar4) && (piVar4 != piVar3)) goto LAB_0059a7b4;
              iVar9 = iVar9 + 1;
              piVar4 = piVar4 + 0x14;
            } while (iVar9 < _DAT_026672a8);
          }
          piVar4 = (int *)0x0;
LAB_0059a7b4:
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
