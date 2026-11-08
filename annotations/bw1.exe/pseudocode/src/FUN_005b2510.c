// Name: FUN_005b2510
// Address: 005b2510
// Address Range: [[005b2510, 005b2576]]
// Convention: unknown
// Signature: undefined1 FUN_005b2510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_005b2510(void)

{
  int iVar1;
  byte uVar2;
  
  uVar2 = 0;
  if (_DAT_02c9a618 == _DAT_02c9a61c) {
    do {
      if (_DAT_02c9be70 != 0) break;
      FUN_005acff0();
    } while (_DAT_02c9a618 == _DAT_02c9a61c);
  }
  if (_DAT_02c9a618 != _DAT_02c9a61c) {
    iVar1 = _DAT_02c9a618 + 1;
    uVar2 = (byte)*(uint *)(_DAT_02c9a618 * 4 + 0x2c9a5c8);
    _DAT_02c9a618 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02c9a618 = 0;
      return uVar2;
    }
  }
  return uVar2;
}
