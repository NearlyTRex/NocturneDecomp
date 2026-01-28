// Name: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
// Address: 0060ce30
// Address Range: [[0060ce30, 0060ce3a]]
// Convention: __watcallRegister
// Signature: HANDLE crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30(void)

#include "nocturne.h"

HANDLE crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30(void)

{
  crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc();
  return g_ConsoleInputHandle;
}
