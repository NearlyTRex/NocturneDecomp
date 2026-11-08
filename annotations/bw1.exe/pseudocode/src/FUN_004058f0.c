// Name: FUN_004058f0
// Address: 004058f0
// Address Range: [[004058f0, 0040599b]]
// Convention: unknown
// Signature: undefined * FUN_004058f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004058f0(int param_1)

{
  if (_DAT_01c51d00 == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = FUN_0057fb03;
    }
    else {
      _DAT_01c4f02c = FUN_0057fd39;
    }
  }
  else if (DAT_0061b4a0 == 0x20) {
    _DAT_01c4f02c = (code *)&LAB_0057de01;
  }
  else {
    _DAT_01c4f02c = (code *)&LAB_0057e5e3;
  }
  _DAT_01c51d14 = 3;
  FUN_00406bd0(0xffff);
  _DAT_01c51d18 = 0;
  if (DAT_00713a6c != 0) {
    FUN_004c4d80(param_1 + 0x18,*(uint *)(param_1 + 4));
    return &DAT_00713a84;
  }
  FUN_0043cbf0(*(uint *)(param_1 + 4),param_1 + 0x18);
  return &DAT_00713a84;
}
