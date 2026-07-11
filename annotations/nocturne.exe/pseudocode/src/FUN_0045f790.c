// Name: FUN_0045f790
// Address: 0045f790
// Address Range: [[0045f790, 0045f8cb]]
// Convention: unknown
// Signature: void FUN_0045f790(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f790(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) || (iVar4 = FUN_00404610(param_2 + 8), iVar4 != 0)) {
    if (param_1[1] == 0) {
      if (0 < *(int *)(param_2 + 4)) {
        iVar2 = 0;
        iVar4 = 0;
        iVar3 = param_2;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (param_1[8] == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(*param_1 + iVar5 + 0x18) = *(uint *)(iVar3 + 0x1c);
            *(uint *)(*param_1 + iVar5 + 0x1c) = *(uint *)(iVar3 + 0x20);
          }
          *(int *)(&DAT_01b4d76c + iVar2) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar2 = 0;
        iVar3 = param_2;
        do {
          *(uint *)(&DAT_01b4d76c + iVar2) = *(uint *)(iVar3 + 0x18);
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = &LAB_0052f031;
      }
      else {
        _DAT_01c00c7c = &LAB_0052f823;
      }
      _DAT_01c039a4 = 6;
      _DAT_01c039a0 = 0x2cd;
    }
    else {
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
      _DAT_01c00c7c = &LAB_00463a79;
    }
    FUN_0045ed80(param_1,*(uint *)(param_2 + 4),&DAT_01b4d76c);
  }
  return;
}
