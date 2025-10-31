// Name: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
// Address: 0060ce30
// Address Range: [[0060ce30, 0060ce3a]]
// Convention: __watcallRegister
// Signature: HANDLE crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30(void)
// Cross-references:
//   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 (0060b3f8) at 0060b43b [UNCONDITIONAL_CALL]
// Globals:
//   HANDLE g_ConsoleInputHandle = ffffffff
// Function calls:
//   crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc

#include "nocturne.h"

HANDLE crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30(void)

{
  crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc();
  return g_ConsoleInputHandle;
}


// Assembly code:
// 0060ce30: CALL crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
//   Label: crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
//   XREF to: 0060cdbc (UNCONDITIONAL_CALL)
// 0060ce35: MOV EAX,[0x006854fc]
//   XREF to: 006854fc (READ)
// 0060ce3a: RET
