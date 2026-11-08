// Name: FUN_004c59f0
// Address: 004c59f0
// Address Range: [[004c59f0, 004c5a3b]]
// Convention: unknown
// Signature: void FUN_004c59f0(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c59f0(int param_1,float param_2,uint param_3)

{
  if ((_DAT_01cc90b0 <= param_2) && (param_2 < *(float *)(param_1 + 0x15c))) {
    FUN_00572ac0();
    FUN_005727e0(param_1 + 0x490);
    FUN_00572d20(param_3);
    FUN_00572b40();
    return;
  }
  return;
}
