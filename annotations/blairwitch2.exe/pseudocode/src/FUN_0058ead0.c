// Name: FUN_0058ead0
// Address: 0058ead0
// Address Range: [[0058ead0, 0058eb36]]
// Convention: unknown
// Signature: undefined1 FUN_0058ead0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0058ead0(void)

{
  int iVar1;
  byte uVar2;
  
  uVar2 = 0;
  if (_DAT_02662dd8 == _DAT_02662ddc) {
    do {
      if (_DAT_02664630 != 0) break;
      FUN_00589560();
    } while (_DAT_02662dd8 == _DAT_02662ddc);
  }
  if (_DAT_02662dd8 != _DAT_02662ddc) {
    iVar1 = _DAT_02662dd8 + 1;
    uVar2 = (byte)*(uint *)(_DAT_02662dd8 * 4 + 0x2662d88);
    _DAT_02662dd8 = iVar1;
    if (0x13 < iVar1) {
      _DAT_02662dd8 = 0;
      return uVar2;
    }
  }
  return uVar2;
}
