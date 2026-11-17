// Name: wincore_winrun.cpp_updateInputIdleTimers_FUN_00582500
// Address: 00582500
// Address Range: [[00582500, 00582575]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_00582500(float delta_time)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_updateInputIdleTimers_FUN_00582500(float delta_time)

{
  int *piVar1;
  
  piVar1 = (int *)0x2d22c24;
  g_FLOAT_02d224f0 = g_FLOAT_02d224f0 + delta_time;
  g_FLOAT_02d224f4 = g_FLOAT_02d224f4 + delta_time;
  do {
    while (*piVar1 != 0) {
      if (*piVar1 == 4) {
        piVar1[0x2a] = (int)g_FLOAT_02d224f0;
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == g_INT_ARRAY_02d22ed4) {
          return;
        }
      }
      else {
        piVar1[0x2a] = (int)((float)piVar1[0x2a] + delta_time);
        piVar1 = piVar1 + 0x2b;
        if (piVar1 == g_INT_ARRAY_02d22ed4) {
          return;
        }
      }
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != g_INT_ARRAY_02d22ed4);
  return;
}
