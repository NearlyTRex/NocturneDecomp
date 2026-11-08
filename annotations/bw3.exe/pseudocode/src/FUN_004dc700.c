// Name: FUN_004dc700
// Address: 004dc700
// Address Range: [[004dc700, 004dc747]]
// Convention: unknown
// Signature: void FUN_004dc700(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004dc700(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar1 = FUN_00408870(*(uint *)(iVar2 + 0x14),*(uint *)(iVar2 + 0x14));
      iVar3 = iVar3 + 1;
      FUN_005a3140(param_2,"%s%s \"%s\"\n",&DAT_005f0990,uVar1);
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}
