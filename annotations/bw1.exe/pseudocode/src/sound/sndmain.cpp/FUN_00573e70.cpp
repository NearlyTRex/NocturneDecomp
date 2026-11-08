// Name: FUN_00573e70
// Address: 00573e70
// Address Range: [[00573e70, 00573eaa] [00575f71, 00575fa4]]
// Convention: unknown
// Signature: void FUN_00573e70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573e70(void)

{
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x183c;
    FUN_005030e0("unlockSound - sound was not locked!");
  }
  if (_DAT_02c807ec == 1) {
    FUN_00575db0();
  }
  _DAT_02c807ec = _DAT_02c807ec + -1;
  FUN_005b37b0(_DAT_02c807e8);
  return;
}
