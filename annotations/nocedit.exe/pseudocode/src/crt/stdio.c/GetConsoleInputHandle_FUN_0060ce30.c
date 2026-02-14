// Name: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
// Address: 0060ce30
// Address Range: [[0060ce30, 0060ce3a]]
// Convention: __watcallRegister
// Signature: HANDLE __watcallRegister crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30(void)

#include "nocturne.h"

HANDLE __watcallRegister GetConsoleInputHandle(void)

{
  InitializeConsoleHandles();
  return g_ConsoleInputHandle;
}
