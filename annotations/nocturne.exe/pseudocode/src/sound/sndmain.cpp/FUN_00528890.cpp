// Name: FUN_00528890
// Address: 00528890
// Address Range: [[00528890, 005288e0]]
// Convention: unknown
// Signature: void FUN_00528890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528890(void)

{
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x130d;
    FUN_004c8440("unlockSound - sound was not locked!");
  }
  _DAT_02dc84bc = _DAT_02dc84bc + -1;
  FUN_00559c30(_DAT_02dc84b8);
  return;
}
