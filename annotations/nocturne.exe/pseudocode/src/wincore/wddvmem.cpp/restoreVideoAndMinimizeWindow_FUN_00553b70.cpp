// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70
// Address: 00553b70
// Address Range: [[00553b70, 00553b9a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70(void)

{
  if ((g_UseDirect3D != 0) && (_DAT_02ddf568 != 0)) {
    engine_special_cpp_restoreVideoMode_FUN_005325f0();
    ShowWindow(_DAT_02de2098,6);
    return;
  }
  return;
}
