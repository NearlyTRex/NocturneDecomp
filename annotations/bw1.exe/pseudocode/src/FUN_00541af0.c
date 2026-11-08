// Name: FUN_00541af0
// Address: 00541af0
// Address Range: [[00541af0, 00541b7d]]
// Convention: unknown
// Signature: void FUN_00541af0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541af0(int param_1,float param_2)

{
  int iVar1;
  byte auStack_50 [4];
  uint local_4c;
  int local_1c;
  int local_18;
  
  do {
    iVar1 = FUN_00524270(param_1 + 0x158,&param_2);
    if (iVar1 == 100) {
      iVar1 = FUN_0040c600(*(uint *)(param_1 + 0x26fc),_DAT_01c3f6a0);
      if (iVar1 != 0) {
        FUN_0042c010(auStack_50);
        local_4c = 0x40a00000;
        local_1c = param_1;
        local_18 = param_1;
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,auStack_50);
      }
    }
    else {
      FUN_00434a80(param_1,iVar1);
    }
  } while (0.0 < param_2);
  return;
}
