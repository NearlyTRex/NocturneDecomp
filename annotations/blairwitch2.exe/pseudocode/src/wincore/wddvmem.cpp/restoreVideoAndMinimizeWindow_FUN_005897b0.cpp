// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005897b0
// Address: 005897b0
// Address Range: [[005897b0, 005897da]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005897b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005897b0(void)

{
  if ((_DAT_0264bba0 != 0) && (_DAT_02661af8 != 0)) {
    engine_special_cpp_restoreVideoMode_FUN_0055f8c0();
    ShowWindow(_DAT_02664628,6);
    return;
  }
  return;
}
