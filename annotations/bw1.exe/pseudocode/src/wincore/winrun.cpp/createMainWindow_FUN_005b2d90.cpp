// Name: wincore_winrun.cpp_createMainWindow_FUN_005b2d90
// Address: 005b2d90
// Address Range: [[005b2d90, 005b2dd8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_createMainWindow_FUN_005b2d90(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_createMainWindow_FUN_005b2d90(void)

{
  g_HWND_02c9be68 =
       CreateWindowExA(0x40000,PTR_s_Nocturne_006260dc,PTR_s_Nocturne_006260e0,0x80000000,0,0,0,0,
                       (HWND)0x0,(HMENU)0x0,(HINSTANCE)g_INT_02c9be6c,(LPVOID)0x0);
  if (g_HWND_02c9be68 != (HWND)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
