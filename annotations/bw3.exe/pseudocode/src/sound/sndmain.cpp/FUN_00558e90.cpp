// Name: FUN_00558e90
// Address: 00558e90
// Address Range: [[00558e90, 00558f16]]
// Convention: unknown
// Signature: void FUN_00558e90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558e90(void)

{
  if (_DAT_02cf3418 == 0) {
    _DAT_02cf3418 = FUN_00581920();
    if (_DAT_02cf3418 == 0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x17e7;
      FUN_004e4330("lockSound - unable to create mutex object");
    }
  }
  FUN_00581930(_DAT_02cf3418);
  _DAT_02cf341c = _DAT_02cf341c + 1;
  if (_DAT_02cf341c < 100) {
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x17f2;
  FUN_004e4330("lockSound - lock imbalance?");
  return;
}
