// Name: crt_exit.c_FinalExitHandler_FUN_0060b560
// Address: 0060b560
// Address Range: [[0060b560, 0060b585]]
// Convention: __cdecl
// Signature: void crt_exit.c_FinalExitHandler_FUN_0060b560(int exit_code)
// Cross-references:
//   crt_startup.c_ExitApplication_FUN_0060b534 (0060b534) at 0060b557 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006852c4
//   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
//   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_0068547c = 0060b530
// Function calls:
//   crt_exit.c_ExitHookStub_FUN_0060b530
//   crt_exit.c_ExitProcess_FUN_00602700

#include "nocturne.h"

void __cdecl crt_exit_c_FinalExitHandler_FUN_0060b560(int exit_code)

{
  int unaff_EBX;
  
  (*(code *)PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  (*(code *)PTR_crt_exit_c_ExitHookStub_FUN_0060b530_0068547c)();
  if (DAT_006852c4 != (code *)0x0) {
    (*DAT_006852c4)();
  }
  crt_exit_c_ExitProcess_FUN_00602700(unaff_EBX);
  return;
}


// Assembly code:
// 0060b560: PUSH EBX
//   Label: crt_exit.c_FinalExitHandler_FUN_0060b560
// 0060b561: CALL dword ptr [PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478]
//   XREF to: 0060b530 (COMPUTED_CALL)
//   XREF to: 00685478 (READ)
// 0060b567: CALL dword ptr [PTR_crt_exit.c_ExitHookStub_FUN_0060b530_0068547c]
//   XREF to: 0060b530 (COMPUTED_CALL)
//   XREF to: 0068547c (READ)
// 0060b56d: CMP dword ptr [0x006852c4],0x0
//   XREF to: 006852c4 (READ)
// 0060b574: JZ 0x0060b57c
//   XREF to: 0060b57c (CONDITIONAL_JUMP)
// 0060b576: CALL dword ptr [DAT_006852c4]
//   XREF to: 006852c4 (READ)
// 0060b57c: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0060b57c
// 0060b580: PUSH EBX
// 0060b581: JMP 0x00602700
//   XREF to: 00602700 (UNCONDITIONAL_CALL)
