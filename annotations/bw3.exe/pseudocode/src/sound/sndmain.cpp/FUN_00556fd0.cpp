// Name: FUN_00556fd0
// Address: 00556fd0
// Address Range: [[00556fd0, 0055700a] [005590e1, 00559114]]
// Convention: unknown
// Signature: void FUN_00556fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556fd0(void)

{
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x184f;
    FUN_004e4330("unlockSound - sound was not locked!");
  }
  if (_DAT_02cf341c == 1) {
    FUN_00558f20();
  }
  _DAT_02cf341c = _DAT_02cf341c + -1;
  FUN_00581990(_DAT_02cf3418);
  return;
}
