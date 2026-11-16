// Name: wincore_winrun.cpp_destroyMainWindow_FUN_005b2de0
// Address: 005b2de0
// Address Range: [[005b2de0, 005b2df6]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_005b2de0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_destroyMainWindow_FUN_005b2de0(void)

{
  DestroyWindow(_DAT_02c9be68);
  _DAT_02c9be68 = (HWND)0x0;
  return;
}
