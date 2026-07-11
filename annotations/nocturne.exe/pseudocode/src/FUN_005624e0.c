// Name: FUN_005624e0
// Address: 005624e0
// Address Range: [[005624e0, 00562547]]
// Convention: unknown
// Signature: void FUN_005624e0(int param_1)

#include "nocturne.h"

void FUN_005624e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x150;
  uVar1 = FUN_004e1890(iVar3,"CHASE_2",0);
  iVar2 = FUN_004e10a0(uVar1);
  if (iVar2 == 0x16) {
    if (*(int *)(param_1 + 0xbdac) == 0) {
      uVar1 = 1;
      iVar2 = FUN_0040de00(0,2,1);
      iVar2 = iVar2 + 0x15;
    }
    else {
      uVar1 = 1;
      iVar2 = 0x16;
    }
    FUN_004e16b0(iVar3,iVar2,uVar1);
    return;
  }
  FUN_004e16b0(iVar3,1,1);
  return;
}
