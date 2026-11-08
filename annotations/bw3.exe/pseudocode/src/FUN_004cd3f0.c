// Name: FUN_004cd3f0
// Address: 004cd3f0
// Address Range: [[004cd3f0, 004cd440]]
// Convention: unknown
// Signature: undefined4 FUN_004cd3f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cd3f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 3) {
    if ((float)_DAT_005c4649 < *(float *)(param_2 + 4)) {
      FUN_004ce950(0x01D22E44,param_1,iVar1);
      return 1;
    }
    FUN_004ce980(0x01D22E44,param_1,param_2,iVar1);
  }
  return 1;
}
