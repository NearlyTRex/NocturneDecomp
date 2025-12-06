// Name: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
// Address: 005f2e70
// Address Range: [[005f2e70, 005f2e86]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005f2e70(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountMaybe = 0;
  return;
}
