// Name: unkafter_superopt.cpp_FUN_00413e30
// Address: 00413e30
// Address Range: [[00413e30, 00414325]]
// Convention: unknown
// Signature: void unkafter_superopt_cpp_FUN_00413e30(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_superopt_cpp_FUN_00413e30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  CEventList *this_ptr;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  
  uVar7 = _DAT_01c5fae0;
  uVar6 = _DAT_01c5fadc;
  this_ptr = 0x01C6E360;
  if (param_1[0x24c] == 1) {
    param_1[0x24c] = -1;
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (this_ptr,"SolvedChemistryPuzzle");
    (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
    _DAT_01c5fae4 = 0;
    unkafter_alphabit_cpp_FUN_004119a0(param_1,0);
    return;
  }
  if (param_1[10] == 0) {
    if (param_1[0xb] != 0) {
      param_1[9] = -1;
    }
  }
  else {
    if (param_1[0xc] == 0) {
      param_1[0xc] = 1;
      iVar12 = (**(code **)(*param_1 + 0x2c))(param_1,uVar6,uVar7);
      if (iVar12 == 0) {
        return;
      }
      if (param_1[9] == 0x2b) {
        if (param_1[0x24c] == 2) {
          core_event_cpp_CEventList_executeCommands_FUN_0048c150
                    (0x01C6E360,"FailedChemistryPuzzle");
        }
        (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
        _DAT_01c5fae4 = 0;
        unkafter_alphabit_cpp_FUN_004119a0(param_1,0);
        param_1[0x24c] = -1;
        return;
      }
      if (param_1[9] == 0x2c) {
        (**(code **)(*param_1 + 8))(param_1);
        (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x200);
        param_1[0x24c] = -1;
        return;
      }
    }
    if (param_1[param_1[9] * 0xb + 0x21] == 1) {
      iVar12 = 0;
      if (param_1[7] < 3) {
        uVar8 = 0x25;
LAB_00413e88:
        if (param_1[0x24c] != 2) {
          if (uVar8 != param_1[9]) goto LAB_00414269;
          bVar5 = true;
          uVar8 = uVar8 ^ param_1[9];
          piVar10 = param_1;
          if (0 < param_1[7]) {
            do {
              if (iVar12 == piVar10[0xe]) {
                bVar5 = false;
              }
              uVar8 = uVar8 + 1;
              piVar10 = piVar10 + 1;
            } while ((int)uVar8 < param_1[7]);
          }
          if (bVar5) {
            iVar11 = param_1[7];
            param_1[7] = iVar11 + 1;
            param_1[iVar11 + 0xe] = iVar12;
          }
        }
      }
LAB_00413e95:
      if (param_1[7] < 1) {
        return;
      }
      if (param_1[9] < 0x25) {
        piVar10 = param_1;
        do {
          piVar9 = piVar10 + 1;
          piVar10[0x24d] = 2;
          piVar10 = piVar9;
        } while (piVar9 != param_1 + 4);
        iVar12 = 0;
        piVar10 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar10[0xe] == 0) {
              param_1[0x24e] = 1;
              param_1[0x24d] = 1;
              if (param_1[0x16] != 1) {
                param_1[0x16] = 1;
                param_1[0x15] = param_1[0x15] + 1;
              }
            }
            if (piVar10[0xe] == 1) {
              param_1[0x24f] = 1;
              param_1[0x24e] = 1;
              if (param_1[0x17] != 1) {
                param_1[0x17] = 1;
                param_1[0x15] = param_1[0x15] + -1;
              }
            }
            if (piVar10[0xe] == 2) {
              param_1[0x250] = 1;
              param_1[0x24f] = 1;
              if (param_1[0x18] != 1) {
                param_1[0x18] = 1;
                param_1[0x15] = param_1[0x15] + -1;
              }
            }
            if ((piVar10[0xe] == 3) && (param_1[0x250] = 1, param_1[0x19] != 1)) {
              param_1[0x19] = 1;
              param_1[0x15] = param_1[0x15] + 1;
            }
            if ((piVar10[0xe] == 4) && (param_1[0x24f] = 1, param_1[0x1a] != 1)) {
              param_1[0x1a] = 1;
              param_1[0x15] = param_1[0x15] + -1;
            }
            if ((piVar10[0xe] == 5) && (param_1[0x24e] = 1, param_1[0x1b] != 1)) {
              param_1[0x1b] = 1;
              param_1[0x15] = param_1[0x15] + 1;
            }
            iVar12 = iVar12 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar12 < param_1[7]);
        }
        iVar12 = 0;
        piVar10 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar10[0xe] == 3) {
              param_1[0x24d] = 2;
            }
            if (piVar10[0xe] == 4) {
              param_1[0x24e] = 2;
            }
            if (piVar10[0xe] == 5) {
              param_1[0x250] = 2;
            }
            iVar12 = iVar12 + 1;
            piVar10 = piVar10 + 1;
          } while (iVar12 < param_1[7]);
        }
        param_1[0x24c] = 2;
        if ((param_1[7] == 3) && (param_1[0x15] == 3)) {
          param_1[0x24c] = 1;
        }
        param_1[7] = 0;
      }
    }
  }
  param_1[0xd] = 0;
  param_1[6] = param_1[7];
  piVar10 = param_1;
  for (iVar12 = 0; iVar12 < param_1[8] + 1; iVar12 = iVar12 + 1) {
    if ((piVar10[0x26] == 1) &&
       (iVar11 = (**(code **)(*param_1 + 0x30))(param_1,iVar12), iVar11 != 0)) {
      param_1[0xd] = 1;
    }
    piVar10 = piVar10 + 0xb;
  }
  piVar10 = param_1;
  do {
    piVar9 = piVar10 + 0xb;
    piVar10[0x26] = 0;
    piVar10 = piVar9;
  } while (piVar9 != param_1 + 0x197);
  piVar10 = param_1 + 0x197;
  do {
    piVar9 = piVar10 + 0xb;
    piVar10[0x26] = 1;
    piVar10 = piVar9;
  } while (piVar9 != param_1 + 0x1d9);
  iVar12 = param_1[0x12];
  iVar11 = param_1[0x13];
  iVar1 = param_1[0x14];
  iVar2 = param_1[0x24e];
  iVar3 = param_1[0x250];
  iVar4 = param_1[0x24f];
  param_1[(param_1[0x11] * 3 + 1 + param_1[0x24d]) * 0xb + 0x26] = 1;
  param_1[(iVar12 * 3 + 10 + iVar2) * 0xb + 0x26] = 1;
  param_1[(iVar11 * 3 + 0x13 + iVar4) * 0xb + 0x26] = 1;
  param_1[(iVar1 * 3 + 0x1c + iVar3) * 0xb + 0x26] = 1;
  if ((param_1[7] < 1) && (param_1[0x24c] != 2)) {
    param_1[0x20a] = 0;
    param_1[0x1ff] = 1;
    return;
  }
  param_1[0x20a] = 1;
  param_1[0x1ff] = 1;
  return;
LAB_00414269:
  uVar8 = uVar8 + 1;
  iVar12 = iVar12 + 1;
  if ((0x2a < (int)uVar8) || (2 < param_1[7])) goto LAB_00413e95;
  goto LAB_00413e88;
}
