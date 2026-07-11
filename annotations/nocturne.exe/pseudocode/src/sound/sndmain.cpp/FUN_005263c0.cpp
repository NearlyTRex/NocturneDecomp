// Name: FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005263f9]]
// Convention: unknown
// Signature: void FUN_005263c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005263c0(void)

{
  _DAT_02dc1b74 = _DAT_02dc1b74 + -1;
  if (-1 < _DAT_02dc1b74) {
    return;
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0xd03;
  FUN_004c8440("popSfxOptions - stack empty");
  return;
}
