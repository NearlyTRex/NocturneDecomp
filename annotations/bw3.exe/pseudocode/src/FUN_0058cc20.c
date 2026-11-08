// Name: FUN_0058cc20
// Address: 0058cc20
// Address Range: [[0058cc20, 0058cc85]]
// Convention: unknown
// Signature: void FUN_0058cc20(int param_1)

#include "nocturne.h"

void FUN_0058cc20(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x158;
  uVar1 = FUN_004fc310(iVar3,"CHASE_FAST",0);
  iVar2 = FUN_004fba50(uVar1);
  if (iVar2 == 2) {
    if (*(int *)(param_1 + 0xd0dc) == 0) {
      uVar1 = 1;
      iVar2 = FUN_0040cea0(0,2,1);
      iVar2 = iVar2 + 1;
    }
    else {
      uVar1 = 1;
      iVar2 = 2;
    }
    FUN_004fc0d0(iVar3,iVar2,uVar1);
    return;
  }
  FUN_004fc0d0(iVar3,1,1);
  return;
}
