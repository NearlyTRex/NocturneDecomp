// Name: wincore_winrun.cpp_clearMouseClicks_FUN_00558d50
// Address: 00558d50
// Address Range: [[00558d50, 00558d58]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_00558d50(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_00558d50(void)

{
  g_MouseButtonFlags.dword = 0;
  return;
}
