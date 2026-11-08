// Name: FUN_0059b5a0
// Address: 0059b5a0
// Address Range: [[0059b5a0, 0059b8f3]]
// Convention: unknown
// Signature: void FUN_0059b5a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b5a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1[0x11] == 0) {
    FUN_004894f0(0x01C38BC0,"?ExitFromPuzzle" + 1);
    FUN_0059ab70(param_1,0);
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200);
  }
  uVar1 = _DAT_01c2a380;
  iVar2 = _DAT_01c2a37c;
  if (param_1[9] == 0) {
    if (param_1[10] != 0) {
      param_1[8] = -1;
      _DAT_026677e4 = -1;
    }
    param_1[6] = 0;
    uVar6 = 0;
    piVar5 = param_1;
    if (0 < param_1[7]) {
      do {
        if ((piVar5[0x1d] == 1) &&
           (((piVar5[0x18] == 2 || (piVar5[0x18] == 3)) &&
            (iVar2 = (**(code **)(*param_1 + 0x54))(param_1,uVar6), iVar2 != 0)))) {
          if (uVar6 < 0xc) {
            if (3 < uVar6) {
              if (4 < uVar6) {
                if (uVar6 < 6) goto LAB_0059b866;
                if (uVar6 != 9) {
                  param_1[6] = 1;
                  goto LAB_0059b86d;
                }
              }
              goto LAB_0059b885;
            }
            if (uVar6 == 2) goto LAB_0059b866;
LAB_0059b88e:
            param_1[6] = 1;
          }
          else {
            if (0xc < uVar6) {
              if (0x14 < uVar6) {
                if (0x15 < uVar6) {
                  if (uVar6 < 0x17) goto LAB_0059b866;
                  if (uVar6 != 0x1a) {
                    param_1[6] = 1;
                    goto LAB_0059b86d;
                  }
                }
LAB_0059b885:
                param_1[6] = 2;
                goto LAB_0059b86d;
              }
              if (uVar6 < 0x10) goto LAB_0059b88e;
              if (uVar6 < 0x11) goto LAB_0059b885;
              if (uVar6 != 0x11) {
                param_1[6] = 1;
                goto LAB_0059b86d;
              }
            }
LAB_0059b866:
            param_1[6] = 3;
          }
        }
LAB_0059b86d:
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 0xb;
      } while ((int)uVar6 < param_1[7]);
    }
  }
  else if (param_1[0xb] == 0) {
    param_1[0xb] = 1;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,iVar2,uVar1);
    if (iVar2 == 0) {
      _DAT_026677e4 = 0xffffffff;
      return;
    }
    if (param_1[param_1[8] * 0xb + 0x18] == 1) {
      if (param_1[8] == 0) {
        param_1[0x11] = 0;
      }
      else {
        param_1[0x11] = 1;
      }
    }
  }
  else if (param_1[param_1[8] * 0xb + 0x18] == 2) {
    if (_DAT_026677e4 == -1) {
      _DAT_026677e4 = _DAT_01c2a37c;
    }
    if (_DAT_005ef59c < ABS((double)(_DAT_01c2a37c - _DAT_026677e4))) {
      (**(code **)(*param_1 + 0x34))(param_1);
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        (**(code **)(*param_1 + 0x38))(param_1,iVar2);
        iVar2 = iVar4;
      } while (iVar4 < 3);
    }
  }
  else if (param_1[param_1[8] * 0xb + 0x18] == 3) {
    iVar2 = 5;
    do {
      while (iVar4 = (**(code **)(*param_1 + 0x54))(param_1,iVar2), iVar4 == 0) {
LAB_0059b7d2:
        iVar2 = iVar2 + 1;
        if (9 < iVar2) goto LAB_0059b640;
      }
      iVar4 = iVar2 + -5;
      param_1[0x10] = iVar4;
      if ((iVar4 < 4) && (0 < iVar4)) {
        param_1[6] = 1;
        goto LAB_0059b7d2;
      }
      if (param_1[0x10] == 4) {
        param_1[6] = 2;
      }
      else {
        param_1[6] = 3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
  }
LAB_0059b640:
  iVar2 = 0;
  piVar5 = param_1;
  if (0 < param_1[7]) {
    do {
      piVar5[0x1d] = 0;
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar2 < param_1[7]);
  }
  param_1[(param_1[0x10] + 5) * 0xb + 0x1d] = 1;
  param_1[(param_1[0xc] + 2) * 0xb + 0x1d] = 1;
  if (param_1[0xc] == 1) {
    param_1[0x96] = 1;
  }
  else {
    param_1[0x8b] = 1;
  }
  if (param_1[0x11] == 0) {
    param_1[0x28] = 1;
  }
  else {
    param_1[0x1d] = 1;
  }
  iVar2 = 0;
  piVar5 = param_1;
  do {
    iVar4 = (int)param_1 + iVar2 + 0x210;
    iVar3 = 0;
    do {
      if (iVar3 == piVar5[0xd]) {
        *(uint *)(iVar4 + 0x74) = 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar3 < 5);
    iVar2 = iVar2 + 0xdc;
    piVar5 = piVar5 + 1;
  } while (iVar2 != 0x294);
  return;
}
