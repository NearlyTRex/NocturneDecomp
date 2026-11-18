// Name: wincore_winrun.cpp_getInputIdleTime_FUN_00582580
// Address: 00582580
// Address Range: [[00582580, 005825dc]]
// Convention: __cdecl
// Signature: float __cdecl wincore_winrun_cpp_getInputIdleTime_FUN_00582580(void)

#include "nocturne.h"

float __cdecl wincore_winrun_cpp_getInputIdleTime_FUN_00582580(void)

{
  int *piVar1;
  float fStack_4;
  
  fStack_4 = g_FLOAT_02d224f0;
  if (g_FLOAT_02d224f4 < g_FLOAT_02d224f0) {
    fStack_4 = g_FLOAT_02d224f4;
  }
  piVar1 = (int *)0x2d22c24;
  do {
    if ((*piVar1 != 0) && ((float)piVar1[0x2a] < fStack_4)) {
      fStack_4 = (float)piVar1[0x2a];
    }
    piVar1 = piVar1 + 0x2b;
  } while (piVar1 != g_INT_ARRAY_02d22ed4);
  return fStack_4;
}
