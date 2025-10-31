// Name: crt_exit.c_ExitProcess_FUN_00602700
// Address: 00602700
// Address Range: [[00602700, 00602745]]
// Convention: __cdecl
// Signature: void crt_exit.c_ExitProcess_FUN_00602700(int exit_code)
// Cross-references:
//   crt_exit.c_FinalExitHandler_FUN_0060b560 (0060b560) at 0060b581 [UNCONDITIONAL_CALL]
//   crt_startup.c_WriteErrorAndExit_FUN_00606620 (00606620) at 00606658 [UNCONDITIONAL_CALL]
// Globals:
//   ExitProcess* PTR_ExitProcess_00611534 = 00211d12
//   void* PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20 = 00602434
//   undefined4 g_SpecialExitHandler
//   int g_EmergencyExitFlag
// Function calls:
//   crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
//   crt_exit.c_ProcessExitHandlers_FUN_0060ac88
//   crt_sync.c_CriticalSectionStub_FUN_00602434
//   ExitProcess

#include "nocturne.h"

void __cdecl crt_exit_c_ExitProcess_FUN_00602700(int exit_code)

{
  UINT unaff_retaddr;
  
  if (g_EmergencyExitFlag == 0) {
    crt_exception_c_RemoveExceptionHandler_FUN_0060abf4();
    crt_exit_c_ProcessExitHandlers_FUN_0060ac88('\0','\x0f');
    (*(code *)PTR_crt_sync_c_CriticalSectionCleanup_FUN_00602434_00684f20)();
  }
  else if (g_SpecialExitHandler != (code *)0x0) {
    (*g_SpecialExitHandler)();
  }
  (*PTR_ExitProcess_00611534)(unaff_retaddr);
  return;
}


// Assembly code:
// 00602700: CMP dword ptr [0x03f9b220],0x0
//   Label: crt_exit.c_ExitProcess_FUN_00602700
//   XREF to: 03f9b220 (READ)
// 00602707: JZ 0x00602724
//   XREF to: 00602724 (CONDITIONAL_JUMP)
// 00602709: CMP dword ptr [0x00684f2c],0x0
//   XREF to: 00684f2c (READ)
// 00602710: JZ 0x0060273b
//   XREF to: 0060273b (CONDITIONAL_JUMP)
// 00602712: PUSH 0xff
// 00602717: PUSH 0x0
// 00602719: CALL dword ptr [g_SpecialExitHandler]
//   XREF to: 00684f2c (READ)
// 0060271f: ADD ESP,0x8
// 00602722: JMP 0x0060273b
//   XREF to: 0060273b (UNCONDITIONAL_JUMP)
// 00602724: CALL crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
//   Label: LAB_00602724
//   XREF to: 0060abf4 (UNCONDITIONAL_CALL)
// 00602729: MOV EDX,0xf
// 0060272e: XOR EAX,EAX
// 00602730: CALL crt_exit.c_ProcessExitHandlers_FUN_0060ac88
//   XREF to: 0060ac88 (UNCONDITIONAL_CALL)
// 00602735: CALL dword ptr [PTR_crt_sync.c_CriticalSectionCleanup_FUN_00602434_00684f20]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f20 (READ)
// 0060273b: MOV ECX,dword ptr [ESP]
//   Label: LAB_0060273b
//   XREF to: Stack[0x0] (DATA)
// 0060273e: PUSH ECX
// 0060273f: CALL dword ptr CS:[0x611534]
//   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)
//   XREF to: 00611534 (READ)
