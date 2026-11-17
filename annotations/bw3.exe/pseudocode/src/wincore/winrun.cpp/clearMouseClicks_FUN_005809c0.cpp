// Name: wincore_winrun.cpp_clearMouseClicks_FUN_005809c0
// Address: 005809c0
// Address Range: [[005809c0, 005809c8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005809c0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005809c0(void)

{
  g_MouseButtonFlags.dword = 0;
  return;
}
