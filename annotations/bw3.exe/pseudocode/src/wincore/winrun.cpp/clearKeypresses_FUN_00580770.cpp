// Name: wincore_winrun.cpp_clearKeypresses_FUN_00580770
// Address: 00580770
// Address Range: [[00580770, 00580786]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00580770(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00580770(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountOld = 0;
  return;
}
