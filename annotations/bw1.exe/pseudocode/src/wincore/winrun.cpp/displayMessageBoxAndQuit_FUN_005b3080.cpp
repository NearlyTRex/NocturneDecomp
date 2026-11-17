// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005b3080
// Address: 005b3080
// Address Range: [[005b3080, 005b30cc]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005b3080(char *message)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005b3080(char *message)

{
  _sprintf(g_CHAR_ARRAY_02c9a630,"%s\n\nFile: %s\nLine: %d");
  MessageBoxA(g_HWND_02c9be68,g_CHAR_ARRAY_02c9a630,PTR_s_Nocturne_006260dc,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
