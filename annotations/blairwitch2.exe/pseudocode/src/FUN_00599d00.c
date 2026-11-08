// Name: FUN_00599d00
// Address: 00599d00
// Address Range: [[00599d00, 00599d67]]
// Convention: unknown
// Signature: void FUN_00599d00(int param_1)

#include "nocturne.h"

void FUN_00599d00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x2b4;
  uVar1 = FUN_00503860(iVar3,"CHASE_2",0);
  iVar2 = FUN_00502fa0(uVar1);
  if (iVar2 == 0x16) {
    if (*(int *)(param_1 + 0x10b80) == 0) {
      uVar1 = 1;
      iVar2 = FUN_0040cfc0(0,2,1);
      iVar2 = iVar2 + 0x15;
    }
    else {
      uVar1 = 1;
      iVar2 = 0x16;
    }
    FUN_00503620(iVar3,iVar2,uVar1);
    return;
  }
  FUN_00503620(iVar3,1,1);
  return;
}
