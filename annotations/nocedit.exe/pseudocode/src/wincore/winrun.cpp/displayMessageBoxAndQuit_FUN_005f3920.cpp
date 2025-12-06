// Name: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
// Address: 005f3920
// Address Range: [[005f3920, 005f396c]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920(char * message)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(char *message)

{
  crt_stdio_c_sprintf_FUN_005fdbd0
            (g_ErrorMessageBuffer,"%s\n\nFile: %s\nLine: %d",message,g_CurrentFilename,
             g_CurrentLineNumber);
  (*MessageBoxA)(g_MainWindowHandle,g_ErrorMessageBuffer,g_ApplicationTitle,0x30);
  (*PTR_ExitProcess_00611534)(1);
  return;
}
