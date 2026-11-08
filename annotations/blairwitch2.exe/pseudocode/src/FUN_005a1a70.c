// Name: FUN_005a1a70
// Address: 005a1a70
// Address Range: [[005a1a70, 005a1aa2]]
// Convention: unknown
// Signature: void FUN_005a1a70(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a1a70(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(*(uint *)(param_2 + 0x38),_DAT_026684d4);
  if (iVar1 != 0) {
    return;
  }
  FUN_0059f800(param_1,param_2);
  return;
}
