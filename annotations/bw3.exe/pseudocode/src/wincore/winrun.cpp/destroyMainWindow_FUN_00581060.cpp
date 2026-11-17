// Name: wincore_winrun.cpp_destroyMainWindow_FUN_00581060
// Address: 00581060
// Address Range: [[00581060, 00581076]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_00581060(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_00581060(void)

{
  DestroyWindow(g_MainWindowHandle);
  g_MainWindowHandle = (HWND)0x0;
  return;
}
