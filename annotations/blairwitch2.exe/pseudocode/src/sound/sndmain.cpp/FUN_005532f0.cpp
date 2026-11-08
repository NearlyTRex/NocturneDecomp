// Name: FUN_005532f0
// Address: 005532f0
// Address Range: [[005532f0, 00553376]]
// Convention: unknown
// Signature: void FUN_005532f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005532f0(void)

{
  if (_DAT_02649018 == 0) {
    _DAT_02649018 = FUN_0058fc90();
    if (_DAT_02649018 == 0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x17dd;
      FUN_004e4500("lockSound - unable to create mutex object");
    }
  }
  FUN_0058fca0(_DAT_02649018);
  _DAT_0264901c = _DAT_0264901c + 1;
  if (_DAT_0264901c < 100) {
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x17e8;
  FUN_004e4500("lockSound - lock imbalance?");
  return;
}
