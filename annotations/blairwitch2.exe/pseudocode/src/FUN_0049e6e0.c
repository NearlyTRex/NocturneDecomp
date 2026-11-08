// Name: FUN_0049e6e0
// Address: 0049e6e0
// Address Range: [[0049e6e0, 0049e75f]]
// Convention: unknown
// Signature: void FUN_0049e6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e6e0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  FUN_0049aaf0(_DAT_01ca13e8 * 0x2c + 0x1ca13ec,param_2,param_3,param_5);
  _DAT_01ca13e8 = _DAT_01ca13e8 + 1;
  if (_DAT_01ca13e8 < 10) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    _DAT_01ca13e8 = 0;
    if (param_4 == 0) {
      return;
    }
  }
  FUN_00534800(0x01E661B8,0x42c80000,0,0,0x3f800000);
  return;
}
