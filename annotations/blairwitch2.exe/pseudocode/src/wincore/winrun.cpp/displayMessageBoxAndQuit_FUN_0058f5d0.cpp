// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_0058f5d0
// Address: 0058f5d0
// Address Range: [[0058f5d0, 0058f61c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_0058f5d0(char *message)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_0058f5d0(char *message)

{
  _sprintf(g_CHAR_ARRAY_02662df0,"%s\n\nFile: %s\nLine: %d");
  MessageBoxA(g_HWND_02664628,g_CHAR_ARRAY_02662df0,PTR_s_Coffin_Rock_0061e984,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
