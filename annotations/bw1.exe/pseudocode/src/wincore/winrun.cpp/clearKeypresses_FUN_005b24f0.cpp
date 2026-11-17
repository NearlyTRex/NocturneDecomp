// Name: wincore_winrun.cpp_clearKeypresses_FUN_005b24f0
// Address: 005b24f0
// Address Range: [[005b24f0, 005b2506]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005b24f0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005b24f0(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountOld = 0;
  return;
}
