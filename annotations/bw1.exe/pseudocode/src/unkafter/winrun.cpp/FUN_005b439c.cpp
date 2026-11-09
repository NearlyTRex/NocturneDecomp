// Name: unkafter_winrun.cpp_FUN_005b439c
// Address: 005b439c
// Address Range: [[005b439c, 005b43fc]]
// Convention: unknown
// Signature: float unkafter_winrun_cpp_FUN_005b439c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float unkafter_winrun_cpp_FUN_005b439c(void)

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
