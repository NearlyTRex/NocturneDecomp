// Name: FUN_00580790
// Address: 00580790
// Address Range: [[00580790, 005807f6]]
// Convention: unknown
// Signature: undefined1 FUN_00580790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00580790(void)

{
  int iVar1;
  byte uVar2;
  
  uVar2 = 0;
  if (_DAT_02d20328 == _DAT_02d2032c) {
    do {
      if (_DAT_02d21b80 != 0) break;
      FUN_0057a8a0();
    } while (_DAT_02d20328 == _DAT_02d2032c);
  }
  if (_DAT_02d20328 != _DAT_02d2032c) {
    iVar1 = _DAT_02d20328 + 1;
    uVar2 = (byte)*(uint *)(_DAT_02d20328 * 4 + 0x2d202d8);
    _DAT_02d20328 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02d20328 = 0;
      return uVar2;
    }
  }
  return uVar2;
}
