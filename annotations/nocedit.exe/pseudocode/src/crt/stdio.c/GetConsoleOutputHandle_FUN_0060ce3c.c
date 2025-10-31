// Name: crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
// Address: 0060ce3c
// Address Range: [[0060ce3c, 0060ce46]]
// Convention: __cdecl
// Signature: HANDLE crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c(void)
// Cross-references:
//   crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4 (0060a7a4) at 0060a7c3 [UNCONDITIONAL_CALL]
//   crt_stdio.c_WriteConsoleChar_FUN_0060b490 (0060b490) at 0060b4c9 [UNCONDITIONAL_CALL]
// Globals:
//   HANDLE g_ConsoleOutputHandle = ffffffff
// Function calls:
//   crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc

#include "nocturne.h"

HANDLE __cdecl crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c(void)

{
  crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc();
  return g_ConsoleOutputHandle;
}


// Assembly code:
// 0060ce3c: CALL crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
//   Label: crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
//   XREF to: 0060cdbc (UNCONDITIONAL_CALL)
// 0060ce41: MOV EAX,[0x00685500]
//   XREF to: 00685500 (READ)
// 0060ce46: RET
