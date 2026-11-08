// Name: FUN_004a1420
// Address: 004a1420
// Address Range: [[004a1420, 004a145b]]
// Convention: unknown
// Signature: undefined1 * FUN_004a1420(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004a1420(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c8aea4 * 0x40;
  _DAT_01c8aea4 = _DAT_01c8aea4 + 1;
  if (0xff < _DAT_01c8aea4) {
    _DAT_01c8aea4 = 0;
  }
  _DAT_01c8aea0 = _DAT_01c8aea0 + 1;
  if (0x100 < _DAT_01c8aea0) {
    _DAT_01c8aea0 = 0x100;
  }
  return &DAT_01c8aea8 + iVar1;
}
