// Name: wincore_winrun.cpp_FUN_005b4320
// Address: 005b4320
// Address Range: [[005b4320, 005b4395]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005b4320(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_FUN_005b4320(float param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x2c9cf14;
  _DAT_02c9c7e0 = _DAT_02c9c7e0 + param_1;
  _DAT_02c9c7e4 = _DAT_02c9c7e4 + param_1;
  do {
    while (*piVar1 != 0) {
      if (*piVar1 == 4) {
        piVar1[0x2a] = (int)_DAT_02c9c7e0;
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2c9d1c4) {
          return;
        }
      }
      else {
        piVar1[0x2a] = (int)((float)piVar1[0x2a] + param_1);
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2c9d1c4) {
          return;
        }
      }
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2c9d1c4);
  return;
}
