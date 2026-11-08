// Name: FUN_004f9600
// Address: 004f9600
// Address Range: [[004f9600, 004f9667]]
// Convention: unknown
// Signature: void FUN_004f9600(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9600(uint param_1,float param_2)

{
  _DAT_01d88644 = param_2 * (float)_DAT_005c9265 + _DAT_01d88644;
  if ((float)_DAT_005c926d <= _DAT_01d88644) {
    _DAT_01d88644 = _DAT_01d88644 + _DAT_005c9275;
  }
  _DAT_01d8863c = _DAT_01d8863c + _DAT_01c5fad0 * 0x20;
  _DAT_01d88640 = _DAT_01d88640 + _DAT_01c5fad0 * 0x10;
  return;
}
