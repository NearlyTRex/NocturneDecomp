// Name: FUN_00516c60
// Address: 00516c60
// Address Range: [[00516c60, 00516cb0]]
// Convention: unknown
// Signature: void FUN_00516c60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00516c60(void)

{
  _DAT_01c51d14 = _DAT_01d224b8 | 0x205;
  _DAT_01c51d18 = 0;
  if (_DAT_01d224c8 != 0) {
    _DAT_01c51d14 = _DAT_01d224b8 | 0x20d;
  }
  if (_DAT_01d224c4 == 0) {
    _DAT_01c51d0c = _DAT_01d224bc;
    return;
  }
  _DAT_01c51d14 = _DAT_01c51d14 | 0x122;
  _DAT_01c51d0c = _DAT_01d224bc;
  return;
}
