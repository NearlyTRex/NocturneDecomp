// Name: wincore_winrun.cpp_destroyMainWindow_FUN_00581060
// Address: 00581060
// Address Range: [[00581060, 00581076]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_00581060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_00581060(void)

{
  DestroyWindow(_DAT_02d21b78);
  _DAT_02d21b78 = (HWND)0x0;
  return;
}
