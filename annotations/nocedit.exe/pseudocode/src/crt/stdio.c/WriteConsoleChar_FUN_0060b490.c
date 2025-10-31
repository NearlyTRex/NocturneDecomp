// Name: crt_stdio.c_WriteConsoleChar_FUN_0060b490
// Address: 0060b490
// Address Range: [[0060b490, 0060b4f5]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_WriteConsoleChar_FUN_0060b490(int character)
// Cross-references:
//   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 (006059b0) at 006059c9 [UNCONDITIONAL_CALL]
// Globals:
//   WriteConsoleA* PTR_WriteConsoleA_00611674 = 002122f0
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   IS_SPECIAL_DEVICE_FUNC* g_IsSpecialDeviceFuncPtr = 00000000
//   SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC* g_SpecialConsoleOutputHandler = 00000000
// Function calls:
//   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   WriteConsoleA

#include "nocturne.h"

int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0060b490(int character)

{
  int character_00;
  int device_type;
  HANDLE hConsoleOutput;
  BADSPACEBASE *in_ESP;
  undefined4 uStack00000014;
  
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


// Assembly code:
// 0060b490: PUSH EBX
//   Label: crt_stdio.c_WriteConsoleChar_FUN_0060b490
// 0060b491: SUB ESP,0x8
// 0060b494: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060b498: MOV EDX,dword ptr [0x006852c0]
//   XREF to: 006852c0 (READ)
// 0060b49e: MOV byte ptr [ESP + 0x4],BL
//   XREF to: Stack[-0x8] (WRITE)
// 0060b4a2: TEST EDX,EDX
// 0060b4a4: JZ 0x0060b4be
//   XREF to: 0060b4be (CONDITIONAL_JUMP)
// 0060b4a6: PUSH 0x1
// 0060b4a8: CALL dword ptr [g_IsSpecialDeviceFuncPtr]
//   XREF to: 00685284 (READ)
// 0060b4ae: ADD ESP,0x4
// 0060b4b1: PUSH EBX
// 0060b4b2: PUSH EAX
// 0060b4b3: CALL dword ptr [g_SpecialConsoleOutputHandler]
//   XREF to: 006852c0 (READ)
// 0060b4b9: ADD ESP,0x8
// 0060b4bc: JMP 0x0060b4ef
//   XREF to: 0060b4ef (UNCONDITIONAL_JUMP)
// 0060b4be: PUSH 0x1
//   Label: LAB_0060b4be
// 0060b4c0: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060b4c6: ADD ESP,0x4
// 0060b4c9: CALL crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
//   XREF to: 0060ce3c (UNCONDITIONAL_CALL)
// 0060b4ce: PUSH 0x0
// 0060b4d0: LEA EDX,[ESP + 0x4]
// 0060b4d4: PUSH EDX
// 0060b4d5: PUSH 0x1
// 0060b4d7: LEA EDX,[ESP + 0x10]
// 0060b4db: PUSH EDX
// 0060b4dc: PUSH EAX
// 0060b4dd: CALL dword ptr CS:[0x611674]
//   XREF to: EXTERNAL:000000a8 (COMPUTED_CALL)
//   XREF to: 00611674 (READ)
// 0060b4e4: PUSH 0x1
// 0060b4e6: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060b4ec: ADD ESP,0x4
// 0060b4ef: MOV EAX,EBX
//   Label: LAB_0060b4ef
// 0060b4f1: ADD ESP,0x8
// 0060b4f4: POP EBX
// 0060b4f5: RET
