// Name: crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
// Address: 0060ce3c
// Address Range: [[0060ce3c, 0060ce46]]
// Convention: __cdecl
// Signature: HANDLE crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c(void)

#include "nocturne.h"

HANDLE __cdecl crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c(void)

{
  crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc();
  return g_ConsoleOutputHandle;
}
