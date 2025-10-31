// Name: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
// Address: 0060cfb8
// Address Range: [[0060cfb8, 0060cfe1]]
// Convention: __watcallRegister
// Signature: bool crt_signal.c_registerConsoleHandler_FUN_0060cfb8(void)
// Cross-references:
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0e3 [UNCONDITIONAL_CALL]
// Globals:
//   SetConsoleCtrlHandler* PTR_SetConsoleCtrlHandler_0061160c = 0021210e
//   bool g_ConsoleHandlerRegistered = False

#include "nocturne.h"

bool crt_signal_c_registerConsoleHandler_FUN_0060cfb8(void)

{
  BOOL BVar1;
  
  if (!g_ConsoleHandlerRegistered) {
    BVar1 = (*PTR_SetConsoleCtrlHandler_0061160c)(crt_signal_c_consoleCtrlHandler_FUN_0060cf20,1);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = true;
    }
  }
  return g_ConsoleHandlerRegistered;
}


// Assembly code:
// 0060cfb8: CMP byte ptr [0x0068556c],0x0
//   Label: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
//   XREF to: 0068556c (READ)
// 0060cfbf: JNZ 0x0060cfda
//   XREF to: 0060cfda (CONDITIONAL_JUMP)
// 0060cfc1: PUSH 0x1
// 0060cfc3: PUSH 0x60cf20
//   XREF to: 0060cf20 (DATA)
// 0060cfc8: CALL dword ptr CS:[0x61160c]
//   XREF to: 0061160c (READ)
// 0060cfcf: TEST EAX,EAX
// 0060cfd1: JZ 0x0060cfda
//   XREF to: 0060cfda (CONDITIONAL_JUMP)
// 0060cfd3: MOV byte ptr [0x0068556c],0x1
//   XREF to: 0068556c (WRITE)
// 0060cfda: XOR EAX,EAX
//   Label: LAB_0060cfda
// 0060cfdc: MOV AL,[0x0068556c]
//   XREF to: 0068556c (READ)
// 0060cfe1: RET
