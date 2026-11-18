// Name: wincore_winrun.cpp_getInputIdleTime_FUN_00590860
// Address: 00590860
// Address Range: [[00590860, 005908bc]]
// Convention: __cdecl
// Signature: float __cdecl wincore_winrun_cpp_getInputIdleTime_FUN_00590860(void)

#include "nocturne.h"

float __cdecl wincore_winrun_cpp_getInputIdleTime_FUN_00590860(void)

{
  int *piVar1;
  float fStack_4;
  
  fStack_4 = g_FLOAT_02664fa0;
  if (g_FLOAT_02664fa4 < g_FLOAT_02664fa0) {
    fStack_4 = g_FLOAT_02664fa4;
  }
  piVar1 = (int *)0x26656c4;
  do {
    if ((*piVar1 != 0) && ((float)piVar1[0x2a] < fStack_4)) {
      fStack_4 = (float)piVar1[0x2a];
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != g_INT_ARRAY_02665974);
  return fStack_4;
}
