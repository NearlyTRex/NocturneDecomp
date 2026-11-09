// Name: unkafter_bmppuzzl.cpp_FUN_00412530
// Address: 00412530
// Address Range: [[00412530, 004129e2]]
// Convention: unknown
// Signature: void unkafter_bmppuzzl_cpp_FUN_00412530(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bmppuzzl_cpp_FUN_00412530(int *param_1)

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
  
  if ((param_1[0x13] == 0) || (param_1[0x30a] == 1)) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ExitFromPuzzle" + 1);
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    _DAT_01c5fae4 = 0;
    unkafter_alphabit_cpp_FUN_004119a0(param_1,0);
  }
  uVar3 = _DAT_01c5fae0;
  iVar7 = _DAT_01c5fadc;
  if (param_1[9] != 0) {
    if (param_1[0xb] == 0) {
      param_1[0xb] = 1;
      iVar7 = (**(code **)(*param_1 + 0x2c))(param_1,iVar7,uVar3);
      if (iVar7 == 0) {
        DAT_007dffb8 = 0xffffffff;
        return;
      }
      if (param_1[param_1[8] * 0xb + 0x1a] == 1) {
        if (param_1[8] == 0) {
          param_1[0x13] = 0;
        }
        else {
          param_1[0x13] = 1;
        }
      }
    }
    else if (param_1[param_1[8] * 0xb + 0x1a] == 2) {
      if (DAT_007dffb8 == -1) {
        DAT_007dffb8 = _DAT_01c5fadc;
      }
      if (_DAT_005b67be < ABS((double)(_DAT_01c5fadc - DAT_007dffb8))) {
        (**(code **)(*param_1 + 0x34))(param_1);
        iVar7 = 0;
        do {
          iVar6 = iVar7 + 1;
          (**(code **)(*param_1 + 0x38))(param_1,iVar7);
          iVar7 = iVar6;
        } while (iVar6 < 3);
      }
    }
    else if (param_1[param_1[8] * 0xb + 0x1a] == 3) {
      iVar7 = 5;
LAB_0041269c:
      do {
        iVar6 = (**(code **)(*param_1 + 0x54))(param_1,iVar7);
        if (iVar6 != 0) {
          param_1[0x12] = param_1[0x11];
          param_1[0x11] = iVar7 + -5;
          if (param_1[0x12] != param_1[0x11]) {
            param_1[0xd] = 1;
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
            goto LAB_0041269c;
          }
          param_1[6] = 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
LAB_00412610:
    piVar9 = param_1;
    for (iVar7 = 0; iVar7 < param_1[7] + 1; iVar7 = iVar7 + 1) {
      piVar9[0x1f] = 0;
      piVar9 = piVar9 + 0xb;
    }
    param_1[(param_1[0x11] + 5) * 0xb + 0x1f] = 1;
    param_1[(param_1[0xd] + 2) * 0xb + 0x1f] = 1;
    if (param_1[0xd] == 1) {
      param_1[0x98] = 1;
    }
    else {
      param_1[0x8d] = 1;
    }
    if (param_1[0x13] == 0) {
      param_1[0x2a] = 1;
    }
    else {
      param_1[0x1f] = 1;
    }
    iVar7 = 0;
    piVar9 = param_1;
    do {
      iVar6 = 0;
      iVar5 = (int)param_1 + iVar7 + 0x210;
      do {
        if (iVar6 == piVar9[0xe]) {
          *(uint *)(iVar5 + 0x7c) = 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (iVar6 < 5);
      iVar7 = iVar7 + 0xdc;
      piVar9 = piVar9 + 1;
    } while (iVar7 != 0x294);
    if (param_1[0xd] == 1) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1[0x302]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1[0x303]);
      sound_sndmain_cpp_killSfx_FUN_00556be0(param_1[0x304]);
    }
    if (param_1[0xd] != 1) {
      iVar7 = param_1[0x10];
      iVar6 = param_1[0xf];
      iVar5 = param_1[0xd];
      iVar1 = param_1[0x11];
      iVar2 = param_1[0xe];
      if ((param_1[0xc] == 0) &&
         (iVar4 = sound_sndmain_cpp_FUN_00556700(param_1[0x302]), iVar4 == 0)) {
        (**(code **)(*param_1 + 0x58))(param_1,iVar2,iVar6,iVar7,iVar1,iVar5);
        param_1[0xc] = 1;
        return;
      }
      if ((param_1[0xc] != 0) &&
         (iVar4 = sound_sndmain_cpp_FUN_00556700(param_1[0x302]), iVar4 == 0)) {
        param_1[0xd] = 1;
        param_1[0xc] = 0;
        if (((iVar2 == param_1[0x305]) &&
            (((iVar6 == param_1[0x306] && (iVar7 == param_1[0x307])) && (iVar1 == param_1[0x308]))))
           && (iVar5 == param_1[0x309])) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (0x01C6E360,"AudioPuzzleSuccess");
          param_1[0x30a] = 1;
          return;
        }
      }
    }
    return;
  }
  if (param_1[10] != 0) {
    param_1[8] = -1;
    DAT_007dffb8 = -1;
  }
  param_1[6] = 0;
  uVar8 = 0;
  piVar9 = param_1;
LAB_0041271d:
  if (param_1[7] + 1 <= (int)uVar8) goto LAB_00412610;
  if (piVar9[0x1f] != 1) {
LAB_0041272f:
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 0xb;
    goto LAB_0041271d;
  }
  if ((piVar9[0x1a] != 2) && (piVar9[0x1a] != 3)) {
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 0xb;
    goto LAB_0041271d;
  }
  iVar7 = (**(code **)(*param_1 + 0x54))(param_1,uVar8);
  if (iVar7 == 0) goto LAB_0041272f;
  if (uVar8 < 0xc) {
    if (3 < uVar8) {
      if (4 < uVar8) {
        if (uVar8 < 6) goto LAB_00412771;
        if (uVar8 != 9) {
          param_1[6] = 1;
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 0xb;
          goto LAB_0041271d;
        }
      }
LAB_00412789:
      param_1[6] = 2;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_0041271d;
    }
    if (uVar8 != 2) {
LAB_00412792:
      param_1[6] = 1;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_0041271d;
    }
  }
  else if (0xc < uVar8) {
    if (0x14 < uVar8) {
      if (uVar8 < 0x16) goto LAB_00412789;
      if (uVar8 < 0x17) goto LAB_00412771;
      if (uVar8 != 0x1a) {
        param_1[6] = 1;
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 0xb;
        goto LAB_0041271d;
      }
      goto LAB_00412789;
    }
    if (uVar8 < 0x10) goto LAB_00412792;
    if (uVar8 < 0x11) goto LAB_00412789;
    if (uVar8 != 0x11) {
      param_1[6] = 1;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0xb;
      goto LAB_0041271d;
    }
  }
LAB_00412771:
  param_1[6] = 3;
  uVar8 = uVar8 + 1;
  piVar9 = piVar9 + 0xb;
  goto LAB_0041271d;
}
