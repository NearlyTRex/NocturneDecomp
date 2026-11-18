// Name: wincore_winrun.cpp_createMainWindow_FUN_00581010
// Address: 00581010
// Address Range: [[00581010, 00581058]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_createMainWindow_FUN_00581010(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_createMainWindow_FUN_00581010(void)

{
  g_MainWindowHandle =
       CreateWindowExA(0x40000,PTR_s_Blair_Witch_3_00607280,PTR_s_Blair_Witch_3_00607284,0x80000000,
                       0,0,0,0,(HWND)0x0,(HMENU)0x0,(HINSTANCE)g_INT_02d21b7c,(LPVOID)0x0);
  if (g_MainWindowHandle != (HWND)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
