// Name: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
// Address: 0060b3f8
// Address Range: [[0060b3f8, 0060b480]]
// Convention: unknown
// Signature: undefined crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8()

#include "nocturne.h"

int crt_stdio_c_DrainConsoleInputAndSetup_FUN_0060b3f8(void)

{
  int iVar1;
  HANDLE hConsoleHandle;
  DWORD unaff_ESI;
  
  iVar1 = g_ConsoleInitializationFlag;
  if (g_ConsoleInitializationFlag == 0) {
    if (g_SpecialConsoleInputHandler == (SPECIAL_CONSOLE_INPUT_HANDLER_FUNC *)0x0) {
      (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(0);
      hConsoleHandle = crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30();
      (*g_GetConsoleModeFunc)(hConsoleHandle,(LPDWORD)&stack0xfffffff8);
      (*g_SetConsoleModeFunc)(hConsoleHandle,0);
      iVar1 = crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0060b2e0(hConsoleHandle);
      (*g_SetConsoleModeFunc)(hConsoleHandle,unaff_ESI);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(0);
    }
    else {
      iVar1 = (*g_IsSpecialDeviceFuncPtr)(0);
      iVar1 = (*g_SpecialConsoleInputHandler)(iVar1);
    }
  }
  else {
    g_ConsoleInitializationFlag = 0;
  }
  return iVar1;
}
