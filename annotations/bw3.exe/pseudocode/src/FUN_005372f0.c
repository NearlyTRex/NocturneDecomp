// Name: FUN_005372f0
// Address: 005372f0
// Address Range: [[005372f0, 0053731d]]
// Convention: unknown
// Signature: void FUN_005372f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005372f0(uint param_1,int param_2)

{
  if ((0xff < *(int *)(param_2 + 0xc)) && (_DAT_0203ad30 < 100)) {
    *(int *)(&DAT_0203ad30 + (_DAT_0203ad30 + 1) * 4) = param_2;
    _DAT_0203ad30 = _DAT_0203ad30 + 1;
    return;
  }
  return;
}
