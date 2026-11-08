// Name: FUN_00418220
// Address: 00418220
// Address Range: [[00418220, 0041871e]]
// Convention: unknown
// Signature: void FUN_00418220(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418220(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  
  FUN_004a1b70(0x01C51D80,"ChemPuzzleActive");
  uVar8 = _DAT_01c43540;
  uVar7 = _DAT_01c4353c;
  uVar6 = 0x01C51D80;
  if (param_1[0x24c] == 1) {
    param_1[0x24c] = -1;
    FUN_004a1b70(uVar6,"SolvedChemistryPuzzle");
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    _DAT_01c43544 = 0;
    FUN_00415be0(param_1,0);
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
      iVar12 = (**(code **)(*param_1 + 0x2c))(param_1,uVar7,uVar8);
      if (iVar12 == 0) {
        return;
      }
      if (param_1[9] == 0x2b) {
        if (param_1[0x24c] == 2) {
          FUN_004a1b70(0x01C51D80,"FailedChemistryPuzzle");
        }
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        _DAT_01c43544 = 0;
        FUN_00415be0(param_1,0);
        param_1[0x24c] = -1;
        return;
      }
      if (param_1[9] == 0x2c) {
        (**(code **)(*param_1 + 8))(param_1);
        (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
        param_1[0x24c] = -1;
        return;
      }
    }
    if (param_1[param_1[9] * 0xb + 0x21] == 1) {
      iVar12 = 0;
      if (param_1[7] < 3) {
        iVar9 = 0x25;
LAB_0041828e:
        if (param_1[0x24c] != 2) {
          if (iVar9 != param_1[9]) goto LAB_00418664;
          bVar5 = true;
          iVar9 = 0;
          piVar11 = param_1;
          if (0 < param_1[7]) {
            do {
              if (iVar12 == piVar11[0xe]) {
                bVar5 = false;
              }
              iVar9 = iVar9 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar9 < param_1[7]);
          }
          if (bVar5) {
            iVar9 = param_1[7];
            param_1[7] = iVar9 + 1;
            param_1[iVar9 + 0xe] = iVar12;
          }
        }
      }
LAB_0041829b:
      if (param_1[7] < 1) {
        return;
      }
      if (param_1[9] < 0x25) {
        piVar11 = param_1;
        do {
          piVar10 = piVar11 + 1;
          piVar11[0x24d] = 2;
          piVar11 = piVar10;
        } while (piVar10 != param_1 + 4);
        iVar12 = 0;
        piVar11 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar11[0xe] == 0) {
              param_1[0x24e] = 1;
              param_1[0x24d] = 1;
              if (param_1[0x16] != 1) {
                param_1[0x16] = 1;
                param_1[0x15] = param_1[0x15] + 1;
              }
            }
            if (piVar11[0xe] == 1) {
              param_1[0x24f] = 1;
              param_1[0x24e] = 1;
              if (param_1[0x17] != 1) {
                param_1[0x17] = 1;
                param_1[0x15] = param_1[0x15] + -1;
              }
            }
            if (piVar11[0xe] == 2) {
              param_1[0x250] = 1;
              param_1[0x24f] = 1;
              if (param_1[0x18] != 1) {
                param_1[0x18] = 1;
                param_1[0x15] = param_1[0x15] + -1;
              }
            }
            if (piVar11[0xe] == 3) {
              param_1[0x24d] = 1;
              param_1[0x24f] = 1;
              if (param_1[0x19] != 1) {
                param_1[0x19] = 1;
                param_1[0x15] = param_1[0x15] + 1;
              }
            }
            if ((piVar11[0xe] == 4) && (param_1[0x250] = 1, param_1[0x1a] != 1)) {
              param_1[0x1a] = 1;
              param_1[0x15] = param_1[0x15] + -1;
            }
            if ((piVar11[0xe] == 5) && (param_1[0x24e] = 1, param_1[0x1b] != 1)) {
              param_1[0x1b] = 1;
              param_1[0x15] = param_1[0x15] + 1;
            }
            iVar12 = iVar12 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar12 < param_1[7]);
        }
        iVar12 = 0;
        piVar11 = param_1;
        if (0 < param_1[7]) {
          do {
            if (piVar11[0xe] == 4) {
              param_1[0x24d] = 2;
            }
            if (piVar11[0xe] == 5) {
              param_1[0x24f] = 2;
            }
            iVar12 = iVar12 + 1;
            piVar11 = piVar11 + 1;
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
  piVar11 = param_1;
  for (iVar12 = 0; iVar12 < param_1[8] + 1; iVar12 = iVar12 + 1) {
    if ((piVar11[0x26] == 1) && (iVar9 = (**(code **)(*param_1 + 0x30))(param_1,iVar12), iVar9 != 0)
       ) {
      param_1[0xd] = 1;
    }
    piVar11 = piVar11 + 0xb;
  }
  piVar11 = param_1;
  do {
    piVar10 = piVar11 + 0xb;
    piVar11[0x26] = 0;
    piVar11 = piVar10;
  } while (piVar10 != param_1 + 0x197);
  piVar11 = param_1 + 0x197;
  do {
    piVar10 = piVar11 + 0xb;
    piVar11[0x26] = 1;
    piVar11 = piVar10;
  } while (piVar10 != param_1 + 0x1d9);
  iVar12 = param_1[0x12];
  iVar9 = param_1[0x13];
  iVar1 = param_1[0x14];
  iVar2 = param_1[0x24f];
  iVar3 = param_1[0x24e];
  iVar4 = param_1[0x250];
  param_1[(param_1[0x11] * 3 + 1 + param_1[0x24d]) * 0xb + 0x26] = 1;
  param_1[(iVar12 * 3 + 10 + iVar3) * 0xb + 0x26] = 1;
  param_1[(iVar9 * 3 + 0x13 + iVar2) * 0xb + 0x26] = 1;
  param_1[(iVar1 * 3 + 0x1c + iVar4) * 0xb + 0x26] = 1;
  if ((param_1[7] < 1) && (param_1[0x24c] != 2)) {
    param_1[0x20a] = 0;
    param_1[0x1ff] = 1;
    return;
  }
  param_1[0x20a] = 1;
  param_1[0x1ff] = 1;
  return;
LAB_00418664:
  iVar9 = iVar9 + 1;
  iVar12 = iVar12 + 1;
  if ((0x2a < iVar9) || (2 < param_1[7])) goto LAB_0041829b;
  goto LAB_0041828e;
}
