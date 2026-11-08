// Name: FUN_005306b0
// Address: 005306b0
// Address Range: [[005306b0, 005306dd]]
// Convention: unknown
// Signature: void FUN_005306b0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005306b0(uint param_1,int param_2)

{
  if ((0xff < *(int *)(param_2 + 0xc)) && (_DAT_01fc961c < 100)) {
    *(int *)(&DAT_01fc961c + (_DAT_01fc961c + 1) * 4) = param_2;
    _DAT_01fc961c = _DAT_01fc961c + 1;
    return;
  }
  return;
}
