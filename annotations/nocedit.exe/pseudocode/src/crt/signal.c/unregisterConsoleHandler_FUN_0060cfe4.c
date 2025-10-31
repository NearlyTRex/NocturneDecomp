// Name: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
// Address: 0060cfe4
// Address Range: [[0060cfe4, 0060d018]]
// Convention: unknown
// Signature: undefined crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4()
// Cross-references:
//   crt_signal.c_processSignal_FUN_0060d128 (0060d128) at 0060d18e [UNCONDITIONAL_CALL]
//   crt_unknown.c_DoSomethingAndSetCtrlHandler_FUN_0060d068 (0060d068) at 0060d0ea [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d1ec (0060d1ec) at 0060d1f5 [UNCONDITIONAL_CALL]
// Globals:
//   SetConsoleCtrlHandler* PTR_SetConsoleCtrlHandler_0061160c = 0021210e
//   bool g_ConsoleHandlerRegistered = False
// Function calls:
//   SetConsoleCtrlHandler

#include "nocturne.h"

bool crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered) {
    BVar1 = (*PTR_SetConsoleCtrlHandler_0061160c)(crt_signal_c_consoleCtrlHandler_FUN_0060cf20,0);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = false;
    }
  }
  return g_ConsoleHandlerRegistered == false;
}


// Assembly code:
// 0060cfe4: CMP byte ptr [0x0068556c],0x0
//   Label: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
//   XREF to: 0068556c (READ)
// 0060cfeb: JZ 0x0060d007
//   XREF to: 0060d007 (CONDITIONAL_JUMP)
// 0060cfed: PUSH 0x0
// 0060cfef: PUSH 0x60cf20
//   XREF to: 0060cf20 (DATA)
// 0060cff4: CALL dword ptr CS:[0x61160c]
//   XREF to: EXTERNAL:0000008e (COMPUTED_CALL)
//   XREF to: 0061160c (READ)
// 0060cffb: TEST EAX,EAX
// 0060cffd: JZ 0x0060d007
//   XREF to: 0060d007 (CONDITIONAL_JUMP)
// 0060cfff: XOR DL,DL
// 0060d001: MOV byte ptr [0x0068556c],DL
//   XREF to: 0068556c (WRITE)
// 0060d007: XOR EAX,EAX
//   Label: LAB_0060d007
// 0060d009: MOV AL,[0x0068556c]
//   XREF to: 0068556c (READ)
// 0060d00e: TEST EAX,EAX
// 0060d010: SETZ AL
// 0060d013: AND EAX,0xff
// 0060d018: RET
