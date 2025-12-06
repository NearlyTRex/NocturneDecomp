// Name: crt_stdio.c_WriteConsoleChar_FUN_0060b490
// Address: 0060b490
// Address Range: [[0060b490, 0060b4f5]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_WriteConsoleChar_FUN_0060b490(int character)

#include "nocturne.h"

int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0060b490(int character)

{
  int character_00;
  int device_type;
  HANDLE hConsoleOutput;
  BADSPACEBASE *in_ESP;
  uint uStack00000014;
  
  character_00 = character;
  if (g_SpecialConsoleOutputHandler == (SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC *)0x0) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(1);
    hConsoleOutput = crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c();
    (*PTR_WriteConsoleA_00611674)(hConsoleOutput,&stack0x00000008,1,(LPDWORD)&character,(LPVOID)0x0)
    ;
    uStack00000014 = 0x60b4ec;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(1);
  }
  else {
    device_type = (*g_IsSpecialDeviceFuncPtr)(1);
    (*g_SpecialConsoleOutputHandler)(device_type,character_00);
  }
  return character_00;
}
