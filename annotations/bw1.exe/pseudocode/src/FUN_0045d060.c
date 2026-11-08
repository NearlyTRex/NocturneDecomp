// Name: FUN_0045d060
// Address: 0045d060
// Address Range: [[0045d060, 0045d0d6]]
// Convention: unknown
// Signature: void FUN_0045d060(int param_1)

#include "nocturne.h"

void FUN_0045d060(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc2f4) != 0) {
    FUN_005247c0(param_1 + 0x158,4,1);
    return;
  }
  if (*(int *)(param_1 + 0xc2f0) == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 1;
  }
  iVar1 = FUN_0040cc60(0,uVar3);
  iVar1 = iVar1 + 4;
  if (((iVar1 == 9) || (iVar1 == 10)) && (iVar2 = FUN_0040cc60(0,5), iVar2 != 1)) {
    iVar1 = 4;
  }
  FUN_005247c0(param_1 + 0x158,iVar1,1);
  return;
}
