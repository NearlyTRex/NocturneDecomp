// Name: FUN_005834b0
// Address: 005834b0
// Address Range: [[005834b0, 00583510]]
// Convention: unknown
// Signature: void FUN_005834b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005834b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"?voicusummon.wav" + 1);
  for (iVar2 = 0; iVar2 < *(int *)(0x01E661B8 + 0x14d164); iVar2 = iVar2 + 1) {
    iVar1 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168 + 0x01E661B8),_DAT_026536cc);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10ca0) != 0)) {
      FUN_00581260(iVar1);
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
