// Name: FUN_005044c0
// Address: 005044c0
// Address Range: [[005044c0, 005045fd]]
// Convention: unknown
// Signature: int FUN_005044c0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005044c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  iVar5 = *(int *)(&DAT_00618ec8 + piVar2[3] * 4 + iVar3 * 0xb4 + (piVar2[1] + -1) * 0x3c) /
          param_1[4];
  iVar4 = param_1[6];
  dVar6 = round(*(double *)(&DAT_00618e88 + piVar2[4] * 8 + iVar3 * 0x20));
  iVar1 = (int)ROUND(dVar6);
  if (iVar3 == 1) {
    if (((iVar1 == 0x30) && (0x37 < iVar5)) || ((0x37 < iVar5 && (iVar5 < 0x51)))) {
      if (param_1[3] == 0) {
        return iVar4;
      }
    }
    else if ((iVar1 == 0x30) || (iVar5 < 0x60)) {
      if ((iVar1 == 0x20) || (0x30 < iVar5)) {
        if (param_1[3] == 3) {
          return iVar4;
        }
      }
      else if (param_1[3] == 2) {
        return iVar4;
      }
    }
    else if (param_1[3] == 1) {
      return iVar4;
    }
  }
  else if (param_1[3] == 4) {
    return iVar4;
  }
  _DAT_01d046a0 = "..\\sound\\mp3.cpp";
  _DAT_01d046a4 = 0x1d8;
  core_main_c_displayErrorAndQuit_FUN_004e4500("MPEG Layer 2 - pick_table - can't load tables!  File: %s");
  return iVar4;
}
