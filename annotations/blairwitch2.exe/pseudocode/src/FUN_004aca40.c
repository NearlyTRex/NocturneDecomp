// Name: FUN_004aca40
// Address: 004aca40
// Address Range: [[004aca40, 004aca8b]]
// Convention: unknown
// Signature: void FUN_004aca40(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aca40(int param_1,float param_2,uint param_3)

{
  if ((_DAT_01cb0620 <= param_2) && (param_2 < *(float *)(param_1 + 0x2b8))) {
    FUN_00550450();
    FUN_00550170(param_1 + 0x5ec);
    FUN_005506b0(param_3);
    FUN_005504d0();
    return;
  }
  return;
}
