// Name: FUN_0046a270
// Address: 0046a270
// Address Range: [[0046a270, 0046a398]]
// Convention: unknown
// Signature: void FUN_0046a270(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a270(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) || (iVar2 = FUN_00403970(param_2 + 8), iVar2 != 0)) {
    if (param_1[1] == 0) {
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar2 = 0;
        iVar3 = param_2;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (param_1[8] == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(iVar5 + *param_1 + 0x18) = *(uint *)(iVar3 + 0x1c);
            *(uint *)(*param_1 + iVar5 + 0x1c) = *(uint *)(iVar3 + 0x20);
          }
          *(int *)(&DAT_01ba5c84 + iVar4) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar4 = 0;
        iVar3 = param_2;
        do {
          *(uint *)(&DAT_01ba5c84 + iVar4) = *(uint *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      _DAT_01c38b54 = 0x41;
      _DAT_01c38b58 = 6;
      _DAT_01c35e6c = &LAB_0046f89d;
    }
    else {
      _DAT_01c38b54 = 0;
      _DAT_01c38b58 = 0;
      _DAT_01c35e6c = &LAB_0046e936;
    }
    FUN_00469590(param_1,*(uint *)(param_2 + 4),&DAT_01ba5c84);
  }
  return;
}
