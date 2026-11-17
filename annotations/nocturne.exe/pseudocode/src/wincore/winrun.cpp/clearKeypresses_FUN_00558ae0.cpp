// Name: wincore_winrun.cpp_clearKeypresses_FUN_00558ae0
// Address: 00558ae0
// Address Range: [[00558ae0, 00558af6]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00558ae0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_00558ae0(void)

{
  g_InputWriteIndex = 0;
  g_InputReadIndex = 0;
  g_InputCountOld = 0;
  return;
}
