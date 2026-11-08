// Name: FUN_004a3cf0
// Address: 004a3cf0
// Address Range: [[004a3cf0, 004a3d46]]
// Convention: unknown
// Signature: void FUN_004a3cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3cf0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  FUN_004a05e0(_DAT_01d01ab0 * 0x24 + 0x1d01ab4,param_2,param_3,param_4,param_5,param_6);
  _DAT_01d01ab0 = _DAT_01d01ab0 + 1;
  if (_DAT_01d01ab0 < 100) {
    return;
  }
  _DAT_01d01ab0 = 0;
  return;
}
