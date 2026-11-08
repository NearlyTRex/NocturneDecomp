// Name: FUN_005a59f0
// Address: 005a59f0
// Address Range: [[005a59f0, 005a5a30]]
// Convention: unknown
// Signature: void FUN_005a59f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a59f0(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c8f0(*(uint *)(param_2 + 0x38),_DAT_0266863c);
  if ((iVar1 == 0) && (*(int *)(param_2 + 0x38) != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    FUN_0059f800(param_1,param_2);
    return;
  }
  return;
}
