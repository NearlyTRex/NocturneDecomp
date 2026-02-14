// Name: wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0
// Address: 005f30c0
// Address Range: [[005f30c0, 005f30c8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_clearMouseClicks_FUN_005f30c0(void)

{
  g_MouseButtonFlags.dword = 0;
  return;
}
