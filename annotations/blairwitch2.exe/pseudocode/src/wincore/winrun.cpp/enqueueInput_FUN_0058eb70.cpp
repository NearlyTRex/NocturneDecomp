// Name: wincore_winrun.cpp_enqueueInput_FUN_0058eb70
// Address: 0058eb70
// Address Range: [[0058eb70, 0058eba9]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_enqueueInput_FUN_0058eb70(int input_value)

{
  g_InputWriteIndex = g_InputWriteIndex + 1;
  g_UseMultimediaTimer[g_InputWriteIndex] = input_value;
  if (0x13 < g_InputWriteIndex) {
    g_InputWriteIndex = 0;
  }
  if ((g_InputWriteIndex == g_InputReadIndex) &&
     (g_InputReadIndex = g_InputReadIndex + 1, 0x13 < g_InputReadIndex)) {
    g_InputReadIndex = 0;
  }
  return;
}
