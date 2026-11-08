// Name: FUN_005bed80
// Address: 005bed80
// Address Range: [[005bed80, 005bede7]]
// Convention: unknown
// Signature: void FUN_005bed80(int param_1)

#include "nocturne.h"

void FUN_005bed80(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x158;
  uVar1 = FUN_00524a00(iVar3,"CHASE_2",0);
  iVar2 = FUN_00524150(uVar1);
  if (iVar2 == 0x16) {
    if (*(int *)(param_1 + 0xc2f0) == 0) {
      uVar1 = 1;
      iVar2 = FUN_0040cc60(0,2,1);
      iVar2 = iVar2 + 0x15;
    }
    else {
      uVar1 = 1;
      iVar2 = 0x16;
    }
    FUN_005247c0(iVar3,iVar2,uVar1);
    return;
  }
  FUN_005247c0(iVar3,1,1);
  return;
}
