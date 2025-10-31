// Name: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
// Address: 0060b3f8
// Address Range: [[0060b3f8, 0060b480]]
// Convention: unknown
// Signature: undefined crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8()
// Cross-references:
//   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 (006059b0) at 006059b8 [UNCONDITIONAL_CALL]
// Globals:
//   GetConsoleMode* PTR_GetConsoleMode_00611574 = 00211e30
//   SetConsoleMode* PTR_SetConsoleMode_00611610 = 00212126
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   int g_ConsoleInitializationFlag = 0x0
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_CONSOLE_INPUT_HANDLER_FUNC* g_SpecialConsoleInputHandler = 00000000
// Function calls:
//   crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
//   crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   GetConsoleMode
//   SetConsoleMode

#include "nocturne.h"

int crt_stdio_c_DrainConsoleInputAndSetup_FUN_0060b3f8(void)

{
  int iVar1;
  HANDLE hConsoleHandle;
  BADSPACEBASE *in_ESP;
  DWORD in_stack_00000004;
  DWORD in_stack_00000020;
  
  iVar1 = g_ConsoleInitializationFlag;
  if (g_ConsoleInitializationFlag == 0) {
    if (g_SpecialConsoleInputHandler == (SPECIAL_CONSOLE_INPUT_HANDLER_FUNC *)0x0) {
      (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(0);
      hConsoleHandle = crt_stdio_c_GetConsoleInputHandle_FUN_0060ce30();
      (*PTR_GetConsoleMode_00611574)(hConsoleHandle,&stack0x00000004);
      in_stack_00000004 = 0x60b457;
      (*PTR_SetConsoleMode_00611610)(hConsoleHandle,0);
      iVar1 = crt_stdio_c_DrainConsoleInputWithBuffering_FUN_0060b2e0(hConsoleHandle);
      (*PTR_SetConsoleMode_00611610)(hConsoleHandle,in_stack_00000020);
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


// Assembly code:
// 0060b3f8: PUSH EBX
//   Label: crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
// 0060b3f9: PUSH ESI
// 0060b3fa: SUB ESP,0x4
// 0060b3fd: MOV EAX,[0x00685000]
//   XREF to: 00685000 (READ)
// 0060b402: TEST EAX,EAX
// 0060b404: JZ 0x0060b410
//   XREF to: 0060b410 (CONDITIONAL_JUMP)
// 0060b406: XOR ESI,ESI
// 0060b408: MOV dword ptr [0x00685000],ESI
//   XREF to: 00685000 (WRITE)
// 0060b40e: JMP 0x0060b47b
//   XREF to: 0060b47b (UNCONDITIONAL_JUMP)
// 0060b410: CMP dword ptr [0x006852b8],0x0
//   Label: LAB_0060b410
//   XREF to: 006852b8 (READ)
// 0060b417: JZ 0x0060b431
//   XREF to: 0060b431 (CONDITIONAL_JUMP)
// 0060b419: PUSH EAX
// 0060b41a: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 0060b420: ADD ESP,0x4
// 0060b423: PUSH EAX
// 0060b424: CALL dword ptr [g_SpecialConsoleInputHandler]
//   XREF to: 006852b8 (READ)
// 0060b42a: ADD ESP,0x4
// 0060b42d: MOV ESI,EAX
// 0060b42f: JMP 0x0060b479
//   XREF to: 0060b479 (UNCONDITIONAL_JUMP)
// 0060b431: PUSH EAX
//   Label: LAB_0060b431
// 0060b432: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060b438: ADD ESP,0x4
// 0060b43b: CALL crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30
//   XREF to: 0060ce30 (UNCONDITIONAL_CALL)
// 0060b440: MOV EBX,EAX
// 0060b442: MOV EAX,ESP
// 0060b444: PUSH EAX
// 0060b445: PUSH EBX
// 0060b446: CALL dword ptr CS:[0x611574]
//   XREF to: EXTERNAL:00000068 (COMPUTED_CALL)
//   XREF to: 00611574 (READ)
// 0060b44d: PUSH 0x0
// 0060b44f: PUSH EBX
// 0060b450: CALL dword ptr CS:[0x611610]
//   XREF to: EXTERNAL:0000008f (COMPUTED_CALL)
//   XREF to: 00611610 (READ)
// 0060b457: PUSH EBX
// 0060b458: CALL crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0
//   XREF to: 0060b2e0 (UNCONDITIONAL_CALL)
// 0060b45d: ADD ESP,0x4
// 0060b460: MOV ECX,dword ptr [ESP]
// 0060b463: PUSH ECX
// 0060b464: PUSH EBX
// 0060b465: MOV ESI,EAX
// 0060b467: CALL dword ptr CS:[0x611610]
//   XREF to: EXTERNAL:0000008f (COMPUTED_CALL)
//   XREF to: 00611610 (READ)
// 0060b46e: PUSH 0x0
// 0060b470: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060b476: ADD ESP,0x4
// 0060b479: MOV EAX,ESI
//   Label: LAB_0060b479
// 0060b47b: ADD ESP,0x4
//   Label: LAB_0060b47b
// 0060b47e: POP ESI
// 0060b47f: POP EBX
// 0060b480: RET
