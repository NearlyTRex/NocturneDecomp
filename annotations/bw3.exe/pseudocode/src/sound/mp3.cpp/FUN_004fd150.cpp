// Name: FUN_004fd150
// Address: 004fd150
// Address Range: [[004fd150, 004fd307]]
// Convention: unknown
// Signature: void FUN_004fd150(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd150(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  float10 fVar6;
  
  iVar1 = *param_1;
  iVar5 = *(int *)(iVar1 + 0x1c);
  param_1[1] = iVar5;
  param_1[4] = (iVar5 != 3) + 1;
  if (*(int *)(iVar1 + 4) == 2) {
    iVar2 = param_1[6];
    piVar3 = (int *)*param_1;
    iVar4 = *piVar3;
    fVar6 = (float10)*(double *)(&DAT_006011b8 + piVar3[4] * 8 + iVar4 * 0x20);
    FUN_005a3120(piVar3[3],iVar4 * 0xb4);
    iVar5 = (int)ROUND(fVar6);
    if (iVar4 == 1) {
      if (((iVar5 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (extraout_EDX < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < extraout_EDX)) {
          iVar5 = 3;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 != param_1[3]) {
      _DAT_01d71de0 = "..\\sound\\mp3.cpp";
      _DAT_01d71de4 = 0x1d8;
      FUN_004e4330("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01d94b98);
    }
    param_1[6] = iVar2;
  }
  else {
    param_1[6] = 0x20;
  }
  if (*(int *)(iVar1 + 0x1c) != 1) {
    param_1[5] = param_1[6];
    return;
  }
  iVar5 = *(int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 0x20);
  if ((((iVar5 < 1) || (3 < iVar5)) || (iVar1 < 0)) || (3 < iVar1)) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 0x1ea;
    FUN_004e4330("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar1,&DAT_01d94b98);
  }
  param_1[5] = *(int *)("$CMotionController$$" + iVar5 * 0x10 + iVar1 * 4 + 0x13);
  return;
}
