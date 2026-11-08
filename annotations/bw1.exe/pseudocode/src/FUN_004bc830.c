// Name: FUN_004bc830
// Address: 004bc830
// Address Range: [[004bc830, 004bc9a3]]
// Convention: unknown
// Signature: void FUN_004bc830(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x96c) != 0) {
    FUN_004bc9b0(param_1);
  }
  FUN_0040d4b0(param_1 + 0x70,param_2,param_3,0xffff);
  if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,"?HeroIsLost" + 1);
    if (iVar1 == 0) {
      iVar1 = FUN_004bc6f0(param_1,*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20,&iStack_1c,
                           &iStack_18);
      if (iVar1 < 0) goto LAB_004bc8c3;
      iVar1 = (param_3 + iStack_18) - _DAT_0061d30c;
      iVar2 = (iStack_1c + param_2) - _DAT_0061d308;
      uVar3 = 0x1cc7c48;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x6c) / 2 + param_3;
      iVar2 = *(int *)(param_1 + 0x68) / 2 + param_2;
      uVar3 = 0x1cc7c5c;
    }
    FUN_0040d4b0(uVar3,iVar2,iVar1,0xffff);
  }
LAB_004bc8c3:
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    iStack_14 = param_1 + 0x2c4;
    iVar2 = param_1;
    do {
      if (*(int *)(iVar2 + 0x394) != 0) {
        FUN_004c1dd0(_DAT_0152d250,iStack_14 + iVar1 * 0xd4 + 100,*(int *)(iVar2 + 0x38c) + param_2,
                     param_3 + *(int *)(iVar2 + 0x390),1,0xffffffff);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xd4;
    } while (iVar1 < *(int *)(param_1 + 0x2c0));
  }
  return;
}
