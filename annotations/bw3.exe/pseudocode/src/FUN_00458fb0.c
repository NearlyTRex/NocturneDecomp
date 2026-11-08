// Name: FUN_00458fb0
// Address: 00458fb0
// Address Range: [[00458fb0, 00459026]]
// Convention: unknown
// Signature: void FUN_00458fb0(int param_1)

#include "nocturne.h"

void FUN_00458fb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xd0e0) != 0) {
    FUN_004fc0d0(param_1 + 0x158,4,1);
    return;
  }
  if (*(int *)(param_1 + 0xd0dc) == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 1;
  }
  iVar1 = FUN_0040cea0(0,uVar3);
  iVar1 = iVar1 + 4;
  if (((iVar1 == 8) || (iVar1 == 9)) && (iVar2 = FUN_0040cea0(0,5), iVar2 != 1)) {
    iVar1 = 4;
  }
  FUN_004fc0d0(param_1 + 0x158,iVar1,1);
  return;
}
