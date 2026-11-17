// Name: wincore_winrun.cpp_enqueueInput_FUN_0058eb70
// Address: 0058eb70
// Address Range: [[0058eb70, 0058eba9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

{
  g_INT_02662ddc = g_INT_02662ddc + 1;
  g_INT_ARRAY_02662d84[g_INT_02662ddc] = input_value;
  if (0x13 < g_INT_02662ddc) {
    g_INT_02662ddc = 0;
  }
  if ((g_INT_02662ddc == g_INT_02662dd8) &&
     (g_INT_02662dd8 = g_INT_02662dd8 + 1, 0x13 < g_INT_02662dd8)) {
    g_INT_02662dd8 = 0;
  }
  return;
}
