// Name: FUN_004b6fe0
// Address: 004b6fe0
// Address Range: [[004b6fe0, 004b705f]]
// Convention: unknown
// Signature: void FUN_004b6fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6fe0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  FUN_004b3490(_DAT_01cb9e74 * 0x2c + 0x1cb9e78,param_2,param_3,param_5);
  _DAT_01cb9e74 = _DAT_01cb9e74 + 1;
  if (_DAT_01cb9e74 < 10) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    _DAT_01cb9e74 = 0;
    if (param_4 == 0) {
      return;
    }
  }
  FUN_00555ab0(0x01E82168,0x42c80000,0,0,0x3f800000);
  return;
}
