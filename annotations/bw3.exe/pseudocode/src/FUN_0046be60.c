// Name: FUN_0046be60
// Address: 0046be60
// Address Range: [[0046be60, 0046bf88]]
// Convention: unknown
// Signature: void FUN_0046be60(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046be60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) || (iVar2 = FUN_00403920(param_2 + 8), iVar2 != 0)) {
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
          *(int *)(&DAT_01bdd818 + iVar4) = iVar1;
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
          *(uint *)(&DAT_01bdd818 + iVar4) = *(uint *)(iVar3 + 0x18);
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar2 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      _DAT_01c6e2b4 = 0x41;
      _DAT_01c6e2b8 = 6;
      _DAT_01c6b5cc = &LAB_0047090d;
    }
    else {
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = 0;
      _DAT_01c6b5cc = &LAB_0046f9a6;
    }
    FUN_0046b160(param_1,*(uint *)(param_2 + 4),&DAT_01bdd818);
  }
  return;
}
