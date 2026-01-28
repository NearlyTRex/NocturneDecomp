// Name: crt_stdio.c_WriteConsoleChar_FUN_0060b490
// Address: 0060b490
// Address Range: [[0060b490, 0060b4f5]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0060b490(int character)

#include "nocturne.h"

int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0060b490(int character)

{
  int device_type;
  HANDLE hConsoleOutput;
  byte local_8 [4];
  
  local_8[0] = (byte)character;
  if (g_SpecialConsoleOutputHandler == (SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC *)0x0) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(1);
    hConsoleOutput = crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c();
    (*g_WriteConsoleAFunc)(hConsoleOutput,&stack0xfffffffc,1,(LPDWORD)local_8,(LPVOID)0x0);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(1);
  }
  else {
    device_type = (*g_IsSpecialDeviceFuncPtr)(1);
    (*g_SpecialConsoleOutputHandler)(device_type,character);
  }
  return character;
}
