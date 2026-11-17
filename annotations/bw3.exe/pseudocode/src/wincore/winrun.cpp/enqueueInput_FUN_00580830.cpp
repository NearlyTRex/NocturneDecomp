// Name: wincore_winrun.cpp_enqueueInput_FUN_00580830
// Address: 00580830
// Address Range: [[00580830, 00580869]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00580830(int input_value)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_00580830(int input_value)

{
  g_INT_02d2032c = g_INT_02d2032c + 1;
  g_INT_ARRAY_02d202d4[g_INT_02d2032c] = input_value;
  if (0x13 < g_INT_02d2032c) {
    g_INT_02d2032c = 0;
  }
  if ((g_INT_02d2032c == g_INT_02d20328) &&
     (g_INT_02d20328 = g_INT_02d20328 + 1, 0x13 < g_INT_02d20328)) {
    g_INT_02d20328 = 0;
  }
  return;
}
