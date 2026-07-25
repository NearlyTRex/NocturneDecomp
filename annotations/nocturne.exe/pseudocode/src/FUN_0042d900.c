// Name: FUN_0042d900
// Address: 0042d900
// Address Range: [[0042d900, 0042db45]]
// Convention: unknown
// Signature: void FUN_0042d900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_30;
  int iStack_2c;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  iVar8 = param_5 + _DAT_01c00c60;
  iVar7 = param_5 + _DAT_01c00c58;
  if (param_1 != 0) {
    param_1 = param_1 + param_7 * param_4 + param_3;
    pcVar2 = (code *)FUN_0042d130();
    iVar5 = (param_6 + param_4) * 4;
    iStack_30 = param_4 * 0x84;
    if (DAT_005b7624 == 8) {
      iStack_18 = param_3 + *(int *)(&DAT_01bd2fa0 + iVar5);
      if (param_4 < param_8) {
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)(param_2 + iStack_30), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pcVar2)((iVar4 + iStack_18) - param_5,param_1 + iVar4,(iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iStack_30 = iStack_30 + 0x84;
          iStack_18 = iStack_18 + iVar1;
          param_1 = param_1 + param_7;
        } while (iStack_30 < param_8 * 0x84);
      }
    }
    else {
      iStack_1c = *(int *)(&DAT_01bd2fa0 + iVar5) + param_3 * 2;
      if (param_4 < param_8) {
        iStack_2c = iStack_30;
        do {
          iVar5 = 0;
          iVar9 = 0;
          while (piVar3 = (int *)(param_2 + iStack_2c), iVar9 < *piVar3) {
            iVar4 = *(int *)((int)piVar3 + iVar5 + 4);
            iVar6 = *(int *)((int)piVar3 + iVar5 + 0x44) + iVar4 + -1;
            if (((iVar4 < iVar7) && (iVar4 = iVar7, iVar6 < iVar7)) ||
               ((iVar8 < iVar6 && (iVar6 = iVar8, iVar8 < iVar4)))) {
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
            else {
              (*pcVar2)(iVar4 * 2 + iStack_1c + param_5 * -2,param_1 + iVar4,(iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iStack_2c = iStack_2c + 0x84;
          iStack_1c = iStack_1c + (iVar1 / 2) * 2;
          param_1 = param_1 + param_7;
        } while (iStack_2c < param_8 * 0x84);
      }
    }
  }
  return;
}
