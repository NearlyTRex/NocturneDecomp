// Name: wincore_winrun.cpp_updateInputIdleTimers_FUN_005b4320
// Address: 005b4320
// Address Range: [[005b4320, 005b4395]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_005b4320(float delta_time)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_005b4320(float delta_time)

{
  int *piVar1;
  
  piVar1 = (int *)0x2c9cf14;
  g_FLOAT_02c9c7e0 = g_FLOAT_02c9c7e0 + delta_time;
  g_FLOAT_02c9c7e4 = g_FLOAT_02c9c7e4 + delta_time;
  do {
    while (*piVar1 != 0) {
      if (*piVar1 == 4) {
        piVar1[0x2a] = (int)g_FLOAT_02c9c7e0;
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == g_INT_ARRAY_02c9d1c4) {
          return;
        }
      }
      else {
        piVar1[0x2a] = (int)((float)piVar1[0x2a] + delta_time);
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == g_INT_ARRAY_02c9d1c4) {
          return;
        }
      }
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != g_INT_ARRAY_02c9d1c4);
  return;
}
