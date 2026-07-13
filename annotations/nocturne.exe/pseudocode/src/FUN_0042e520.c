// Name: FUN_0042e520
// Address: 0042e520
// Address Range: [[0042e520, 0042e6b6]]
// Convention: unknown
// Signature: void FUN_0042e520(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e520(int param_1,int param_2)

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
  
  pcVar4 = (code *)FUN_0042d130();
  if (DAT_005b7624 == 8) {
    iStack_2c = _DAT_01c00c5c;
    if (_DAT_01c00c5c <= _DAT_01c00c64) {
      iStack_34 = _DAT_01c00c5c * 0x84;
      iStack_38 = _DAT_01c00c5c << 2;
      do {
        iVar2 = *(int *)(&DAT_01bd2fa0 + iStack_38);
        iVar5 = iStack_2c * DAT_005b761c;
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
      } while (iStack_2c <= _DAT_01c00c64);
    }
  }
  else {
    iStack_30 = _DAT_01c00c5c;
    if (_DAT_01c00c5c <= _DAT_01c00c64) {
      iStack_3c = _DAT_01c00c5c * 0x84;
      iStack_40 = _DAT_01c00c5c << 2;
      do {
        iVar2 = *(int *)(&DAT_01bd2fa0 + iStack_40);
        iVar5 = iStack_30 * DAT_005b761c;
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
      } while (iStack_30 <= _DAT_01c00c64);
    }
  }
  return;
}
