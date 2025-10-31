// Name: crt_startup.c_ExitApplication_FUN_0060b534
// Address: 0060b534
// Address Range: [[0060b534, 0060b55f]]
// Convention: __cdecl
// Signature: void crt_startup.c_ExitApplication_FUN_0060b534(int exit_code)
// Cross-references:
//   crt_cpp.c_reportPureVirtualError_FUN_00605b23 (00605b23) at 00605b42 [UNCONDITIONAL_CALL]
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609f13 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478 = 0060b530
//   int g_EmergencyExitFlag
// Function calls:
//   crt_exit.c_ExitHookStub_FUN_0060b530
//   crt_exit.c_FinalExitHandler_FUN_0060b560
//   crt_exit.c_ProcessExitHandlers_FUN_0060ac88

#include "nocturne.h"

void __cdecl crt_startup_c_ExitApplication_FUN_0060b534(int exit_code)

{
  (*(code *)PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  if ((char)g_EmergencyExitFlag == '\0') {
    crt_exit_c_ProcessExitHandlers_FUN_0060ac88('\x10',0xff);
  }
  crt_exit_c_FinalExitHandler_FUN_0060b560(exit_code);
  return;
}


// Assembly code:
// 0060b534: CALL dword ptr [PTR_crt_exit.c_ExitHookStub_FUN_0060b530_00685478]
//   Label: crt_startup.c_ExitApplication_FUN_0060b534
//   XREF to: 0060b530 (COMPUTED_CALL)
//   XREF to: 00685478 (READ)
// 0060b53a: CMP byte ptr [0x03f9b220],0x0
//   XREF to: 03f9b220 (READ)
// 0060b541: JNZ 0x0060b552
//   XREF to: 0060b552 (CONDITIONAL_JUMP)
// 0060b543: MOV EDX,0xff
// 0060b548: MOV EAX,0x10
// 0060b54d: CALL crt_exit.c_ProcessExitHandlers_FUN_0060ac88
//   XREF to: 0060ac88 (UNCONDITIONAL_CALL)
// 0060b552: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0060b552
// 0060b556: PUSH EDX
// 0060b557: CALL crt_exit.c_FinalExitHandler_FUN_0060b560
//   XREF to: 0060b560 (UNCONDITIONAL_CALL)
// 0060b55c: ADD ESP,0x4
// 0060b55f: RET
