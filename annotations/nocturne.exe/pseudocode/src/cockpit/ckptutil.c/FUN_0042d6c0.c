// Name: cockpit_ckptutil.c_FUN_0042d6c0
// Address: 0042d6c0
// Address Range: [[0042d6c0, 0042d8fa]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042d6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042d6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

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
  iVar7 = param_5 + DAT_005b761c / 2;
  iVar8 = iVar7 + 1;
  if (param_1 != 0) {
    param_1 = param_1 + param_7 * param_4 + param_3;
    pcVar2 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    iStack_30 = param_4 * 0x84;
    iVar5 = (param_6 + param_4) * 4;
    if (DAT_005b7624 == 8) {
      iStack_1c = param_3 + *(int *)(&DAT_01bd2fa0 + iVar5);
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
              (*pcVar2)(iVar4 + iStack_1c,param_1 + iVar4,(iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iVar7 = iVar7 + -1;
          iVar8 = iVar8 + 1;
          iStack_30 = iStack_30 + 0x84;
          iStack_1c = iStack_1c + iVar1;
          param_1 = param_1 + param_7;
        } while (iStack_30 < param_8 * 0x84);
      }
    }
    else {
      iStack_18 = *(int *)(&DAT_01bd2fa0 + iVar5) + param_3 * 2;
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
              (*pcVar2)(iVar4 * 2 + iStack_18 + param_5 * -2,param_1 + iVar4,(iVar6 - iVar4) + 1);
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
            }
          }
          iVar7 = iVar7 + -1;
          iVar8 = iVar8 + 1;
          iStack_2c = iStack_2c + 0x84;
          iStack_18 = iStack_18 + (iVar1 / 2) * 2;
          param_1 = param_1 + param_7;
        } while (iStack_2c < param_8 * 0x84);
      }
    }
  }
  return;
}
