// Name: wincore_winrun.cpp_destroyMainWindow_FUN_005b2de0
// Address: 005b2de0
// Address Range: [[005b2de0, 005b2df6]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_005b2de0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_005b2de0(void)

{
  DestroyWindow(g_MainWindowHandle);
  g_MainWindowHandle = (HWND)0x0;
  return;
}
