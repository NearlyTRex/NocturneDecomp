// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
// Address: 005edc50
// Address Range: [[005edc50, 005edc7a]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void)

{
  if ((g_FullscreenMode != 0) && (g_GraphicsResetFlag != 0)) {
    wincore_windll_cpp_restoreVideoMode_FUN_005b75b0();
    (*ShowWindow)(g_MainWindowHandle,6);
    return;
  }
  return;
}
