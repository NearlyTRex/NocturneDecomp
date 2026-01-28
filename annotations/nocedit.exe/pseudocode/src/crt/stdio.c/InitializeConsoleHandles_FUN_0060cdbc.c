// Name: crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
// Address: 0060cdbc
// Address Range: [[0060cdbc, 0060ce2c]]
// Convention: __watcallRegister
// Signature: void crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc(void)

#include "nocturne.h"

void crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc(void)

{
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(0);
  if (g_ConsoleInputHandle == (HANDLE)0xffffffff) {
    g_ConsoleInputHandle =
         (*g_CreateFileAFunc)
                   ("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  if (g_ConsoleOutputHandle == (HANDLE)0xffffffff) {
    g_ConsoleOutputHandle =
         (*g_CreateFileAFunc)
                   ("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(0);
  return;
}
