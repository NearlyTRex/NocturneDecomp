// Name: wincore_winrun.cpp_FUN_005b43a0
// Address: 005b43a0
// Address Range: [[005b43a0, 005b43fc]]
// Convention: unknown
// Signature: float wincore_winrun_cpp_FUN_005b43a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float wincore_winrun_cpp_FUN_005b43a0(void)

{
  int *piVar1;
  float fStack_4;
  
  fStack_4 = _DAT_02c9c7e0;
  if (_DAT_02c9c7e4 < _DAT_02c9c7e0) {
    fStack_4 = _DAT_02c9c7e4;
  }
  piVar1 = (int *)0x2c9cf14;
  do {
    if ((*piVar1 != 0) && ((float)piVar1[0x2a] < fStack_4)) {
      fStack_4 = (float)piVar1[0x2a];
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2c9d1c4);
  return fStack_4;
}
