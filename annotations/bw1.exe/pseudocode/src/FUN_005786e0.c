// Name: FUN_005786e0
// Address: 005786e0
// Address Range: [[005786e0, 00578705]]
// Convention: unknown
// Signature: void FUN_005786e0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005786e0(uint param_1,float param_2)

{
  if (_DAT_02c81da0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c81da0 + 0x2c))(_DAT_02c81da0,param_2 * _DAT_005f4df3,0);
  return;
}
