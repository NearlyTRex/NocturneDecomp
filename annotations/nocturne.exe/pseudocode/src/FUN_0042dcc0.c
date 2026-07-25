// Name: FUN_0042dcc0
// Address: 0042dcc0
// Address Range: [[0042dcc0, 0042def0]]
// Convention: unknown
// Signature: void FUN_0042dcc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042dcc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_2c;
  int iStack_28;
  int iStack_1c;
  int iStack_18;
  
  iVar6 = _DAT_01c00c60 - param_3;
  iVar1 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  iVar8 = _DAT_01c00c58 - param_3;
  if (param_1 != 0) {
    pcVar2 = (code *)FUN_0042d130();
    if (DAT_005b7624 == 8) {
      iStack_18 = param_3 + *(int *)(&DAT_01bd2fa0 + param_4 * 4);
      if (0 < param_6) {
        iStack_28 = 0;
        do {
          if (param_2 == 0) {
            (*pcVar2)(iStack_18,param_1,param_5);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)(param_2 + iStack_28), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pcVar2)(iVar3 + iStack_18,param_1 + iVar3,(iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_28 = iStack_28 + 0x84;
          iStack_18 = iStack_18 + iVar1;
          param_1 = param_1 + param_5;
        } while (iStack_28 < param_6 * 0x84);
      }
    }
    else {
      iStack_1c = *(int *)(&DAT_01bd2fa0 + param_4 * 4) + param_3 * 2;
      if (0 < param_6) {
        iStack_2c = 0;
        do {
          if (param_2 == 0) {
            (*pcVar2)(iStack_1c,param_1,param_5);
          }
          else {
            iVar7 = 0;
            iVar9 = 0;
            while (piVar4 = (int *)(param_2 + iStack_2c), iVar9 < *piVar4) {
              iVar3 = *(int *)((int)piVar4 + iVar7 + 4);
              iVar5 = *(int *)((int)piVar4 + iVar7 + 0x44) + iVar3 + -1;
              if (((iVar3 < iVar8) && (iVar3 = iVar8, iVar5 < iVar8)) ||
                 ((iVar6 < iVar5 && (iVar5 = iVar6, iVar6 < iVar3)))) {
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
              else {
                (*pcVar2)(iVar3 * 2 + iStack_1c,param_1 + iVar3,(iVar5 - iVar3) + 1);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 4;
              }
            }
          }
          iStack_2c = iStack_2c + 0x84;
          iStack_1c = iStack_1c + (iVar1 / 2) * 2;
          param_1 = param_1 + param_5;
        } while (iStack_2c < param_6 * 0x84);
      }
    }
  }
  return;
}
