// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005ad270
// Address: 005ad270
// Address Range: [[005ad270, 005ad2b0]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005ad270(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005ad270(void)

{
  int iVar1;
  
  if ((g_INT_02c83370 != 0) && (g_INT_02c99318 != 0)) {
    iVar1 = _stricmp(g_CHAR_ARRAY_006257d0,"trigl.dll");
    if (iVar1 != 0) {
      engine_special_cpp_restoreVideoMode_FUN_00582310();
    }
    ShowWindow(g_HWND_02c9be68,6);
    return;
  }
  return;
}
