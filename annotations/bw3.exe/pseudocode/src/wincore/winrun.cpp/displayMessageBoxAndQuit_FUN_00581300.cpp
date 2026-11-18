// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_00581300
// Address: 00581300
// Address Range: [[00581300, 0058134c]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00581300(char *message)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_00581300(char *message)

{
  _sprintf(g_CHAR_ARRAY_02d20340,"%s\n\nFile: %s\nLine: %d");
  MessageBoxA(g_MainWindowHandle,g_CHAR_ARRAY_02d20340,PTR_s_Blair_Witch_3_00607280,0x30);
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
