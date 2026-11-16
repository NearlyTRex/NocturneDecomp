// Name: wincore_winrun.cpp_updateInputIdleTimers_FUN_005907e0
// Address: 005907e0
// Address Range: [[005907e0, 00590855]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_005907e0(float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_005907e0(float delta_time)

{
  int *piVar1;
  
  piVar1 = (int *)0x26656c4;
  _DAT_02664fa0 = _DAT_02664fa0 + delta_time;
  _DAT_02664fa4 = _DAT_02664fa4 + delta_time;
  do {
    while (*piVar1 != 0) {
      if (*piVar1 == 4) {
        piVar1[0x2a] = (int)_DAT_02664fa0;
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2665974) {
          return;
        }
      }
      else {
        piVar1[0x2a] = (int)((float)piVar1[0x2a] + delta_time);
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == (int *)0x2665974) {
          return;
        }
      }
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != (int *)0x2665974);
  return;
}
