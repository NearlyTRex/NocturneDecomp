// Name: FUN_00436170
// Address: 00436170
// Address Range: [[00436170, 00436306]]
// Convention: unknown
// Signature: void FUN_00436170(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436170(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar4 = (code *)FUN_00434e80();
  if (DAT_005fba20 == 8) {
    iStack_2c = _DAT_01c6b5ac;
    if (_DAT_01c6b5ac <= _DAT_01c6b5b4) {
      iStack_34 = _DAT_01c6b5ac * 0x84;
      iStack_38 = _DAT_01c6b5ac << 2;
      do {
        iVar2 = *(int *)(&DAT_01c5faec + iStack_38);
        iVar5 = iStack_2c * DAT_005fba18;
        iVar8 = 0;
        for (iVar7 = 0; piVar6 = (int *)(iStack_34 + param_2), iVar7 < *piVar6; iVar7 = iVar7 + 1) {
          iVar1 = iVar8 + 0x44;
          iVar3 = *(int *)(iVar8 + 4 + (int)piVar6);
          iVar8 = iVar8 + 4;
          (*pcVar4)(iVar2 + iVar3,param_1 + iVar5 + iVar3,*(uint *)(iVar1 + (int)piVar6));
        }
        iStack_34 = iStack_34 + 0x84;
        iStack_38 = iStack_38 + 4;
        iStack_2c = iStack_2c + 1;
      } while (iStack_2c <= _DAT_01c6b5b4);
    }
  }
  else {
    iStack_30 = _DAT_01c6b5ac;
    if (_DAT_01c6b5ac <= _DAT_01c6b5b4) {
      iStack_3c = _DAT_01c6b5ac * 0x84;
      iStack_40 = _DAT_01c6b5ac << 2;
      do {
        iVar2 = *(int *)(&DAT_01c5faec + iStack_40);
        iVar5 = iStack_30 * DAT_005fba18;
        iVar7 = 0;
        for (iVar8 = 0; piVar6 = (int *)(iStack_3c + param_2), iVar8 < *piVar6; iVar8 = iVar8 + 1) {
          iVar1 = iVar7 + 0x44;
          iVar3 = *(int *)(iVar7 + 4 + (int)piVar6);
          iVar7 = iVar7 + 4;
          (*pcVar4)(iVar3 * 2 + iVar2,param_1 + iVar5 + iVar3,*(uint *)(iVar1 + (int)piVar6));
        }
        iStack_3c = iStack_3c + 0x84;
        iStack_40 = iStack_40 + 4;
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 <= _DAT_01c6b5b4);
    }
  }
  return;
}
