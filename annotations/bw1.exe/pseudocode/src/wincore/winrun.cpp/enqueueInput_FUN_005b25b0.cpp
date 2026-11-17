// Name: wincore_winrun.cpp_enqueueInput_FUN_005b25b0
// Address: 005b25b0
// Address Range: [[005b25b0, 005b25e9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005b25b0(int input_value)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_005b25b0(int input_value)

{
  g_INT_02c9a61c = g_INT_02c9a61c + 1;
  g_INT_ARRAY_02c9a5c4[g_INT_02c9a61c] = input_value;
  if (0x13 < g_INT_02c9a61c) {
    g_INT_02c9a61c = 0;
  }
  if ((g_INT_02c9a61c == g_INT_02c9a618) &&
     (g_INT_02c9a618 = g_INT_02c9a618 + 1, 0x13 < g_INT_02c9a618)) {
    g_INT_02c9a618 = 0;
  }
  return;
}
