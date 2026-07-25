// Name: FUN_004e2630
// Address: 004e2630
// Address Range: [[004e2630, 004e27e7]]
// Convention: unknown
// Signature: void FUN_004e2630(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2630(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  uint uVar7;
  
  iVar1 = *param_1;
  iVar5 = *(int *)(iVar1 + 0x1c);
  param_1[1] = iVar5;
  param_1[4] = (iVar5 != 3) + 1;
  if (*(int *)(iVar1 + 4) == 2) {
    piVar2 = (int *)*param_1;
    iVar3 = *piVar2;
    iVar4 = *(int *)(&DAT_005bbc88 + piVar2[3] * 4 + (piVar2[1] + -1) * 0x3c + iVar3 * 0xb4) /
            param_1[4];
    uVar7 = 0x4e272f;
    fVar6 = (float10)round
                               ((float10)*(double *)(&DAT_005bbc48 + piVar2[4] * 8 + iVar3 * 0x20));
    iVar5 = (int)ROUND(fVar6);
    if (iVar3 == 1) {
      if (((iVar5 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (iVar4 < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < iVar4)) {
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
    if (iVar5 != *(int *)(iVar3 * 0xb4 + 0xc)) {
      _DAT_01cc4800 = "..\\sound\\mp3.cpp";
      _DAT_01cc4804 = 0x1a1;
      FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01cd8b28,uVar7);
    }
    param_1[6] = (int)param_1;
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
    _DAT_01cc4800 = "..\\sound\\mp3.cpp";
    _DAT_01cc4804 = 0x1b1;
    FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar1,&DAT_01cd8b28);
  }
  param_1[5] = *(int *)("$CMotionController$$" + iVar5 * 0x10 + iVar1 * 4 + 10);
  return;
}
