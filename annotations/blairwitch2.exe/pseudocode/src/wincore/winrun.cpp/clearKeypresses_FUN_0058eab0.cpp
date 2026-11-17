// Name: wincore_winrun.cpp_clearKeypresses_FUN_0058eab0
// Address: 0058eab0
// Address Range: [[0058eab0, 0058eac6]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_0058eab0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_0058eab0(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountOld = 0;
  return;
}
