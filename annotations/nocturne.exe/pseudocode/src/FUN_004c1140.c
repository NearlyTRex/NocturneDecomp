// Name: FUN_004c1140
// Address: 004c1140
// Address Range: [[004c1140, 004c1187]]
// Convention: unknown
// Signature: void FUN_004c1140(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004c1140(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar1 = FUN_00409fa0(*(uint *)(iVar2 + 0xc),*(uint *)(iVar2 + 0xc));
      iVar3 = iVar3 + 1;
      FUN_005644f0(param_2,"%s%s \"%s\"\n",&DAT_005acc90,uVar1);
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}
