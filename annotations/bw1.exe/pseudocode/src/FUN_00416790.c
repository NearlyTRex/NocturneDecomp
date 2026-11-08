// Name: FUN_00416790
// Address: 00416790
// Address Range: [[00416790, 00416ce8]]
// Convention: unknown
// Signature: void FUN_00416790(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416790(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  FUN_004a1b70(0x01C51D80,"AudioRecPuzzleActive");
  if (param_1[0xd] == 100) {
    param_1[0xd] = 1;
    iVar7 = FUN_00572d20("REC-FOWARD-SWITCH.WAV");
    param_1[0x16] = iVar7;
  }
  if ((param_1[0x13] == 0) || (param_1[0x30d] == 1)) {
    FUN_004a1b70(0x01C51D80,"ExitFromPuzzle");
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    _DAT_01c43544 = 0;
    FUN_00415be0(param_1,0);
  }
  uVar3 = _DAT_01c43540;
  iVar7 = _DAT_01c4353c;
  if (param_1[9] != 0) {
    if (param_1[0xb] == 0) {
      param_1[0xb] = 1;
      iVar7 = (**(code **)(*param_1 + 0x2c))(param_1,iVar7,uVar3);
      if (iVar7 == 0) {
        DAT_007c397c = 0xffffffff;
        return;
      }
      if (param_1[param_1[8] * 0xb + 0x1d] == 1) {
        if (param_1[8] == 0) {
          FUN_00572d20("rec-on-switch.wav");
          param_1[0x13] = 0;
        }
        else {
          param_1[0x13] = 1;
        }
      }
    }
    else if (param_1[param_1[8] * 0xb + 0x1d] == 2) {
      if (DAT_007c397c == -1) {
        DAT_007c397c = _DAT_01c4353c;
      }
      if (_DAT_005d3fc2 < ABS((double)(_DAT_01c4353c - DAT_007c397c))) {
        (**(code **)(*param_1 + 0x34))(param_1);
        iVar7 = 0;
        do {
          iVar6 = iVar7 + 1;
          (**(code **)(*param_1 + 0x38))(param_1,iVar7);
          iVar7 = iVar6;
        } while (iVar6 < 3);
      }
    }
    else if (param_1[param_1[8] * 0xb + 0x1d] == 3) {
      iVar7 = 5;
LAB_00416963:
      do {
        iVar6 = (**(code **)(*param_1 + 0x54))(param_1,iVar7);
        if (iVar6 != 0) {
          param_1[0x12] = param_1[0x11];
          param_1[0x11] = iVar7 + -5;
          FUN_00572d20("rec-forward-switch.wav");
          if (param_1[0x12] != param_1[0x11]) {
            param_1[0xd] = 100;
          }
          if ((3 < param_1[0x11]) || (param_1[0x11] < 1)) {
            if (param_1[0x11] == 4) {
              param_1[6] = 2;
            }
            else {
              param_1[6] = 3;
            }
            iVar7 = iVar7 + 1;
            if (9 < iVar7) break;
            goto LAB_00416963;
          }
          param_1[6] = 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
LAB_00416890:
    piVar9 = param_1;
    for (iVar7 = 0; iVar7 < param_1[7] + 1; iVar7 = iVar7 + 1) {
      piVar9[0x22] = 0;
      piVar9 = piVar9 + 0xb;
    }
    param_1[(param_1[0x11] + 5) * 0xb + 0x22] = 1;
    param_1[(param_1[0xd] + 2) * 0xb + 0x22] = 1;
    if ((param_1[0xd] == 1) || (param_1[0xd] == 100)) {
      param_1[0x9b] = 1;
    }
    else {
      param_1[0x90] = 1;
    }
    if (param_1[0x13] == 0) {
      param_1[0x2d] = 1;
    }
    else {
      param_1[0x22] = 1;
    }
    iVar7 = 0;
    piVar9 = param_1;
    do {
      iVar6 = 0;
      iVar5 = (int)param_1 + iVar7 + 0x210;
      do {
        if (iVar6 == piVar9[0xe]) {
          *(uint *)(iVar5 + 0x88) = 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < 5);
      iVar7 = iVar7 + 0xdc;
      piVar9 = piVar9 + 1;
    } while (iVar7 != 0x294);
    if (param_1[0xd] == 1) {
      FUN_00573a80(param_1[0x305]);
      FUN_00573a80(param_1[0x306]);
      FUN_00573a80(param_1[0x307]);
    }
    if ((param_1[0xd] != 1) && (param_1[0xd] != 100)) {
      iVar7 = param_1[0x11];
      iVar6 = param_1[0xf];
      iVar5 = param_1[0xd];
      iVar1 = param_1[0x10];
      iVar2 = param_1[0xe];
      if ((param_1[0xc] == 0) && (iVar4 = FUN_005735a0(param_1[0x305]), iVar4 == 0)) {
        (**(code **)(*param_1 + 0x58))(param_1,iVar2,iVar6,iVar1,iVar7,iVar5);
        param_1[0xc] = 1;
        return;
      }
      if ((param_1[0xc] != 0) && (iVar4 = FUN_005735a0(param_1[0x305]), iVar4 == 0)) {
        param_1[0xd] = 100;
        param_1[0xc] = 0;
        if (((iVar2 == param_1[0x308]) &&
            (((iVar6 == param_1[0x309] && (iVar1 == param_1[0x30a])) && (iVar7 == param_1[0x30b]))))
           && (iVar5 == param_1[0x30c])) {
          FUN_004a1b70(0x01C51D80,"AudioPuzzleSuccess");
          param_1[0x30d] = 1;
          return;
        }
      }
    }
    return;
  }
  if (param_1[10] != 0) {
    param_1[8] = -1;
    DAT_007c397c = -1;
  }
  param_1[6] = 0;
  uVar8 = 0;
  piVar9 = param_1;
LAB_004169fc:
  if (param_1[7] + 1 <= (int)uVar8) goto LAB_00416890;
  if (piVar9[0x22] != 1) {
LAB_00416a11:
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 0xb;
    goto LAB_004169fc;
  }
  if ((piVar9[0x1d] != 2) && (piVar9[0x1d] != 3)) {
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 0xb;
    goto LAB_004169fc;
  }
  iVar7 = (**(code **)(*param_1 + 0x54))(param_1,uVar8);
  if (iVar7 == 0) goto LAB_00416a11;
  if (uVar8 < 0xc) {
    if (3 < uVar8) {
      if (4 < uVar8) {
        if (uVar8 < 6) goto LAB_00416a53;
        if (uVar8 != 9) {
          param_1[6] = 1;
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 0xb;
          goto LAB_004169fc;
        }
      }
LAB_00416a6b:
      param_1[6] = 2;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_004169fc;
    }
    if (uVar8 != 2) {
LAB_00416a74:
      param_1[6] = 1;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_004169fc;
    }
  }
  else if (0xc < uVar8) {
    if (0x14 < uVar8) {
      if (uVar8 < 0x16) goto LAB_00416a6b;
      if (uVar8 < 0x17) goto LAB_00416a53;
      if (uVar8 != 0x1a) {
        param_1[6] = 1;
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 0xb;
        goto LAB_004169fc;
      }
      goto LAB_00416a6b;
    }
    if (uVar8 < 0x10) goto LAB_00416a74;
    if (uVar8 < 0x11) goto LAB_00416a6b;
    if (uVar8 != 0x11) {
      param_1[6] = 1;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_004169fc;
    }
  }
LAB_00416a53:
  param_1[6] = 3;
  uVar8 = uVar8 + 1;
  piVar9 = piVar9 + 0xb;
  goto LAB_004169fc;
}
