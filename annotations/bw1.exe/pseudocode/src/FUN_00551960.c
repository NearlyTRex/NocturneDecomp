// Name: FUN_00551960
// Address: 00551960
// Address Range: [[00551960, 0055198d]]
// Convention: unknown
// Signature: void FUN_00551960(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551960(uint param_1,int param_2)

{
  if ((0xff < *(int *)(param_2 + 0xc)) && (_DAT_01fe55d0 < 100)) {
    *(int *)(&DAT_01fe55d0 + (_DAT_01fe55d0 + 1) * 4) = param_2;
    _DAT_01fe55d0 = _DAT_01fe55d0 + 1;
    return;
  }
  return;
}
