// Name: crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
// Address: 006059b0
// Address Range: [[006059b0, 006059d5]]
// Convention: unknown
// Signature: int crt_stdio_c_SetupConsoleInputMode_FUN_006059b0(void)

#include "nocturne.h"

int crt_stdio_c_SetupConsoleInputMode_FUN_006059b0(void)

{
  int iVar1;
  int character;
  
  iVar1 = g_ConsoleInitializationFlag;
  character = crt_stdio_c_DrainConsoleInputAndSetup_FUN_0060b3f8();
  if ((character != -1) && (iVar1 == 0)) {
    crt_stdio_c_WriteConsoleChar_FUN_0060b490(character);
  }
  return character;
}
