// Name: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_0057ab20
// Address: 0057ab20
// Address Range: [[0057ab20, 0057ab60]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_0057ab20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_0057ab20(void)

{
  int iVar1;
  
  if ((g_INT_02cf5fcc != 0) && (g_INT_02d0bcf8 != 0)) {
    iVar1 = _stricmp(g_CHAR_ARRAY_00606730,"trigl.dll");
    if (iVar1 != 0) {
      engine_special_cpp_restoreVideoMode_FUN_00565be0();
    }
    ShowWindow(g_HWND_02d21b78,6);
    return;
  }
  return;
}
